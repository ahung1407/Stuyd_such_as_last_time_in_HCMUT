Chào bạn, đây là **Tài liệu Lý thuyết Tổng hợp IPsec từ A-Z** được thiết kế chuyên biệt để mang vào phòng thi (Open Book).

Tài liệu này được cấu trúc lại để **tối ưu hóa tốc độ tra cứu**. Khi gặp câu hỏi trắc nghiệm, bạn chỉ cần tìm đúng mục từ khóa tương ứng.

---

# TÀI LIỆU TRA CỨU TỔNG HỢP: BẢO MẬT TẦNG IP (IPsec)

## PHẦN 1: TỔNG QUAN & VỊ TRÍ

### 1. Định nghĩa & Vị trí

- **Vị trí:** Tầng Mạng (Network Layer - Layer 3) trong mô hình OSI.
- **Đối tượng bảo vệ:** Gói tin IP (IP Packet). Bảo vệ tất cả giao thức tầng trên (TCP, UDP, ICMP, BGP, OSPF...).
- **Tính chất:**
  - **Trong suốt (Transparent):** Ứng dụng và người dùng cuối không biết sự tồn tại của IPsec.
  - **Bắt buộc:** Với IPv6 (về lý thuyết), **Tùy chọn:** Với IPv4.

### 2. Các dịch vụ bảo mật chính (RFC 4301)

1.  **Kiểm soát truy cập (Access Control):** Chặn/Cho phép qua SPD.
2.  **Toàn vẹn dữ liệu (Data Integrity):** Chống sửa đổi gói tin (dùng HMAC).
3.  **Xác thực nguồn gốc (Data Origin Authentication):** Biết chính xác ai gửi.
4.  **Chống phát lại (Anti-Replay):** Chống hacker gửi lại gói cũ.
5.  **Bí mật dữ liệu (Confidentiality):** Mã hóa nội dung (Chỉ có ở ESP).
6.  **Bí mật luồng (Traffic Flow Confidentiality):** Che giấu ai đang nói chuyện với ai (dùng Padding).

---

## PHẦN 2: CÁC GIAO THỨC THÀNH PHẦN (AH vs ESP)

_Mục này dùng để trả lời câu hỏi: Giao thức nào làm được việc gì?_

| Đặc điểm             | **AH (Authentication Header)**                                          | **ESP (Encapsulating Security Payload)**                        |
| :------------------- | :---------------------------------------------------------------------- | :-------------------------------------------------------------- |
| **RFC**              | RFC 4302                                                                | RFC 4303                                                        |
| **Chức năng chính**  | Xác thực + Toàn vẹn                                                     | **Mã hóa (Bí mật)** + Xác thực + Toàn vẹn                       |
| **Mã hóa dữ liệu**   | **KHÔNG** (Dữ liệu đi trần)                                             | **CÓ** (Dữ liệu được mã hóa)                                    |
| **Phạm vi xác thực** | Toàn bộ gói tin (Cả IP Header gốc + Payload)                            | Chỉ xác thực phần Header ESP, Payload và Trailer                |
| **Vấn đề với NAT**   | **Không tương thích** (Do NAT đổi IP Header làm sai lệch mã băm của AH) | **Tương thích tốt** (Vì ESP không xác thực IP Header bên ngoài) |
| **Vị trí Header**    | Nằm sau IP Header, trước TCP/UDP                                        | Nằm sau IP Header, bao bọc TCP/UDP                              |
| **Khi nào dùng?**    | Khi chỉ cần xác thực, không cần giấu nội dung (ít dùng).                | Khi cần bảo mật nội dung (VPN, giao dịch).                      |

---

## PHẦN 3: CÁC CHẾ ĐỘ HOẠT ĐỘNG (Transport vs Tunnel)

_Mục quan trọng nhất để xử lý câu hỏi tình huống/sơ đồ._

### Bảng so sánh chi tiết

