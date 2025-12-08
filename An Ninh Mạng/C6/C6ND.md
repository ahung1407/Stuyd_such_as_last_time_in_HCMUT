

### I. Xem Xét Bảo Mật Web (Web Security Considerations)

Phần này đặt vấn đề về nhu cầu bảo mật cho các ứng dụng Web:

*   **Tính dễ bị tổn thương:** Web được sử dụng rộng rãi, nhưng dễ bị tổn thương với nhiều loại hình tấn công.
*   **Các loại hình tấn công cần đối phó:** Bí mật, Toàn vẹn, Từ chối dịch vụ (Denial-of-Service - DoS), và Xác thực.
*   **Các hướng tiếp cận bảo mật Web:** Cần thêm các cơ chế an ninh bổ sung. Có ba cách tiếp cận chính về mặt tầng OSI:
    *   **IPSec:** Hoạt động ở tầng Mạng (Layer 3).
    *   **SSL/TLS:** Hoạt động ở tầng Vận chuyển (Layer 4).
    *   **HTTPS:** Hoạt động ở tầng Ứng dụng (Layer 7).

### II. Bảo Mật Tầng Vận Chuyển với SSL/TLS

Phần này đi sâu vào giao thức SSL (Secure Socket Layer) và TLS (Transport Layer Security).

#### 1. Tổng quan về SSL/TLS
*   **SSL:** Là giao thức an toàn được triển khai rộng rãi, do Netscape đề xuất năm 1994, cung cấp **Tính bí mật, Toàn vẹn, và Xác thực**. SSL cung cấp giao diện lập trình ứng dụng (API) cho các ứng dụng.
*   **TLS:** Là **tiêu chuẩn Internet** được phát triển từ SSL, được triển khai dưới dạng một bộ giao thức dựa trên TCP. TLS là một dịch vụ có mục đích chung, bảo mật đầu cuối, có thể hoạt động minh bạch với các ứng dụng.

#### 2. Kiến trúc TLS
*   **Phiên làm việc TLS (TLS Session):** Sự liên kết giữa client và server được tạo ra bởi **giao thức bắt tay (Handshake Protocol)**. Phiên xác định một tập hợp các tham số bảo mật mật mã có thể chia sẻ giữa nhiều kết nối, giúp tránh đàm phán tốn kém cho mỗi kết nối.
*   **Kết nối TLS (TLS Connection):** Là một phương tiện vận tải tạm thời, cung cấp loại hình dịch vụ phù hợp, và mỗi kết nối được liên kết với một phiên.

#### 3. Các Tham số Trạng thái
Bạn cần nắm được các tham số được duy trì trong suốt phiên và trong từng kết nối:

| Trạng thái | Tham số cần nắm | Chi tiết |
| :--- | :--- | :--- |
| **Phiên (Session)** | Session identifier, Peer certificate, Compression method, Cipher spec, Master secret (48 byte bí mật), Is resumable | Các tham số này xác định trạng thái phiên đang hoạt động hoặc có thể tiếp tục. |
| **Kết nối (Connection)** | Server/Client random, Server/Client write MAC secret, Server/Client write key, Initialization vectors (IVs), Sequence numbers | Các chuỗi byte được client và server chọn cho mỗi kết nối. |

#### 4. Các Giao thức trong TLS
*   **Giao thức TLS Record:** Cung cấp hai dịch vụ chính:
    *   **Confidentiality (Bí mật):** Sử dụng khóa bí mật chung được định nghĩa bởi Handshake Protocol để mã hóa thông tin tải (payloads).
    *   **Message integrity (Toàn vẹn thông điệp):** Sử dụng khóa bí mật chung được định nghĩa bởi Handshake Protocol để tạo **Mã xác thực thông điệp (MAC)**.
    *   Gói tin Record có trường **Content Type**, cho biết giao thức cấp cao hơn được sử dụng (ví dụ: `change_cipher_spec`, `alert`, `handshake`, và `application_data`).
*   **Giao thức Change Cipher Spec:** Gồm một byte đơn có giá trị 1. Mục đích duy nhất là sao chép trạng thái đang chờ xử lý sang trạng thái hiện tại (cập nhật bộ mật mã).
*   **Giao thức Alert:** Dùng để truyền tải các cảnh báo liên quan TLS. Gồm hai byte, byte đầu tiên là mức độ nghiêm trọng (**warning** hoặc **fatal**), byte thứ hai là mã cảnh báo cụ thể.
*   **Giao thức Handshake:** Cho phép client và server **xác thực lẫn nhau** và **đàm phán** thuật toán mã hóa, thuật toán MAC, và các khóa mật mã. Nó phải được sử dụng trước khi bất kỳ dữ liệu ứng dụng nào được truyền đi.
*   **Tính toán Mật mã:**
    *   Tạo ra **Khóa Chủ (Master Secret)** dài 48 byte.
    *   Tạo ra **bốn tham số mật mã** từ Khóa Chủ ($K_c, M_c, K_s, M_s$) dùng cho việc mã hóa và MAC từ client đến server và ngược lại.
