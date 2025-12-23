Để thực sự "master" (nắm vững toàn diện) chương Bảo mật tầng vận chuyển này, bạn cần khoảng **25-30 câu hỏi** chất lượng cao. Số lượng này đủ để bao phủ:

1.  **Kiến trúc:** Phân biệt các lớp con trong TLS và SSH.
2.  **Quy trình:** Hiểu sâu về Handshake (bắt tay) và trao đổi khóa.
3.  **Trạng thái:** Phân biệt rõ ràng tham số Session và Connection.
4.  **Ứng dụng:** HTTPS và các chế độ Port Forwarding của SSH.

Dưới đây là bộ câu hỏi được thiết kế riêng theo các dạng bạn yêu cầu để đạt mục tiêu trên.

---

### PHẦN 1: DẠNG CÂU HỎI "HIỂU & ÁP DỤNG"

**1. Trong giao thức TLS Record, tại sao mã xác thực thông điệp (MAC) thường được tính toán trước khi mã hóa dữ liệu (MAC-then-Encrypt) trong các phiên bản cũ?**
A. Để che giấu độ dài của gói tin ban đầu
B. Để đảm bảo tính toàn vẹn của cả dữ liệu và mã xác thực, ngăn chặn kẻ tấn công sửa đổi MAC
C. Để tăng tốc độ xử lý vì tính MAC nhanh hơn mã hóa
D. Để cho phép nén dữ liệu hiệu quả hơn
đáp án: B
giải thích: B đúng vì trong mô hình MAC-then-Encrypt, MAC được tính trên bản rõ rồi ghép vào bản rõ, sau đó cả hai cùng được mã hóa để bảo vệ tính toàn vẹn và bí mật cho cả MAC; A sai vì độ dài vẫn có thể đoán được; C sai vì thứ tự không ảnh hưởng đáng kể đến tổng thời gian; D sai vì nén thường thực hiện trước khi tính MAC.

**2. Một quản trị viên hệ thống muốn truy cập an toàn vào cơ sở dữ liệu MySQL (cổng 3306) nằm trên một máy chủ nội bộ (Server B) thông qua một máy chủ SSH (Server A) có IP công khai. Anh ta nên sử dụng loại chuyển tiếp cổng SSH nào trên máy tính cá nhân của mình?**
A. Local Port Forwarding (-L)
B. Remote Port Forwarding (-R)
C. Dynamic Port Forwarding (-D)
D. X11 Forwarding (-X)
đáp án: A
giải thích: A đúng vì Local Forwarding cho phép mở một cổng trên máy cục bộ và đẩy dữ liệu qua SSH tunnel đến đích (Server B) thông qua Server A; B sai vì Remote dùng để mở cổng trên server đẩy về máy mình; C sai vì Dynamic biến SSH thành SOCKS proxy (thường dùng để duyệt web); D sai vì X11 dùng cho giao diện đồ họa.

**3. Trong quá trình bắt tay TLS (Handshake), tại sao cả Client và Server đều phải gửi một số ngẫu nhiên (Random Nonce) trong thông điệp Hello?**
A. Để dùng làm khóa bí mật chính (Master Secret) ngay lập tức
B. Để chống lại tấn công phát lại (Replay Attack) và tạo tính ngẫu nhiên cho việc sinh khóa phiên
C. Để xác định phiên bản giao thức TLS cao nhất được hỗ trợ
D. Để nén dữ liệu trước khi truyền
đáp án: B
giải thích: B đúng vì các số ngẫu nhiên này đảm bảo mỗi lần bắt tay là duy nhất, ngăn kẻ tấn công ghi âm và phát lại gói tin cũ, đồng thời tham gia vào công thức tính Master Secret; A sai vì Master Secret cần tính toán phức tạp hơn; C sai vì phiên bản được gửi trong trường Version riêng; D sai vì nén không liên quan đến nonce.

**4. Khi trình duyệt cảnh báo "Kết nối không an toàn" do lỗi chứng chỉ, nhưng bạn vẫn cố tình truy cập (Add Exception). Điều này đồng nghĩa với việc bạn đang chấp nhận rủi ro nào lớn nhất?**
A. Bị tấn công từ chối dịch vụ (DoS)
B. Bị tấn công nghe lén thụ động (Passive Sniffing)
C. Bị tấn công xen giữa (Man-in-the-Middle)
D. Bị tấn công vào cơ sở dữ liệu của Web Server
đáp án: C
giải thích: C đúng vì nếu chứng chỉ không hợp lệ, bạn không thể xác thực danh tính server, kẻ tấn công có thể đứng giữa giả mạo server để giải mã dữ liệu; A và D sai vì đây là tấn công vào hạ tầng/ứng dụng không liên quan trực tiếp đến xác thực chứng chỉ TLS; B sai vì kẻ nghe lén thụ động không thể giải mã nếu không đứng giữa thay đổi khóa (MITM).