| Tiêu chí                    | **Transport Mode (Vận chuyển)**                                            | **Tunnel Mode (Đường hầm)**                                               |
| :-------------------------- | :------------------------------------------------------------------------- | :------------------------------------------------------------------------ |
| **Mô hình kết nối**         | **Host-to-Host** (Máy - Máy)                                               | **Gateway-to-Gateway** (VPN Site-to-Site) hoặc Host-to-Gateway            |
| **Cấu trúc gói tin**        | `[IP Gốc] [ESP/AH] [Payload]`                                              | `[IP Mới] [ESP/AH] [IP Gốc] [Payload]`                                    |
| **Header IP**               | Giữ nguyên IP Header gốc.                                                  | **Tạo IP Header mới** bọc bên ngoài.                                      |
| **Phạm vi bảo vệ**          | Chỉ bảo vệ phần tải (Payload - TCP/UDP).                                   | Bảo vệ **toàn bộ gói IP gốc** (cả Header cũ).                             |
| **Địa chỉ IP**              | **Lộ** địa chỉ IP nguồn/đích thực sự.                                      | **Ẩn** địa chỉ IP thực sự bên trong. Chỉ hiện IP của Router/Gateway.      |
| **Overhead (Dữ liệu thừa)** | Thấp (chỉ thêm vài byte header).                                           | Cao (thêm cả một IP Header mới 20 bytes).                                 |
| **Khi nào dùng?**           | Quản trị viên remote vào Server; 2 Server trao đổi dữ liệu trong cùng LAN. | Kết nối 2 chi nhánh công ty qua Internet; Nhân viên làm việc từ xa (VPN). |

### Sơ đồ gói tin (Để nhìn hình đoán chế độ)

- **Transport + ESP:** `Original IP` | `ESP Header` | `TCP/UDP` | `Data` | `ESP Trailer`
- **Tunnel + ESP:** `NEW IP` | `ESP Header` | `Original IP` | `TCP/UDP` | `Data` | `ESP Trailer`
  _(Mẹo: Thấy "New IP" hoặc 2 lớp IP là Tunnel)_

---

## PHẦN 4: KIẾN TRÚC & CHÍNH SÁCH (SA, SPD, SAD)

_Mục này dùng để trả lời câu hỏi về quy trình xử lý._

### 1. SA (Security Association) - Liên kết bảo mật

- **Định nghĩa:** Là một hợp đồng bảo mật logic giữa 2 thiết bị.
- **Đặc điểm:**
  - **Một chiều (Simplex):** Cần 1 cặp SA (Inbound + Outbound) để giao tiếp 2 chiều.
  - **Định danh duy nhất (3 tham số):** `< SPI, Địa chỉ IP đích, Giao thức (AH/ESP) >`.
- **SPI (Security Parameter Index):** Một con số 32-bit ngẫu nhiên dán trên gói tin để Router biết gói tin này thuộc về SA nào.

### 2. CSDL Chính sách & Liên kết (SPD vs SAD)

| Đặc điểm           | **SPD (Security Policy Database)**                             | **SAD (Security Association Database)**                                 |
| :----------------- | :------------------------------------------------------------- | :---------------------------------------------------------------------- |
| **Vai trò**        | Là **Luật pháp** (Rules). Quyết định số phận gói tin.          | Là **Kỹ thuật** (Parameters). Chứa chìa khóa để thực thi.               |
| **Nội dung**       | Bộ chọn (Selectors): IP nguồn/đích, Port, Giao thức.           | Khóa mã hóa, Khóa xác thực, Thuật toán, Sequence Number, SPI, Lifetime. |
| **Hành động**      | **Discard** (Hủy), **Bypass** (Cho qua), **Protect** (Bảo vệ). | Mã hóa/Giải mã, Xác thực.                                               |
| **Quy trình gửi**  | Tra SPD trước -> Quyết định Protect -> Tra SAD.                | Tra SAD để lấy khóa mã hóa.                                             |
| **Quy trình nhận** | Tra SPD sau khi giải mã để kiểm tra lại quyền.                 | Tra SAD trước (dựa vào SPI) để lấy khóa giải mã.                        |

