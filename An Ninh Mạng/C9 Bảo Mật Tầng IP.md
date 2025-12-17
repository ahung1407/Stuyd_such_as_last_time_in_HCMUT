Chào bạn, để nắm vững chương **Bảo mật tầng IP (IPsec)** mà không bị "ngợp" trong biển kiến thức, đây là bản tổng hợp cô đọng những nội dung **cốt lõi và trọng tâm nhất** (những phần này chiếm 80-90% nội dung thi cử và phỏng vấn).

---

### 1. Vị trí và Đặc điểm của IPsec

- **Vị trí:** Hoạt động tại **Tầng Mạng (Network Layer - Layer 3)**.
- **Đặc điểm quan trọng nhất:**
  - **Trong suốt (Transparent):** Các ứng dụng (Web, Mail) và người dùng không cần cài đặt hay sửa đổi gì, mọi việc xử lý diễn ra ngầm ở tầng OS/Router.
  - **Bảo vệ toàn diện:** Bảo vệ tất cả dữ liệu đi qua mạng IP (TCP, UDP, ICMP...).
- **Ứng dụng chính:** Làm nền tảng cho **VPN (Virtual Private Network)**.

---

### 2. Hai giao thức chính (IPsec Protocols)

Bạn cần phân biệt rõ AH và ESP:

- **AH (Authentication Header):**
  - Chỉ cung cấp **Xác thực** và **Toàn vẹn** (biết ai gửi, gói tin không bị sửa).
  - **KHÔNG mã hóa** dữ liệu (người khác vẫn đọc được nội dung).
  - _Hiện nay ít dùng._
- **ESP (Encapsulating Security Payload) - Quan trọng hơn:**
  - Cung cấp cả **Mã hóa** (Bảo mật) + **Xác thực** + **Toàn vẹn**.
  - Có thêm trường **Padding** (đệm) để che giấu độ dài dữ liệu và căn chỉnh khối mã hóa.

---

### 3. Hai chế độ hoạt động (Modes) - Cực kỳ quan trọng

Đây là phần hay bị hỏi thi nhất. Hãy nhớ bảng so sánh này:

| Đặc điểm           | Transport Mode (Vận chuyển)                 | Tunnel Mode (Đường hầm)                              |
| :----------------- | :------------------------------------------ | :--------------------------------------------------- |
| **Phạm vi bảo vệ** | Chỉ mã hóa phần ruột (**Payload**: TCP/UDP) | Mã hóa **toàn bộ gói IP gốc** (Cả Header + Payload)  |
| **IP Header**      | Giữ nguyên IP Header gốc                    | Tạo **IP Header mới** bọc bên ngoài                  |
| **Mô hình**        | **Host-to-Host** (Máy tính tới Máy tính)    | **Gateway-to-Gateway** (VPN Site-to-Site)            |
| **Địa chỉ IP**     | Lộ IP nguồn/đích thật                       | Giấu IP thật, chỉ hiện IP của cổng bảo mật (Gateway) |

---

### 4. Kiến trúc & Chính sách (SPD và SAD)

Hãy hình dung IPsec hoạt động như một hải quan kiểm soát cửa khẩu:

- **SA (Security Association - Liên kết bảo mật):**
  - Là một thỏa thuận kết nối **một chiều** (One-way). Để A chat với B cần **2 SA** (chiều đi và chiều về).
  - Định danh SA bằng bộ ba: **< SPI, IP Đích, Giao thức (ESP/AH) >**.
- **SPD (Security Policy Database - CSDL Chính sách):**
  - Chứa các **Luật (Rules)**.
  - Trả lời câu hỏi: _"Gói tin này làm gì?"_ -> **Bypass** (Cho qua), **Discard** (Chặn), hay **Protect** (Mã hóa).
- **SAD (Security Association Database - CSDL Liên kết):**
  - Chứa các **Tham số kỹ thuật** của kết nối đang chạy.
  - Trả lời câu hỏi: _"Mã hóa bằng khóa nào? Thuật toán gì?"_.

**Quy trình xử lý (Flow):**

