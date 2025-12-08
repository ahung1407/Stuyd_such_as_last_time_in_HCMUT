Hình ảnh bạn cung cấp là một bảng tổng hợp về **"Xem xét Bảo mật Web" (Web Security Considerations)**. Bảng này phân tích 4 khía cạnh cốt lõi của an ninh mạng, liệt kê các mối đe dọa (Threats), hậu quả (Consequences) và biện pháp đối phó (Countermeasures) tương ứng.

Dưới đây là giải thích chi tiết cho từng hàng trong bảng:

### 1. Integrity (Tính toàn vẹn)
Khía cạnh này đảm bảo rằng dữ liệu không bị thay đổi hoặc phá hủy trái phép.
* **Mối đe dọa (Threats):**
    * Sửa đổi dữ liệu người dùng.
    * Trình duyệt bị nhiễm mã độc (Trojan horse browser).
    * Sửa đổi dữ liệu trong bộ nhớ máy tính.
    * Sửa đổi nội dung tin nhắn/gói tin khi đang truyền tải trên mạng.
* **Hậu quả (Consequences):** Mất thông tin, máy tính bị xâm nhập/chiếm quyền kiểm soát, tạo lỗ hổng cho các mối đe dọa khác tấn công.
* **Biện pháp đối phó (Countermeasures):** **Cryptographic checksums** (Tổng kiểm mật mã). Đây là kỹ thuật dùng thuật toán (như hàm băm) để tạo ra một chuỗi ký tự đại diện cho dữ liệu. Nếu dữ liệu bị sửa đổi dù chỉ 1 bit, chuỗi checksum sẽ thay đổi, giúp phát hiện sự can thiệp.

### 2. Confidentiality (Tính bảo mật/bí mật)
Khía cạnh này đảm bảo thông tin chỉ được tiếp cận bởi những người được cấp quyền (ngăn chặn rò rỉ thông tin).
* **Mối đe dọa (Threats):**
    * Nghe lén trên mạng (Eavesdropping - ví dụ hacker bắt gói tin wifi).
    * Trộm cắp thông tin từ máy chủ (Server).
    * Trộm cắp dữ liệu từ máy khách (Client - máy người dùng).
    * Lộ thông tin về cấu hình mạng.
    * Lộ thông tin về việc máy khách nào đang giao tiếp với máy chủ.
* **Hậu quả (Consequences):** Mất mát thông tin, mất quyền riêng tư (Privacy).
* **Biện pháp đối phó (Countermeasures):**
    * **Encryption (Mã hóa):** Biến đổi thông tin thành dạng không đọc được nếu không có khóa giải mã.
    * **Web proxies:** Sử dụng máy chủ trung gian để ẩn danh tính hoặc lọc thông tin.

### 3. Denial of Service (Từ chối dịch vụ - DoS)
Đây là hành động tấn công làm tê liệt hệ thống, khiến người dùng hợp lệ không thể truy cập dịch vụ. * **Mối đe dọa (Threats):**
    * Diệt/tắt các luồng xử lý (threads) của người dùng.
    * Làm ngập máy chủ bằng các yêu cầu giả mạo (flooding).
    * Làm đầy ổ cứng hoặc bộ nhớ (RAM) để máy chủ không còn tài nguyên hoạt động.
    * Cô lập máy bằng cách tấn công hệ thống phân giải tên miền (DNS).
* **Hậu quả (Consequences):** Gây gián đoạn, phiền toái, ngăn cản người dùng thực hiện công việc của họ.
* **Biện pháp đối phó (Countermeasures):** **Difficult to prevent** (Khó ngăn chặn). Bảng này nhận định rằng DoS là một vấn đề khó giải quyết triệt để (thường cần kết hợp nhiều giải pháp phần cứng và hạ tầng mạng lớn).

### 4. Authentication (Xác thực)
Khía cạnh này xác minh danh tính của người dùng hoặc hệ thống (đảm bảo "bạn đúng là người mà bạn khai báo").
* **Mối đe dọa (Threats):**
    * Mạo danh người dùng hợp pháp (Impersonation).
    * Giả mạo dữ liệu (Data forgery).
* **Hậu quả (Consequences):** Hiểu sai về người dùng (ví dụ: hacker mạo danh CEO gửi mail), tin tưởng vào thông tin sai lệch là đúng.
* **Biện pháp đối phó (Countermeasures):** **Cryptographic techniques** (Các kỹ thuật mật mã). Ví dụ như dùng Chữ ký số (Digital Signatures), Chứng chỉ số (Certificates) hoặc các giao thức xác thực bảo mật để chứng minh danh tính.

**Tóm lại:** Bảng này cung cấp một cái nhìn tổng quan về việc bảo mật web không chỉ là "cài phần mềm diệt virus", mà là việc bảo vệ toàn diện từ dữ liệu, đường truyền, tính sẵn sàng của hệ thống cho đến việc xác minh danh tính người dùng.
Hình ảnh bạn cung cấp là một slide bài giảng về **các cấp độ bảo mật trong môi trường Web**, so sánh việc áp dụng bảo mật ở 3 tầng khác nhau trong mô hình OSI: Network (Mạng), Transport (Giao vận), và Application (Ứng dụng).

Dưới đây là giải thích chi tiết từng phần và **đáp án để điền vào bảng trống** bên dưới:

### 1\. Phần sơ đồ (a, b, c)

Sơ đồ minh họa vị trí của giao thức bảo mật trong ngăn xếp giao thức (Protocol Stack).

  * **(a) Network level (Tầng mạng):**

      * Sử dụng **IPSec (IP Security)**.
      * Nó nằm ở tầng IP. Điều này có nghĩa là *mọi thứ* chạy trên nền IP (như TCP, UDP, và các ứng dụng bên trên như HTTP, FTP) đều được bảo vệ tự động "trong đường ống" này. Giống như bạn đi trong một đường hầm chống đạn, bất kể bạn đi xe gì (TCP hay UDP) đều an toàn.

  * **(b) Transport level (Tầng giao vận) - *Phần bạn khoanh vùng*:**

      * Sử dụng **SSL hoặc TLS**.
      * Nó nằm **trên** TCP nhưng **dưới** các ứng dụng (HTTP, FTP).
      * **Ý nghĩa:** Nó bảo vệ dữ liệu của phiên làm việc (session). Khi HTTP chạy trên nền SSL/TLS, ta có HTTPS. Nó đảm bảo mã hóa từ đầu cuối đến đầu cuối (end-to-end) giữa trình duyệt và máy chủ.

  * **(c) Application level (Tầng ứng dụng):**

      * Sử dụng các giao thức riêng biệt như **Kerberos, S/MIME**.
      * Bảo mật được tích hợp thẳng vào logic của ứng dụng. Ví dụ: S/MIME dùng để mã hóa nội dung email ngay trong ứng dụng mail.

-----

### 2\. Giải đáp và điền vào bảng so sánh (Phần quan trọng)

