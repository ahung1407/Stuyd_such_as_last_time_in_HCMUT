Dưới đây là đáp án chi tiết cho các câu hỏi của bạn, dựa trên nội dung các slide lý thuyết về Bảo mật Web, SSL/TLS và SSH mà bạn đã cung cấp.

---

### I. CÂU HỎI TỰ LUẬN

**1. Cho biết các hướng tiếp cận để bảo mật Web và ưu điểm của mỗi hướng tiếp cận.**
Có 3 hướng tiếp cận chính tương ứng với các tầng trong mô hình OSI:
* **Network Level (Tầng mạng - IPSec):**
    * *Ưu điểm:* Trong suốt với người dùng và ứng dụng (không cần cài đặt hay sửa đổi phần mềm). Cung cấp bảo mật tổng quát cho mọi lưu lượng mạng đi qua, bao gồm cả tiêu đề gói tin.
* **Transport Level (Tầng giao vận - SSL/TLS):**
    * *Ưu điểm:* Dễ dàng triển khai trên các ứng dụng cụ thể (như trình duyệt Web). Cung cấp bảo mật từ đầu cuối đến đầu cuối (end-to-end) cho tiến trình ứng dụng.
* **Application Level (Tầng ứng dụng - S/MIME, Kerberos, SET):**
    * *Ưu điểm:* Cho phép tùy chỉnh bảo mật sâu sát với logic của ứng dụng. Có thể bảo mật từng phần dữ liệu cụ thể thay vì toàn bộ đường truyền.

**2. Cho biết các giao thức trong TLS.**
TLS bao gồm 2 lớp giao thức chính:
* **Lớp dưới:**
    * **Record Protocol:** Cung cấp dịch vụ bảo mật và toàn vẹn dữ liệu cơ bản cho các giao thức lớp trên.
* **Lớp trên (Quản lý và Ứng dụng):**
    * **Handshake Protocol:** Xác thực và đàm phán tham số bảo mật.
    * **Change Cipher Spec Protocol:** Báo hiệu chuyển sang chế độ mã hóa mới.
    * **Alert Protocol:** Thông báo lỗi và cảnh báo.
    * **Heartbeat Protocol:** Duy trì kết nối và kiểm tra tính sẵn sàng.

**3. Cho biết khác biệt giữa một kết nối TLS và một phiên TLS.**
* **Phiên TLS (Session):** Là một mối quan hệ logic lâu dài, được tạo ra sau quá trình bắt tay tốn kém. Nó chứa các tham số mật mã (Master Secret, thuật toán) có thể dùng lại.
* **Kết nối TLS (Connection):** Là một kênh truyền tải tạm thời (thường là TCP). Một phiên có thể phục vụ cho nhiều kết nối. Kết nối sử dụng lại thông tin của phiên để tránh phải đàm phán lại từ đầu.

**4. Liệt kê và xác định ngắn gọn các tham số xác định trạng thái phiên TLS.**
* **Session identifier:** Chuỗi byte định danh phiên.
* **Peer certificate:** Chứng chỉ số của đối tác (X509.v3).
* **Compression method:** Thuật toán nén dữ liệu.
* **Cipher spec:** Đặc tả thuật toán mã hóa và hàm băm (MAC).
* **Master secret:** Khóa bí mật chủ (48 byte) dùng để sinh các khóa con.
* **Is resumable:** Cờ cho biết phiên có thể tái sử dụng hay không.

**5. Liệt kê và xác định ngắn gọn các tham số xác định kết nối TLS.**
* **Server and client random:** Các số ngẫu nhiên sinh ra cho mỗi kết nối.
* **Server write MAC secret:** Khóa MAC server dùng để ký.
* **Client write MAC secret:** Khóa MAC client dùng để ký.
* **Server write key:** Khóa server dùng để mã hóa.
* **Client write key:** Khóa client dùng để mã hóa.
* **Initialization vectors (IV):** Vectơ khởi tạo cho mã hóa khối.
* **Sequence numbers:** Số thứ tự gói tin để chống tấn công phát lại.