- **Gửi đi:** Tra **SPD** (xem luật) -> Tra **SAD** (lấy khóa) -> Mã hóa.
- **Nhận về:** Tra **SAD** (dựa vào SPI để lấy khóa) -> Giải mã -> Tra **SPD** (kiểm tra lại luật xem gói tin đã giải mã có được phép vào không).

---

### 5. Giao thức trao đổi khóa (IKE)

- **Vai trò:** Tự động đàm phán và sinh khóa bí mật chung cho hai bên chưa từng quen biết (thay vì nhập tay thủ công).
- **Cơ chế:** Dựa trên thuật toán **Diffie-Hellman**.
- **Hai giai đoạn (Phases):**
  - _Phase 1:_ Tạo ra một kênh bảo mật để bảo vệ việc trao đổi khóa (IKE SA).
  - _Phase 2:_ Dùng kênh bảo mật đó để tạo cặp khóa cho việc truyền dữ liệu thật (IPsec SA).
- **Tính năng:** Dùng **Cookie** để chống tấn công DoS, dùng **Nonce** để chống Replay.

---

### 6. Tính năng Chống phát lại (Anti-Replay)

- **Vấn đề:** Hacker copy gói tin cũ (đã mã hóa) và gửi lại để lừa hệ thống.
- **Giải pháp:** Dùng **Sequence Number** (Số thứ tự).
- **Cơ chế:** Dùng **Cửa sổ trượt (Sliding Window)** (thường là 64 gói).
  - Gói tin có số thứ tự _nhỏ hơn_ mép trái cửa sổ (quá cũ) -> **Vứt bỏ**.
  - Gói tin nằm trong cửa sổ nhưng đã đánh dấu là nhận rồi -> **Vứt bỏ**.
  - Gói tin hợp lệ -> Cập nhật cửa sổ.

---

### Tóm tắt "bỏ túi" để đi thi:

1.  **ESP** > AH (ESP vừa mã hóa vừa xác thực).
2.  **Tunnel Mode** = VPN (Tạo IP Header mới).
3.  **Transport Mode** = End-to-End (Giữ IP Header cũ).
4.  **SA** là 1 chiều; **SPI** là định danh của SA.
5.  **SPD** là Luật; **SAD** là Khóa.
6.  **IKE** dùng để lấy khóa tự động.
7.  **Padding** dùng để che giấu độ dài.

Nắm vững 7 điểm này là bạn đã nắm được "xương sống" của chương IPsec. Chúc bạn học tốt!
Chào bạn, dưới đây là lời giải chi tiết cho đề ôn tập chương IX môn "Mật mã và An ninh mạng" dựa trên hình ảnh bạn cung cấp.

---

# PHẦN I: CÂU HỎI TỰ LUẬN (Lý thuyết)

**Câu 1: Hãy trình bày các lợi ích của IPsec**

- **Giải chi tiết:**
  1.  **Tính trong suốt với ứng dụng:** IPsec hoạt động ở tầng mạng (Layer 3), nên các ứng dụng (web, mail, ftp...) không cần phải thay đổi hay cài đặt thêm gì để được bảo vệ.
  2.  **Tính trong suốt với người dùng:** Người dùng cuối không cần phải thao tác đăng nhập hay cấu hình phức tạp mỗi khi sử dụng (sau khi đã thiết lập xong).
  3.  **Bảo vệ toàn diện:** Vì nằm ở tầng IP, IPsec bảo vệ tất cả các giao thức tầng trên (TCP, UDP, ICMP...) đi qua mạng.
  4.  **Cung cấp các dịch vụ bảo mật mạnh mẽ:**
      - Bí mật (Confidentiality - Mã hóa).
      - Toàn vẹn (Integrity - Chống sửa đổi).
      - Xác thực nguồn gốc (Data Origin Authentication).
      - Chống phát lại (Anti-replay).
  5.  **Bảo mật cho định tuyến:** Giúp bảo vệ cấu trúc hạ tầng mạng bằng cách xác thực các bản tin định tuyến giữa các Router.

**Câu 2: Hãy cho biết các chế độ hoạt động của IPsec**

