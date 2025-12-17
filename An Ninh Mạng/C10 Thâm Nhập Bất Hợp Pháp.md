Dưới đây là bản tổng hợp **cốt lõi và trọng tâm nhất** của chương này. Nếu bạn chuẩn bị thi hoặc cần nắm kiến thức thực tế nhanh, hãy tập trung tuyệt đối vào 5 mục dưới đây:

### 1. Phân loại Kẻ xâm nhập (3 nhóm đối tượng)

Bạn phải phân biệt được ai đang tấn công hệ thống:

- **Masquerader (Kẻ giả mạo):** Hacker bên ngoài, không có tài khoản, cố gắng đột nhập vào trong.
- **Misfeasor (Kẻ làm sai):** Người dùng nội bộ hợp pháp (nhân viên), truy cập vào dữ liệu/tài nguyên **không được cấp quyền**.
- **Clandestine user (Kẻ lạm quyền):** Người có quyền cao (Admin/SuperUser), dùng quyền đó để làm việc xấu và **xóa dấu vết** (né tránh kiểm toán).

### 2. Hai phương pháp phát hiện (Detection Approaches)

IDS làm sao biết có kẻ trộm?

- **Dựa trên thống kê (Anomaly Detection):**
  - _Cơ chế:_ So sánh hành vi hiện tại với thói quen bình thường (Profile) hoặc ngưỡng (Threshold).
  - _Ví dụ:_ Đăng nhập sai 10 lần/phút, truy cập server lúc 3 giờ sáng.
  - _Ưu điểm:_ Phát hiện được tấn công mới (zero-day).
  - _Nhược điểm:_ Hay báo giả (False Positive) do người dùng đổi thói quen.
- **Dựa trên quy tắc/chữ ký (Signature/Rule-based):**
  - _Cơ chế:_ So sánh với cơ sở dữ liệu mẫu tấn công đã biết (giống phần mềm diệt virus).
  - _Ưu điểm:_ Chính xác cao với các virus/tấn công cũ.
  - _Nhược điểm:_ Không bắt được tấn công mới chưa có trong database.

### 3. So sánh HIDS và NIDS (Trọng tâm quan trọng nhất)

Đây là phần dễ bị hỏi thi và ứng dụng thực tế nhất.

| Đặc điểm      | **HIDS** (Host-based IDS)                            | **NIDS** (Network-based IDS)                            |
| :------------ | :--------------------------------------------------- | :------------------------------------------------------ |
| **Vị trí**    | Cài đặt trên từng **máy chủ/máy trạm** cụ thể.       | Đặt tại các điểm nút mạng (Router/Switch).              |
| **Tầm nhìn**  | Thấy chi tiết nội bộ máy đó (file log, file bị sửa). | Thấy toàn bộ lưu lượng giao thông của cả mạng.          |
| **Mã hóa**    | **Tốt:** Đọc được dữ liệu đã giải mã trên máy.       | **Yếu:** "Mù" trước dữ liệu mã hóa (HTTPS/SSL).         |
| **Hiệu suất** | Tốn tài nguyên (RAM/CPU) của máy chủ.                | Không ảnh hưởng máy chủ, nhưng cần thiết bị riêng mạnh. |
| **Cơ chế**    | Phân tích Log file, Checksum file.                   | Chế độ **Promiscuous** (nghe lén toàn bộ mạng).         |

### 4. Quy trình tấn công cơ bản (Kill Chain)

Hacker thường đi theo trình tự nào? IDS cần bắt được các bước này:

1.  **Quét IP:** Tìm máy đang bật.
2.  **Quét Port:** Tìm cửa đang mở (VD: Port 80, 21).
3.  **Fingerprinting:** Đoán hệ điều hành, dịch vụ để tìm lỗi.
4.  **Exploit:** Tấn công (Brute-force mật khẩu, dùng lỗi tràn bộ đệm...).

### 5. Sự tiến hóa: IDS vs. IPS

- **IDS (Intrusion Detection System):**
  - **Thụ động (Passive):** Chỉ hú còi (alert), ghi log.
  - **Vị trí:** Đứng song song (nhánh rẽ), không chặn đường đi.
- **IPS (Intrusion Prevention System):**
  - **Chủ động (Active):** Tự động chặn (block) gói tin độc hại ngay lập tức.
  - **Vị trí:** Đứng chắn ngang đường (Inline) giữa Firewall và mạng nội bộ.
  - **Rủi ro:** Nếu chặn nhầm (False Positive) -> Gây ra **Từ chối dịch vụ (DoS)** cho người dùng thật.

---

### **Từ khóa cần nhớ (Key Terms)**

