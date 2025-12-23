Chào bạn, đây là **TÀI LIỆU TỔNG HỢP A-Z (CHEAT SHEET)** được thiết kế chuyên biệt để mang vào phòng thi. Tài liệu này bao phủ mọi ngóc ngách của slide, bổ sung các chi tiết nhỏ mà bản tóm tắt trước có thể thiếu, đặc biệt tập trung vào **so sánh, ưu nhược điểm và kịch bản lựa chọn** để bạn tra cứu nhanh nhất khi làm trắc nghiệm.

---

# TÀI LIỆU ÔN THI: THÂM NHẬP BẤT HỢP PHÁP & IDS

**(Dùng để tra cứu nhanh cho kỳ thi mở)**

## I. KHÁI NIỆM & ĐỐI TƯỢNG TẤN CÔNG (Slide 4)

Phần này giúp trả lời các câu hỏi: _"Đây là loại tấn công nào?", "Ai đang tấn công?"_

| Loại đối tượng    | Tên tiếng Anh   | Đặc điểm nhận dạng (Keywords)                                                                              | Ví dụ                                               |
| :---------------- | :-------------- | :--------------------------------------------------------------------------------------------------------- | :-------------------------------------------------- |
| **Kẻ giả mạo**    | **Masquerader** | **Người ngoài (Outsider)**, không có tài khoản, cố gắng đột nhập.                                          | Hacker dùng tool đoán mật khẩu để vào hệ thống.     |
| **Kẻ lạm quyền**  | **Misfeasor**   | **Người trong (Insider)**, người dùng hợp pháp, truy cập tài nguyên **không được cấp quyền**.              | Nhân viên kho cố xem bảng lương của giám đốc.       |
| **Kẻ điều khiển** | **Clandestine** | **Người trong (Insider)**, có quyền quản trị (Supervisory), dùng quyền để né kiểm soát và **xóa dấu vết**. | Admin tẩu tán dữ liệu rồi xóa log để không ai biết. |

---

## II. QUY TRÌNH & KỸ THUẬT TẤN CÔNG (Slide 5-7)

Phần này giúp trả lời câu hỏi: _"Hành động này thuộc bước nào?", "Kỹ thuật này là gì?"_

### 1. Các bước tấn công (Kill Chain)

1.  **Quét IP:** Tìm máy đang bật (Alive hosts).
2.  **Quét Port:** Tìm cổng đang mở (Open ports - VD: 80, 21, 23). _Công cụ: SuperScan._
3.  **Đánh giá dịch vụ (Fingerprinting):** Xác định Hệ điều hành (OS), phiên bản phần mềm.
4.  **Lựa chọn mục tiêu:** Chọn máy yếu nhất.
5.  **Khai thác (Exploit):** Tấn công chiếm quyền.

### 2. Các kỹ thuật/Vector tấn công cụ thể

- **Virus/Trojan/Worm:** Mã độc.
- **Từ chối dịch vụ (DoS):** Làm ngập lụt hệ thống.
- **Active Script:** Mã độc trên trình duyệt.
- **Tràn bộ đệm (Buffer Overflow):** Lỗi lập trình bộ nhớ.
- **Điểm yếu giao thức:** Lợi dụng TCP/IP.
- **Mật khẩu yếu:** Dễ đoán.

---

## III. PHƯƠNG PHÁP PHÁT HIỆN (Slide 11)

Phần này giúp trả lời câu hỏi: _"Cơ chế nào được sử dụng?", "Ưu điểm của phương pháp này là gì?"_

| Phương pháp           | Tên gọi khác                 | Cơ chế hoạt động                                                                          | Ưu điểm (Pros)                              | Nhược điểm (Cons)                                                      |
| :-------------------- | :--------------------------- | :---------------------------------------------------------------------------------------- | :------------------------------------------ | :--------------------------------------------------------------------- |
| **Dựa trên Thống kê** | Anomaly / Behavior / Profile | So sánh hành vi hiện tại với **ngưỡng (Threshold)** hoặc **hồ sơ (Profile)** bình thường. | Phát hiện được tấn công mới **(Zero-day)**. | Tỷ lệ báo giả **(False Positive)** cao do hành vi người dùng thay đổi. |
| **Dựa trên Quy tắc**  | Signature / Rule-based       | So sánh với cơ sở dữ liệu **mẫu/dấu hiệu** tấn công đã biết (như Antivirus).              | Chính xác cao với tấn công cũ. Ít báo giả.  | **"Mù"** trước tấn công mới (Zero-day) chưa có trong DB.               |

---

## IV. SO SÁNH CHI TIẾT HIDS vs NIDS (Cực kỳ quan trọng)

Phần này giúp trả lời câu hỏi: _"Hệ thống nào tốt hơn khi...?", "Đâu là nhược điểm của...?"_

### 1. Bảng so sánh đặc tính (Slide 12-20)

