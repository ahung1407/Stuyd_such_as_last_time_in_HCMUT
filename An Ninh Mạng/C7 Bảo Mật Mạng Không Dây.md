Dưới đây là bản tổng hợp **cốt lõi và trọng tâm nhất** của chương Bảo mật mạng không dây (Wireless Security). Bạn có thể dùng bản này để ôn thi hoặc nắm kiến thức nền tảng nhanh chóng.

---

### 1. Bản chất & Rủi ro (Tại sao Wifi kém an toàn?)

- **Môi trường chia sẻ (Shared Medium):** Không có biên giới vật lý (tường, cửa). Ai có anten trong phạm vi phủ sóng đều có thể thu thập gói tin.
- **Tam giác CIA:** Cần đảm bảo Bí mật (Confidentiality), Toàn vẹn (Integrity), Sẵn sàng (Availability) nhưng khó hơn mạng dây.
- **3 biện pháp "bình dân" (Nhưng yếu):**
  1.  _Ẩn SSID:_ Vô dụng với hacker, chỉ làm khó người dùng.
  2.  _Lọc MAC:_ Vô dụng vì địa chỉ MAC dễ dàng bị giả mạo (Spoofing).
  3.  _Giảm công suất phát:_ Hạn chế phạm vi nhưng không ngăn chặn triệt để.

### 2. Sự tiến hóa của các giao thức bảo mật (Trọng tâm thi cử)

Bạn cần nhớ kỹ lộ trình: **WEP ➔ WPA ➔ WPA2 ➔ WPA3**.

#### A. WEP (Wired Equivalent Privacy) - _Đã chết, tuyệt đối không dùng_

- **Mã hóa:** Dùng **RC4** (Stream Cipher).
- **Toàn vẹn:** Dùng **CRC-32** (Tuyến tính, dễ bị sửa đổi - bit flipping).
- **Điểm yếu chết người:**
  - **IV (Vector khởi tạo) quá ngắn:** Chỉ **24-bit** ➔ Dẫn đến trùng lặp IV (Collision) nhanh chóng.
  - **IV gửi dạng bản rõ (Cleartext):** Hacker bắt gói tin, thấy IV lặp lại ➔ Tính ngược ra khóa.
  - **Khóa tĩnh (Static Key):** Tất cả dùng chung 1 pass, khó quản lý.
  - **Xác thực Shared Key:** Quy trình Challenge-Response để lộ cả bản rõ và bản mã ➔ Hacker XOR 2 cái này là ra KeyStream.

#### B. WPA (Wi-Fi Protected Access) - _Bản vá tạm thời_

- **Mục đích:** Chạy được trên phần cứng cũ của WEP (Firmware update).
- **Cốt lõi:**
  - Dùng **TKIP**: Thay đổi khóa sau mỗi gói tin (Per-packet key) ➔ Vá lỗi khóa tĩnh.
  - Dùng **MIC**: Hàm băm có khóa để kiểm tra toàn vẹn ➔ Vá lỗi CRC-32.
  - Tăng IV lên **48-bit** ➔ Chống trùng lặp.

#### C. WPA2 (IEEE 802.11i) - _Tiêu chuẩn phổ biến_

- **Yêu cầu:** Phần cứng mới (chip mạnh hơn).
- **Cốt lõi:**
  - Dùng **AES** (Block Cipher): Mã hóa cực mạnh.
  - Giao thức **CCMP**: Kết hợp AES (Counter Mode) để bảo mật + CBC-MAC để toàn vẹn.
- **Lỗ hổng:** Giao thức **Bắt tay 4 bước (4-Way Handshake)** dễ bị tấn công từ điển (Brute-force) nếu mật khẩu yếu.

#### D. WPA3 - _Tiêu chuẩn mới nhất_

- **Cải tiến:** Thay thế cơ chế PSK bằng **SAE (Simultaneous Authentication of Equals)**.
- **Lợi ích:** Chống tấn công từ điển offline (dù pass là "123456" hacker bắt gói tin về cũng không dò được).

---

### 3. Hai mô hình xác thực (Authentication Modes)

| Đặc điểm      | Cá nhân (Personal / PSK)                | Doanh nghiệp (Enterprise / 802.1X)                |
| :------------ | :-------------------------------------- | :------------------------------------------------ |
| **Đối tượng** | Hộ gia đình, quán cafe nhỏ.             | Công ty, trường học lớn.                          |
| **Cách dùng** | Dùng chung 1 mật khẩu (Pre-Shared Key). | Mỗi người 1 tài khoản (User/Pass) riêng.          |
| **Cơ chế**    | 4-Way Handshake.                        | Dùng **RADIUS Server** (AAA) + giao thức **EAP**. |
| **Ưu điểm**   | Dễ cấu hình.                            | Quản lý tập trung, thu hồi quyền dễ dàng.         |

**Về EAP (Trong mô hình Doanh nghiệp):**

- **EAP-TLS:** An toàn nhất (Cần chứng chỉ số ở cả Server và Client).
- **PEAP:** Phổ biến nhất (Chỉ cần chứng chỉ ở Server, tạo đường hầm rồi gửi User/Pass).