---

### PHẦN 2: DẠNG CÂU HỎI "TỔNG HỢP & LIÊN KẾT"

**5. Mối quan hệ giữa Master Secret và Session ID trong TLS được mô tả như thế nào là chính xác nhất?**
A. Mỗi Session ID tương ứng với một Master Secret duy nhất, được lưu trữ để tái sử dụng cho các kết nối sau (Resumption)
B. Master Secret được thay đổi liên tục trong một Session ID để tăng bảo mật
C. Session ID được tạo ra từ Master Secret bằng hàm băm
D. Master Secret là công khai, còn Session ID là bí mật
đáp án: A
giải thích: A đúng vì mục đích của Session ID là định danh một trạng thái phiên chứa Master Secret để không phải thỏa thuận lại khóa (Handshake) tốn kém; B sai vì Master Secret cố định trong một phiên; C sai vì Session ID là số ngẫu nhiên do Server chọn; D sai vì Master Secret phải tuyệt mật.

**6. So sánh kiến trúc của SSH và TLS, điểm khác biệt lớn nhất về vị trí của lớp xác thực (Authentication Layer) là gì?**
A. Trong TLS xác thực nằm trong Handshake, trong SSH xác thực là một lớp riêng biệt nằm trên lớp vận chuyển
B. SSH không có lớp xác thực, chỉ có mã hóa
C. TLS thực hiện xác thực sau khi thiết lập xong kết nối ứng dụng, SSH thực hiện ngay từ đầu
D. SSH sử dụng UDP, TLS sử dụng TCP
đáp án: A
giải thích: A đúng vì SSH tách biệt rõ ràng 3 lớp: Transport (mã hóa) -> User Auth (xác thực) -> Connection (kênh), trong khi TLS tích hợp xác thực vào quá trình Handshake; B sai vì SSH bắt buộc phải xác thực; C sai vì cả hai đều xác thực trước khi truyền dữ liệu ứng dụng; D sai vì SSH cũng chạy trên TCP.

**7. Yếu tố nào sau đây có trong "Trạng thái kết nối" (Connection State) nhưng KHÔNG được lưu trong "Trạng thái phiên" (Session State) của TLS?**
A. Master Secret
B. Peer Certificate (Chứng chỉ đối tác)
C. Cipher Spec (Thông số thuật toán)
D. Initialization Vector (IV) và Sequence Number
đáp án: D
giải thích: D đúng vì IV và số thứ tự gói tin thay đổi liên tục theo từng kết nối và từng gói tin cụ thể, không được lưu lâu dài trong phiên; A, B, C sai vì đó là các thông số cố định của phiên được lưu lại để tái sử dụng.

---

### PHẦN 3: DẠNG CÂU HỎI "TÌM ĐIỂM SAI/NGOẠI LỆ"

**8. Phát biểu nào sau đây về giao thức HTTPS là SAI?**
A. HTTPS mã hóa toàn bộ nội dung trang web và URL
B. HTTPS sử dụng cổng 443 mặc định
C. HTTPS mã hóa địa chỉ IP đích và tên miền (Hostname) trong quá trình bắt tay ban đầu (trước TLS 1.3)
D. HTTPS yêu cầu chứng chỉ số X.509 để hoạt động
đáp án: C
giải thích: C là phát biểu sai vì trước khi kết nối TLS được thiết lập, việc phân giải DNS (IP) và SNI (Server Name Indication) trong ClientHello thường ở dạng rõ, nên tên miền không được mã hóa hoàn toàn ở bước đầu; A, B, D đều là các đặc điểm đúng của HTTPS.

**9. Loại tấn công nào sau đây KHÔNG thể bị ngăn chặn trực tiếp bởi giao thức SSH?**
A. Password Sniffing (Nghe lén mật khẩu)
B. Man-in-the-Middle (khi đã xác thực Host Key thành công)
C. Keylogger cài trên máy của người dùng (Client)
D. IP Spoofing (Giả mạo IP trong quá trình truyền dữ liệu)
đáp án: C
giải thích: C là ngoại lệ vì SSH chỉ bảo vệ dữ liệu trên đường truyền mạng, nếu máy người dùng đã bị nhiễm mã độc Keylogger thì mật khẩu bị lộ trước khi được đưa vào SSH để mã hóa; A, B, D đều bị SSH ngăn chặn nhờ cơ chế mã hóa và xác thực.