**6. Cho biết các cấp độ nhận biết về kết nối trong HTTPS.**
Có 3 cấp độ:
1.  **Cấp độ HTTP:** Máy khách HTTP yêu cầu kết nối logic.
2.  **Cấp độ TLS:** Một phiên (Session) được thiết lập giữa máy khách và máy chủ TLS.
3.  **Cấp độ TCP:** Một kết nối vật lý/vận chuyển được thiết lập giữa hai thực thể TCP.

**7. Giao thức nào được thay thế bằng SSH và tại sao? Phiên bản nào hiện đang trong quá trình được tiêu chuẩn hóa?**
* **Giao thức bị thay thế:** Telnet, rlogin, rsh.
* **Tại sao:** Vì các giao thức cũ truyền dữ liệu (bao gồm mật khẩu) dưới dạng văn bản rõ (plaintext), dễ bị nghe lén. SSH cung cấp mã hóa an toàn.
* **Phiên bản chuẩn hóa:** SSH2 (được ghi lại trong IETF RFC 4250 đến 4256).

**8. Liệt kê và định nghĩa ngắn gọn các giao thức SSH.**
* **SSH Transport Layer Protocol:** Cung cấp xác thực máy chủ, bảo mật dữ liệu và tính toàn vẹn.
* **SSH User Authentication Protocol:** Xác thực người dùng phía client với server.
* **SSH Connection Protocol:** Đa kênh hóa đường hầm mã hóa thành nhiều kênh logic.

---

### II. CÂU HỎI TRẮC NGHIỆM

**1. SSL/TLS không có khả năng chống lại loại tấn công nào sau đây:**
* **Đáp án: d. SYN Flooding**
* *Giải thích:* SYN Flooding là tấn công từ chối dịch vụ (DoS) ở tầng TCP (lớp 4), xảy ra trong quá trình bắt tay TCP *trước khi* SSL/TLS bắt đầu hoạt động. SSL/TLS chống nghe lén (a), xác thực chống giả mạo (b), và dùng số thứ tự chống phát lại (c).

**2. Cho biết giao thức nào sau đây không có trong SSL/TLS:**
* **Đáp án: a. Message Protocol.**
* *Giải thích:* Trong kiến trúc SSL/TLS chỉ có Record, Handshake, Alert, Change Cipher Spec và Heartbeat. Không có giao thức nào tên là "Message Protocol".

**3. Chọn phát biểu đúng trong các phát biểu sau khi nói về kết nối TLS (TLS connection) và phiên TLS (TLS session):**
* **Đáp án: d. Các câu trên đều sai**
* *Giải thích:*
    * Câu a sai vì: Một phiên có nhiều kết nối (chứ không phải một kết nối có nhiều phiên).
    * Câu b sai vì: **Phiên** định nghĩa bộ tham số và chia sẻ cho nhiều kết nối (câu này nói ngược).
    * Câu c sai vì: **Phiên** được sử dụng để tránh tốn kém (việc tái sử dụng phiên giúp tạo kết nối nhanh hơn, chứ bản thân kết nối không phải là công cụ để tránh tốn kém, nó là cái tiêu thụ tài nguyên).

**4. Cho biết phát biểu sai trong các phát biểu sau khi nói về HTTPS:**
* **Đáp án: d. Nếu HTTPS được chỉ định, cổng 80 vẫn sẽ được sử dụng để gọi SSL**
* *Giải thích:* HTTPS sử dụng cổng **443**, trong khi cổng 80 là của HTTP thường.

**5. Phương pháp xác thực SSH nào xác thực được thực hiện trên máy chủ khách chứ không phải trên chính máy khách.**
* **Đáp án: c. Hostbased**
* *Giải thích:* Phương pháp Hostbased xác thực dựa trên niềm tin vào máy trạm (host) mà người dùng đang ngồi, dựa trên khóa của máy đó, thay vì xác thực trực tiếp người dùng (như Password hay Public Key).