Dưới đây là nội dung để bạn điền vào các ô trống trong bảng màu xanh:

| Tiêu chí | IPsec (Network Level) | SSL/TLS (Transport Level) | HTTPS / App Security (Application Level) |
| :--- | :--- | :--- | :--- |
| **Layer in OSI**<br>(Tầng OSI) | Network (3) | Transport (4) | Application (7) |
| **What packets are encapsulated?**<br>(Gói tin nào được đóng gói?) | **IP Packets** (Toàn bộ gói tin IP hoặc phần tải của IP bao gồm cả header TCP/UDP) | **Application Data** (Dữ liệu ứng dụng, ví dụ: thông điệp HTTP) | **Message Payload** (Nội dung thông điệp cụ thể của ứng dụng) |
| **Transparent to users?**<br>(Trong suốt với người dùng?) | **YES (Có)**<br>Người dùng không cần làm gì, hệ điều hành tự lo (ví dụ: VPN). | **NO (Không)**<br>Người dùng thấy biểu tượng "ổ khóa" hoặc `https://`. | **NO (Không)**<br>Người dùng phải chủ động thực hiện (ví dụ: ký số email). |
| **Transparent to developers?**<br>(Trong suốt với lập trình viên?) | **YES (Có)**<br>Lập trình viên viết code mạng bình thường, không cần sửa đổi gì. | **NO (Không)**<br>Lập trình viên phải dùng thư viện SSL/Socket bảo mật để code. | **NO (Không)**<br>Lập trình viên phải viết code logic mã hóa riêng cho ứng dụng. |

-----

### Tóm tắt ý nghĩa thực tế:

1.  **IPsec:** Thường dùng cho **VPN** (kết nối 2 văn phòng với nhau). Nó bảo vệ mọi lưu lượng mạng.
2.  **SSL/TLS (Phần bạn khoanh):** Là tiêu chuẩn của **Web (HTTPS)**. Nó cân bằng tốt: đủ bảo mật cho giao dịch web và đủ dễ dàng để triển khai mà không cần can thiệp sâu vào hệ điều hành như IPsec.
3.  **App Level:** Dùng cho các nhu cầu đặc biệt cao (như email mã hóa quân sự, giao dịch ngân hàng cần ký số từng lệnh) nơi ứng dụng cần kiểm soát chặt chẽ dữ liệu.
Hình ảnh này minh họa kiến trúc phân lớp của **giao thức SSL/TLS**. Nó cho thấy cách SSL/TLS nằm giữa các lớp mạng cơ bản (TCP/IP) và lớp ứng dụng (như HTTP).

Mô hình này chia SSL/TLS thành **2 lớp chính**:

### 1. Lớp dưới: SSL/TLS Record Protocol (Giao thức Bản ghi)
Đây là lớp nền tảng nằm ngay trên TCP. Nó cung cấp hai dịch vụ cơ bản cho các giao thức lớp trên:
* **Bảo mật (Confidentiality):** Sử dụng mã hóa đối xứng (như AES, DES) để mã hóa dữ liệu.
* **Toàn vẹn (Message Integrity):** Sử dụng mã xác thực thông điệp (MAC) để đảm bảo dữ liệu không bị sửa đổi.

**Nhiệm vụ:** Nó nhận dữ liệu từ các giao thức bên trên (Handshake, HTTP,...), chia nhỏ chúng thành các mảnh (fragments), nén (tùy chọn), thêm mã MAC, mã hóa và gửi xuống lớp TCP.

---

### 2. Lớp trên: Các giao thức quản lý và ứng dụng
Lớp này nằm ngay trên Record Protocol và bao gồm 4 giao thức con quản lý việc thiết lập và điều khiển kết nối:

* **Handshake Protocol (Giao thức Bắt tay):**
    * Đây là phần phức tạp nhất và quan trọng nhất.
    * Nó chạy trước khi bất kỳ dữ liệu ứng dụng nào được truyền đi.
    * Nhiệm vụ: Cho phép server và client xác thực lẫn nhau, thỏa thuận thuật toán mã hóa/hàm băm, và trao đổi các khóa bí mật để dùng cho phiên làm việc.

* **Change Cipher Spec Protocol (Giao thức Thay đổi Thông số Mã hóa):**
    * Là giao thức đơn giản nhất (thường chỉ là 1 byte).
    * Nhiệm vụ: Nó báo hiệu rằng "Tất cả các tin nhắn sau tin nhắn này sẽ được mã hóa bằng các thuật toán và khóa mà chúng ta vừa thỏa thuận trong quá trình Handshake". Nó đánh dấu thời điểm chuyển từ trạng thái chưa bảo mật sang trạng thái bảo mật.

* **Alert Protocol (Giao thức Cảnh báo):**
    * Nhiệm vụ: Dùng để thông báo các thông điệp liên quan đến trạng thái kết nối hoặc lỗi.
    * Ví dụ: Cảnh báo "chứng chỉ hết hạn" (bad certificate) hoặc thông báo "đóng kết nối" (close notify). Nếu lỗi là nghiêm trọng (fatal), kết nối sẽ bị ngắt ngay lập tức.

* **Heartbeat Protocol (Giao thức Nhịp tim):**
    * Nhiệm vụ: Là một tiện ích mở rộng (extension) để giữ cho kết nối sống (keep-alive) mà không cần truyền dữ liệu thực tế. Nó giúp kiểm tra xem đầu bên kia có còn hoạt động hay không. (Đây cũng là nơi phát sinh lỗ hổng bảo mật nổi tiếng *Heartbleed*).

* **HTTP (Giao thức Ứng dụng):**
    * Đây là dữ liệu thực tế của người dùng (web). Đối với SSL/TLS, HTTP chỉ là một dạng dữ liệu cần được mã hóa bởi Record Protocol và gửi đi an toàn.

---

### Tóm tắt cách hoạt động theo hình:

1.  **TCP/IP** đảm bảo việc truyền tin cậy các gói tin.
2.  **Record Protocol** tạo ra một "đường ống" an toàn (được mã hóa và bảo vệ toàn vẹn) chạy trên TCP.
3.  **Handshake, Alert, v.v.** sử dụng đường ống đó để thiết lập các tham số bảo mật.
4.  Cuối cùng, **HTTP** gửi dữ liệu qua đường ống đó, biến thành **HTTPS**.
Hình ảnh này giải thích sự khác biệt giữa hai khái niệm cơ bản nhưng rất dễ nhầm lẫn trong TLS: **Phiên (Session)** và **Kết nối (Connection)**.

Để hiểu chỗ này, bạn cần nắm được vấn đề cốt lõi: **Việc thiết lập bảo mật ban đầu (Handshake) tốn rất nhiều tài nguyên CPU và thời gian.** Do đó, TLS tách biệt hai khái niệm này để tối ưu hóa hiệu suất.

Dưới đây là giải thích chi tiết và một ví dụ đời thực để bạn dễ hình dung:

