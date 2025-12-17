Chào bạn, để giúp bạn nắm bắt nhanh và nhớ lâu toàn bộ chương "Bảo mật thư điện tử" (Slide 1-48), tôi đã cô đọng lại thành 4 trụ cột kiến thức cốt lõi nhất. Đây là những điểm "chết người" thường xuyên xuất hiện trong các bài thi và ứng dụng thực tế.

---

### **1. Nền tảng: Tại sao Email kém an toàn?**

- **Bản chất:** Giao thức **SMTP** (RFC 5321) ra đời từ thập niên 80, thiết kế dạng văn bản thuần (text-based), **không có mã hóa**. Nó đi qua nhiều trạm trung chuyển (MTA), ai cũng có thể đọc trộm hoặc sửa đổi.
- **MIME (Multipurpose Internet Mail Extensions):**
  - Là "bản vá" giúp email gửi được file đính kèm (ảnh, video, exe) và hỗ trợ đa ngôn ngữ (Tiếng Việt).
  - Dùng **Base64** (hoặc Quoted-printable) để chuyển dữ liệu nhị phân thành văn bản ASCII an toàn khi gửi qua SMTP.
  - **Lưu ý:** MIME chỉ giúp định dạng dữ liệu, **không giúp bảo mật**.

---

### **2. Cơ chế mật mã: Công thức chung cho bảo mật Email**

Dù là PGP hay S/MIME, cả hai đều dùng chung một bộ khung thuật toán (Hybrid Encryption):

- **Để giữ BÍ MẬT (Confidentiality):** Dùng **Mã hóa lai**.
  - Tạo một **Khóa phiên (Session Key - $K_s$)** ngẫu nhiên.
  - Dùng $K_s$ mã hóa nội dung thư (AES/IDEA/CAST).
  - Dùng **Khóa công khai người nhận** mã hóa cái $K_s$ đó (RSA).
- **Để XÁC THỰC & TOÀN VẸN (Auth & Integrity):** Dùng **Chữ ký số**.
  - Tạo mã băm (Hash) của thư (SHA).
  - Dùng **Khóa riêng người gửi** mã hóa mã băm đó.

> **Quy tắc vàng cần nhớ:**
>
> - Muốn **giấu tin**: Mã hóa bằng Khóa công khai người nhận.
> - Muốn **chứng minh danh tính**: Ký bằng Khóa riêng của mình.

---

### **3. PGP (Pretty Good Privacy) - "Dân chủ & Cá nhân"**

- **Triết lý:** **Web of Trust** (Mạng lưới niềm tin). Không tin vào một tổ chức trung gian nào (CA), người dùng tự ký xác nhận độ tin cậy cho nhau.
- **Đặc điểm kỹ thuật:**
  - **Thứ tự xử lý:** Ký (Signature) $\rightarrow$ Nén (Compression - ZIP) $\rightarrow$ Mã hóa (Encryption).
  - **Lý do nén trước mã hóa:** Để giảm dư thừa dữ liệu, làm khó thám mã và tiết kiệm dung lượng.
  - **Quản lý khóa:**
    - **Key ID:** 64-bit cuối của khóa công khai (để định danh nhanh).
    - **Private Key Ring:** Chùm khóa riêng được bảo vệ bằng mật khẩu (Pass-phrase).
  - **Chuyển đổi:** Dùng **Radix-64** để biến đống dữ liệu mã hóa thành text gửi qua email.

---

### **4. S/MIME (Secure/MIME) - "Tập trung & Doanh nghiệp"**

- **Triết lý:** **PKI (Public Key Infrastructure)**. Tin tưởng vào tổ chức cấp phát chứng chỉ số tập trung (**CA** - Certificate Authority). Đây là chuẩn tích hợp sẵn trong Outlook, Gmail doanh nghiệp.
- **Đặc điểm kỹ thuật:**
  - **Cấu trúc tin:** Dùng chuẩn **CMS** (Cryptographic Message Syntax).
    - `EnvelopedData`: Chứa nội dung đã mã hóa.
    - `SignedData`: Chứa nội dung đã ký.
  - **Thuật toán chuẩn (RFC):** Bắt buộc phải hỗ trợ **AES** (mã hóa) và **SHA-256** (băm).
  - **Tính năng nâng cao:**
    - Biên nhận có chữ ký (Signed Receipt - chứng minh đã nhận).
    - Nhãn bảo mật (Security Label - phân quyền truy cập).

---

### **Bảng so sánh (Cực quan trọng để đi thi)**

