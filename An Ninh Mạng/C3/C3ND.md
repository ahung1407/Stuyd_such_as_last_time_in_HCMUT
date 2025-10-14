Chào bạn, dưới đây là nội dung chi tiết cần nắm của Chương III: **MÃ HÓA KHÓA CÔNG KHAI**, được trình bày bởi ThS. Nguyễn Cao Đạt.

Nội dung chương này bao gồm bốn phần chính: Lý thuyết số, Hệ mã RSA, Các hệ mã khóa công khai khác, và Quản lý/Phân phối khóa.

---

## 1. Giới thiệu về Lý thuyết số (Introduction to Number Theory)

Phần này cung cấp nền tảng toán học cho các hệ mã khóa công khai.

### 1.1. Các Khái niệm Cơ bản
*   **Số nguyên tố (Prime Numbers):** Là số chỉ chia hết cho 1 và chính nó. Nó không thể viết là tích của các số khác. Vấn đề nghiên cứu số nguyên tố là trung tâm của lý thuyết số.
*   **Phân tích thừa số nguyên tố (Prime Factorization):** Viết một số $n$ thành tích của các thừa số. **Lưu ý rằng:** Việc phân tích thừa số một số là tương đối khó so với việc nhân các thừa số để tạo nên số đó.
*   **Nguyên tố cùng nhau (Relatively Prime):** Hai số $a, b$ được gọi là nguyên tố cùng nhau nếu không có ước số chung nào lớn hơn 1 ($\text{GCD}(a, b) = 1$).

### 1.2. Các Định lý Quan trọng
*   **Định lý Fermat (Định lý Fermat nhỏ):** Được dùng trong mã hóa khóa công khai và kiểm tra tính nguyên tố.
    $$a^{p-1} \equiv 1 \pmod p$$
    với $p$ là số nguyên tố và $\text{gcd}(a,p)=1$.