- **Snort:** Phần mềm NIDS mã nguồn mở nổi tiếng nhất.
- **False Positive (Dương tính giả):** Báo nhầm người tốt là kẻ xấu (Gây phiền).
- **False Negative (Âm tính giả):** Bỏ sót kẻ xấu (Nguy hiểm).
- **Promiscuous Mode:** Chế độ card mạng giúp NIDS nghe được tất cả gói tin, không chỉ gói tin gửi cho nó.
- **Honeypot (Bẫy):** (Kiến thức mở rộng thường đi kèm) Máy chủ giả lập để dụ hacker vào và theo dõi.
  Chào bạn, dựa trên nội dung các slide bài giảng môn "Mật mã và An ninh mạng" mà bạn đã cung cấp trước đó, mình xin giải chi tiết đề kiểm tra này như sau.

---

# PHẦN I: CÂU HỎI TỰ LUẬN

### **Câu 1: Cho biết ba loại thâm nhập bất hợp pháp.**

_(Dựa trên Slide 4)_
Có 3 loại thâm nhập chính (theo cách phân loại của Stallings):

1.  **Kẻ giả mạo (Masquerader):** Thường là người bên ngoài, không có tài khoản, tìm cách thâm nhập vào hệ thống (ví dụ: hacker đánh cắp tài khoản của người dùng hợp lệ).
2.  **Kẻ làm sai (Misfeasor):** Là người dùng hợp pháp bên trong hệ thống, nhưng truy cập vào dữ liệu hoặc chương trình mà họ không được cấp quyền (lạm quyền).
3.  **Kẻ sử dụng lén lút (Clandestine user):** Thường là người có quyền kiểm soát hệ thống (như Admin), sử dụng quyền này để thực hiện hành vi sai trái và xóa dấu vết kiểm toán (audit logs).

### **Câu 2: Ba lợi ích có thể được cung cấp bởi một hệ thống phát hiện xâm nhập là gì?**

_(Dựa trên Slide 9)_

1.  **Ngăn chặn và giảm thiểu thiệt hại:** Nếu phát hiện xâm nhập nhanh chóng, hệ thống có thể cảnh báo để admin hoặc hệ thống tự động ngắt kết nối trước khi kẻ tấn công kịp phá hoại nặng nề.
2.  **Răn đe (Deterrent):** Sự hiện diện của IDS đóng vai trò như một biện pháp tâm lý, khiến kẻ tấn công e ngại vì biết hành động của mình đang bị giám sát.
3.  **Thu thập thông tin (Forensics):** Ghi lại dữ liệu về các cuộc tấn công để phân tích, tìm ra lỗ hổng và cải thiện an ninh cho tương lai.

### **Câu 3: Phân biệt hai hướng tiếp cận để phát hiện thâm nhập bất hợp pháp.**

_(Dựa trên Slide 11)_

1.  **Phát hiện dựa trên thống kê (Statistical / Anomaly Detection):**
    - **Cơ chế:** Xây dựng một "hồ sơ" (profile) hành vi bình thường của người dùng/hệ thống. Nếu hành vi hiện tại lệch quá mức so với ngưỡng (threshold) cho phép -> Cảnh báo.
    - **Ưu điểm:** Phát hiện được các tấn công mới chưa từng biết (Zero-day).
    - **Nhược điểm:** Dễ báo giả (False Positive) nếu hành vi người dùng thay đổi hợp lệ nhưng đột ngột.
2.  **Phát hiện dựa trên quy tắc/dấu hiệu (Rule-based / Signature Detection):**
    - **Cơ chế:** So sánh dữ liệu hiện tại với cơ sở dữ liệu các mẫu tấn công (signature) đã biết (giống phần mềm diệt virus).
    - **Ưu điểm:** Độ chính xác cao với các tấn công đã biết, ít báo giả.
    - **Nhược điểm:** Không phát hiện được các tấn công mới chưa có trong cơ sở dữ liệu.

### **Câu 4: Phân biệt hai hệ thống phát hiện thâm nhập bất hợp pháp.**

_(Dựa trên Slide 12, 14, 17)_
Phân biệt giữa **HIDS** (Host-based) và **NIDS** (Network-based):

| Đặc điểm                | HIDS (Trên máy chủ)                                                          | NIDS (Trên mạng)                                                 |
| :---------------------- | :--------------------------------------------------------------------------- | :--------------------------------------------------------------- |
| **Vị trí cài đặt**      | Cài agent phần mềm trên từng máy chủ cụ thể.                                 | Đặt thiết bị/cảm biến tại các điểm nút mạng (Router/Switch).     |
| **Phạm vi giám sát**    | Giám sát các sự kiện nội bộ: file log, tính toàn vẹn file, lời gọi hệ thống. | Giám sát các gói tin (packet) lưu thông trên đường truyền mạng.  |
| **Khả năng với mã hóa** | Tốt. Có thể đọc dữ liệu đã giải mã trên máy chủ.                             | Kém. Không đọc được nội dung gói tin bị mã hóa (HTTPS/SSL).      |
| **Ảnh hưởng hiệu năng** | Tiêu tốn tài nguyên (RAM/CPU) của máy chủ.                                   | Không ảnh hưởng đến máy chủ, nhưng cần thiết bị phần cứng riêng. |