| Tiêu chí                | HIDS (Host-based)                                    | NIDS (Network-based)                                       |
| :---------------------- | :--------------------------------------------------- | :--------------------------------------------------------- |
| **Vị trí**              | Cài Agent trên **từng máy chủ/máy trạm**.            | Thiết bị/Cảm biến đặt tại **nút mạng** (Switch/Router).    |
| **Nguồn dữ liệu**       | Log file, System calls, File system (tính toàn vẹn). | Gói tin (Packets) trên dây mạng.                           |
| **Tầm nhìn**            | Hẹp (chỉ thấy máy nó đang chạy).                     | Rộng (thấy toàn bộ mạng lưới).                             |
| **Mã hóa (Encryption)** | **ĐỌC ĐƯỢC** (vì dữ liệu đã giải mã tại máy đích).   | **KHÔNG ĐỌC ĐƯỢC** (bị mù trước SSL/HTTPS).                |
| **Ảnh hưởng hiệu năng** | **CÓ** (Tốn RAM/CPU của máy chủ).                    | **KHÔNG** (Thiết bị độc lập, thụ động).                    |
| **Chi phí quản lý**     | Cao (Cài/Update trên hàng trăm máy).                 | Thấp (Quản lý vài thiết bị tập trung).                     |
| **Chế độ hoạt động**    | Dựa trên OS API.                                     | Chế độ **Promiscuous** (Nghe lén toàn bộ).                 |
| **Mạng chuyển mạch**    | Không cần cấu hình gì thêm.                          | Cần cấu hình **Port Mirroring** trên Switch mới nghe được. |

### 2. Kịch bản lựa chọn (Decision Matrix)

_Dùng để trả lời câu hỏi tình huống:_

- **Chọn HIDS khi:**
  - Cần giám sát **người dùng nội bộ** cụ thể (biết ai làm gì).
  - Môi trường mạng sử dụng **mã hóa cao** (HTTPS, VPN đầu cuối).
  - Muốn biết file nào bị thay đổi (**File Integrity**).
  - Mạng dùng Switch nhưng không thể cấu hình Port Mirroring.
- **Chọn NIDS khi:**
  - Cần phát hiện sớm tấn công từ **bên ngoài** (Scanning, DoS).
  - Muốn giám sát diện rộng với **chi phí thấp**.
  - Không muốn ảnh hưởng đến tốc độ của máy chủ (Server quá tải).
  - Cần thiết bị **ẩn danh** (Stealthy) khó bị hacker phát hiện.

---

## V. QUẢN LÝ VÀ VẬN HÀNH (Slide 21-27)

### 1. Quy trình khởi tạo (Thứ tự đúng)

1.  Xác định mục tiêu.
2.  Chọn thành phần/hệ thống theo dõi.
3.  Chọn đáp ứng (Response).
4.  Xét các ngưỡng.
5.  Hiện thực chính sách.

### 2. Phân loại sự kiện (Events)

- **Thăm dò (Probing):** Quét port, quét lỗi (chưa phá hoại, chỉ xem).
- **Tấn công (Attacks):** Chiếm quyền, phá hoại.
- **Vi phạm chính sách (Policy Violation):** Không phải hack nhưng bị cấm (VD: dùng P2P, Yahoo, Telnet).

### 3. Tiêu chí chọn mua IDS

- Khả năng xử lý phân mảnh (Fragmentation).
- Đi sâu vào gói tin (Deep packet inspection).
- Tần suất cập nhật.
- Hỗ trợ hệ điều hành.

### 4. Các sản phẩm (Cũ nhưng có thể hỏi)

- **Snort:** Mã nguồn mở (Open Source) nổi tiếng nhất.
- **Cisco Secure IDS.**
- **Dragon (Enterasys).**
- **Real Secure (ISS).**

---

## VI. NGĂN CHẶN (IPS) VÀ CÁC VẤN ĐỀ (Slide 28-30)

Phần này giúp trả lời câu hỏi: _"Sự khác biệt giữa IDS và IPS?", "Rủi ro của IPS?"_

### 1. So sánh IDS vs IPS

- **IDS (Phát hiện):**
  - Cơ chế: **Thụ động (Passive)**.
  - Hành động: Ghi log, Cảnh báo (Alert).
  - Vị trí: Song song (Out-of-band/Tap).
- **IPS (Ngăn chặn):**
  - Cơ chế: **Chủ động (Active)**.
  - Hành động: Chặn gói tin (**Drop/Block**), Ngắt kết nối.
  - Vị trí: Nằm chắn ngang đường **(Inline)** giữa Firewall và Mạng.

### 2. Rủi ro của IPS (Vấn đề nảy sinh)

1.  **Gây ra DoS (Từ chối dịch vụ):** Nếu IPS nhận diện sai (False Positive), nó sẽ chặn người dùng hợp pháp -> Người dùng không làm việc được.
2.  **Điểm chết duy nhất (Single Point of Failure):** Do nằm chắn ngang đường (Inline), nếu thiết bị IPS hỏng/treo -> Toàn bộ mạng bị mất kết nối.

---

## VII. TỪ KHÓA & CẠM BẪY TRẮC NGHIỆM

- **False Positive (Dương tính giả):** Báo có trộm nhưng thực ra không có (Oan ức) -> Gây phiền/Lờn cảnh báo (Alert Fatigue).
- **False Negative (Âm tính giả):** Có trộm nhưng báo yên ổn (Bỏ sót) -> **Nguy hiểm nhất**.
- **Promiscuous Mode:** Chế độ card mạng để NIDS "hóng chuyện" toàn bộ mạng.
- **Port Mirroring/SPAN:** Kỹ thuật cần có trên Switch để NIDS hoạt động.
- **Honeypot:** Hệ thống "bẫy" giả lập để dụ hacker (thường dùng để nghiên cứu).

---

**Lời khuyên khi mang tài liệu này vào phòng thi:**

1.  Gặp câu hỏi về **"Người dùng"** -> Tra mục **I**.
2.  Gặp câu hỏi về **"So sánh HIDS/NIDS"** -> Tra mục **IV**.
3.  Gặp câu hỏi về **"Ưu/Nhược điểm"** -> Tra mục **III** hoặc **IV**.
4.  Gặp câu hỏi về **"Rủi ro/Vấn đề"** -> Tra mục **VI**.