### 1. Phiên làm việc TLS (TLS Session) - "Tấm thẻ định danh"
Đây là một **trạng thái logic** lâu dài giữa client và server.

* **Nó là gì?** Hãy coi nó như một "hợp đồng bảo mật" đã được ký kết. Nó chứa tất cả các thông tin quan trọng và tốn kém nhất để tạo ra: thuật toán mã hóa nào được dùng, khóa bí mật chính (master secret) là gì, chứng chỉ số đã được kiểm tra chưa...
* **Được tạo ra khi nào?** Khi thực hiện quy trình **Full Handshake** (Bắt tay toàn diện) lần đầu tiên.
* **Mục đích:** Để **tránh phải làm lại từ đầu**. Vì việc tính toán các khóa này rất nặng, nên sau khi tính xong, chúng ta lưu nó lại vào một "Phiên" (Session) để dùng lại sau này. Một phiên có thể được dùng cho nhiều kết nối khác nhau.

### 2. Kết nối TLS (TLS Connection) - "Cuộc gọi điện thoại"
Đây là **kênh truyền tải thực tế** (thường là TCP) để gửi dữ liệu đi.

* **Nó là gì?** Là đường ống dẫn dữ liệu.
* **Đặc điểm:** Mang tính **tạm thời**. Bạn mở kết nối, gửi dữ liệu, rồi đóng kết nối (ví dụ: tải xong một trang web thì ngắt).
* **Mối quan hệ:** Mỗi kết nối sẽ "mượn" các thông số bảo mật từ một Phiên đang hoạt động để mã hóa dữ liệu mà không cần phải đàm phán lại từ đầu.

---

### 💡 Ví dụ minh họa (Rất dễ hiểu)

Hãy tưởng tượng bạn đi làm tại một tòa nhà văn phòng cao cấp:

1.  **TLS Session (Phiên) giống như việc bạn được cấp Thẻ Nhân Viên.**
    * **Quá trình tạo (Handshake):** Ngày đầu đi làm, bạn phải khai báo CMND, chụp ảnh, lấy vân tay, ký hợp đồng. Quá trình này tốn thời gian và công sức (giống như tính toán khóa mã hóa).
    * **Kết quả:** Bạn có một cái thẻ nhân viên (Session ID). Thẻ này có giá trị lâu dài.

2.  **TLS Connection (Kết nối) giống như mỗi lần bạn quẹt thẻ đi qua cửa.**
    * **Hoạt động:** Mỗi sáng bạn đến công ty, bạn chỉ cần quẹt thẻ (Resuming session). Hệ thống nhận ra ngay "À, đây là nhân viên đã đăng ký", và cửa mở ngay lập tức.
    * **Lợi ích:** Bạn không cần phải nộp lại CMND hay chụp ảnh lại mỗi lần muốn đi qua cửa. Việc mở cửa (Connection) diễn ra rất nhanh dựa trên cái thẻ (Session) bạn đã có.

### Tóm tắt sự khác biệt:

| Đặc điểm | TLS Session (Phiên) | TLS Connection (Kết nối) |
| :--- | :--- | :--- |
| **Bản chất** | Một thỏa thuận bảo mật logic (Logical association). | Một kênh truyền tải vật lý/mạng (Transport channel). |
| **Chi phí tạo** | **Cao** (Tốn nhiều CPU để tính toán khóa). | **Thấp** (Chỉ tốn băng thông mạng). |
| **Thời gian sống** | Dài (Có thể kéo dài qua nhiều kết nối). | Ngắn (Tạm thời, truyền xong là ngắt). |
| **Mối quan hệ** | 1 Phiên... | ...có thể phục vụ **nhiều** Kết nối. |

**Tại sao cần mô hình này?**
Nếu mỗi lần bạn click vào một link trên web (tạo một kết nối mới) mà máy chủ phải tính toán lại khóa từ đầu (tạo phiên mới), thì web sẽ chạy cực kỳ chậm và server sẽ bị quá tải. Cơ chế này giúp web chạy nhanh hơn (HTTPS nhanh gần bằng HTTP) nhờ tái sử dụng Phiên.
Hai hình ảnh này đi sâu vào chi tiết kỹ thuật của hai khái niệm **Phiên (Session)** và **Kết nối (Connection)** mà chúng ta vừa thảo luận. Nó liệt kê cụ thể những **biến số/dữ liệu** nào được máy tính lưu trữ trong bộ nhớ RAM cho từng loại.

Dưới đây là giải thích chi tiết từng tham số:

### 1. Hình 1: Các tham số trạng thái PHIÊN (TLS Session)
Đây là những thông tin **lâu dài**, được thỏa thuận một lần trong quá trình bắt tay (Handshake) và được lưu lại để tái sử dụng.

* **Session identifier (Định danh phiên):** Một chuỗi byte ngẫu nhiên (giống như số ID thẻ nhân viên). Khi client muốn kết nối lại, nó gửi ID này lên, server kiểm tra trong kho lưu trữ, nếu thấy ID này còn hạn thì dùng lại luôn, không cần hỏi tên tuổi nữa.
* **Peer certificate (Chứng chỉ của bên đối tác):** Giấy chứng minh nhân dân (X509) của bên kia (thường là của server). Có thể là `null` nếu không yêu cầu xác thực.
* **Compression method (Phương thuật nén):** Thỏa thuận xem có nén dữ liệu (như zip) trước khi mã hóa không (Hiện nay thường tắt vì lý do bảo mật).
* **Cipher spec (Đặc tả mật mã):** Thống nhất "ngôn ngữ" chung: Dùng thuật toán mã hóa nào (AES hay ChaCha20)? Dùng hàm băm nào (SHA256)?
* **Master secret (Bí mật chính):** **Cực kỳ quan trọng.** Đây là chuỗi 48 byte bí mật được tính toán ra sau khi bắt tay xong. Nó là "khóa gốc". Từ khóa gốc này, người ta mới tính toán ra các khóa con để dùng cho việc mã hóa thực tế.
* **Is resumable (Có thể phục hồi):** Một cái cờ (flag) đánh dấu xem phiên này có được phép tái sử dụng cho kết nối sau hay không.

---

### 2. Hình 2: Các tham số trạng thái KẾT NỐI (TLS Connection)
Đây là những thông tin **tạm thời**, được sinh ra cụ thể cho **một lần truyền tải dữ liệu**. Những tham số này thường được tạo ra từ *Master Secret* (của Phiên) cộng với các số ngẫu nhiên mới.

* **Server and client random:** Hai số ngẫu nhiên mới tinh được sinh ra cho riêng kết nối này. Chúng đảm bảo rằng dù dùng lại *Master Secret*, thì khóa mã hóa của kết nối này vẫn khác hoàn toàn với kết nối trước đó.
* **Server/Client write MAC secret:** Khóa bí mật dùng để **tạo chữ ký toàn vẹn (MAC)**.
    * Lưu ý: Có 2 khóa riêng biệt. Một khóa để Server ký (Client kiểm tra), và một khóa để Client ký (Server kiểm tra).
