Chào bạn, để nắm vững chương **Bảo mật tầng vận chuyển (Transport Layer Security)** này phục vụ cho thi cử và làm việc, tôi sẽ cô đọng lại toàn bộ kiến thức thành **5 trọng tâm cốt lõi** sau đây.

Hãy coi đây là "tờ phao" kiến thức của bạn.

---

### 1. Kiến trúc phân tầng của SSL/TLS (Cấu trúc)

Bạn phải hình dung SSL/TLS không phải là một khối duy nhất, mà gồm **2 lớp hoạt động chồng lên nhau**:

- **Lớp dưới (Người vận chuyển): Giao thức Record (Record Protocol)**
  - **Nhiệm vụ:** Nhận dữ liệu từ lớp trên, cắt nhỏ, nén (ít dùng), **tính MAC** (để bảo toàn vẹn), **mã hóa** (để bảo mật), và gắn Header.
  - **Đặc điểm:** Nó không quan tâm nội dung là gì, chỉ biết đóng gói và gửi đi an toàn.
- **Lớp trên (Người quản lý):** Gồm 4 giao thức con chạy trên nền Record Protocol:
  1.  **Handshake:** Quan trọng nhất - Dùng để bắt tay, đàm phán thuật toán và tạo khóa.
  2.  **Change Cipher Spec:** Tín hiệu báo "Bắt đầu mã hóa từ gói sau nhé".
  3.  **Alert:** Báo lỗi hoặc cảnh báo (quan trọng nhất là `close_notify` để đóng kết nối an toàn).
  4.  **Heartbeat/Application Data:** Dữ liệu thực tế.

---

### 2. Quy trình Bắt tay (Handshake) - Trái tim của TLS

Đây là phần hay bị hỏi thi nhất. Bạn cần nhớ quy trình 4 giai đoạn:

1.  **Thỏa thuận (Hello Phase):** Client và Server chào nhau, chốt phiên bản TLS (ví dụ 1.2) và bộ thuật toán (Cipher Suite - ví dụ dùng AES để mã hóa, RSA để trao đổi khóa). Gửi 2 số ngẫu nhiên (_Random nonces_).
2.  **Xác thực Server:** Server gửi **Chứng chỉ số (Certificate)**. Trình duyệt kiểm tra xem Chứng chỉ này có do tổ chức uy tín (CA) cấp không.
3.  **Trao đổi khóa (Key Exchange) - CỰC QUAN TRỌNG:**
    - Client tạo ra một bí mật gọi là **Pre-master Secret**.
    - Client mã hóa bí mật này bằng **Khóa công khai (Public Key)** của Server và gửi đi.
    - Chỉ Server (có khóa riêng) mới giải mã được.
    - **Kết quả:** Cả hai bên cùng tính ra **Master Secret** từ bí mật này -> Đẻ ra các khóa phiên (Session Keys) để mã hóa dữ liệu.
4.  **Kết thúc (Finish):** Gửi gói tin `Finished` (đã được mã hóa) để kiểm tra lại toàn bộ quá trình xem có ai can thiệp không.

---

### 3. Phân biệt Session (Phiên) và Connection (Kết nối)

Khái niệm dễ nhầm lẫn nhất:

- **Session (Phiên):** Là mối quan hệ **lâu dài**. Chứa "công thức" (thuật toán đã chọn) và "nguyên liệu gốc" (Master Secret). Việc tạo Session rất tốn kém (do phải chạy Handshake RSA/Diffie-Hellman).
- **Connection (Kết nối):** Là đường truyền **tạm thời** (TCP). Từ một Session, có thể tạo ra nhiều Connection nhanh chóng mà không cần bắt tay lại từ đầu (tính năng _Resumable_).

---

### 4. HTTPS và Mô hình tin cậy