- **Giải chi tiết:** Có 2 chế độ chính:
  1.  **Chế độ Vận chuyển (Transport Mode):**
      - Chỉ bảo vệ phần tải (payload - ví dụ: TCP/UDP segment) của gói tin IP.
      - Tiêu đề IP gốc (Original IP Header) được giữ nguyên.
      - Thường dùng cho kết nối End-to-End (Máy tính đến Máy tính).
  2.  **Chế độ Đường hầm (Tunnel Mode):**
      - Bảo vệ toàn bộ gói tin IP gốc (cả Header và Payload).
      - Gói tin gốc được mã hóa/xác thực và đóng gói vào trong một gói tin IP mới (New IP Header).
      - Thường dùng cho kết nối VPN Site-to-Site (Router đến Router) hoặc Remote Access (Máy tính đến Router).

**Câu 3: Phân biệt chế độ đường hầm với AH và chế độ đường hầm với ESP**

- **Giải chi tiết:**
  - **Giống nhau:** Cả hai đều tạo ra một tiêu đề IP mới (New IP Header) bọc bên ngoài gói tin IP gốc.
  - **Khác nhau:**
    - **Tunnel Mode với AH (Authentication Header):** Chỉ cung cấp tính xác thực và toàn vẹn cho toàn bộ gói tin (bao gồm cả gói IP gốc bên trong và các phần không thay đổi của IP Header mới). **KHÔNG** mã hóa dữ liệu (nội dung bên trong vẫn đọc được).
    - **Tunnel Mode với ESP (Encapsulating Security Payload):** Cung cấp tính xác thực, toàn vẹn **VÀ tính bí mật (Mã hóa)**. Gói IP gốc bên trong sẽ được mã hóa hoàn toàn, người ngoài không đọc được nội dung và địa chỉ IP gốc.

**Câu 4: Cho biết mối quan hệ giữa liên kết bảo mật (SA) và CSDL SAD**

- **Giải chi tiết:**
  - **SA (Security Association):** Là một thỏa thuận logic duy nhất giữa hai thiết bị về cách bảo mật luồng dữ liệu (dùng thuật toán gì, khóa gì, chế độ nào...). SA là kết nối một chiều.
  - **SAD (Security Association Database):** Là cơ sở dữ liệu lưu trữ tất cả các SA đang hoạt động trên thiết bị.
  - **Mối quan hệ:** SAD là nơi chứa (container), còn SA là các bản ghi (record) nằm trong đó. Khi một gói tin IPsec đến, thiết bị sẽ dùng chỉ số SPI (Security Parameter Index) trên gói tin để tìm kiếm (lookup) bản ghi SA tương ứng trong SAD để biết cách xử lý gói tin đó.

**Câu 5: Trình bày cách thức chống phát lại mà chế độ ESP sử dụng**

- **Giải chi tiết:**
  - Sử dụng trường **Sequence Number (Số thứ tự)** trong tiêu đề ESP. Mỗi gói tin gửi đi sẽ được tăng số thứ tự lên 1.
  - Bên nhận sử dụng cơ chế **Cửa sổ trượt (Sliding Window)** (thường kích thước là 64):
    - Nếu nhận được gói tin có số thứ tự _nhỏ hơn_ mép trái cửa sổ (gói quá cũ) -> Loại bỏ.
    - Nếu nhận được gói tin nằm trong cửa sổ nhưng đã được đánh dấu là nhận rồi -> Loại bỏ (đây là gói phát lại).
    - Nếu nhận được gói tin hợp lệ (mới hoặc nằm trong cửa sổ nhưng chưa nhận) -> Chấp nhận và cập nhật trạng thái cửa sổ.

**Câu 6: Hãy cho biết các khác biệt giữa IKEv1 và IKEv2**