---

## PHẦN 5: QUẢN LÝ KHÓA (IKE - Internet Key Exchange)

_Mục này dùng cho các câu hỏi nâng cao về thiết lập kết nối._

### 1. Tổng quan IKE

- **Mục đích:** Tự động thỏa thuận SA và sinh khóa bí mật chung (Session Key).
- **Giao thức nền:** ISAKMP (Khung) + Oakley (Thuật toán trao đổi khóa Diffie-Hellman).
- **Cổng hoạt động:** **UDP 500**.

### 2. So sánh IKEv1 và IKEv2 (Rất hay thi)

| Tiêu chí           | **IKEv1**                                         | **IKEv2**                                                         |
| :----------------- | :------------------------------------------------ | :---------------------------------------------------------------- |
| **Độ phức tạp**    | Cao. Nhiều chế độ (Main, Aggressive, Quick Mode). | **Đơn giản hóa**. Chỉ có 1 cơ chế trao đổi ban đầu.               |
| **Số lượng tin**   | Cần 6-9 tin nhắn để thiết lập.                    | Chỉ cần **4 tin nhắn** (2 cặp request/response).                  |
| **Độ tin cậy**     | Không có cơ chế truyền lại (dựa vào timeout).     | Có cơ chế **truyền lại tin cậy** (Reliability).                   |
| **Hỗ trợ di động** | Kém. Mất kết nối khi đổi mạng.                    | **Rất tốt** (MOBIKE). Giữ kết nối khi chuyển Wifi/4G.             |
| **Xác thực**       | Khó tích hợp EAP.                                 | Hỗ trợ chuẩn **EAP** (dùng cho xác thực người dùng doanh nghiệp). |
| **Chống DoS**      | Yếu hơn.                                          | Tích hợp sẵn cơ chế **Cookie** để chống DoS.                      |

### **BỔ SUNG VÀO PHẦN 5: QUẢN LÝ KHÓA (IKE)**

(Chèn vào dưới bảng so sánh IKEv1/IKEv2)

### 2\. IKEv1 (Phức tạp - Có 2 Phase)

###

- **Phase 1 (Tạo kênh bảo mật IKE SA):** Có 2 chế độ:

  - **Main Mode:** 6 tin nhắn. An toàn cao, **ẩn danh tính** các bên.
  - **Aggressive Mode:** 3 tin nhắn. Nhanh hơn, nhưng **lộ danh tính** (Identity không được mã hóa).

- **Phase 2 (Tạo kênh dữ liệu IPsec SA):**

  - **Quick Mode:** 3 tin nhắn. Dùng kênh của Phase 1 để tạo SA cho AH/ESP.

### 3\. Quy trình trao đổi IKEv2 (4 tin nhắn)

- **Cặp tin 1:**

  - **Nội dung:** Trao đổi thông số **Diffie-Hellman (KE)** và số ngẫu nhiên **(Nonce)**.
  - **Mục đích:** Tạo ra khóa bí mật chung. **Chưa xác thực danh tính** (Dữ liệu chưa được mã hóa).

- **Cặp tin 2:**

  - **Nội dung:** Gửi chứng chỉ/ID để chứng minh danh tính.
  - **Mục đích:** **Xác thực** hai bên và thiết lập SA đầu tiên (Child SA) để truyền dữ liệu. (Dữ liệu đoạn này đã được mã hóa).

---

## PHẦN 6: CÁC CƠ CHẾ KỸ THUẬT ĐẶC BIỆT

_Mục này dành cho các câu hỏi bẫy hoặc chi tiết sâu._

### Perfect Forward Secrecy (PFS) - Tính bí mật chuyển tiếp hoàn hảo

###

- **Ý nghĩa:** Nếu khóa bí mật dài hạn (Master Key) bị lộ, các khóa phiên (Session Key) trong quá khứ **vẫn an toàn**.
- **Cách làm:** Mỗi lần tạo SA mới, chạy lại thuật toán Diffie-Hellman để sinh khóa mới hoàn toàn độc lập, không phụ thuộc khóa cũ.