- **Bản chất:** HTTPS = HTTP + SSL/TLS. Chạy cổng 443.
- **Nó bảo vệ cái gì?** URL, nội dung trang web, cookies, headers.
- **Nó KHÔNG bảo vệ cái gì?** Địa chỉ IP và Tên miền (Server Name) vẫn có thể bị lộ ở lớp dưới.
- **Mô hình tin cậy:** Dựa hoàn toàn vào **CA (Certificate Authority)**. Nếu CA bị hack hoặc cấp chứng chỉ khống, HTTPS sụp đổ.

---

### 5. SSH (Secure Shell) - Quản trị từ xa

Khác với TLS dùng cho Web, SSH dùng để admin server.

- **Kiến trúc:** 3 lớp (Transport -> User Auth -> Connection).
- **Xác thực:**
  - **Server:** Dùng mô hình **TOFU (Trust On First Use)**. Lần đầu kết nối bạn phải tự xác nhận "vân tay" server, máy sẽ lưu vào `known_hosts`.
  - **User:** Khuyên dùng **Public Key** (tạo cặp khóa, chép Public lên server) thay vì Password.
- **Tính năng vàng: Port Forwarding (Tunneling):**
  - Biến SSH thành một cái "ống nước" an toàn.
  - Nhét các giao thức không an toàn (như Telnet, Database connection) chui qua cái ống này để đi từ máy A sang máy B mà không bị nghe lén.

---

### Bảng so sánh nhanh (Dùng để trả lời trắc nghiệm)

| Đặc điểm            | SSL/TLS                             | SSH                                          |
| :------------------ | :---------------------------------- | :------------------------------------------- |
| **Mục đích chính**  | Bảo mật truyền dữ liệu (Web, Email) | Đăng nhập và quản trị từ xa an toàn          |
| **Tầng hoạt động**  | Transport Layer (Lớp vận chuyển)    | Lớp Ứng dụng (nhưng hoạt động như Transport) |
| **Xác thực Server** | Dựa vào bên thứ 3 (CA)              | Dựa vào niềm tin lần đầu (TOFU/known_hosts)  |
| **Xác thực Client** | Ít dùng (trừ hệ thống nội bộ)       | Bắt buộc (Password hoặc Public Key)          |
| **Cổng mặc định**   | 443 (HTTPS)                         | 22                                           |

**Mẹo thi:**

- Hỏi về **Integrity** (Toàn vẹn) $\rightarrow$ Nhớ đến **MAC**.
- Hỏi về **Confidentiality** (Bí mật) $\rightarrow$ Nhớ đến **Mã hóa (AES/ChaCha20)**.
- Hỏi về **Key Exchange** $\rightarrow$ Nhớ đến **Pre-master Secret**.
- Hỏi về **SSH an toàn nhất** $\rightarrow$ Nhớ đến **Public Key Auth** và **SSHv2**.
  Chào bạn, dựa trên kiến thức từ bộ slide bạn đã cung cấp trước đó và kiến thức chuyên môn về An ninh mạng, tôi xin giải chi tiết bộ câu hỏi và bài tập Chương VI này.

---

# PHẦN I: CÂU HỎI TỰ LUẬN

**Câu 1: Cho biết các hướng tiếp cận để bảo mật Web và ưu điểm của mỗi hướng tiếp cận.**

- _(Tham khảo Slide 6)_
- **Có 3 hướng tiếp cận chính:**
  1.  **IPSec (Network Level):** Bảo mật ở tầng mạng (Network Layer).
      - _Ưu điểm:_ Trong suốt với người dùng cuối và ứng dụng (ứng dụng không cần sửa code). Bảo mật traffic từ host-to-host.
  2.  **SSL/TLS (Transport Level):** Bảo mật ở tầng vận chuyển (nằm ngay trên TCP).
      - _Ưu điểm:_ Được hỗ trợ rộng rãi bởi hầu hết các trình duyệt và server. Cung cấp bảo mật đầu cuối (end-to-end) cho tiến trình cụ thể.
  3.  **Application Level (HTTPS, S/MIME, v.v.):** Tích hợp bảo mật trực tiếp vào ứng dụng.
      - _Ưu điểm:_ Có thể tùy chỉnh sâu theo logic của ứng dụng, không phụ thuộc vào hạ tầng mạng bên dưới.