* **Server/Client write key:** Khóa bí mật dùng để **mã hóa dữ liệu (Encryption)**.
    * Tương tự, cũng có 2 khóa riêng biệt cho chiều đi và chiều về. Điều này giúp an toàn hơn: nếu hacker giải mã được chiều gửi, chưa chắc đã giải mã được chiều nhận.
* **Initialization vectors (IV - Vectơ khởi tạo):** Dùng cho các thuật toán mã hóa khối (như AES-CBC). Nó đảm bảo rằng nếu bạn gửi hai câu "Hello" giống hệt nhau, thì đoạn mã hóa đầu ra vẫn trông khác nhau.
* **Sequence numbers (Số thứ tự):**
    * Mỗi gói tin gửi đi được đánh số: 0, 1, 2, 3...
    * Mục đích: Chống tấn công phát lại (Replay Attack). Nếu hacker thu trộm gói tin số 5 và cố gửi lại nó cho server sau 10 phút, server sẽ thấy số thứ tự không khớp và từ chối ngay.

---

### 💡 Tóm tắt mối quan hệ (Logic cốt lõi)

Quy trình hoạt động thực tế là:

1.  **Dữ liệu Phiên (Hình 1)** cung cấp nguyên liệu gốc: `Master Secret` + `Cipher Spec`.
2.  **Dữ liệu Kết nối (Hình 2)** cung cấp gia vị tươi mới: `Client Random` + `Server Random`.
3.  Máy tính kết hợp chúng lại theo công thức:
Master Secret + Randoms → Các khóa Write Key & MAC Secret


$\rightarrow$ Đây là lý do tại sao **Phiên (Session)** thì tĩnh và lâu dài, còn **Kết nối (Connection)** thì động và luôn thay đổi khóa để đảm bảo an toàn tối đa.
Năm hình ảnh bạn cung cấp cùng mô tả chi tiết về **Giao thức TLS Record (TLS Record Protocol)**. Đây là lớp nằm ngay bên dưới lớp Handshake và ngay bên trên lớp TCP.

Hãy tưởng tượng TLS Record Protocol giống như **"bộ phận đóng gói và vận chuyển an toàn"**. Sau khi hai bên đã bắt tay (Handshake) và thống nhất chìa khóa, giao thức này sẽ chịu trách nhiệm đóng gói mọi dữ liệu gửi đi để đảm bảo an toàn.

Dưới đây là giải thích tổng hợp từ các slide của bạn theo trình tự logic:

### 1. Hai nhiệm vụ chính (Từ hình `image_e33915.png`)
Giao thức này cung cấp 2 dịch vụ cốt lõi cho kết nối:
* **Confidentiality (Tính bảo mật/bí mật):** Đảm bảo người ngoài không đọc được dữ liệu. Nó thực hiện điều này bằng cách dùng **Khóa bí mật chung** (Shared secret key) được tạo ra từ quá trình Handshake để mã hóa dữ liệu.
* **Message Integrity (Tính toàn vẹn thông điệp):** Đảm bảo dữ liệu không bị ai đó sửa đổi trên đường đi. Nó dùng **Khóa bí mật chung** để tạo ra mã xác thực (MAC).

---

### 2. Quy trình hoạt động (Từ hình `image_e33919.png`)
Đây là "dây chuyền sản xuất" để biến một dữ liệu bình thường thành dữ liệu an toàn trước khi gửi đi. Quy trình gồm 5 bước từ trên xuống dưới:

1.  **Fragmentation (Phân mảnh):** Dữ liệu từ ứng dụng (Application Data) thường rất lớn. Bước đầu tiên là cắt nó ra thành các mảnh nhỏ (block) dễ quản lý (tối đa 16KB).
2.  **Compress (Nén - Tùy chọn):** Nén dữ liệu để giảm dung lượng. *Lưu ý: Trong thực tế hiện nay, bước này thường bị tắt để tránh các lỗ hổng bảo mật như CRIME.*
3.  **Add MAC (Thêm mã xác thực):** Tính toán mã MAC (dựa trên dữ liệu và khóa bí mật) rồi gắn nó vào đuôi của mảnh dữ liệu. Việc này giống như đóng dấu niêm phong.
4.  **Encrypt (Mã hóa):** Mã hóa toàn bộ khối dữ liệu (bao gồm cả nội dung gốc và mã MAC). Lúc này dữ liệu trở thành một mớ hỗn độn không thể đọc được.
5.  **Append TLS Record Header (Thêm tiêu đề):** Gắn thêm một cái "nhãn" (header) vào đầu gói tin để bên nhận biết đây là gói tin gì.

---

### 3. Cấu trúc gói tin (Từ hình `image_e33932.png`, `e33937.png`, `e3393b.png`)

Sau khi đóng gói xong, một gói tin TLS Record hoàn chỉnh sẽ có cấu trúc gồm **Header (Tiêu đề)** và **Encrypted Payload (Nội dung đã mã hóa)**.

#### A. Phần Header (5 Bytes đầu tiên - Không bị mã hóa)
Phần này công khai để router và máy tính biết cách xử lý gói tin.
* **Byte 0 - Content Type (Loại nội dung):** Cho biết bên trong gói tin chứa cái gì. Các giá trị thường gặp (xem hình `e33937`):
    * `20`: **Change Cipher Spec** (Thông báo thay đổi mã hóa).
    * `21`: **Alert** (Cảnh báo lỗi hoặc đóng kết nối).
    * `22`: **Handshake** (Dữ liệu bắt tay).
    * `23`: **Application Data** (Dữ liệu web/http thực tế).
    * `24`: **Heartbeat** (Nhịp tim giữ kết nối).
* **Byte 1-2 - Version:** Phiên bản TLS đang dùng (ví dụ TLS 1.2, TLS 1.3).
* **Byte 3-4 - Length:** Độ dài của phần dữ liệu đi kèm.

#### B. Phần Payload (Nội dung bên trong - Đã được mã hóa)
Như hình `e33932` mô tả, phần này bao gồm:
* **Plaintext:** Nội dung gốc (có thể đã nén).
* **MAC:** Mã xác thực để kiểm tra toàn vẹn.
* **Padding (nếu cần):** Các bit đệm thêm vào để đủ kích thước khối mã hóa.
* *Toàn bộ phần này được bao bọc bởi thuật toán mã hóa (Encrypted).*

### 💡 Tóm tắt dễ hiểu bằng ví dụ đời thực

Hãy tưởng tượng bạn muốn gửi một **bức thư mật** (Application Data):

1.  **Cắt nhỏ:** Bức thư quá dài, bạn xé nó thành từng trang (Fragment).
2.  **Ký tên:** Bạn ký tên vào cuối trang để chứng minh trang đó chưa bị sửa (Add MAC).
3.  **Mã hóa:** Bạn viết lại nội dung trang thư bằng mật mã mà chỉ người nhận mới dịch được (Encrypt).
4.  **Bỏ vào phong bì:** Bạn bỏ trang thư mật mã đó vào một phong bì.
5.  **Ghi nhãn (Header):** Bên ngoài phong bì, bạn ghi rõ: "Đây là thư tay (Type), gửi năm 2024 (Version), nặng 10 gram (Length)".