### **Câu 5: Cho biết các vấn đề nảy sinh đối với các hệ thống ngăn chặn bất hợp pháp (IPS).**

_(Dựa trên Slide 30)_

1.  **Tấn công Từ chối dịch vụ (DoS) do chính IPS:** Nếu IPS nhận diện nhầm hành động của người dùng hợp pháp là tấn công (False Positive) và chặn lại, nó sẽ gây ra tình trạng từ chối dịch vụ cho chính người dùng thật.
2.  **Tính sẵn sàng (Availability) và độ trễ:** Vì IPS thường đặt chắn ngang đường truyền (Inline), nếu thiết bị IPS bị hỏng hoặc xử lý chậm, toàn bộ kết nối mạng phía sau sẽ bị ngắt hoặc bị chậm theo.

---

# PHẦN II: CÂU HỎI TRẮC NGHIỆM

### **Câu 1: Đáp án A**

- **Giải thích:** Việc "thu thập hành vi người dùng hợp pháp" để tạo ra mẫu chuẩn, sau đó so sánh sự khác biệt là định nghĩa cốt lõi của **Phát hiện dựa trên thống kê (Statistical/Anomaly Detection)** (Xem Slide 11).
- _Loại trừ:_ Quy tắc (Rule-based) dựa trên mẫu tấn công của hacker, không phải hành vi người dùng hợp pháp.

### **Câu 2: Đáp án B**

- **Giải thích:** Đây là câu hỏi khó nhất.
  - Câu A đúng: Slide 11 chia làm 2 hướng (Thống kê/Hành vi và Quy tắc).
  - Câu C đúng: Slide 28 đề cập IDS có thể kết hợp (hoặc tiến hóa thành IPS) để ngăn chặn.
  - Câu D đúng: Slide 9 (Lợi ích thu thập thông tin).
  - **Câu B sai (hoặc thiếu chính xác nhất):** Mặc dù sách giáo khoa có câu tương tự là một lợi ích lý tưởng, nhưng trong thực tế và nội dung slide, IDS tập trung vào phát hiện sự kiện xâm nhập (Intrusion) hơn là "xác định kẻ xâm nhập" (Identify the intruder - định danh danh tính cụ thể). Hơn nữa, việc xác định được kẻ đó là ai _trước khi_ có bất kỳ thiệt hại nào là cực kỳ khó (vì ngay việc quét port - probing - đã có thể coi là tiêu tốn tài nguyên hoặc lộ thông tin). Slide 9 chỉ nói "giảm thiểu thiệt hại" chứ không khẳng định xác định được kẻ tấn công trước khi có thiệt hại.

### **Câu 3: Đáp án D**

- **Giải thích:** Dựa theo quy trình "Các bước để khởi tạo" tại **Slide 21**:
  1. Xác định mục tiêu.
  2. **Chọn thành phần, hệ thống để theo dõi.**
  3. Chọn đáp ứng thích hợp.
  4. Xét các ngưỡng.
  5. Hiện thực chính sách.

### **Câu 4: Đáp án B**

- **Giải thích:**
  - Mục tiêu: Bảo vệ khỏi **người dùng hợp pháp** (Insider threat / Misfeasor).
  - Đặc điểm: Người dùng hợp pháp thường có kết nối mã hóa hoặc truy cập trực tiếp vào máy, và hành động của họ (như mở file, xóa file) diễn ra bên trong hệ điều hành. **NIDS** chỉ thấy lưu lượng mạng bình thường. Chỉ có **HIDS** (Slide 15) mới có khả năng "ánh xạ các hành động có vấn đề đến người dùng cụ thể" và theo dõi logs/system calls.

### **Câu 5: Đáp án A**

- **Giải thích:**
  - Mục tiêu: **Chi phí thấp** (phát hiện diện rộng).
  - **HIDS (Slide 16):** Chi phí triển khai và bảo trì cao (phải cài, update, quản lý trên từng máy một).
  - **NIDS (Slide 19):** Có thể theo dõi một số lượng lớn hệ thống chỉ với một thiết bị, không cần cài đặt gì lên các máy con -> Chi phí trên quy mô lớn thấp hơn và quản lý tập trung hơn.