### 5\. Bộ mật mã (Cipher Suite) - Slide 49

###

- Cấu hình VPN phải khớp nhau 4 tham số:

  - Mã hóa (Encryption): AES, 3DES.
  - Hàm băm (Hash): SHA-256, SHA-1, MD5.
  - Xác thực (Auth): Pre-shared Key hoặc RSA Signature.
  - Nhóm Diffie-Hellman (DH Group): Group 14 (2048 bit), Group 2...

- **Suite B:** Bộ chuẩn bảo mật cao của NSA (Dùng AES-GCM, SHA-256/384, Elliptic Curve).

### 1. Chống phát lại (Anti-Replay)

- **Công cụ:** Sequence Number (Số thứ tự - 32 bit hoặc 64 bit).
- **Cơ chế:** **Cửa sổ trượt (Sliding Window)**.
  - Window Size mặc định: 64 gói.
  - Gói có $Seq < (N - W)$ (Cũ hơn mép trái cửa sổ) $\rightarrow$ **Vứt bỏ**.
  - Gói trùng Seq trong cửa sổ $\rightarrow$ **Vứt bỏ**.
  - Gói Seq hợp lệ $\rightarrow$ Cập nhật cửa sổ.
- **Lưu ý:** Seq Number không bao giờ quay vòng (Wrap around). Khi đếm hết $2^{32}$, phải tạo SA mới (Rekey).

### 2. Padding (Phần đệm trong ESP)

- **3 Mục đích:**
  1.  Làm đầy khối mã hóa (Block Alignment - ví dụ AES cần khối 128 bit).
  2.  Căn chỉnh bộ nhớ (32-bit Alignment).
  3.  **Che giấu độ dài thực (Traffic Flow Confidentiality):** Bơm thêm dữ liệu rác để hacker không đoán được nội dung qua độ dài.

### 3. NAT-Traversal (NAT-T)

- **Vấn đề:** IPsec (đặc biệt là AH) không đi qua được NAT. ESP cũng gặp khó khăn vì NAT thay đổi cổng.
- **Giải pháp:** Đóng gói gói tin IPsec vào trong một gói **UDP cổng 4500**.
- **Nhận diện:** Nếu thấy traffic UDP 4500, đó là IPsec đang chạy qua NAT.

---

## MẸO TRA CỨU TRẮC NGHIỆM NHANH (Cheat Sheet)

1.  Thấy **"Ẩn địa chỉ IP"** / **"New IP Header"** $\rightarrow$ Chọn **Tunnel Mode**.
2.  Thấy **"Kết nối Host-to-Host"** / **"Giữ nguyên IP Header"** $\rightarrow$ Chọn **Transport Mode**.
3.  Thấy **"Chỉ xác thực, không mã hóa"** $\rightarrow$ Chọn **AH**.
4.  Thấy **"Bảo mật, Mã hóa, Bí mật"** $\rightarrow$ Chọn **ESP**.
5.  Thấy **"Trao đổi khóa"** / **"Diffie-Hellman"** / **"UDP 500"** $\rightarrow$ Chọn **IKE**.
6.  Thấy **"Chống tắc nghẽn (Clogging/DoS)"** trong IKE $\rightarrow$ Chọn **Cookie**.
7.  Thấy **"Chống phát lại"** $\rightarrow$ Chọn **Sequence Number** hoặc **Sliding Window**.
8.  Thấy **"32-bit ngẫu nhiên định danh kết nối"** $\rightarrow$ Chọn **SPI**.
9.  Thấy **"Đơn giản, Hiệu quả, Hỗ trợ di động"** $\rightarrow$ Chọn **IKEv2**.
10. Thấy **"Kết hợp IPsec"** (ví dụ vừa xác thực vừa mã hóa riêng) $\rightarrow$ Chọn **SA Bundle** (Gói SA).