Đó chính là cách **TLS Record Protocol** hoạt động!
Dựa trên loạt hình ảnh bạn cung cấp, đây là phần giải thích chi tiết về **các giao thức quản lý** nằm bên trên lớp Record Protocol trong kiến trúc SSL/TLS.

Chúng ta có thể chia nội dung thành 3 phần chính: **Giao thức Bắt tay (Handshake)**, **Các giao thức phụ trợ (Alert, Change Cipher Spec)**, và **Cách tính toán khóa**.

---

### 1. Giao thức Handshake (Giao thức Bắt tay)
Đây là phần quan trọng nhất, diễn ra ngay khi bạn kết nối vào một website (HTTPS) để thiết lập bảo mật trước khi gửi dữ liệu thật.

* **Mục đích (Hình `e3483e.png`):**
    * Giúp máy khách (Client) và máy chủ (Server) xác thực lẫn nhau (kiểm tra xem server có phải đồ thật không).
    * Đàm phán để thống nhất dùng thuật toán mã hóa nào, hàm băm nào.
    * Trao đổi các thành phần để tạo ra khóa bí mật chung.

* **Cấu trúc tin nhắn (Hình `e34858.png`):**
    * Mỗi tin nhắn Handshake gồm 3 phần: `Type` (1 byte - loại tin nhắn), `Length` (3 bytes - độ dài), và `Content` (Nội dung).
    * Các loại tin nhắn phổ biến: `client_hello`, `server_hello`, `certificate`, `finished`, v.v.

* **Quy trình 4 giai đoạn (Hình `e34b03.png`):**     1.  **Giai đoạn 1 (Chào hỏi):** Client và Server gửi `Hello` để làm quen, thống nhất phiên bản TLS và gửi các số ngẫu nhiên (Random).
    2.  **Giai đoạn 2 (Server chứng minh):** Server gửi Chứng chỉ số (Certificate) để chứng minh danh tính và gửi khóa công khai cho Client.
    3.  **Giai đoạn 3 (Client phản hồi):** Client kiểm tra chứng chỉ. Nếu ổn, Client sẽ sinh ra một số bí mật (Pre-master secret), mã hóa nó bằng khóa công khai của Server và gửi lại cho Server.
    4.  **Giai đoạn 4 (Hoàn tất):** Cả hai bên dùng các thông tin đã trao đổi để tính toán ra "Khóa bí mật chung". Sau đó, họ gửi tin nhắn `Finished` để báo hiệu việc bắt tay đã xong.

---

### 2. Các giao thức phụ trợ

#### A. Giao thức Change Cipher Spec (Hình `e34820.png`)
* **Nó là gì?** Một giao thức cực kỳ đơn giản, gói tin chỉ có đúng **1 byte** mang giá trị `1`.
* **Tác dụng:** Nó giống như một tiếng còi báo hiệu.
    * Trước khi gửi gói tin này: Hai bên vẫn đang nói chuyện bằng tiếng Anh (chưa mã hóa hoàn toàn hoặc đang dùng khóa tạm).
    * Sau khi gửi gói tin này: "Bắt đầu từ bây giờ, mọi thứ tôi nói sẽ được mã hóa bằng các thuật toán và khóa mới mà chúng ta vừa thống nhất nhé!".

#### B. Giao thức Alert (Cảnh báo) (Hình `e3483a.png`)
* **Nó là gì?** Dùng để báo cáo lỗi hoặc trạng thái kết nối.
* **Cấu trúc:** Gồm 2 byte.
    * Byte 1 (Mức độ): `1` là Cảnh báo nhẹ (Warning), `2` là Lỗi nghiêm trọng (Fatal).
    * Byte 2 (Mã lỗi): Cho biết cụ thể bị lỗi gì (ví dụ: chứng chỉ hết hạn, giải mã thất bại...).
* **Hậu quả:** Nếu gặp lỗi Fatal, kết nối sẽ bị cắt ngay lập tức.

---

### 3. Tính toán Mật mã (Hình `e34b21.png`)

Sau khi bắt tay xong, làm sao để có các chìa khóa để mã hóa dữ liệu? Hình ảnh giải thích quy trình "sinh khóa" (Key Derivation):

1.  **Nguyên liệu:** Từ quá trình bắt tay, hai bên đã thống nhất được một **Khóa chủ (Master Secret)** dài 48 bytes (được bảo mật tuyệt đối).
2.  **Chế biến:** Hai bên dùng "Khóa chủ" này (kết hợp với các số ngẫu nhiên `Server Random`, `Client Random` đã trao đổi lúc đầu) đưa vào hàm băm để "băm" ra một chuỗi byte dài (Key Block).
3.  **Chia phần:** Chuỗi byte dài đó được cắt nhỏ ra để làm **4 chìa khóa riêng biệt** (như đã giải thích ở phần trước):
    * **$K_c$ (Client Write Key):** Client dùng để mã hóa dữ liệu gửi đi.
    * **$M_c$ (Client Write MAC Secret):** Client dùng để ký tên (tạo mã xác thực) cho dữ liệu gửi đi.
    * **$K_s$ (Server Write Key):** Server dùng để mã hóa dữ liệu gửi về.
    * **$M_s$ (Server Write MAC Secret):** Server dùng để ký tên cho dữ liệu gửi về.

**Tóm lại:** Tất cả các hình ảnh này mô tả một quy trình chặt chẽ để biến việc "gặp gỡ ban đầu" (Handshake) thành các "chìa khóa cụ thể" (Key Calculation) và có các cơ chế để "bật công tắc bảo mật" (Change Cipher Spec) hoặc "báo lỗi" (Alert) khi cần thiết.
Dựa trên các slide bạn đã cung cấp, tôi xin giải thích các khái niệm về HTTPS, Bắt đầu kết nối, Bắt tay trong HTTPS và các nội dung trong hình `image_20cdc0.png` và `image_20cb17.png` như sau:

---

### 1. HTTPS (HTTP over SSL)

HTTPS không phải là một giao thức hoàn toàn mới, mà là **HTTP chạy trên nền SSL/TLS**.
* **Cổng (Port):** Thay vì dùng cổng 80 (như HTTP), HTTPS dùng cổng **443**.
* **Mã hóa:** Hầu hết dữ liệu quan trọng (như nội dung trang web, thông tin đăng nhập, cookie) đều được mã hóa. Tuy nhiên, một số thông tin ở tầng thấp hơn (như địa chỉ IP, cổng) thì không mã hóa được vì router cần chúng để định tuyến.
* **Quy trình:** Khi bạn gõ `https://`, trình duyệt sẽ thực hiện bắt tay SSL/TLS trước, sau khi đường truyền an toàn được thiết lập, nó mới gửi yêu cầu HTTP qua đường truyền đó.

