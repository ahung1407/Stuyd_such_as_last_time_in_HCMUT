Để master hoàn toàn chương này, bạn cần khoảng **25-30 câu hỏi chất lượng cao**. Số lượng không quan trọng bằng chất lượng câu hỏi. Nếu bạn có thể trả lời đúng và **hiểu rõ tại sao các đáp án còn lại sai** trong bộ câu hỏi dưới đây, bạn đã nắm được 90-95% kiến thức để đi thi.

Dưới đây là bộ câu hỏi được chia theo các mức độ tư duy bạn yêu cầu, bám sát từng dòng trong slide.

---

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (Kiến thức nền tảng)

**1. Trong mô hình bảo mật PGP, tại sao dữ liệu được nén (Compression) sau khi ký (Signature) nhưng lại trước khi mã hóa (Encryption)?**
A. Để giảm thời gian tính toán của thuật toán mã hóa RSA.
B. Để đảm bảo tính toàn vẹn của chữ ký không phụ thuộc vào thuật toán nén và giảm dư thừa dữ liệu để chống thám mã.
C. Vì thuật toán nén ZIP chỉ hoạt động được trên dữ liệu dạng văn bản rõ (plaintext).
D. Để tương thích với chuẩn Radix-64 khi truyền qua Email.
đáp án: B
Giải thích: B đúng vì ký trước nén đảm bảo chữ ký luôn đúng dù giải nén bằng phần mềm khác nhau, và nén trước mã hóa giúp giảm độ dư thừa (redundancy) khiến việc thám mã khó hơn; A sai vì RSA dùng để mã hóa khóa phiên chứ không mã hóa dữ liệu nén; C sai vì ZIP nén được cả dữ liệu nhị phân; D sai vì Radix-64 thực hiện sau cùng.

**2. Giả sử Alice muốn gửi một email bí mật cho Bob bằng S/MIME. Alice cần sử dụng thông tin nào để mã hóa khóa phiên (session key)?**
A. Khóa bí mật (private key) của Alice.
B. Khóa công khai (public key) của Alice.
C. Khóa bí mật (private key) của Bob.
D. Khóa công khai (public key) của Bob.
đáp án: D
Giải thích: D đúng vì để đảm bảo tính bí mật, chỉ Bob mới được phép giải mã, do đó phải dùng khóa công khai của Bob để khóa lại (cơ chế phong bì số); A sai vì dùng khóa riêng Alice là để ký số; B sai vì không ai dùng khóa công khai của mình để gửi thư cho người khác; C sai vì Alice không bao giờ có được khóa bí mật của Bob.

**3. Trong PGP, Key ID (Định danh khóa) được sinh ra từ đâu và có độ dài bao nhiêu?**
A. Sinh ngẫu nhiên bởi hệ thống, độ dài 128 bit.
B. Là giá trị băm của khóa công khai, độ dài 160 bit.
C. Là 64 bit thấp nhất (least significant bits) của khóa công khai.
D. Là 64 bit cao nhất (most significant bits) của khóa công khai.
đáp án: C
Giải thích: C đúng theo định nghĩa kỹ thuật của PGP trong slide 30; A sai vì Key ID phụ thuộc vào khóa chứ không ngẫu nhiên; B sai vì Key ID ngắn hơn mã băm; D sai vì quy ước lấy phần bit thấp (đuôi).

**4. Chức năng chính của thuật toán Radix-64 trong PGP và S/MIME là gì?**
A. Mã hóa nội dung thư để đảm bảo tính bí mật.
B. Nén dữ liệu để giảm dung lượng đường truyền.
C. Chuyển đổi dữ liệu nhị phân (binary) thành các ký tự ASCII in được để đi qua các MTA cũ.
D. Tạo mã kiểm tra lỗi (Checksum) cho toàn bộ gói tin.
đáp án: C
Giải thích: C đúng vì SMTP cũ chỉ hỗ trợ ASCII 7-bit nên cần Radix-64 (tương tự Base64) để "bọc" dữ liệu nhị phân; A sai vì Radix-64 là mã hóa định dạng (encoding) chứ không phải mật mã (encryption); B sai vì đó là việc của thuật toán ZIP; D sai vì CRC mới là phần kiểm lỗi đi kèm Radix-64.