---

### 4. Các mối đe dọa chính

1.  **Rogue AP / Evil Twin:** Điểm truy cập giả mạo, lừa người dùng kết nối để đánh cắp thông tin.
2.  **War Driving:** Đi dò tìm mạng wifi mở/yếu để vẽ bản đồ hoặc tấn công.
3.  **Man-in-the-Middle:** Hacker đứng giữa chặn bắt dữ liệu (dễ xảy ra nếu không có xác thực lẫn nhau).
4.  **DoS:** Làm nghẽn mạng hoặc gây nhiễu sóng.

---

### 5. Bảng "Cheat Sheet" tóm tắt (Học thuộc bảng này)

| Chuẩn    | Mã hóa             | Toàn vẹn | Điểm yếu chính                                      |
| :------- | :----------------- | :------- | :-------------------------------------------------- |
| **WEP**  | RC4 + IV (24-bit)  | CRC-32   | IV ngắn, Khóa tĩnh, Dễ bị crack trong vài phút.     |
| **WPA**  | TKIP + RC4         | MIC      | Tạm thời, tốc độ chậm.                              |
| **WPA2** | **AES** (CCMP)     | CBC-MAC  | Tấn công từ điển vào quá trình bắt tay (Handshake). |
| **WPA3** | **AES** (GCMP-256) | BIP-GMAC | (Hiện tại rất an toàn) Dùng **SAE** thay cho PSK.   |

### 6. Kết luận & Khuyến cáo thực tế

- **Tuyệt đối không dùng WEP.**
- Nên dùng **WPA2-AES** hoặc **WPA3**.
- Mật khẩu Wifi (nếu dùng WPA2) phải dài, phức tạp để chống brute-force.
- Doanh nghiệp bắt buộc phải dùng **802.1X/EAP**.
- Đổi thông tin mặc định (Admin/Pass) của Router ngay khi lắp đặt.
  Chào bạn, dựa trên nội dung các slide bài giảng đã phân tích trước đó, mình xin giải chi tiết đề ôn tập chương VII này.

---

### **PHẦN I. CÂU HỎI TỰ LUẬN**

**Câu 1: Biện pháp nào được sử dụng nhằm giảm nguy cơ từ mối đe dọa AP giả mạo (Rogue AP/Evil Twin)?**

- **Đáp án:** Biện pháp hiệu quả nhất là sử dụng cơ chế **Xác thực lẫn nhau (Mutual Authentication)**.
- **Giải thích:**
  - Trong các mạng thông thường (như WEP hoặc WPA-Personal), chỉ có Client xác thực với AP (bằng cách nhập đúng mật khẩu). Client không có cách nào biết AP đó là thật hay giả.
  - Với **Mutual Authentication** (thường thấy trong **WPA-Enterprise/802.1x** sử dụng EAP-TLS hoặc PEAP), Client sẽ kiểm tra "Chứng chỉ số" (Certificate) của Server/AP trước khi gửi thông tin đăng nhập. Nếu AP giả mạo không có chứng chỉ hợp lệ do Doanh nghiệp cấp, Client sẽ từ chối kết nối.
  - Ngoài ra, quản trị viên có thể dùng các công cụ quét mạng (IDS/IPS) để phát hiện sóng lạ.

**Câu 2: Mã hóa trong WEP dùng thuật toán gì?**

- **Đáp án:** Thuật toán **RC4** (Rivest Cipher 4).
- **Giải thích:** WEP sử dụng RC4, là một thuật toán mã hóa dòng (Stream Cipher). Nó kết hợp Khóa bí mật (Web Key) và Vector khởi tạo (IV - 24 bit) để tạo ra dòng khóa (Keystream) rồi XOR với dữ liệu.

**Câu 3: Phân biệt chế độ WPA doanh nghiệp và WPA cá nhân.**

- **Đáp án:**
  - **WPA Cá nhân (Personal / WPA-PSK):**
    - _Đối tượng:_ Dùng cho gia đình, văn phòng nhỏ.
    - _Xác thực:_ Dùng **Pre-Shared Key (PSK)** - Tất cả mọi người dùng chung một mật khẩu để kết nối.
    - _Quản lý khóa:_ Dùng cơ chế bắt tay 4 bước (4-way handshake) để sinh khóa phiên từ mật khẩu chung.
  - **WPA Doanh nghiệp (Enterprise):**
    - _Đối tượng:_ Dùng cho công ty lớn, tổ chức.
    - _Xác thực:_ Dùng chuẩn **802.1x/EAP**. Yêu cầu mỗi người dùng có tài khoản riêng (Username/Password) hoặc chứng chỉ số.
    - _Hạ tầng:_ Cần có **RADIUS Server** (Authentication Server) để quản lý xác thực tập trung.
    - _An toàn:_ Cao hơn vì không dùng chung mật khẩu, dễ dàng thu hồi quyền truy cập của từng cá nhân.

**Câu 4: Mã hóa trong WPA2 dùng thuật toán gì?**

