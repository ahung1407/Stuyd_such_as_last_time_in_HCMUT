Chào bạn, dựa trên nội dung các slide bài giảng về **Bảo mật thư điện tử (PGP và S/MIME)** mà bạn đã cung cấp, dưới đây là lời giải chi tiết cho các câu hỏi và bài tập chương VIII.

---

### **I. CÂU HỎI TỰ LUẬN**

**1. Các dịch vụ được PGP cung cấp là gì?**
PGP (Pretty Good Privacy) cung cấp 5 dịch vụ chính:
* **Xác thực (Authentication):** Sử dụng chữ ký số (Digital Signature) để đảm bảo người gửi là chính chủ và thông điệp không bị sửa đổi.
* **Bí mật (Confidentiality):** Sử dụng mã hóa đối xứng (Symmetric Encryption) với khóa phiên để mã hóa nội dung thư, đảm bảo chỉ người nhận đọc được.
* **Nén (Compression):** Nén dữ liệu (thường dùng thuật toán ZIP) trước khi mã hóa để tiết kiệm băng thông và tăng độ bảo mật (giảm dư thừa dữ liệu).
* **Tương thích E-mail (E-mail Compatibility):** Sử dụng thuật toán Radix-64 để chuyển đổi dữ liệu nhị phân (ciphertext) thành các ký tự ASCII in được, giúp email đi qua các hệ thống mail server cũ mà không bị lỗi.
* **Phân mảnh (Segmentation):** Chia nhỏ các thông điệp có kích thước quá lớn thành các phần nhỏ để gửi đi và tự động ghép lại ở phía người nhận.

**2. Vì sao PGP tạo chữ ký trước khi thực hiện nén dữ liệu?**
Có 2 lý do chính (Dựa trên slide `image_f26072.png`):
* **Để lưu trữ tiện lợi:** Người nhận có thể chỉ cần lưu trữ thông điệp ở dạng nén cùng với chữ ký. Nếu cần xác minh lại sau này, họ không cần phải nén lại thông điệp gốc.
* **Độc lập với thuật toán nén (Quan trọng):** Chữ ký được tính trên bản gốc (plaintext). Nếu nén trước rồi mới ký, thì khi xác minh, người nhận phải giải nén mới ra được bản gốc. Hơn nữa, các phiên bản nén khác nhau có thể tạo ra file nén khác nhau (dù giải nén ra cùng nội dung), điều này sẽ làm sai lệch chữ ký nếu ký trên file nén. Ký trên bản gốc đảm bảo tính toàn vẹn của nội dung ngữ nghĩa.

**3. Cho biết thuật toán Radix-64 làm gì?**
* **Chức năng:** Chuyển đổi dữ liệu nhị phân (binary) bất kỳ (như dữ liệu đã mã hóa, chữ ký số) thành các ký tự ASCII in được.
* **Cơ chế:** Nó chia luồng dữ liệu đầu vào thành các nhóm **24 bits** (3 bytes), sau đó ánh xạ mỗi nhóm 6 bits thành một ký tự ASCII. Kết quả là **3 bytes dữ liệu nhị phân sẽ được chuyển thành 4 ký tự ASCII**.
* **Mục đích:** Giúp dữ liệu đã mã hóa (vốn là nhị phân loằng ngoằng) có thể đi qua đường truyền email văn bản (vốn chỉ hỗ trợ ASCII 7-bit) một cách an toàn.

**4. RFC 822 là gì?**
* Là tiêu chuẩn định dạng tin nhắn văn bản Internet cổ điển.
* Nó quy định cấu trúc cơ bản của một email gồm: **Phần tiêu đề (Header)** (chứa các trường như To, From, Subject, Date...) và **Phần thân (Body)** (nội dung văn bản ASCII).
* Tuy nhiên, RFC 822 có hạn chế lớn là chỉ hỗ trợ văn bản thuần, không hỗ trợ file đính kèm hay đa phương tiện (đây là lý do MIME ra đời sau này để mở rộng nó).