---

### 2. Bắt đầu kết nối (Connection Initiation)

Quá trình này diễn ra theo các bước logic:
1.  **Kết nối TCP:** Đầu tiên, máy khách (trình duyệt) phải kết nối TCP đến máy chủ (cổng 443). Đây là lớp nền móng.
2.  **Bắt tay TLS:** Ngay sau khi TCP thông suốt, máy khách gửi `ClientHello` để bắt đầu quy trình TLS Handshake.
3.  **HTTP Request:** Chỉ sau khi bắt tay TLS xong (tức là đã có khóa bí mật), máy khách mới gửi yêu cầu HTTP đầu tiên (ví dụ: `GET /index.html`). Dữ liệu này được đóng gói và mã hóa bởi TLS Record Protocol.

**Ba cấp độ nhận biết kết nối:**
* **Cấp độ HTTP:** Chỉ quan tâm nội dung (GET, POST). Nó không biết mình đang được mã hóa, nó chỉ gửi dữ liệu xuống lớp dưới.
* **Cấp độ TLS:** Quản lý Phiên (Session). Một phiên TLS có thể phục vụ cho nhiều kết nối HTTP.
* **Cấp độ TCP:** Quản lý các gói tin vận chuyển vật lý.

---

### 3. Bắt tay trong HTTPS (Xác thực lẫn nhau)

Câu hỏi trong slide của bạn là về **xác thực (Authentication)**:

* **Trình duyệt xác minh máy chủ Web như thế nào?**
    * Trình duyệt nhận Chứng chỉ số (Certificate) từ máy chủ.
    * Trình duyệt kiểm tra xem chứng chỉ đó có được ký bởi một **Tổ chức cấp phát chứng chỉ (CA)** uy tín mà nó tin tưởng không (ví dụ: Google Trust Services, DigiCert).
    * Nó kiểm tra tên miền trong chứng chỉ có khớp với tên miền trang web không.
    * Nó kiểm tra thời hạn sử dụng của chứng chỉ.

* **Hai máy chủ HTTPS xác minh lẫn nhau như thế nào? (Mutual Authentication)**
    * Trong trường hợp này (ví dụ server ngân hàng nói chuyện với server cổng thanh toán), cả hai bên đều phải gửi chứng chỉ cho nhau.
    * Server 1 gửi chứng chỉ của mình.
    * Server 2 kiểm tra.
    * Sau đó Server 2 gửi chứng chỉ của mình.
    * Server 1 kiểm tra lại.
    * Cả hai phải tin tưởng lẫn nhau mới bắt đầu trao đổi dữ liệu.

---

### 4. Giải thích hình `image_20cdc0.png`: Các tấn công trên SSL/TLS

Slide này liệt kê các nguy cơ bảo mật đối với SSL/TLS:

1.  **Tấn công vào giao thức bắt tay (Handshake Protocol Attacks):**
    * Kẻ tấn công cố gắng can thiệp vào quá trình đàm phán để ép hai bên sử dụng thuật toán mã hóa yếu (Cipher Suite Downgrade) hoặc phiên bản TLS cũ (như SSL 3.0) để dễ bề bẻ khóa.
2.  **Tấn công vào giao thức ứng dụng và bản ghi (Record & Application Data Attacks):**
    * Tấn công vào dữ liệu đang truyền (như tấn công BEAST, CRIME, BREACH) bằng cách phân tích độ dài gói tin nén hoặc thời gian phản hồi để đoán nội dung (ví dụ: đoán cookie).
3.  **Tấn công vào PKI (Public Key Infrastructure):**
    * Tấn công vào niềm tin. Ví dụ: Hacker hack vào một CA uy tín (như vụ DigiNotar) và tạo ra chứng chỉ giả mạo cho `google.com`. Trình duyệt sẽ tin chứng chỉ giả này vì nó được ký bởi CA thật.
4.  **Các loại tấn công khác:** Như tấn công Heartbleed (lợi dụng lỗi bộ nhớ).

---

### 5. Giải thích hình `image_20cb17.png`: Giao thức Heartbeat


Giao thức này là một tính năng phụ trợ nhưng từng gây ra lỗi bảo mật nghiêm trọng nhất lịch sử Internet (**Heartbleed**).

* **Chức năng chính:**
    * **Keep-alive:** Giữ cho kết nối không bị đóng khi hai bên chưa có dữ liệu gửi. Nó giống như việc bạn thỉnh thoảng nói "Alo" khi nghe điện thoại để biết bên kia chưa cúp máy.
    * **Cách hoạt động:** Máy A gửi một tin nhắn ngắn (ví dụ: "ICMP", độ dài 4 byte) và bảo máy B "hãy nhắc lại tin này". Máy B nhận được và gửi lại đúng nội dung đó.

* **Lỗ hổng Heartbleed (Minh họa):**
    * Hacker gửi tin nhắn: "Hãy nhắc lại từ 'HAT', độ dài **64KB**".
    * Máy chủ (bị lỗi) không kiểm tra xem chữ "HAT" có thực sự dài 64KB không. Nó đọc chữ "HAT" (3 byte) và sau đó **đọc tiếp bộ nhớ RAM phía sau** cho đủ 64KB rồi gửi lại cho Hacker.
    * Phần bộ nhớ đọc thừa đó chứa dữ liệu nhạy cảm của người dùng khác (mật khẩu, cookie, khóa bí mật...).

Hy vọng phần giải thích này giúp bạn hiểu rõ các khái niệm và hình ảnh trong tài liệu!
Chào bạn, dựa trên các slide về SSH mà bạn đã cung cấp, tôi xin giải thích chi tiết về giao thức **SSH (Secure Shell)**, cách thức hoạt động, cấu trúc và các quy trình bên trong nó.

---

### 1. SSH là gì? (Hình `image_20d902.png`)

**SSH (Secure Shell)** là một giao thức mạng được thiết kế để thay thế các giao thức cũ không an toàn như Telnet, rlogin, rsh.

* **Mục đích chính:** Cho phép người dùng (client) đăng nhập và điều khiển máy chủ (server) từ xa một cách an toàn thông qua một kênh truyền được mã hóa.
* **Đặc điểm:**
    * Dễ triển khai, chi phí thấp.
    * Chạy trên hầu hết các hệ điều hành (Linux, Windows, macOS).
    * Ngoài việc gõ lệnh (terminal), SSH còn hỗ trợ truyền file an toàn (SFTP, SCP) và chuyển tiếp cổng (port forwarding - hay gọi là SSH Tunneling).
* **Lịch sử:**
    * **SSH1:** Phiên bản đầu tiên, tập trung vào thay thế Telnet/rlogin. Tuy nhiên, nó có một số lỗ hổng bảo mật.
    * **SSH2:** Phiên bản hiện đại, sửa các lỗi của SSH1 và được chuẩn hóa bởi IETF (RFC 4250-4256). Nó không tương thích ngược với SSH1 vì cấu trúc hoàn toàn khác.