*   **Hàm phi Euler $\phi(n)$ (Euler's totient function):** Là số các số nguyên dương nhỏ hơn $n$ và nguyên tố cùng nhau với $n$.
    *   Nếu $p$ là nguyên tố: $\phi(p) = p-1$.
    *   Nếu $p, q$ là nguyên tố ($p \ne q$): $\phi(pq) = (p-1) \times (q-1)$.
*   **Định lý Euler:** Là sự tổng quát của định lý Fermat.
    $$a^{\phi(n)} \equiv 1 \pmod n$$
    với bất kỳ số nguyên $a$ và $n$ sao cho $\text{gcd}(a,n)=1$.

### 1.3. Các Vấn đề Toán học Khó
*   **Kiểm tra tính nguyên tố (Primality Testing):** Cần thiết để tìm ra các số nguyên tố lớn. Do sàn truyền thống dùng chia thử chỉ làm được với số nhỏ, người ta dùng các kiểm tra dựa trên thuộc tính của số nguyên tố (ví dụ: Thuật toán Miller-Rabin).
    *   **Thuật toán Miller-Rabin:** Dựa trên định lý Fermat. Nếu thuật toán trả về "composite" (hợp số), thì nó chắc chắn là hợp số. Nếu lặp $t$ lần, xác suất nhận dạng nhầm giả nguyên tố là rất nhỏ ($\text{Pr}(n, t) = 1-4^{-t}$).
*   **Căn nguyên thủy (Primitive Root):** Nếu số mũ $m$ nhỏ nhất sao cho $a^m \equiv 1 \pmod n$ bằng $\phi(n)$, thì $a$ được gọi là căn nguyên thủy của $n$. Các số $a$ như vậy được dùng nhiều trong mã hóa khóa công khai nhưng **tương đối khó tìm**.
*   **Logarit rời rạc (Discrete Logarithm):** Tìm $x$ sao cho $y = g^x \pmod p$. Đây là **vấn đề khó khăn** (trong khi lũy thừa là dễ dàng) và là cơ sở an toàn cho nhiều hệ mã khóa công khai.

---

## 2. Mã hóa Khóa Công khai (Public Key Cryptography) và RSA

### 2.1. Nguyên lý và Đặc điểm của Mã hóa Khóa Công khai
*   **Bối cảnh:** Mã hóa khóa công khai ra đời để giải quyết **khuyết điểm** của các hệ mã đối xứng, như vấn đề phân phối khóa bí mật an toàn và thiếu khả năng bảo vệ chống giả mạo thông điệp.
*   **Đặc điểm cốt lõi:** Dùng **hai khóa** gồm một khóa công khai (public-key) và một khóa riêng (private-key). Hệ thống này là **bất đối xứng** (non-symmetric) vì các bên không như nhau.
*   **Vai trò của Khóa:**
    *   **Khóa công khai (Public Key):** Bất kỳ ai cũng biết, dùng để **mã hóa** thông điệp hoặc **xác minh chữ ký**.
    *   **Khóa riêng (Private Key):** Chỉ người dùng biết, dùng để **giải mã** thông điệp hoặc **ký (tạo) chữ ký**.
*   **Tính an toàn:**
    *   Không khả thi để tìm khóa riêng khi chỉ biết thuật toán và khóa công khai.
    *   Dựa trên các **bài toán ngược khó giải** (Hard Problems), đặc biệt là Bài toán phân tích thừa số nguyên tố và Bài toán logarit rời rạc.
    *   Mã hóa khóa công khai chậm hơn khóa bí mật và đòi hỏi dùng các số đủ lớn (khóa dài 512 bits đến 4096 bits).
*   **Ứng dụng:**
    *   Mã hóa / giải mã (bí mật).
    *   Chữ ký số (Xác thực).
    *   Trao đổi khóa (khóa phiên làm việc).

### 2.2. Hệ mã RSA
RSA (Rivest, Shamir, Adleman, 1977) là lược đồ khóa công khai tốt nhất và được sử dụng rộng rãi nhất.
*   **Cơ sở an toàn:** Dựa trên **bài toán phân tích thừa số nguyên tố lớn**.
*   **Quy trình Tạo khóa:**
    1.  Chọn ngẫu nhiên 2 số nguyên tố lớn $p$ và $q$.
    2.  Tính $n = p \cdot q$.
    3.  Tính $\phi(n) = (p-1)(q-1)$.
    4.  Chọn khóa mã hóa $e$ sao cho $1 < e < \phi(n)$ và $\text{gcd}(e, \phi(n))=1$.
    5.  Tìm khóa giải mã $d$ bằng cách giải phương trình $e \cdot d \equiv 1 \pmod {\phi(n)}$.
    6.  **Khóa công khai:** $PU=\{e, n\}$. **Khóa riêng:** $PR=\{d, n\}$.
*   **Sử dụng RSA:**
    *   **Mã hóa thông điệp $M$:** $C = M^e \pmod n$.
    *   **Giải mã bản mã $C$:** $M = C^d \pmod n$.
*   **Phép toán lũy thừa modulo:** Dùng thuật toán **Square & Multiply** để tính toán nhanh và hiệu quả, chỉ mất $O(\log_2 n)$ phép nhân.

### 2.3. An toàn của RSA và Các Hướng Tấn công
An toàn của RSA dựa trên kích thước khóa đủ lớn. Các hướng tiếp cận tấn công RSA bao gồm:
1.  **Tấn công vét cạn (Brute force):** Không khả thi do kích thước các số quá lớn.
2.  **Tấn công toán học:** Dựa trên việc phân tích $n$ thành thừa số $p$ và $q$. Cải tiến thuật toán phân tích thừa số vẫn chậm qua nhiều năm, do đó khóa 1024-2048 bits vẫn an toàn.
3.  **Tấn công thời gian (Timing attacks):** Khai thác khoảng thời gian thực hiện các phép toán (ví dụ: nhân với số bé hay số lớn) để suy ra kích thước toán hạng, từ đó suy ra khóa. Biện pháp đối phó là dùng thời gian tính toán lũy thừa là hằng số hoặc thêm độ trễ ngẫu nhiên.
4.  **Tấn công bản mã được chọn (Chosen Ciphertext Attack - CCA):** Kẻ tấn công chọn bản mã và lấy được bản rõ giải mã ngược lại. Biện pháp đối phó là thêm ngẫu nhiên vào bản rõ trước khi mã hóa (OASP).

---

## 3. Các Hệ mã Khóa Công khai Khác

### 3.1. Trao đổi khóa Diffie-Hellman (D-H)
*   Là lược đồ khóa công khai đầu tiên (1976).
*   **Chức năng:** Là phương pháp cho phép trao đổi công khai một khóa bí mật (khóa phiên làm việc). Nó **không dùng để trao đổi thông điệp tùy ý**.
*   **Cơ sở an toàn:** Dựa trên việc **khó khăn trong tính toán logarit rời rạc**.
*   **Quy trình:**
    1.  Hai bên đồng ý trên các tham số toàn cục (số nguyên tố lớn $q$ và $a$ là căn nguyên thủy của $q$).
    2.  Mỗi bên (A) chọn khóa riêng $x_A$ và tính khóa công khai $y_A = a^{x_A} \pmod q$.
    3.  Khóa phiên làm việc chung $K_{AB}$ được tính bằng công thức: $K_{AB} = y_A^{x_B} \pmod q$ (B tính) hoặc $K_{AB} = y_B^{x_A} \pmod q$ (A tính).

### 3.2. El Gamal
*   **Cơ sở an toàn:** Cũng dựa trên **bài toán logarit rời rạc**.
*   **Tạo khóa:** Chọn $p$ (nguyên tố) và $g$ (căn nguyên thủy). Chọn khóa riêng $a < p$, và tính khóa công khai $\alpha = g^a \pmod p$.
*   **Mã hóa/Giải mã:**
    *   Bên gửi (B) chọn $k$ ngẫu nhiên, tính $\mu = g^k \pmod p$ và $C = P \alpha^k \pmod p$. Gửi $(C, \mu)$.
    *   Bên nhận (A) giải mã bằng cách tính $v = (\alpha^k)^{-1} \pmod p$ và sau đó tính $P = C v \pmod p$.

---

## 4. Quản lý và Phân phối Khóa (Key Management and Distribution)

Mã hóa khóa công khai giúp giải quyết vấn đề phân phối khóa. Có hai khía cạnh: Phân phối khóa công khai và Phân phối khóa bí mật dựa trên khóa công khai.

### 4.1. Phân phối Khóa Công khai
Các kỹ thuật phân phối khóa công khai bao gồm:
*   **Công bố công khai (Public announcement):** Người dùng phân phối hay quảng bá rộng rãi khóa công khai. Khuyết điểm là **dễ dàng giả mạo**.
*   **Thư mục công khai (Publicly available directory):** Đăng ký khóa với một thư mục phải được tin cậy. Thư mục chứa các mục {tên, khóa công khai} và có thể được truy cập điện tử. Vẫn còn nguy cơ giả mạo.
*   **Cấp quyền khóa công khai (Public-key authority):** Cải thiện an toàn, người dùng tương tác với thư mục **thời gian thực** để có được khóa một cách an toàn.
*   **Chứng chỉ khóa công khai (Public-key certificates):** Cho phép trao đổi khóa mà không cần truy cập thời gian thực. Chứng chỉ liên kết nhận dạng với khóa công khai và có **chữ ký của một Tổ chức cấp chứng chỉ (CA) đáng tin cậy**.

### 4.2. Phân phối Khóa Bí mật
Vì các thuật toán khóa công khai chậm, chúng thường được dùng để thiết lập một **khóa phiên** bí mật, sau đó khóa phiên này được dùng để mã hóa nội dung tin nhắn bằng lược đồ khóa bí mật.
*   **Phân phối khóa bí mật đơn giản (Merkle 1979):** Bên gửi tạo khóa phiên và mã hóa nó bằng khóa công khai của bên nhận để gửi đi. Vấn đề lớn nhất là **tấn công "man in the middle"** (MITM) có thể xảy ra.
*   Các giao thức trao đổi khóa dựa trên Diffe-Hellman cũng có nguy cơ tấn công "man in the middle" nếu không có cơ chế **xác thực các khóa**.