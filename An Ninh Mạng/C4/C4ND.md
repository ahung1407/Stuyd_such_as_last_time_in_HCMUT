Chương IV mà bạn cần nắm chi tiết là **NHỮNG GIẢI THUẬT MÃ HÓA TOÀN VẸN DỮ LIỆU** (Algorithms for Data Integrity).

Nội dung chính của chương này bao gồm: Xác thực thông điệp, Hàm băm, Mã xác thực thông điệp (MAC), và Chữ ký số.

Dưới đây là các điểm chi tiết bạn cần nắm vững:

---

### 1. Xác thực Thông điệp (Message Authentication)

**Mục tiêu:**
Xác thực thông điệp nhằm bảo vệ tính toàn vẹn của thông điệp, xác nhận danh tính của người tạo ra thông điệp, và **chống thoái thác về xuất xứ** (giải quyết tranh chấp).

**Chống lại các loại tấn công:**
Nó giúp chống lại các cuộc tấn công như giả mạo (masquerade), thay đổi nội dung (content modification), thay đổi trình tự (sequence modification), và thay đổi thời gian (timing modification).

**Các hướng tiếp cận chính:**
Có hai hướng tiếp cận để thực hiện xác thực thông điệp:
1.  **Mã xác thực thông điệp (MAC)**.
2.  **Chữ ký số (Digital Signature)**.

### 2. Hàm Băm (Hash Function)

**Khái niệm và Cách tạo:**
*   Hàm băm được sử dụng để **đảm bảo tính toàn vẹn**.
*   Nó cô đọng một thông điệp $M$ có chiều dài thay đổi thành một giá trị $h = H(M)$ có chiều dài cố định.
*   Nó là một **hàm một chiều** (nhiều – một): nhiều thông điệp có thể có cùng giá trị $H$, nhưng việc tìm kiếm chúng rất khó khăn.

**Các yêu cầu của Hàm Băm dựa trên Mật mã (Cryptographic Hash Requirements):**
1.  **Kháng tiền ảnh (Preimage resistant):** Cho $h$, không khả thi để tìm $x$ mà $H(x)=h$.
2.  **Kháng tiền ảnh thứ hai (Second preimage resistant):** Cho $x$, không khả thi để tìm $y$ mà $H(y)=H(x)$.
3.  **Kháng va chạm (Collision resistant):** Không khả thi để tìm $x, y$ mà $H(y)=H(x)$.

**Các Hàm Băm Dựa trên Mật mã:**
*   Các hàm băm đơn giản (ví dụ: dựa trên phép toán XOR của các khối thông điệp) là **không an toàn**.
*   Cần các hàm băm mạnh hơn như **Secure Hash Algorithm (SHA)**, bao gồm SHA-1, SHA-256, và SHA-384.
*   Để đảm bảo an toàn chống lại tấn công vét cạn, giá trị băm nên dùng **160 bits** trở lên, vì giá trị 128 bits dễ bị tổn thương.

**Tấn công Ngày sinh nhật (Birthday Attack):**
*   Tấn công này khai thác việc giá trị băm quá nhỏ (ví dụ: 64-bit).
*   Kẻ tấn công tạo ra $2^{m/2}$ phiên bản của một thông điệp hợp lệ và $2^{m/2}$ phiên bản thông điệp giả mạo. Hai tập thông điệp này được so sánh để tìm ra một cặp có cùng giá trị băm (xác suất > 0.5).
*   Nếu người dùng ký trên văn bản hợp lệ, chữ ký đó cũng hợp lệ trên văn bản giả mạo.
*   Vì vậy, giá trị băm cần có kích thước lớn hơn.

### 3. Mã Xác thực Thông điệp (MAC)

**Khái niệm và Cách tạo:**
*   MAC được dùng để **đảm bảo tính xác thực và tính toàn vẹn**.
*   Nó cô đọng một thông điệp $M$ có chiều dài thay đổi dùng một khóa bí mật $K$ thành một mã xác thực có chiều dài cố định ($MAC = C_K(M)$).
*   Tương tự như hàm băm, nó là một hàm một chiều (nhiều – một) và việc tìm kiếm thông điệp có cùng MAC rất khó khăn.

**Các yêu cầu của MAC:**
1.  Biết thông điệp và MAC của nó, không khả thi để tìm ra một thông điệp khác có cùng mã xác thực thông điệp.
2.  Các giá trị MAC phải được phân bố đồng đều.
3.  MAC phải phụ thuộc như nhau trên tất cả các bit của thông điệp.