*   **Giao thức Heartbeat:** Là tín hiệu định kỳ, đảm bảo người nhận vẫn hoạt động và tạo hoạt động trên kết nối trong thời gian nhàn rỗi.

#### 5. Các Tấn công trên SSL/TLS
Bạn cần nắm được ba loại tấn công chính:
*   Tấn công vào giao thức bắt tay (Handshake Protocol).
*   Tấn công vào các giao thức ứng dụng và bản ghi (Record Protocol).
*   Tấn công vào **Cơ sở hạ tầng khóa công khai (PKI)**.

### III. Giao Thức Bảo Mật HTTPS (HTTP over SSL)

HTTPS là sự kết hợp giữa HTTP và SSL/TLS để đảm bảo giao tiếp an toàn giữa trình duyệt và máy chủ Web.

*   **Đặc điểm:** Địa chỉ URL bắt đầu bằng `https://`. Sử dụng cổng **443**. Các thành phần liên lạc quan trọng được mã hóa.
*   **Khởi tạo kết nối:** Máy khách HTTP đóng vai trò là máy khách TLS. Nó gửi **TLS ClientHello** để bắt đầu bắt tay TLS. Tất cả dữ liệu HTTP sau đó được gửi dưới dạng **dữ liệu ứng dụng TLS**.
*   **Cấp độ kết nối:** HTTPS thiết lập kết nối ở ba cấp độ nhận biết: HTTP, TLS (phiên) và kết nối TCP cơ bản.
*   **Đóng kết nối:** Yêu cầu TLS đóng kết nối, thường liên quan đến việc đóng kết nối TCP cơ bản. Việc triển khai TLS phải bắt đầu trao đổi **cảnh báo đóng (close alert)** trước khi đóng kết nối.

### IV. Giao Thức Bảo Mật SSH (Secure Shell)

SSH là một giao thức mạng được thiết kế để truyền thông an toàn, ban đầu được dùng để thay thế TELNET nhằm cung cấp phương tiện **đăng nhập từ xa an toàn**.

#### 1. Chồng Giao thức SSH (SSH Protocol Stack)
SSH được cấu tạo từ ba giao thức lớp khác nhau:
1.  **Giao thức Tầng Vận Chuyển (Transport Layer Protocol):** Cung cấp mã hóa và toàn vẹn dữ liệu.
2.  **Giao thức Xác thực Người dùng (User Authentication Protocol):** Xác thực người dùng (client) với server.
3.  **Giao thức Kết nối (Connection Protocol):** Hỗ trợ ghép kênh (multiplexing) các kênh logic.

#### 2. Giao thức Tầng Vận Chuyển SSH
*   **Xác thực máy chủ:** Xảy ra ở lớp vận chuyển, dựa trên việc máy chủ sở hữu cặp khóa chung/riêng. Khóa máy chủ được sử dụng để xác thực danh tính của máy chủ trong quá trình trao đổi khóa.
*   **Mô hình tin cậy:** Có thể sử dụng cơ sở dữ liệu cục bộ liên kết tên máy chủ với khóa công khai hoặc sử dụng khóa được chứng nhận bởi CA đáng tin cậy.

#### 3. Giao thức Xác thực Người dùng SSH
Bạn cần nắm ba phương pháp xác thực chính:
*   **Publickey:** Máy khách gửi khóa công khai và được ký bởi khóa riêng của máy khách.
*   **Password:** Mật khẩu được mã hóa bởi giao thức tầng vận chuyển SSH.
*   **Hostbased:** Máy chủ SSH xác minh danh tính của máy chủ khách (chứ không phải trực tiếp danh tính người dùng).

#### 4. Giao thức Kết nối SSH
*   **Đường hầm (Tunnel):** Giao thức kết nối sử dụng kết nối xác thực an toàn (đường hầm) được cung cấp bởi tầng vận chuyển để **ghép nhiều kênh logic**.
*   **Cơ chế kênh:** Tất cả các loại giao tiếp SSH được hỗ trợ bằng các kênh riêng biệt và được điều khiển luồng bằng **cơ chế cửa sổ**.
*   **Các loại kênh:** Bao gồm **Session** (thực thi chương trình từ xa), **X11** (hỗ trợ giao diện đồ họa), **Forwarded-tcpip** (chuyển tiếp cổng từ xa), và **Direct-tcpip** (chuyển tiếp cổng cục bộ).
*   **Chuyển tiếp cổng SSH (SSH Port Forwarding):** Là một tính năng hữu ích cho phép chuyển đổi mọi kết nối TCP không an toàn thành kết nối SSH an toàn (đường hầm SSH).
*   

Bức ảnh này là một bảng tóm tắt về **Bảo mật Web**, phân tích bốn khía cạnh cốt lõi của bảo mật.

Nó được chia thành 4 hàng, mỗi hàng đại diện cho một mục tiêu bảo mật, và 3 cột giải thích:
* **Threats** (Các mối đe dọa): Những hành động hoặc sự kiện có thể gây hại.
* **Consequences** (Hậu quả): Kết quả tiêu cực nếu mối đe dọa xảy ra.
* **Countermeasures** (Biện pháp đối phó): Các giải pháp để ngăn chặn mối đe dọa.