- **Đáp án:** Thuật toán **AES** (Advanced Encryption Standard).
- **Giải thích:** Cụ thể, WPA2 sử dụng giao thức **CCMP** (Counter Mode with CBC-MAC Protocol) chạy trên nền tảng thuật toán mã hóa khối AES để đảm bảo tính bí mật và toàn vẹn dữ liệu.

**Câu 5: So sánh các chuẩn an ninh WLAN.**
(Dựa trên Slide 44)

- **Đáp án:**

| Đặc điểm                 | **WEP**                | **WPA**                      | **WPA2**             |
| :----------------------- | :--------------------- | :--------------------------- | :------------------- |
| **Mã hóa (Encryption)**  | RC4                    | RC4 + TKIP                   | **AES** + CCMP       |
| **Toàn vẹn (Integrity)** | CRC-32 (Dễ bị sửa đổi) | MIC (Message Integrity Code) | CBC-MAC              |
| **Quản lý khóa**         | Không có (Static Key)  | 4-way handshake              | 4-way handshake      |
| **Xác thực**             | Open / Shared Key      | PSK / 802.1x (EAP)           | PSK / 802.1x (EAP)   |
| **Đánh giá**             | Rất yếu (Không dùng)   | Tạm thời (Vá lỗi cho WEP)    | An toàn (Tiêu chuẩn) |

---

### **PHẦN II. CÂU HỎI TRẮC NGHIỆM**

**Câu 1: WEP được viết tắt là:**

- **Đáp án:** **c. Wired Equivalent Privacy**
- **Giải thích:** (Dựa theo Slide 15). Ý nghĩa là "Sự riêng tư tương đương mạng có dây" (dù thực tế nó không làm được điều này). Các đáp án có chữ "Wireless" hay "Protocol" đều là bẫy.

**Câu 2: Điểm yếu thật sự của WEP trong vấn đề mã hóa là:**

- **Đáp án:** **c. Thuật toán lập lịch khóa của RC4**
- **Giải thích:** (Dựa theo Slide 29). Mặc dù dùng khóa ngắn (b) cũng là điểm yếu, nhưng nguyên nhân gốc rễ khiến WEP bị phá vỡ hoàn toàn là do lỗ hổng trong thuật toán lập lịch khóa (Key Scheduling Algorithm) của RC4 khi kết hợp với IV (Vector khởi tạo) quá ngắn và gửi dưới dạng bản rõ. Điều này dẫn đến các cuộc tấn công như FMS Attack.

**Câu 3: Tiêu chuẩn an ninh mạnh mẽ hơn được phát triển bởi IEEE để giải quyết các lỗ hổng chuẩn WLAN IEEE 802.11 là:**

- **Đáp án:** **c. IEEE 802.11i**
- **Giải thích:** (Dựa theo Slide 41).
  - 802.11i chính là chuẩn định nghĩa WPA2 (RSN - Robust Security Network).
  - 802.11e là về QoS (Chất lượng dịch vụ).
  - 802.11n là chuẩn về tốc độ/vùng phủ sóng.

**Câu 4: Khác biệt giữa WPA và WPA2 là:**

- **Đáp án:** **b. WPA mã hóa dùng RC4 với TKIP/MIC, WPA2 mã hóa dùng AES.**
- **Giải thích:** Đây là sự khác biệt chính xác nhất về mặt kỹ thuật.
  - WPA là bản vá phần mềm dùng phần cứng cũ (RC4) nhưng thêm TKIP để xoay vòng khóa và MIC để kiểm tra toàn vẹn.
  - WPA2 (802.11i) yêu cầu phần cứng mới để chạy thuật toán AES mạnh mẽ hơn.
  - Câu (a) thiếu chi tiết TKIP/MIC. Câu (c) sai vì cả hai đều hỗ trợ PSK và 802.1x.

**Câu 5: Chọn phát biểu sai trong các phát biểu sau:**

- **Đáp án:** **c. WPA2 cho phép các client AES và TKIP được hoạt động trên cùng WLAN.**
- **Giải thích:**
  - **Tại sao câu này Sai (trong ngữ cảnh chuẩn):** Chuẩn **WPA2 thuần túy** bắt buộc sử dụng AES (CCMP). Việc cho phép TKIP chạy song song được gọi là **Mixed Mode** (Chế độ hỗn hợp WPA/WPA2), chứ không phải là tính năng của bản thân chuẩn WPA2. Hơn nữa, các thiết bị đạt chứng nhận WPA2 hiện đại thường loại bỏ hoặc cảnh báo khi dùng TKIP vì nó không an toàn.
  - _Phân tích các câu khác:_
    - (a) Đúng: WPA là bản nháp (tập con) của 802.11i (Slide 30).
    - (b) Đúng: AES là mã hóa khối đối xứng (Symmetric Block Cipher) (Slide 42).
    - (d) Đúng: 802.11i sử dụng chuẩn 802.1x, hoạt động dựa trên cơ chế kiểm soát truy cập cổng (Port-based authentication). Port ở đây là khái niệm logic (controlled/uncontrolled port).