**5. Trong S/MIME, cấu trúc "EnvelopedData" dùng để chứa loại dữ liệu nào?**
A. Dữ liệu đã được nén.
B. Dữ liệu đã được ký số (Digital Signature).
C. Dữ liệu đã được mã hóa (Encrypted content) và các khóa phiên được mã hóa.
D. Chứng chỉ số X.509 của người gửi.
đáp án: C
Giải thích: C đúng theo định nghĩa RFC của S/MIME, "Enveloped" (đóng phong bì) ám chỉ việc giữ bí mật/mã hóa; A sai vì nén là CompressedData; B sai vì ký là SignedData; D sai vì chứng chỉ số thường đi kèm trong SignedData.

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (So sánh PGP và S/MIME)

**6. Sự khác biệt cốt lõi nhất về mô hình quản lý khóa (Key Management) giữa PGP và S/MIME là gì?**
A. PGP dùng RSA còn S/MIME dùng AES.
B. PGP dùng mô hình "Web of Trust" phi tập trung, còn S/MIME dùng mô hình PKI tập trung với các CA.
C. PGP chỉ dành cho cá nhân, S/MIME chỉ dành cho chính phủ.
D. PGP không hỗ trợ thu hồi khóa, còn S/MIME thì có.
đáp án: B
Giải thích: B đúng vì đây là triết lý thiết kế nền tảng khác nhau (Slide 35 vs Slide 37); A sai vì cả hai đều hỗ trợ RSA; C sai vì đó là đối tượng sử dụng phổ biến chứ không phải giới hạn kỹ thuật; D sai vì PGP cũng có cơ chế thu hồi khóa (revocation certificate).

**7. Một thông điệp PGP đầy đủ bao gồm các lớp (layer) dữ liệu lồng nhau theo thứ tự từ trong ra ngoài là:**
A. Data -> Encryption -> Signature -> Compression -> Radix-64.
B. Data -> Signature -> Compression -> Encryption -> Radix-64.
C. Data -> Compression -> Signature -> Encryption -> Radix-64.
D. Data -> Encryption -> Compression -> Signature -> Radix-64.
đáp án: B
Giải thích: B đúng theo sơ đồ luồng dữ liệu (Slide 28 và 31): Ký trước để bảo vệ toàn vẹn bản gốc, Nén tiếp theo để tối ưu, Mã hóa sau cùng để bảo vệ tất cả, và Radix-64 bọc ngoài để truyền tin; A, C, D sai vì sai thứ tự xử lý chuẩn của PGP.

**8. Cả PGP và S/MIME đều sử dụng kỹ thuật "Mã hóa lai" (Hybrid Encryption). Điều này có nghĩa là:**
A. Sử dụng hai thuật toán băm khác nhau để tăng độ an toàn.
B. Kết hợp mã hóa đối xứng (để mã hóa nội dung thư) và mã hóa bất đối xứng (để mã hóa khóa phiên).
C. Kết hợp chữ ký số và mã hóa dữ liệu trong cùng một gói tin.
D. Sử dụng khóa công khai của cả người gửi và người nhận cùng lúc.
đáp án: B
Giải thích: B đúng vì đây là định nghĩa của Hybrid Encryption nhằm tận dụng tốc độ của đối xứng và tính bảo mật trao đổi khóa của bất đối xứng (Slide 18, 24, 40); A sai vì Hybrid không liên quan đến số lượng hàm băm; C sai vì đó là kết hợp dịch vụ, không phải định nghĩa thuật toán lai; D sai vì cách dùng khóa phụ thuộc vào mục đích (ký hay mã hóa).

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (Kiểm tra chi tiết)

**9. Khi nói về giao thức SMTP, phát biểu nào sau đây là SAI?**
A. SMTP là giao thức dùng để đẩy (push) thư từ máy khách đến máy chủ hoặc giữa các máy chủ với nhau.
B. SMTP gốc chỉ hỗ trợ mã hóa ASCII 7-bit.
C. SMTP sử dụng cổng mặc định là 110.
D. SMTP không có cơ chế bảo mật mặc định mạnh mẽ như mã hóa hay xác thực người gửi.
đáp án: C
Giải thích: C sai vì cổng mặc định của SMTP là 25 (Slide 6), cổng 110 là của POP3; A đúng vì SMTP là giao thức push; B đúng vì hạn chế này dẫn đến sự ra đời của MIME; D đúng vì SMTP ban đầu rất sơ khai.

