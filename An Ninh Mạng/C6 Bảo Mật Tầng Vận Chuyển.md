Đây là **"Tài liệu Chiến lược Chương VI"** được thiết kế đặc biệt để mang vào phòng thi. Tôi đã tổng hợp, chắt lọc và sắp xếp lại toàn bộ nội dung từ slide, sách và các đoạn chat trước thành một cấu trúc tối ưu nhất để mắt bạn quét nhanh đáp án.

Bạn nên in tài liệu này ra (khuyên dùng khổ A4, in 2 mặt).

---

# TỔNG HỢP KIẾN THỨC CHƯƠNG 6: BẢO MẬT TẦNG VẬN CHUYỂN (SSL/TLS & SSH)

## PHẦN 1: BẢNG TRA CỨU NHANH (FAST LOOKUP)

_Dùng để trả lời các câu hỏi về thông số, cổng, định dạng._

| Thông số               | Giá trị / Ý nghĩa                                                                                                                                      |
| :--------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Cổng (Port)**        | HTTPS: **443** \| SSH: **22** \| HTTP: **80**                                                                                                          |
| **Master Secret**      | Độ dài cố định **48 bytes**. (Dùng để sinh khóa phiên).                                                                                                |
| **TLS Record Header**  | Dài **5 bytes**. Byte đầu tiên là `Content Type`.                                                                                                      |
| **Content Type (Hex)** | `0x14` (20): **Change Cipher Spec** \| `0x15` (21): **Alert**<br>`0x16` (22): **Handshake** \| `0x17` (23): **App Data** \| `0x18` (24): **Heartbeat** |
| **Change Cipher Spec** | Payload chỉ có **1 byte** (giá trị 1).                                                                                                                 |
| **Alert Level**        | 1: Warning (Cảnh báo) \| 2: Fatal (Lỗi nghiêm trọng $\rightarrow$ Ngắt kết nối TCP ngay).                                                              |
| **Mã thông báo đóng**  | `close_notify` (Quan trọng để chống tấn công cắt cụt - Truncation Attack).                                                                             |

---

## PHẦN 2: SO SÁNH ĐỐI CHIẾU (COMPARISON)

_Dùng cho các câu hỏi "Khác nhau chỗ nào", "Ưu điểm là gì", "Khi nào dùng"._

### 1. Các cấp độ bảo mật Web

| Đặc điểm          | **IPSec (Network Layer)**             | **SSL/TLS (Transport Layer)**                | **Application Level (S/MIME)**        |
| :---------------- | :------------------------------------ | :------------------------------------------- | :------------------------------------ |
| **Vị trí**        | Tầng Mạng (Lớp 3).                    | Tầng Vận chuyển (Lớp 4).                     | Tầng Ứng dụng (Lớp 7).                |
| **Phạm vi**       | Máy - đến - Máy (Host-to-Host).       | Tiến trình - đến - Tiến trình (End-to-End).  | Dữ liệu ứng dụng cụ thể.              |
| **Độ trong suốt** | Trong suốt với người dùng & ứng dụng. | Trong suốt với người dùng, App cần thư viện. | Không trong suốt (App phải sửa code). |
| **Ứng dụng**      | VPN.                                  | Web (HTTPS), Email, Chat.                    | Email bảo mật cao, giao dịch bank.    |

### 2. TLS Session (Phiên) vs TLS Connection (Kết nối)

| Tiêu chí      | **Session (Phiên)**                                    | **Connection (Kết nối)**                                              |
| :------------ | :----------------------------------------------------- | :-------------------------------------------------------------------- |
| **Tính chất** | Lâu dài, Logic.                                        | Tạm thời, Vật lý ảo (TCP).                                            |
| **Khởi tạo**  | Tốn kém (Handshake đầy đủ: RSA/DH).                    | Rẻ, nhanh (Handshake tóm tắt/Resume).                                 |
| **Chứa gì?**  | **Master Secret**, Cipher Spec, Peer Cert, Session ID. | **Random (Client/Server)**, Write Keys, MAC Secrets, IV, **Seq Num**. |
| **Quan hệ**   | 1 Session sinh ra NHIỀU Connection.                    | 1 Connection thuộc về 1 Session.                                      |

Chứa Master Secret (Duy nhất & Cố định), Cipher Spec, Session ID. (Session ID dùng để tra cứu Master Secret khi Resume).

### 3. Các phương pháp xác thực SSH