**Các cách tạo MAC:**
*   **Dùng Mã hóa đối xứng:** Sử dụng chế độ hoạt động CBC (Cipher Block Chaining) và dùng đầu ra của khối cuối cùng như là MAC.
    *   Ví dụ: Thuật toán xác thực dữ liệu (DAA) dựa trên DES-CBC. Tuy nhiên, MAC dựa trên DES-CBC quá nhỏ (M $\leq$ 64 bits) nên hiện nay không an toàn.
*   **HMAC (MAC dựa trên Hàm băm):**
    *   Được phát triển để khắc phục các đề xuất ban đầu không an toàn (ví dụ: $Hash(Key || Message)$).
    *   HMAC là một chuẩn Internet (RFC 2104).
    *   Cấu trúc phức tạp hơn và được chứng minh an toàn liên quan đến thuật toán băm cơ sở.
*   **CMAC (MAC dựa trên Mã hóa khối):**
    *   Được mô tả như DAA (CBC-MAC) và được dùng rộng rãi.
    *   CMAC khắc phục hạn chế về kích thước MAC bằng cách sử dụng nhiều khóa được dẫn xuất từ một khóa.
    *   Được NIST áp dụng với các thuật toán mã hóa AES và Triple-DES (Special Publication NIST 800-38B).

**An toàn của MAC:**
*   MAC phải có chiều dài ít nhất **128 bits** mới an toàn chống lại tấn công vét cạn tìm kiếm khóa hoặc MAC.

### 4. Chữ ký số (Digital Signature)

**Khái niệm và Chức năng:**
*   Chữ ký số cung cấp khả năng xác minh tác giả, ngày giờ đã ký, tính toàn vẹn thông điệp, và **được xác minh bởi một tổ chức thứ 3 để giải quyết tranh chấp** (Nonrepudiation).
*   Chữ ký số bao gồm cả chức năng xác thực thông điệp và các chức năng bổ sung.
*   **Các đặc tính của chữ ký số:** Chân thực, không thể giả mạo, không thể tái sử dụng, không thể thay đổi, và không thể phủ nhận.

**Lược đồ Chữ ký số (tổng quát):**
1.  **Bên gửi:**
    *   Tính toán $h = H(M)$ (thường dùng hàm băm an toàn như SHA-1).
    *   $h$ được **mã hóa với khóa riêng (private key)** của người gửi để có chữ ký $S$.
    *   Gửi $M || S$.
2.  **Bên nhận:**
    *   Lấy $M$, tính toán $h = H(M)$.
    *   $S$ được **giải mã với khóa công khai (public key)** của người gửi để có $h'$.
    *   Xác minh $h' = h$ hay không.

**Lược đồ Chữ ký với RSA:**
*   Bên A (người ký) tính $S = h^{d_a} \bmod n_a$ (sử dụng khóa riêng $d_a$).
*   Bên nhận xác minh $h' = S^{e_a} \bmod n_a$. Nếu $h' = h$ thì chữ ký hợp lệ.

**Chuẩn Chữ ký số (DSS) và Thuật toán DSA:**
*   **DSS** (Digital Signature Standard) là lược đồ chữ ký được chính phủ Mỹ phê duyệt (FIPS-186).
*   **DSA** (Digital Signature Algorithm) là thuật toán chính thức.
*   **An toàn** của DSA dựa trên bài toán logarit rời rạc.
*   **Đặc điểm của DSA:** Tạo chữ ký chiều dài 320 bits. Kích thước chữ ký nhỏ hơn RSA. Các tính toán nhanh hơn RSA vì thực hiện phép toán modulo $q$, với $Q$ có kích thước 160 bits.
*   **DSA Key Generation:** Sử dụng các giá trị công cộng $(p, q, g)$. $p$ là số nguyên tố lớn (512-1024 bits), $q$ là ước nguyên tố của $(p-1)$ (160 bits). Khóa riêng là $x < q$, khóa công khai là $y = g^x \bmod p$.
*   **Tạo Chữ ký trong DSA:** Tính $r = (g^k \bmod p) \bmod q$ và $s = [k^{-1}(H(M)+ xr)] \bmod q$, trong đó $k$ là khóa ngẫu nhiên không được tái sử dụng.
*   **Xác minh Chữ ký trong DSA:** Bên nhận tính $w = s^{-1} \bmod q$, $u_1= [H(M)w ]\bmod q$, $u_2= (rw)\bmod q$, và $v = [(g^{u_1} y^{u_2}) \bmod p ]\bmod q$. Nếu $v=r$ thì chữ ký hợp lệ.

DSA và RSA là hai lược đồ chữ ký số phổ biến.