| Tiêu chí            | PGP (Pretty Good Privacy)                          | S/MIME (Secure/MIME)                                |
| :------------------ | :------------------------------------------------- | :-------------------------------------------------- |
| **Mô hình tin cậy** | **Phi tập trung** (Web of Trust - Bạn bè tin nhau) | **Tập trung** (PKI / CA - Tin vào tổ chức cấp phép) |
| **Đối tượng dùng**  | Cá nhân, người dùng am hiểu kỹ thuật               | Doanh nghiệp, tổ chức chính phủ                     |
| **Định dạng**       | PGP Message / Radix-64                             | MIME CMS (EnvelopedData, SignedData)                |
| **Thuật toán gốc**  | IDEA, CAST, RSA                                    | AES, 3DES, RSA                                      |
| **Quy trình**       | Ký -> Nén -> Mã hóa                                | Xử lý linh hoạt lồng nhau (Nested)                  |

### **Gợi ý cách học thuộc:**

1.  Nhớ sơ đồ **Ký -> Nén -> Mã hóa** của PGP.
2.  Nhớ **Web of Trust** là của PGP, **CA** là của S/MIME.
3.  Nhớ **Session Key** dùng một lần là để mã hóa dữ liệu, còn **RSA** là để bảo vệ Session Key đó.
    Chào bạn, dưới đây là lời giải chi tiết cho **CÂU HỎI VÀ BÀI TẬP CHƯƠNG VIII (Bảo mật thư điện tử)** dựa trên kiến thức về Mật mã và An ninh mạng (đặc biệt là nội dung PGP và S/MIME).

---

### **PHẦN I. CÂU HỎI TỰ LUẬN**

**Câu 1: Các dịch vụ được PGP cung cấp là gì?**
PGP (Pretty Good Privacy) cung cấp 5 dịch vụ cơ bản sau:

1.  **Xác thực (Authentication):** Sử dụng chữ ký số (tạo bằng RSA/SHA) để xác nhận người gửi và đảm bảo tính toàn vẹn của thông điệp.
2.  **Bí mật (Confidentiality):** Mã hóa thông điệp bằng khóa phiên (Session key - thuật toán đối xứng như CAST-128, IDEA, 3DES, AES) và mã hóa khóa phiên đó bằng khóa công khai của người nhận (RSA).
3.  **Nén (Compression):** Nén dữ liệu (thường dùng thuật toán ZIP) để tiết kiệm băng thông và tăng độ bảo mật (giảm dư thừa dữ liệu trước khi mã hóa).
4.  **Tương thích E-mail (E-mail compatibility):** Sử dụng thuật toán Radix-64 để chuyển đổi dữ liệu nhị phân (binary) đã mã hóa thành dạng văn bản ASCII (text) để có thể gửi qua các hệ thống email truyền thống.
5.  **Phân mảnh (Segmentation):** Tự động chia nhỏ các thông điệp có kích thước quá lớn để gửi đi và ghép lại ở phía người nhận.

**Câu 2: Vì sao PGP tạo chữ ký trước khi thực hiện nén dữ liệu?**
Có 2 lý do chính:

1.  **Để lưu trữ tiện lợi:** Người nhận sau khi giải mã và giải nén có thể lưu trữ thông điệp ở dạng văn bản rõ (plaintext) cùng với chữ ký số. Nếu chữ ký được tạo trên dữ liệu đã nén, người dùng phải lưu trữ cả bản nén (vô nghĩa với con người) để xác thực lại sau này.
2.  **Tính nhất quán (Quan trọng nhất):** Các thuật toán nén không phải lúc nào cũng "tất định" (deterministic). Các phiên bản phần mềm nén khác nhau có thể tạo ra chuỗi bit nén khác nhau cho cùng một nội dung. Nếu ký vào bản nén, khi người nhận nén lại để kiểm tra có thể ra kết quả sai lệch $\rightarrow$ Chữ ký sai. Ký vào bản rõ đảm bảo chữ ký luôn đúng bất kể dùng phần mềm nén nào.

**Câu 3: Cho biết thuật toán Radix-64 làm gì?**

- **Mục đích:** Chuyển đổi dữ liệu nhị phân (binary) tùy ý (ví dụ: dữ liệu đã mã hóa, chữ ký số) thành các ký tự ASCII in được để truyền an toàn qua các hệ thống email cũ (vốn chỉ hỗ trợ văn bản 7-bit và dễ làm hỏng dữ liệu nhị phân).
- **Cơ chế:** Radix-64 nhóm 3 byte dữ liệu đầu vào (24 bits) thành 4 nhóm 6-bit. Mỗi nhóm 6-bit được ánh xạ sang một ký tự trong bảng mã Radix-64 (gồm A-Z, a-z, 0-9, +, /). PGP cũng thêm mã kiểm lỗi CRC vào cuối để phát hiện lỗi đường truyền.

**Câu 4: RFC 822 là gì?**