**10. Trong các thuật toán sau, thuật toán nào KHÔNG được liệt kê là thuật toán mã hóa khóa phiên (Symmetric Key) trong chuẩn PGP?**
A. CAST-128
B. IDEA
C. RSA
D. 3DES
đáp án: C
Giải thích: C là đáp án cần chọn vì RSA là thuật toán bất đối xứng (Asymmetric) dùng để ký hoặc mã hóa khóa phiên, không dùng để mã hóa nội dung thư (Session key); A, B, D đều là các thuật toán đối xứng được PGP hỗ trợ (Slide 24).

**11. Phát biểu nào sau đây về S/MIME là SAI?**
A. S/MIME được tích hợp sẵn trong nhiều trình mail doanh nghiệp như Outlook.
B. S/MIME sử dụng chuẩn MIME để đóng gói dữ liệu.
C. S/MIME yêu cầu người dùng tự trao đổi khóa công khai trực tiếp mà không cần tổ chức thứ ba.
D. S/MIME hỗ trợ các tính năng nâng cao như biên nhận có chữ ký (Signed Receipt).
đáp án: C
Giải thích: C sai vì S/MIME dựa trên PKI/CA, tức là tin tưởng vào bên thứ ba (Certificate Authority) để cấp phát và kiểm chứng khóa, ngược lại với PGP (Web of Trust); A, B, D đều là đặc điểm đúng của S/MIME.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (Dễ nhầm lẫn)

**12. Để đảm bảo tính "xác thực nguồn gốc" (Authentication) trong PGP, người gửi sử dụng khóa nào để tạo chữ ký số?**
A. Khóa bí mật (Private Key) của người nhận.
B. Khóa công khai (Public Key) của người nhận.
C. Khóa bí mật (Private Key) của người gửi.
D. Khóa công khai (Public Key) của người gửi.
đáp án: C
Giải thích: C đúng vì chỉ người gửi mới có khóa bí mật của chính mình để tạo chữ ký, chứng minh "tôi là chính chủ"; A là điều không thể (không có khóa người khác); B dùng để mã hóa bí mật; D dùng để người nhận kiểm tra chữ ký (verify), không phải để tạo chữ ký.

**13. Thuật ngữ "Pass-phrase" trong PGP được sử dụng để làm gì?**
A. Để mã hóa nội dung bức thư thay cho khóa phiên.
B. Để xác thực người dùng khi đăng nhập vào máy chủ email.
C. Để mã hóa và bảo vệ chùm khóa riêng (Private Key Ring) lưu trên máy tính người dùng.
D. Để tạo hạt giống (seed) sinh ra khóa công khai.
đáp án: C
Giải thích: C đúng theo Slide 32, Pass-phrase là lớp bảo vệ cuối cùng cho khóa riêng trên ổ cứng; A sai vì mã hóa thư dùng khóa phiên ngẫu nhiên; B sai vì đó là mật khẩu email server; D sai vì tạo khóa dựa trên thuật toán sinh khóa.

**14. Trong S/MIME, thuật toán nào là BẮT BUỘC (MUST support) cho việc tạo tóm tắt thông điệp (Message Digest)?**
A. MD5
B. SHA-1
C. SHA-256
D. AES-128
đáp án: C
Giải thích: C đúng theo bảng "Requirement" trong Slide 43, SHA-256 là bắt buộc; A chỉ là hỗ trợ tương thích ngược (Receiver SHOULD support); B cũng là SHOULD support; D là thuật toán mã hóa, không phải tóm tắt.

**15. "MIME" và "S/MIME" khác nhau ở điểm nào?**
A. MIME là giao thức gửi thư, S/MIME là giao thức nhận thư.
B. MIME định nghĩa định dạng thư đa phương tiện, còn S/MIME thêm các lớp bảo mật (mã hóa/ký) vào định dạng MIME đó.
C. MIME chỉ hỗ trợ văn bản, S/MIME hỗ trợ hình ảnh.
D. MIME dùng cổng 25, S/MIME dùng cổng 443.
đáp án: B
Giải thích: B đúng vì S/MIME (Secure MIME) là bản mở rộng bảo mật của MIME; A sai vì cả hai là định dạng dữ liệu (format), không phải giao thức truyền (protocol); C sai vì MIME sinh ra để hỗ trợ đa phương tiện; D sai vì chúng hoạt động ở tầng ứng dụng (nội dung), không quy định cổng mạng.