---

### 2. Kiến trúc chồng giao thức SSH (Hình `image_20d91c.png`)


SSH không phải là một khối đơn nhất mà được chia thành 3 lớp (layer) xếp chồng lên nhau, chạy trên nền TCP/IP:

1.  **Lớp vận chuyển (SSH Transport Layer Protocol):**
    * Nằm dưới cùng (ngay trên TCP).
    * **Nhiệm vụ:** Cung cấp nền tảng bảo mật cơ bản. Nó lo việc mã hóa dữ liệu (Confidentiality), đảm bảo toàn vẹn (Integrity), và nén dữ liệu (Compression). Quan trọng nhất, nó thực hiện việc **xác thực máy chủ (Server Authentication)** để client biết mình đang nối đúng server.

2.  **Lớp xác thực người dùng (SSH User Authentication Protocol):**
    * Nằm ở giữa.
    * **Nhiệm vụ:** Sau khi kênh truyền đã an toàn (nhờ lớp vận chuyển), lớp này sẽ xác thực người dùng. Nó trả lời câu hỏi: "Bạn là ai?". Các phương thức phổ biến là mật khẩu (password) hoặc khóa công khai (public key).

3.  **Lớp kết nối (SSH Connection Protocol):**
    * Nằm trên cùng.
    * **Nhiệm vụ:** Chia kênh truyền an toàn đã xác thực thành nhiều **kênh logic (logical channels)**. Nhờ lớp này, bạn có thể vừa gõ lệnh terminal, vừa copy file, vừa chạy port forwarding cùng lúc trên **một** kết nối TCP duy nhất.

---

### 3. Giao thức Tầng vận chuyển (Transport Layer) (Hình `image_20d93b.png`)

Đây là giai đoạn đầu tiên khi bạn gõ `ssh user@host`. Quy trình trao đổi gói tin diễn ra như sau:

1.  **Thiết lập TCP:** Mở kết nối TCP đến cổng 22 của server.
2.  **Trao đổi phiên bản (Identification string exchange):**
    * Client gửi: `SSH-2.0-OpenSSH_8.0`
    * Server gửi: `SSH-2.0-OpenSSH_7.4`
    * Hai bên biết phiên bản phần mềm của nhau để tương thích.
3.  **Đàm phán thuật toán (Algorithm negotiation - `SSH_MSG_KEXINIT`):**
    * Client: "Tôi hỗ trợ mã hóa AES, ChaCha20; băm SHA256..."
    * Server: "Tôi cũng hỗ trợ AES, SHA256. Vậy chốt dùng AES và SHA256 nhé."
4.  **Trao đổi khóa (Key Exchange):**
    * Hai bên dùng thuật toán Diffie-Hellman để tạo ra khóa bí mật chung mà không để lộ khóa này trên đường truyền.
    * Kết quả: Cả hai có chung một Session Key để mã hóa dữ liệu sau này.
5.  **Xác thực máy chủ (Server Authentication):**
    * Server dùng khóa riêng (Host Key) để ký vào gói tin trao đổi khóa.
    * Client dùng khóa công khai của server (đã biết trước hoặc lần đầu tiên gặp - *xem phần 4*) để kiểm tra chữ ký. Nếu đúng, client tin tưởng đây là server thật.
6.  **Kết thúc trao đổi khóa (`SSH_MSG_NEWKEYS`):**
    * Thông báo: "Từ giờ mọi thứ sẽ được mã hóa bằng khóa mới".
7.  **Yêu cầu dịch vụ (`SSH_MSG_SERVICE_REQUEST`):** Client yêu cầu chuyển sang lớp tiếp theo: "Cho tôi xác thực người dùng (`ssh-userauth`)".

---

### 4. Mô hình tin cậy trong SSH (Hình `image_20d920.png`)

Làm sao Client biết Server mình đang kết nối là "chính chủ" chứ không phải kẻ giả mạo (Man-in-the-Middle)?

SSH đưa ra 2 mô hình:

1.  **Mô hình tin cậy cục bộ (TOFU - Trust On First Use):** (Phổ biến nhất)
    * Lần đầu bạn kết nối, SSH sẽ hỏi: *"Tôi không biết server này. Dấu vân tay (fingerprint) của nó là ABC... Bạn có muốn tiếp tục không?"*.
    * Nếu bạn chọn **Yes**, SSH sẽ lưu khóa công khai của server đó vào file `known_hosts` trên máy bạn.
    * Lần sau kết nối, nó tự so sánh. Nếu khóa thay đổi, nó sẽ cảnh báo đỏ rực: **"WARNING: REMOTE HOST IDENTIFICATION HAS CHANGED!"**.

2.  **Mô hình chứng nhận (Certificate Authority - CA):** (Dùng trong doanh nghiệp lớn)
    * Có một máy chủ CA trung tâm ký xác nhận cho tất cả các Host Key của server.
    * Client chỉ cần tin tưởng khóa của CA là sẽ tự động tin tưởng tất cả server do CA đó ký, không cần hỏi "Yes/No" lần đầu nữa.

---

### 5. Định dạng gói tin SSH (Hình `image_20d942.png`)


Để bảo mật, dữ liệu được đóng gói kỹ lưỡng trước khi gửi qua TCP:

1.  **Payload:** Dữ liệu thực tế (ví dụ: lệnh `ls -la`).
2.  **Compress:** Nén dữ liệu (tùy chọn).
3.  **Thêm Padding & Packet Length:** Thêm các byte đệm ngẫu nhiên để làm khó kẻ tấn công (Traffic Analysis) và đảm bảo độ dài gói tin chia hết cho kích thước khối mã hóa (block size).
4.  **Encrypt:** Mã hóa toàn bộ (Length + Padding + Payload + Padding) bằng Session Key.
5.  **MAC (Message Authentication Code):** Tính mã xác thực (dựa trên dữ liệu chưa mã hóa và số thứ tự gói tin Sequence Number) rồi gắn vào đuôi. *Lưu ý: Trong SSH, MAC thường được tính trên dữ liệu chưa mã hóa (Encrypt-and-MAC) hoặc đã mã hóa tùy thuật toán, nhưng hình vẽ mô tả quy trình chuẩn.*

---

### 6. Đóng kết nối (Hình `image_20d8fb.png`)

* Khác với HTTP (đóng TCP là xong), SSH yêu cầu một quy trình đóng an toàn để tránh bị kẻ xấu cắt ngang kết nối (Truncation Attack) mà client tưởng là đã truyền xong.
* Quy trình: Bên muốn ngắt kết nối gửi một thông điệp đặc biệt (ví dụ `SSH_MSG_DISCONNECT`).
* Nếu kết nối TCP bị ngắt đột ngột mà không nhận được thông điệp này, SSH client sẽ báo lỗi vì nghi ngờ có sự can thiệp hoặc lỗi mạng.