**Câu 2: Cho biết các giao thức trong TLS.**

- _(Tham khảo Slide 11)_
- TLS bao gồm hai lớp giao thức chính:
  1.  **Lớp dưới:**
      - **Giao thức Record (Record Protocol):** Đóng gói, nén, mã hóa và tính toàn vẹn dữ liệu.
  2.  **Lớp trên (hoạt động trên nền Record Protocol):**
      - **Handshake Protocol:** Thiết lập kết nối, xác thực và thỏa thuận khóa.
      - **Change Cipher Spec Protocol:** Báo hiệu chuyển sang chế độ mã hóa.
      - **Alert Protocol:** Thông báo lỗi hoặc cảnh báo.
      - **Heartbeat Protocol:** Kiểm tra tính sẵn sàng của kết nối.

**Câu 3: Cho biết khác biệt giữa một kết nối TLS và một phiên TLS.**

- _(Tham khảo Slide 12)_
- **Phiên TLS (TLS Session):** Là một mối quan hệ lâu dài, được tạo ra sau quá trình bắt tay (Handshake) đầy đủ. Nó lưu trữ các thông số bảo mật (Master Secret, thuật toán) để có thể tái sử dụng. Mục đích để tránh phải đàm phán lại từ đầu gây tốn kém tài nguyên.
- **Kết nối TLS (TLS Connection):** Là một liên kết vận chuyển tạm thời (thường là kết nối TCP). Một phiên TLS có thể bao gồm nhiều kết nối TLS. Các kết nối này sử dụng lại thông tin từ Phiên để thiết lập nhanh chóng.

**Câu 4: Liệt kê và xác định ngắn gọn các tham số xác định trạng thái phiên TLS.**

- _(Tham khảo Slide 13)_
- **Session identifier:** Chuỗi byte xác định phiên.
- **Peer certificate:** Chứng chỉ số của đối tác (X509.v3).
- **Compression method:** Thuật toán nén dữ liệu.
- **Cipher spec:** Thông số về thuật toán mã hóa và thuật toán MAC.
- **Master secret:** Bí mật 48-byte dùng chung giữa client và server.
- **Is resumable:** Cờ cho biết phiên có thể dùng lại cho kết nối mới hay không.

**Câu 5: Liệt kê và xác định ngắn gọn các tham số xác định kết nối TLS.**

- _(Tham khảo Slide 14)_
- **Server and client random:** Các chuỗi byte ngẫu nhiên cho mỗi kết nối.
- **Server write MAC secret:** Khóa MAC cho dữ liệu server gửi.
- **Client write MAC secret:** Khóa MAC cho dữ liệu client gửi.
- **Server write key:** Khóa mã hóa cho dữ liệu server gửi.
- **Client write key:** Khóa mã hóa cho dữ liệu client gửi.
- **Initialization vectors (IV):** Vector khởi tạo cho chế độ mã hóa khối (CBC).
- **Sequence numbers:** Số thứ tự gói tin.

**Câu 6: Cho biết các cấp độ nhận biết về kết nối trong HTTPS.**

- _(Tham khảo Slide 30)_
- Có 3 cấp độ:
  1.  **Cấp độ HTTP:** Kết nối logic ở tầng ứng dụng (gửi request/response).
  2.  **Cấp độ TLS:** Phiên làm việc bảo mật (Session) hỗ trợ một hoặc nhiều kết nối.
  3.  **Cấp độ TCP:** Kết nối vận chuyển vật lý ảo giữa hai máy.

**Câu 7: Giao thức nào được thay thế bằng SSH và tại sao? Phiên bản nào hiện đang trong quá trình được tiêu chuẩn hóa?**

