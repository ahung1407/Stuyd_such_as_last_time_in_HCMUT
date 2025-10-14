Chào bạn, tôi sẽ trả lời các câu hỏi trắc nghiệm của bạn dựa trên thông tin có trong các nguồn tài liệu đã cung cấp:

### II. Câu hỏi trắc nghiệm

**DAA (Data Authentication Algorithm) tạo ra mã xác thực thông điệp có kích thước là:**

**b. 64 bits**

**Giải thích:**
Thuật toán Xác thực Dữ liệu (DAA) được dùng rộng rãi là MAC dựa trên DES-CBC. DAA sử dụng chế độ hoạt động CBC của DES với vector khởi tạo bằng không. Dữ liệu được xác thực được nhóm thành các khối 64-bit. Mã xác thực dữ liệu (DAC) bao gồm toàn bộ khối đầu ra $O_N$ hoặc $M$ bits bên trái của khối đó, với $16 \le M \le 64$. Kích thước khối đầu ra tối đa là **64 bits**.

---

**Cho một hàm băm với kết quả băm có chiều dài là 128 bits. Hãy cho biết cần sửa đổi ít nhất bao nhiêu chỗ trong văn bản P sao cho xác xuất để có hai văn bản P1 và P2 mà giá trị băm của chúng bằng nhau là 0.5**

**c. $2^{64}$**

**Giải thích:**
Câu hỏi này đề cập đến cường độ chống lại **tấn công ngày sinh nhật** (Birthday Attack). Nếu một hàm băm tạo ra kết quả có chiều dài $n$ bits (ở đây là $n=128$ bits), cường độ tấn công để tìm ra một va chạm (collision) có xác suất $> 0.5$ là xấp xỉ $2^{n/2}$.

Với $n = 128$ bits, số lần thử cần thiết là $2^{128/2} = 2^{64}$.

---

**Mã xác thực thông điệp dựa trên hàm băm MD5 tạo ra mã xác thực thông điệp có kích thước là:**

**a. 128 bits**

**Giải thích:**
Mã xác thực thông điệp dựa trên hàm băm (HMAC) sử dụng đầu ra của hàm băm cơ sở. Hàm băm MD5 có **độ dài băm là 128 bits**.

---

**Chữ ký số là một cơ chế xác thực nhằm:**

**d. Cả ba câu trên đều đúng**

**Giải thích:**
Chữ ký số cung cấp chức năng xác thực thông điệp cùng với các chức năng bổ sung. Các mục tiêu/chức năng mà chữ ký số cung cấp bao gồm:

*   Xác minh **tính toàn vẹn thông điệp**.
*   **Xác nhận danh tính** của người tạo ra thông điệp.
*   **Chống thoái thác về xuất xứ** (giải quyết tranh chấp).

Chào bạn, tôi sẽ trả lời các câu hỏi trắc nghiệm của bạn dựa trên các nguồn tài liệu đã cung cấp.

### 5. Cho biết phát biểu sai khi nói về các lược đồ tạo chữ ký số:

**a. Lược đồ DSA tạo chữ ký có chiều dài 512 bits.**

**Giải thích:**
Phát biểu (a) là sai. DSA (Digital Signature Algorithm) được thiết kế để tạo chữ ký có chiều dài **320 bits**.

Các phát biểu còn lại là đúng:
*   (b) DSA tạo và xác minh chữ ký nhanh hơn RSA: Tất cả các tính toán cho việc ký và xác minh trong DSA là **nhỏ hơn so với RSA**.
*   (c) Lược đồ RSA tạo chữ ký có chiều dài lớn hơn DSA: Chữ ký DSA có chiều dài 320 bits, trong khi lược đồ RSA thường sử dụng các số nguyên lớn (ví dụ: 1024 bits hoặc hơn), do đó chữ ký RSA có chiều dài lớn hơn.
*   (d) DSA không thể dùng cho các vấn đề mã hóa dữ liệu và trao đổi khóa: DSA là một thuật toán được thiết kế để cung cấp **chỉ chức năng chữ ký số**. Không giống như RSA, DSA **không thể được sử dụng cho mã hóa hoặc trao đổi khóa**.

### 6. Dịch vụ xác thực X.509 dùng mã hóa dạng gì?

**c. Mã hóa khóa công khai**

**Giải thích:**
Tiêu chuẩn X.509 dựa trên việc sử dụng **mã hóa khóa công khai** (public-key cryptography) và chữ ký số. Mã hóa khóa công khai còn được gọi là mã hóa bất đối xứng.

### 7. Chữ ký số trong chứng chỉ X.509 được tạo dùng khóa nào sau đây:

**d. Khóa riêng của đơn vị phát hành chứng chỉ.**

**Giải thích:**
Chứng chỉ khóa công khai liên kết nhận dạng với khóa công khai và được ký bằng **chữ ký của một tổ chức đáng tin cậy** (Certificate Authority - CA). Chữ ký số này được tạo ra bằng cách tính toán giá trị băm của thông tin và tạo chữ ký số bằng cách sử dụng khóa riêng tư của CA. Chỉ có người ký (trong trường hợp này là CA) mới có khóa riêng để tạo chữ ký hợp lệ.