Tóm lại, SSH là một giao thức cực kỳ chặt chẽ, bảo vệ từ lúc bắt đầu (xác thực server), trong lúc truyền (mã hóa, toàn vẹn, đa kênh) cho đến lúc kết thúc (đóng kết nối an toàn).
Chào bạn, dựa vào các hình ảnh slide bạn đã cung cấp, tôi xin giải thích chi tiết về Giao thức kết nối SSH, các loại kênh, các thuật toán mã hóa và cơ chế chuyển tiếp cổng trong SSH.

---

### 1. Giao thức Kết nối SSH (Hình `image_20e465.png`)

Lớp này nằm trên cùng trong chồng giao thức SSH và đảm nhận nhiệm vụ đa kênh hóa (multiplexing).

* **Đường hầm an toàn (Secure Tunnel):** Sau khi xác thực xong, SSH thiết lập một đường hầm mã hóa duy nhất.
* **Cơ chế kênh (Channel Mechanism):** Thay vì mở nhiều kết nối TCP cho mỗi tác vụ, SSH chia nhỏ đường hầm này thành nhiều kênh logic.
    * **Kênh riêng biệt:** Mỗi kênh phục vụ một mục đích riêng (ví dụ: kênh 0 cho terminal, kênh 1 cho chuyển tiếp cổng, kênh 2 cho X11 forwarding).
    * **Điều khiển luồng (Flow Control):** Sử dụng cơ chế "cửa sổ" (window size). Bên gửi chỉ được gửi dữ liệu khi bên nhận thông báo còn chỗ trống trong bộ đệm (cửa sổ). Điều này giúp tránh làm ngập bên nhận.
    * **Vòng đời kênh:** Mỗi kênh đều trải qua quy trình: Mở kênh -> Truyền dữ liệu -> Đóng kênh.

---

### 2. Các loại kênh trong SSH (Hình `image_20e49d.png`)

SSH hỗ trợ nhiều loại kênh khác nhau tùy vào mục đích sử dụng:

1.  **Session:** Đây là loại phổ biến nhất. Nó dùng để chạy các lệnh từ xa, mở shell (terminal), chạy ứng dụng, hoặc truyền file (SCP/SFTP). Khi bạn gõ `ssh user@host`, một kênh session được mở ra.
2.  **X11:** Dùng để chạy ứng dụng đồ họa (GUI) từ xa. Ví dụ: Bạn chạy trình duyệt Firefox trên máy chủ Linux, nhưng giao diện cửa sổ lại hiện lên trên màn hình máy tính Windows của bạn.
3.  **Forwarded-tcpip (Remote Port Forwarding):** Chuyển tiếp một cổng từ máy chủ về máy khách. Hữu ích khi bạn muốn công khai một dịch vụ trên máy cục bộ ra internet thông qua máy chủ.
4.  **Direct-tcpip (Local Port Forwarding):** Chuyển tiếp một cổng từ máy khách đến máy chủ. Hữu ích để truy cập các dịch vụ nội bộ của máy chủ (như database) một cách an toàn.

---

### 3. Chuyển tiếp cổng SSH (SSH Port Forwarding) (Hình `image_20e4bd.png` và `image_20e4a3.png`)

Đây là tính năng cực kỳ mạnh mẽ của SSH, còn gọi là **SSH Tunneling**.

* **Nguyên lý:** Nó biến kết nối SSH an toàn thành một "đường ống" để bọc các kết nối TCP không an toàn khác (như HTTP, Telnet, Database) đi qua.
* **Quy trình (Hình `image_20e4bd.png`):**
    1.  **Bình thường (a):** Client kết nối trực tiếp đến Server qua TCP không an toàn. Dữ liệu đi trần trụi, dễ bị nghe lén.
    2.  **Qua SSH Tunnel (b):**
        * Client SSH mở một cổng cục bộ (ví dụ 8080).
        * Ứng dụng Client kết nối vào cổng 8080 này thay vì kết nối trực tiếp server.
        * SSH Client mã hóa dữ liệu, gửi qua đường hầm đến SSH Server.
        * SSH Server giải mã và chuyển tiếp dữ liệu đến Ứng dụng Server đích.
    * **Kết quả:** Toàn bộ đoạn đường truyền qua mạng internet đều được bảo vệ bởi lớp mã hóa của SSH.

---

### 4. Trao đổi thông điệp trong giao thức kết nối (Hình `image_20e480.png`)

Để quản lý các kênh, SSH sử dụng các thông điệp điều khiển cụ thể:

1.  **Mở kênh (`SSH_MSG_CHANNEL_OPEN`):** Client yêu cầu mở một kênh mới (ví dụ loại "session").
2.  **Xác nhận (`SSH_MSG_CHANNEL_OPEN_CONFIRMATION`):** Server đồng ý mở kênh và cấp cho nó một ID.
3.  **Truyền dữ liệu (`SSH_MSG_CHANNEL_DATA`):** Hai bên trao đổi dữ liệu thực tế qua lại.
4.  **Đóng kênh (`SSH_MSG_CHANNEL_CLOSE`):** Khi xong việc, một bên gửi yêu cầu đóng kênh.

---

### 5. Các thuật toán mật mã và phương pháp xác thực (Hình `image_20e447.png` và `image_20e460.png`)

* **Thuật toán mã hóa (Cipher):** SSH hỗ trợ nhiều thuật toán để mã hóa dữ liệu như 3DES, Blowfish, AES (128, 192, 256 bit), Twofish, Serpent, RC4 (arcfour), CAST128. Hiện nay **AES** là chuẩn phổ biến nhất.
* **Thuật toán toàn vẹn (MAC Algorithm):** Để đảm bảo dữ liệu không bị sửa đổi, SSH dùng HMAC-SHA1 hoặc HMAC-MD5. (SHA1 và MD5 hiện nay được coi là yếu, các bản SSH mới ưu tiên SHA2-256 trở lên).
* **Nén (Compression):** Hỗ trợ chuẩn `zlib` hoặc không nén (`none`).

* **Phương pháp xác thực (Authentication Methods):**
    1.  **Publickey (Khóa công khai):** An toàn nhất. Client dùng khóa riêng (private key) để ký một thông điệp. Server dùng khóa công khai (public key) đã lưu trước đó để kiểm tra. Không cần gửi mật khẩu qua mạng.
    2.  **Password (Mật khẩu):** Client gửi mật khẩu (đã được mã hóa trong đường hầm SSH) cho server.
    3.  **Hostbased:** Xác thực dựa trên độ tin cậy giữa hai máy chủ (ít dùng hơn do phức tạp và rủi ro giả mạo IP).


Tóm lại, SSH không chỉ là công cụ gõ lệnh từ xa mà là một bộ giao thức bảo mật toàn diện, cung cấp khả năng đa nhiệm (nhiều kênh), bảo vệ dữ liệu (mã hóa mạnh) và linh hoạt (chuyển tiếp cổng) cho quản trị viên hệ thống.