- **Giải chi tiết:**
  - **Hiệu suất:** IKEv2 nhanh hơn và hiệu quả hơn, cần ít bước trao đổi thông điệp hơn để thiết lập đường hầm (IKEv2 thường chỉ cần 4 message, trong khi IKEv1 cần 6-9 message ở chế độ Main/Aggressive Mode).
  - **Độ tin cậy:** IKEv2 có tích hợp sẵn cơ chế truyền lại tin cậy (reliability), trong khi IKEv1 phụ thuộc vào cơ chế timeout.
  - **Hỗ trợ di động (Mobility):** IKEv2 hỗ trợ tốt cho người dùng di động (ví dụ: giao thức MOBIKE), cho phép duy trì kết nối VPN khi chuyển đổi mạng (từ Wifi sang 4G), IKEv1 không hỗ trợ tốt điều này.
  - **Tính đơn giản:** IKEv2 hợp nhất các chế độ phức tạp của IKEv1 thành một cơ chế trao đổi đơn giản hơn.

---

# PHẦN II: CÂU HỎI TRẮC NGHIỆM

**Câu 1: Giao thức IPSec hoạt động ở tầng nào trong mô hình OSI?**

- **Đáp án:** **c. Mạng (Network)**
- **Giải thích:** Tên đầy đủ là IP Security (Bảo mật giao thức Internet). IP nằm ở tầng Network (Layer 3), nên IPsec hoạt động tại tầng này.

**Câu 2: Chọn phát biểu đúng trong các phát biểu sau:**

- **Đáp án:** **a. AH hỗ trợ xác thực và toàn vẹn. ESP hỗ trợ tính bí mật, xác thực và toàn vẹn.**
- **Giải thích:**
  - AH (Authentication Header): Chỉ xác thực (biết ai gửi) và toàn vẹn (không bị sửa), không mã hóa (không bí mật).
  - ESP (Encapsulating Security Payload): Có mã hóa (bí mật) và tùy chọn xác thực + toàn vẹn.

**(Dựa vào hình ảnh cho câu 3 và 4: New IP | AH | Origin IP | TCP | Data)**
_Hình ảnh này mô tả cấu trúc gói tin có IP mới bọc IP cũ, và sử dụng giao thức AH._

**Câu 3: Cho biết chế độ hoạt động của IPsec:**

- **Đáp án:** **b. Đường hầm (Tunnel)**
- **Giải thích:** Trong hình vẽ có xuất hiện **New IP** (IP mới) và **Origin IP** (IP gốc) nằm bên trong. Việc bọc gói IP gốc vào trong một gói IP mới là đặc điểm nhận dạng của chế độ Đường hầm (Tunnel Mode).

**Câu 4: Những phần nào sẽ được xác thực?**

- **Đáp án:** **d. Tất cả các phần trên hình trừ một số biến trong New IP như TTL, ...**
- **Giải thích:** Giao thức AH (Authentication Header) cung cấp tính toàn vẹn cho **toàn bộ gói tin**, bao gồm: Payload, IP Header gốc, và cả các phần không thay đổi (immutable) của IP Header mới. Nó chỉ trừ ra các trường thay đổi trong quá trình định tuyến như TTL (Time To Live) hay Header Checksum.

**(Dựa vào hình ảnh cho câu 5: Hai Router kết nối qua IPSec Tunnel)**

**Câu 5: Hãy cho biết chế độ và giao thức IPsec nào có thể được sử dụng để ẩn địa chỉ IP của các máy chủ? (chọn nhiều câu trả lời)**

- **Đáp án:** **b. Đường hầm** và **d. ESP**
- **Giải thích:**
  - Để ẩn địa chỉ IP của máy chủ (Origin IP - ví dụ 10.1.1.1), ta phải giấu nó đi.
  - Chế độ **Đường hầm (Tunnel Mode - b)** sẽ biến IP của máy chủ thành phần dữ liệu bên trong (Inner IP), và dùng IP của Router (10.1.1.1/24 là mạng LAN, IP Router sẽ là IP Public) làm địa chỉ bên ngoài.
  - Tuy nhiên, nếu chỉ dùng Tunnel với AH, người ta vẫn đọc được IP bên trong (vì AH không mã hóa). Do đó, bắt buộc phải dùng giao thức **ESP (d)** để **mã hóa** toàn bộ phần nội dung bên trong, bao gồm cả địa chỉ IP máy chủ gốc.
  - Vậy đáp án cần chọn là **b** (để đóng gói) và **d** (để mã hóa/làm ẩn thông tin).
