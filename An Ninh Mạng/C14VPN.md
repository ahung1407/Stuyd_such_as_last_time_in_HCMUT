Chào bạn, là một sinh viên Bách Khoa TP.HCM, việc nắm vững các kiến thức cốt lõi từ tài liệu bài giảng của trường là rất quan trọng. Dựa trên tài liệu "Chuyên đề 1: Mạng riêng ảo (VPN)" của ThS. Nguyễn Cao Đạt, dưới đây là tổng hợp những nội dung trọng tâm và cốt lõi nhất bạn cần nắm:

### 1. Khái niệm và Lợi ích cốt lõi (Concept & Benefits)

- **Định nghĩa:** VPN (Virtual Private Network) là mạng riêng sử dụng môi trường truyền thông công cộng (như Internet) để truyền tin thay vì dùng đường thuê bao riêng (leased line).

- **Lợi ích chính:**
- **Giảm chi phí:** Tiết kiệm chi phí thuê bao đường truyền và thiết bị phần cứng so với mạng truyền thống.

- **Tính linh hoạt:** Hỗ trợ người dùng làm việc từ xa, kết nối các chi nhánh ở nhiều vị trí địa lý khác nhau.

- **An toàn:** Sử dụng Internet làm trục xương sống nhưng dữ liệu được bảo vệ qua các cơ chế bảo mật.

### 2. Các chức năng bảo mật quan trọng (Security Functions)

Để đảm bảo an toàn trên môi trường công cộng, VPN phải đảm bảo 4 yếu tố:

- **Xác thực (Authentication):** Kiểm tra tính hợp lệ của nguồn dữ liệu và người dùng (thường yêu cầu xác thực 2 yếu tố).

- **Quản lý truy cập (Access Control):** Giới hạn quyền truy cập vào mạng cục bộ.

- **Tính bí mật (Confidentiality):** Mã hóa dữ liệu để ngăn chặn nghe trộm.

- **Tính toàn vẹn (Integrity):** Đảm bảo dữ liệu không bị thay đổi trên đường truyền.

### 3. Phân loại hệ thống VPN (Classification)

Có 2 loại hình chính bạn cần phân biệt rõ:

| Loại VPN             | Đặc điểm chính                                                              | Đối tượng sử dụng |
| -------------------- | --------------------------------------------------------------------------- | ----------------- |
| **Site-to-Site VPN** | Kết nối các mạng LAN ở xa với nhau (Router-to-Router/Firewall-to-Firewall). |

| Kết nối trụ sở chính với chi nhánh hoặc giữa các đối tác kinh doanh.

|
| **User VPN** (Remote Access) | Kết nối máy tính cá nhân vào mạng tổ chức (Client-to-Site).

| Nhân viên làm việc tại nhà, đi công tác.

|

### 4. Các giao thức đường hầm (Tunneling Protocols)

Đây là phần kỹ thuật quan trọng nhất:

- **PPTP:** Cũ, đóng gói IP PPP, dùng mã hóa MPPE, ít an toàn.

- **L2TP:** Kế thừa từ PPTP và L2F (Cisco). **Lưu ý:** L2TP không tự mã hóa, phải kết hợp với IPSec để bảo mật.

- **SSTP:** Sử dụng SSL/TLS qua cổng HTTPS (443), thay thế tốt cho PPTP vì dễ vượt tường lửa.

- **IPSec (Internet Protocol Security):** Giao thức chuẩn và quan trọng nhất.

- Hoạt động ở tầng Network (IP).
- **AH (Authentication Header):** Chỉ xác thực và toàn vẹn, **không** mã hóa dữ liệu.

- **ESP (Encapsulating Security Payload):** Cung cấp cả xác thực, toàn vẹn và **mã hóa** (bí mật).

### 5. Kiến trúc và Triển khai (Architecture & Implementation)

- **Thành phần chính:** VPN Server, thuật toán mã hóa, hệ thống xác thực, giao thức.

- **Mô hình triển khai:**
- _Dùng phần cứng (Router/Firewall):_ Hiệu năng cao, ổn định nhưng đắt tiền.

- _Dùng phần mềm:_ Linh động, rẻ nhưng hiệu quả thấp hơn và cấu hình phức tạp.

- **Vị trí VPN Server:** Có thể đặt song song với Firewall (trong vùng DMZ), hoặc tích hợp trực tiếp trên Firewall biên.

### 6. Rủi ro và Quản lý (Risks & Management)

- **Rủi ro:** Máy tính người dùng (User VPN) nếu bị nhiễm mã độc (Trojan) có thể trở thành cầu nối tấn công vào mạng nội bộ.

- **Khắc phục:** Cần dùng xác thực mạnh (2 yếu tố), cập nhật antivirus thường xuyên cho máy client.

**Tóm lại:** Để thi hoặc làm bài tập môn này, bạn hãy tập trung vào sự khác biệt giữa **Site-to-Site và User VPN**, cơ chế hoạt động của **IPSec (AH vs ESP)** và các yêu cầu bảo mật khi triển khai VPN.