- _(Tham khảo Slide 34)_
- SSH thay thế cho **TELNET, RLOGIN, FTP**.
- **Tại sao:** Vì các giao thức cũ (Telnet, FTP...) truyền mật khẩu và dữ liệu dưới dạng văn bản rõ (cleartext), dễ bị nghe lén. SSH mã hóa toàn bộ phiên làm việc.
- **Phiên bản:** **SSHv2** (SSH version 2) là tiêu chuẩn (theo Slide ghi là "được đề xuất trong IETF RFC 4250 đến 4256", thực tế hiện nay nó là chuẩn mặc định, còn SSH1 đã lỗi thời).

**Câu 8: Liệt kê và định nghĩa ngắn gọn các giao thức SSH.**

- _(Tham khảo Slide 35)_
- **SSH Transport Layer Protocol:** Cung cấp xác thực máy chủ, bảo mật dữ liệu, và tính toàn vẹn (tương tự TLS Record + Handshake).
- **SSH User Authentication Protocol:** Xác thực người dùng (Client) với máy chủ (dùng password hoặc public key).
- **SSH Connection Protocol:** Ghép kênh (multiplexing) các luồng dữ liệu logic (session, forwarding) trên một đường hầm đã mã hóa.

---

# PHẦN II: CÂU HỎI TRẮC NGHIỆM

**Câu 1: SSL/TLS không có khả năng chống lại loại tấn công nào sau đây:**

- **Đáp án: d. SYN Flooding**
- **Giải thích:**
  - _Password Sniffing:_ SSL mã hóa dữ liệu nên chống được nghe lén.
  - _Man-in-the-Middle:_ SSL dùng chứng chỉ số xác thực server nên chống được giả mạo.
  - _Replay:_ SSL dùng số thứ tự (Sequence number) và Nonce nên chống được phát lại.
  - _SYN Flooding:_ Đây là tấn công từ chối dịch vụ (DoS) ở tầng TCP (Layer 4) xảy ra _trước khi_ SSL bắt tay. SSL/TLS nằm trên TCP nên không thể ngăn chặn việc tràn ngập gói tin SYN ở tầng dưới.

**Câu 2: Cho biết giao thức nào sau đây không có trong SSL/TLS:**

- **Đáp án: a. Message Protocol.**
- **Giải thích:** Trong ngăn xếp giao thức SSL/TLS (Slide 11) chỉ có: Handshake, Change Cipher Spec, Alert, Heartbeat và Record Protocol. Không có cái nào tên là "Message Protocol".

**Câu 3: Chọn phát biểu đúng trong các phát biểu sau khi nói về kết nối TLS (TLS connection) và phiên TLS(TLS session):**

- **Đáp án: d. Các câu trên đều sai**
- **Giải thích:**
  - Câu a sai vì: Một phiên TLS trải qua nhiều kết nối, chứ không phải một kết nối có nhiều phiên.
  - Câu b sai vì: **Phiên (Session)** mới là thứ định nghĩa bộ tham số dùng chung, còn kết nối chỉ sử dụng lại chúng.
  - Câu c sai vì: Phải là **Phiên TLS** được sử dụng để tránh tốn kém cho mỗi **kết nối TLS**. (Câu này viết ngược vai trò).

**Câu 4: Cho biết phát biểu sai trong các phát biểu sau khi nói về HTTPS:**

- **Đáp án: d. Nếu HTTPS được chỉ định, cổng 80 vẫn sẽ được sử dụng để gọi SSL**
- **Giải thích:**
  - HTTP chạy cổng 80.
  - HTTPS (HTTP over SSL/TLS) sử dụng cổng mặc định là **443**. (Tham khảo Slide 29).

**Câu 5: Phương pháp xác thực SSH nào xác thực được thực hiện trên máy chủ khách chứ không phải trên chính máy khách.**

- **Đáp án: c. Hostbased**
- **Giải thích:** Dựa theo Slide 40: "Hostbased: Xác thực được thực hiện trên máy chủ khách chứ không phải trên chính máy khách". Đây là phương pháp dựa trên sự tin cậy giữa Server và máy Client (Host) chứ không xác thực trực tiếp người dùng đang ngồi máy đó.