- **RFC 822** ("Standard for the Format of ARPA Internet Text Messages") là tiêu chuẩn cũ định nghĩa định dạng của tin nhắn văn bản trên Internet (tiền thân của email hiện đại).
- Nó quy định cấu trúc thư gồm 2 phần: **Header** (Tiêu đề: From, To, Subject, Date...) và **Body** (Nội dung), cách nhau bằng một dòng trống.
- Hiện nay nó đã được thay thế/cập nhật bởi **RFC 5322**.

**Câu 5: S/MIME là gì?**

- **S/MIME (Secure/Multipurpose Internet Mail Extensions)** là một tiêu chuẩn bảo mật cho định dạng email MIME.
- Khác với PGP (dựa trên Web of Trust), S/MIME dựa trên cơ sở hạ tầng khóa công khai tập trung (**PKI**) và chứng chỉ số X.509 do các tổ chức CA cấp phát.
- S/MIME cung cấp các dịch vụ tương tự PGP (xác thực, bí mật, toàn vẹn, chống thoái thác) và được tích hợp sẵn trong hầu hết các trình quản lý mail doanh nghiệp như Outlook, Thunderbird.

---

### **PHẦN II. CÂU HỎI TRẮC NGHIỆM**

**Câu 1: Chọn phát biểu sai trong các phát biểu sau khi PGP được sử dụng trong một hệ thống E-mail:**

- **Đáp án: c** (Nếu chỉ dùng dịch vụ xác thực thì thông điệp gởi đi sẽ không có mã hóa ở bất kỳ khối dữ liệu nào.)
- **Giải thích:**
  - Câu a đúng: PGP cung cấp đủ 5 dịch vụ này.
  - Câu b đúng: Khi dùng dịch vụ bí mật, nội dung thư được mã hóa.
  - Câu d đúng: Radix-64 map 3 byte (24 bit) $\rightarrow$ 4 ký tự ASCII (6 bit/ký tự).
  - **Câu c sai vì:** Dù chỉ dùng dịch vụ xác thực (không mã hóa nội dung thư), PGP vẫn thực hiện **mã hóa bản băm (hash)** bằng khóa riêng của người gửi để tạo ra chữ ký số. Do đó, nói "không có mã hóa ở _bất kỳ_ khối dữ liệu nào" là không chính xác về mặt kỹ thuật mật mã.

**Câu 2: Khi cần truyền một thông điệp và dùng cả hai dịch vụ bí mật và xác thực của PGP thì phần nào sẽ được mã hóa đối xứng bằng khóa phiên?**

- **Đáp án: d** (Thông điệp và chữ ký số trên thông điệp.)
- **Giải thích:** Quy trình của PGP là:
  1.  Tạo chữ ký số (Ký vào thông điệp).
  2.  Gộp [Thông điệp + Chữ ký số].
  3.  Nén khối dữ liệu trên.
  4.  Mã hóa khối dữ liệu nén bằng **khóa phiên** (Symmetric Key).
      $\rightarrow$ Vậy khóa phiên mã hóa cả thông điệp và chữ ký.

**Câu 3: Khóa được sử dụng để mã hóa khóa phiên trong PGP khi dùng trên hệ thống E-mail là:**

- **Đáp án: c** (Khóa công khai của người nhận.)
- **Giải thích:** Để đảm bảo chỉ người nhận mới đọc được thư, khóa phiên (dùng để giải mã thư) phải được bảo vệ sao cho chỉ người nhận mở được. Do đó, ta dùng khóa công khai của người nhận để mã hóa khóa phiên này (Cơ chế phong bì số - Digital Envelope).

**Câu 4: Chế độ hoạt động của PGP khi thực hiện mã hóa đối xứng là:**

- **Đáp án: c** (CFB)
- **Giải thích:** PGP sử dụng chế độ **CFB (Cipher Feedback)**, cụ thể là một biến thể gọi là OpenPGP CFB mode. S/MIME mới thường dùng CBC (Cipher Block Chaining). ECB (Electronic Codebook) không an toàn và không dùng cho dữ liệu lớn.

**Câu 5: Thuật toán mã hóa nào sau đây là phù hợp với mã hóa đối xứng của PGP:**

- **Đáp án: d** (Cả câu (b) và (c) đều đúng)
- **Giải thích:**
  - Các chuẩn PGP ban đầu (như RFC 1991) dùng IDEA.
  - Chuẩn OpenPGP (RFC 4880) yêu cầu hỗ trợ **3DES** (Triple DES) và **AES** (Advanced Encryption Standard). CAST-128 cũng thường được hỗ trợ.
  - DES (câu a) đã quá cũ và không còn an toàn, không được khuyến nghị trong các phiên bản PGP hiện đại.
  - Vậy 3DES và AES là các lựa chọn phù hợp và đúng chuẩn.