| Phương pháp | **Password**              | **Public Key (Khuyên dùng)**               | **Hostbased (Ít dùng)**                          |
| :---------- | :------------------------ | :----------------------------------------- | :----------------------------------------------- |
| **Cơ chế**  | Gửi pass qua kênh mã hóa. | Client dùng Private Key giải mã thử thách. | Server tin tưởng máy Client (dựa trên Host Key). |
| **Bảo mật** | Thấp (dễ bị Brute-force). | **Cao nhất**.                              | Thấp (Rủi ro giả mạo IP/Host).                   |

### 4. SSH Port Forwarding (Chuyển tiếp cổng)

| Loại      | **Local (-L)**               | **Remote (-R)**                | **Dynamic (-D)**               |
| :-------- | :--------------------------- | :----------------------------- | :----------------------------- |
| **Hướng** | Client $\rightarrow$ Server. | Server $\rightarrow$ Client.   | Client $\rightarrow$ Internet. |
| **Ví dụ** | Truy cập DB nội bộ từ xa.    | Public web localhost ra ngoài. | Fake IP (SOCKS Proxy).         |

---

## PHẦN 3: QUY TRÌNH & CƠ CHẾ HOẠT ĐỘNG (PROCESS)

_Dùng cho câu hỏi về thứ tự và cách thức hoạt động._

### 1. Kiến trúc phân tầng (Protocol Stack)

- **TLS:** `Record Protocol` (Dưới cùng) $\rightarrow$ `Handshake`, `ChangeCipherSpec`, `Alert`, `App Data` (Trên).
- **SSH:** `Transport Layer` (Dưới cùng - Mã hóa/Nén) $\rightarrow$ `User Auth` (Giữa - Xác thực) $\rightarrow$ `Connection Layer` (Trên cùng - Tunnel/Channel).

### 2. Quy trình Bắt tay TLS (Handshake)

1.  **ClientHello:** Gửi Version, Random C, Cipher Suites hỗ trợ.
2.  **ServerHello:** Chọn Version, Cipher Suite, gửi Random S.
3.  **Authentication:** Server gửi **Certificate**.
4.  **Key Exchange:** Client tạo **Pre-master Secret**, mã hóa bằng Public Key của Server $\rightarrow$ Gửi đi.
5.  **Calculate Keys:** Cả 2 bên tự tính: `Master Secret` = `Pre-master` + `Random C` + `Random S`.
6.  **Finish:** Gửi `ChangeCipherSpec` và `Finished` (mã hóa lần đầu).

### 3. Quy trình Record Protocol (Thứ tự xử lý gói tin)

Dữ liệu $\rightarrow$ **Fragment** (Cắt nhỏ) $\rightarrow$ **Compress** (Nén - tùy chọn) $\rightarrow$ **MAC** (Tính toàn vẹn) $\rightarrow$ **Encrypt** (Mã hóa) $\rightarrow$ **Append Header**.
_(Lưu ý: TLS cũ là MAC-then-Encrypt)._
Record Protocol dùng mã hóa đối xứng cho tính Bí mật và HMAC cho tính Toàn vẹn

---

## PHẦN 4: "BÃI MÌN" - CÁC BẪY DỄ MẤT ĐIỂM (TRAPS)

_Đọc kỹ phần này trước khi chọn đáp án._

1.  **Không có giao thức "Message Protocol":** Trong TLS chỉ có Handshake, Alert, Record... Đừng chọn Message Protocol.
2.  **HTTPS bảo vệ gì?** URL, Body, Cookies. **KHÔNG** bảo vệ IP đích và Tên miền (trừ khi dùng ESNI).
3.  **TLS chống tấn công nào?**
    - $\checkmark$ Replay (nhờ Nonce/SeqNum).
    - $\checkmark$ Man-in-the-Middle (nhờ Certificate).
    - $\checkmark$ Sniffing (nhờ Encryption).
    - $\checkmark$ Tampering (nhờ MAC).
    - $\times$ **SYN Flooding** (DoS tầng TCP).
    - $\times$ Password Sniffing (nếu máy user đã bị keylogger từ trước).
4.  **Change Cipher Spec:** Là một giao thức **RIÊNG**, không nằm trong Handshake. báo hiệu từ giây phút này mọi thứ sẽ được mã hóa.
5.  **Master Secret:** Không bao giờ gửi qua mạng. Chỉ gửi **Pre-master** (đã mã hóa).
6.  **Xác thực SSH Hostbased:** Xác thực **máy trạm (client host)**, không xác thực người dùng.

---