Dưới đây là giải thích chi tiết cho từng hàng:

---
### ## 1. Integrity (Tính toàn vẹn)

Đây là mục tiêu đảm bảo rằng dữ liệu không bị thay đổi hoặc phá hủy một cách trái phép.

* **Các mối đe dọa:**
    * **Sửa đổi dữ liệu người dùng:** Thay đổi thông tin của người dùng (ví dụ: thay đổi số tiền trong tài khoản ngân hàng).
    * **Trình duyệt ngựa Trojan:** Một chương trình độc hại giả mạo là trình duyệt hợp pháp để ăn cắp hoặc thay đổi dữ liệu khi người dùng nhập vào.
    * **Sửa đổi bộ nhớ:** Thay đổi dữ liệu đang được lưu trữ tạm thời trong RAM của máy.
    * **Sửa đổi tin nhắn đang truyền:** Can thiệp và thay đổi dữ liệu khi nó đang được gửi qua mạng.
* **Hậu quả:**
    * Mất thông tin.
    * Máy bị xâm nhập/chiếm quyền kiểm soát.
    * Tạo lỗ hổng cho tất cả các mối đe dọa khác.
* **Biện pháp đối phó:**
    * **Cryptographic checksums (Tổng kiểm mật mã):** Như mã băm (hash) hoặc chữ ký số. Chúng giúp xác minh xem dữ liệu có bị thay đổi hay không. 
---
### ## 2. Confidentiality (Tính bảo mật/bí mật)

Đây là mục tiêu đảm bảo rằng thông tin nhạy cảm không bị truy cập bởi những người không được phép.

* **Các mối đe dọa:**
    * **Nghe lén trên mạng:** Đọc trộm các gói tin khi chúng di chuyển trên mạng (ví dụ: trong một mạng Wi-Fi công cộng).
    * **Trộm thông tin từ máy chủ:** Đánh cắp cơ sở dữ liệu từ máy chủ.
    * **Trộm dữ liệu từ máy khách:** Đánh cắp dữ liệu từ máy tính của người dùng (ví dụ: qua virus).
    * Thu thập thông tin về cấu hình mạng hoặc về việc máy khách nào đang kết nối với máy chủ.
* **Hậu quả:**
    * Mất thông tin.
    * Mất quyền riêng tư.
* **Biện pháp đối phó:**
    * **Encryption (Mã hóa):** Biến đổi dữ liệu thành dạng không thể đọc được nếu không có khóa giải mã (ví dụ: HTTPS).     * **Web proxies:** Sử dụng máy chủ proxy để che giấu danh tính và lọc lưu lượng truy cập.

---
### ## 3. Denial of Service (Từ chối dịch vụ - DoS)

Đây là kiểu tấn công nhằm mục đích làm cho một máy tính hoặc dịch vụ mạng không thể truy cập được bởi người dùng.

* **Các mối đe dọa:**
    * **Hủy các luồng của người dùng:** Chấm dứt các tiến trình đang chạy của người dùng.
    * **Làm ngập máy bằng các yêu cầu giả mạo (Tấn công lụt):** Gửi một lượng lớn yêu cầu vô nghĩa đến máy chủ khiến nó quá tải và không thể xử lý các yêu cầu hợp pháp.
    * **Làm đầy đĩa hoặc bộ nhớ:** Ghi dữ liệu liên tục cho đến khi máy chủ hết dung lượng lưu trữ.
    * **Cô lập máy bằng các cuộc tấn công DNS:** Tấn công hệ thống DNS để ngăn người dùng tìm thấy địa chỉ IP của máy chủ.
* **Hậu quả:**
    * Gây gián đoạn dịch vụ.
    * Gây phiền toái.
    * Ngăn cản người dùng hoàn thành công việc.
* **Biện pháp đối phó:**
    * **Difficult to prevent (Khó ngăn chặn):** Bảng ghi nhận rằng đây là loại tấn công rất khó để ngăn chặn hoàn toàn, thường chỉ có thể giảm thiểu tác động.

---
### ## 4. Authentication (Tính xác thực)

Đây là mục tiêu xác minh danh tính của người dùng hoặc hệ thống, đảm bảo "bạn là người mà bạn nói bạn là".

* **Các mối đe dọa:**
    * **Mạo danh người dùng hợp pháp:** Giả vờ là một người dùng khác (ví dụ: bằng cách đánh cắp mật khẩu).
    * **Giả mạo dữ liệu:** Tạo ra dữ liệu giả mạo nhưng có vẻ hợp lệ (ví dụ: tạo một email giả mạo từ ngân hàng của bạn).
* **Hậu quả:**
    * Xuyên tạc/hiểu sai về người dùng (ví dụ: tin rằng kẻ tấn công là bạn).
    * Tin rằng thông tin sai là hợp lệ.
* **Biện pháp đối phó:**
    * **Cryptographic techniques (Các kỹ thuật mật mã):** Sử dụng các phương pháp như mật khẩu, xác thực đa yếu tố (MFA), hoặc chứng chỉ số để chứng minh danh tính. 