**10. Thành phần nào sau đây KHÔNG tham gia vào quá trình tính toán Master Secret trong TLS?**
A. Client Random
B. Server Random
C. Pre-master Secret
D. Session ID
đáp án: D
giải thích: D là ngoại lệ vì Session ID chỉ là nhãn định danh do Server tạo ra để gọi lại phiên, không phải là nguyên liệu toán học để tính ra khóa bí mật; A, B, C là 3 tham số bắt buộc để tạo nên Master Secret.

---

### PHẦN 4: DẠNG CÂU HỎI "BẪY TỪ NGỮ"

**11. Trong TLS, sự khác biệt giữa "Pre-master Secret" và "Master Secret" là gì?**
A. Pre-master Secret dài 48 byte, Master Secret dài tùy ý
B. Pre-master Secret được gửi trực tiếp (được mã hóa) qua mạng, Master Secret được tính toán nội bộ và không bao giờ gửi qua mạng
C. Master Secret dùng để tạo Pre-master Secret
D. Hai thuật ngữ này là một, chỉ khác tên gọi ở Client và Server
đáp án: B
giải thích: B đúng vì Pre-master là nguyên liệu thô được Client gửi sang Server (bảo vệ bằng Public Key của Server), còn Master Secret là kết quả tính toán cuối cùng tại mỗi bên để sinh khóa phiên; A sai vì Master Secret cố định 48 byte; C sai vì quy trình ngược lại; D sai vì chúng là hai giá trị khác nhau trong quy trình.

**12. Giao thức nào chịu trách nhiệm "báo hiệu" cho hai bên biết rằng "kể từ gói tin tiếp theo, mọi dữ liệu sẽ được mã hóa"?**
A. Handshake Protocol
B. Alert Protocol
C. Change Cipher Spec Protocol
D. Record Protocol
đáp án: C
giải thích: C đúng vì đây là bẫy phổ biến, nhiều người nghĩ việc này thuộc về Handshake, nhưng thực tế TLS tách riêng một giao thức con tên là Change Cipher Spec chỉ để làm nhiệm vụ bật "công tắc" mã hóa này; A sai vì Handshake dùng để đàm phán; B sai vì Alert dùng báo lỗi; D sai vì Record là lớp vận chuyển.

**13. Khi nói về SSH, phương pháp xác thực "Hostbased" (dựa trên máy trạm) khác với "Public Key" (khóa công khai) ở điểm mấu chốt nào?**
A. Hostbased xác thực người dùng, Public Key xác thực máy tính
B. Hostbased dựa trên sự tin cậy vào máy tính trạm (Client Host), Public Key dựa trên việc người dùng sở hữu khóa riêng (Private Key)
C. Hostbased không sử dụng mật mã, Public Key có sử dụng
D. Hostbased an toàn hơn Public Key
đáp án: B
giải thích: B đúng vì bẫy ở đây là đối tượng được tin cậy: Hostbased tin vào máy tính (nếu máy tính bị hack thì hacker vào được), còn Public Key tin vào chìa khóa (ai cầm chìa khóa mới vào được); A sai vì ngược lại; C sai vì cả hai đều dùng mật mã; D sai vì Hostbased thường kém an toàn hơn do rủi ro giả mạo IP/Host.

**14. Trong cấu trúc TLS, "Record Protocol" cung cấp hai dịch vụ cơ bản là gì?**
A. Confidentiality (Bí mật) và Authentication (Xác thực người dùng)
B. Integrity (Toàn vẹn) và Authentication (Xác thực người dùng)
C. Confidentiality (Bí mật) và Message Integrity (Toàn vẹn thông điệp)
D. Key Exchange (Trao đổi khóa) và Encryption (Mã hóa)
đáp án: C
giải thích: C đúng vì Record Protocol dùng mã hóa đối xứng cho tính Bí mật và HMAC cho tính Toàn vẹn; A và B sai ở từ "Authentication" (Record Protocol không xác thực người dùng, việc đó của lớp ứng dụng hoặc Handshake xác thực máy chủ); D sai vì Key Exchange thuộc về Handshake Protocol.