**5. S/MIME là gì?**
* **S/MIME (Secure/Multipurpose Internet Mail Extensions):** Là một tiêu chuẩn bảo mật cho định dạng email MIME.
* Nó cung cấp các dịch vụ bảo mật (xác thực, toàn vẹn, bí mật, chống thoái thác) cho dữ liệu đa phương tiện trong email bằng cách sử dụng công nghệ mã hóa khóa công khai (như RSA). S/MIME thường được tích hợp sẵn trong các trình duyệt mail doanh nghiệp (Outlook, Thunderbird...).

---

### **II. CÂU HỎI TRẮC NGHIỆM**

**1. Chọn phát biểu sai trong các phát biểu sau khi PGP được sử dụng trong một hệ thống E-mail:**
* **Đáp án: c. Nếu chỉ dùng dịch vụ xác thực thì thông điệp gởi đi sẽ không có mã hóa ở bất kỳ khối dữ liệu nào.**
* **Giải thích:**
    * Trong PGP, "Xác thực" được thực hiện bằng Chữ ký số.
    * Để tạo chữ ký số, người gửi phải lấy mã băm (hash) của thông điệp và **mã hóa** mã băm đó bằng **khóa riêng (Private Key)** của mình.
    * Do đó, khối chữ ký đi kèm là một khối dữ liệu **đã được mã hóa**. Vì vậy, phát biểu "không có mã hóa ở bất kỳ khối dữ liệu nào" là Sai.
    * (Các câu a, b, d đều đúng theo lý thuyết PGP).

**2. Khi cần truyền một thông điệp và dùng cả hai dịch vụ bí mật và xác thực của PGP thì phần nào sẽ được mã hóa đối xứng bằng khóa phiên?**
* **Đáp án: d. Thông điệp và chữ ký số trên thông điệp.**
* **Giải thích:** Theo quy trình PGP:
    1.  Ký (Tạo chữ ký cho thông điệp).
    2.  Nén (Gộp Thông điệp + Chữ ký lại rồi Nén thành một khối).
    3.  Mã hóa (Dùng khóa phiên để mã hóa khối nén đó).
    * $\rightarrow$ Vậy, cả thông điệp và chữ ký đều nằm trong gói được mã hóa bởi khóa phiên.

**3. Khóa được sử dụng để mã hóa khóa phiên trong PGP khi dùng trên hệ thống E-mail là:**
* **Đáp án: c. Khóa công khai của người nhận.**
* **Giải thích:**
    * Khóa phiên ($K_s$) dùng để mã hóa nội dung thư.
    * Để người nhận giải mã được thư, họ cần có $K_s$.
    * Để gửi $K_s$ an toàn, người gửi phải mã hóa nó bằng **Khóa công khai của người nhận**. Chỉ có người nhận (với khóa riêng tương ứng) mới giải mã được để lấy $K_s$.

**4. Chế độ hoạt động của PGP khi thực hiện mã hóa đối xứng là:**
* **Đáp án: c. CFB (Cipher Feedback)**
* **Giải thích:** Mặc dù slide của bạn ghi là "chế độ **CBC/CFB**", nhưng đặc trưng kỹ thuật riêng biệt của chuẩn OpenPGP (RFC 4880) là sử dụng chế độ **CFB** (Cipher Feedback) cho mã hóa đối xứng. (Trong khi đó, S/MIME thường dùng CBC).

**5. Thuật toán mã hóa nào sau đây là phù hợp với mã hóa đối xứng của PGP:**
* **Đáp án: d. Cả câu (b) và (c) đều đúng** (AES và 3DES).
* **Giải thích:**
    * Slide `image_f26035.png` liệt kê: **Triple-DES (168-bit)**, CAST, IDEA.
    * Trong thực tế hiện đại (OpenPGP), **AES** (128, 192, 256 bit) là thuật toán tiêu chuẩn mạnh nhất và được ưu tiên sử dụng.
    * 3DES vẫn được hỗ trợ (tương thích ngược). DES (câu a) đã quá yếu.
    * Do đó, đáp án bao gồm cả thuật toán kinh điển (3DES) và thuật toán hiện đại (AES) là chính xác nhất.