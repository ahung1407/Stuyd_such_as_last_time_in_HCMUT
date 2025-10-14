Chào bạn, tôi là một chuyên gia hỗ trợ bạn trả lời chi tiết các câu hỏi trong Chương III Môn Mật Mã và An Ninh Mạng, dựa trên các nguồn tài liệu đã cung cấp.

---

### I. Câu hỏi

**1. b là ước số của a có nghĩa là gì?**

**b là ước số của a** (hay $b$ chia hết $a$, ký hiệu $b|a$) có nghĩa là $b$ là một số nguyên khác 0, và tồn tại một số nguyên $m$ sao cho $a = mb$.

Nói cách khác, khi $b$ là ước số của $a$, thì phép chia $a$ cho $b$ có số dư bằng 0.

*   Ví dụ, các ước số của 24 là 1, 2, 3, 4, 6, 8, 12, 24.

**2. Số nguyên tố là gì?**

**Số nguyên tố** là số nguyên lớn hơn 1 mà chỉ chia hết cho 1 và chính nó. Tức là, số nguyên tố không thể viết thành tích của các số nguyên khác (ngoài 1 và chính nó).

*   Ví dụ về số nguyên tố: 2, 3, 5, 7.
*   Các số 4, 6, 8, 9, 10 là **hợp số**.
*   Cần chú ý rằng số 1 thường được bỏ qua khi liệt kê các số nguyên tố.

**3. Hàm phi Euler là gì?**

**Hàm phi Euler $\phi(n)$** là số lượng các số nguyên dương nhỏ hơn $n$ mà **nguyên tố cùng nhau** với $n$. Hai số được gọi là nguyên tố cùng nhau nếu chúng chỉ có ước chung lớn nhất (GCD) là 1.

*   **Ví dụ:** Với $n=10$, tập các số nguyên dương nhỏ hơn $n$ và nguyên tố cùng nhau với 10 là $\{1, 3, 7, 9\}$. Do đó, $\phi(10) = 4$.

Hàm phi Euler có các trường hợp tính toán đặc biệt:

*   Nếu $p$ là số nguyên tố: $\phi(p) = p-1$. Ví dụ: $\phi(37) = 36$.
*   Nếu $p$ và $q$ là hai số nguyên tố phân biệt ($p \neq q$): $\phi(pq) = (p-1) \times (q-1)$. Ví dụ: $\phi(21) = \phi(3 \times 7) = (3-1) \times (7-1) = 12$.

Hàm này rất quan trọng trong lý thuyết số và là nền tảng cho **Định lý Euler**, tổng quát của Định lý Fermat, quy định rằng: $a^{\phi(n)} \equiv 1 \pmod n$ với bất kỳ số nguyên $a$ và $n$ nào sao cho $\text{GCD}(a,n)=1$.

**4. Căn nguyên thủy của một số là gì?**

**Căn nguyên thủy** (Primitive Root) của một số nguyên $n$ liên quan đến Định lý Euler, trong đó $a^{\phi(n)} \equiv 1 \pmod n$ khi $\text{GCD}(a,n)=1$.

*   Xét phương trình $a^m \equiv 1 \pmod n$. Phải tồn tại số nguyên dương $m \leq \phi(n)$ thỏa mãn điều kiện này.
*   Nếu số mũ $m$ **nhỏ nhất** thỏa mãn điều kiện trên chính là $\phi(n)$, thì số $a$ được gọi là **căn nguyên thủy của $n$**.
*   Nếu $a$ là căn nguyên thủy của $n$, các lũy thừa của $a$ (từ $a^1$ đến $a^{\phi(n)}$) sẽ tạo ra một nhóm tuần hoàn (group) modulo $n$.

Các số $a$ này được sử dụng nhiều trong mã hóa khóa công khai, mặc dù việc tìm kiếm chúng tương đối khó.

**5. Các yếu tố chủ yếu của một hệ mã khóa công khai là gì?**

Các yếu tố và đặc điểm chủ yếu của một hệ mã khóa công khai bao gồm:

1.  **Cặp khóa:** Hệ thống sử dụng một cặp khóa gồm một **khóa công khai ($PU$)** và một **khóa riêng ($PR$)**.
2.  **Tính bất đối xứng:** Hệ thống được gọi là bất đối xứng vì các bên không như nhau. Khóa công khai và khóa riêng có vai trò nghịch đảo nhau.
3.  **Khó khăn trong tính toán:** Phải **không khả thi** về mặt tính toán để tìm ra khóa riêng ($PR$) khi chỉ biết thuật toán và khóa công khai ($PU$).
4.  **Dễ dàng sử dụng:** Phải **dễ dàng tính toán** để mã hóa/giải mã thông điệp khi khóa tương ứng được biết.
5.  **Cơ sở toán học:** Tính an toàn của hệ mã dựa trên các **bài toán ngược khó giải** trong lý thuyết số, ví dụ như bài toán phân tích thừa số nguyên tố lớn (RSA) hoặc bài toán logarit rời rạc (Diffie-Hellman, El Gamal).

**6. Bao nhiêu khóa là cần thiết để hai bên giao tiếp với nhau dùng mã hóa khóa công khai?**

Để hai bên (ví dụ: A và B) có thể giao tiếp an toàn với nhau bằng mã hóa khóa công khai (để đảm bảo tính bí mật và xác thực), cần tổng cộng **bốn khóa** (hai cặp khóa):

1.  **Cặp khóa của A:** Khóa công khai của A ($PU_a$) và khóa riêng của A ($PR_a$).
2.  **Cặp khóa của B:** Khóa công khai của B ($PU_b$) và khóa riêng của B ($PR_b$).

*   Ví dụ, nếu A muốn gửi thông điệp bí mật cho B, A dùng $PU_b$ để mã hóa, và B dùng $PR_b$ để giải mã.
*   Nếu B muốn xác minh rằng thông điệp thực sự do A ký, B dùng $PU_a$ để xác minh chữ ký.

**7. Hãy cho biết vai trò của khóa công khai và khóa riêng.**

Trong mã hóa khóa công khai, hai khóa (công khai và riêng) có vai trò đối nghịch nhau:

| Khóa | Tên gọi | Ai biết? | Vai trò chính |
| :--- | :--- | :--- | :--- |
| **Khóa công khai** ($PU$) | Public-key | Bất kỳ ai cũng được biết | 1. **Mã hóa** thông điệp cần gửi (để đảm bảo tính bí mật). |
| | | | 2. **Xác minh chữ ký** của một thông điệp đã nhận (để đảm bảo tính xác thực). |
| **Khóa riêng** ($PR$) | Private-key | Chỉ người dùng sở hữu biết | 1. **Giải mã** một thông điệp đã nhận (để phục hồi bản rõ). |
| | | | 2. **Ký (tạo) chữ ký** trên một thông điệp cần gửi (để đảm bảo tính xác thực). |

Vai trò của hai khóa này là như nhau: một khóa là khóa mã hóa thì khóa kia là khóa giải mã, và ngược lại.

**8. Trình bày ba loại ứng dụng của mã hóa khóa công khai.**

Mã hóa khóa công khai được phát minh nhằm giải quyết hai vấn đề khó khăn trong mã hóa đối xứng là **phân phối khóa** và **chữ ký số**. Các ứng dụng của mã hóa khóa công khai có thể được phân thành ba loại chính:

1.  **Mã hóa / Giải mã (Bí mật):** Dùng khóa công khai của người nhận để mã hóa thông điệp, chỉ người nhận sở hữu khóa riêng tương ứng mới có thể giải mã được.
2.  **Chữ ký số (Xác thực):** Dùng khóa riêng của người gửi để ký lên thông điệp (thường là giá trị băm của thông điệp), và người nhận dùng khóa công khai tương ứng để xác minh chữ ký, qua đó xác nhận nguồn gốc và tính toàn vẹn của thông điệp.
3.  **Trao đổi khóa (Khóa phiên làm việc):** Dùng các thuật toán khóa công khai để thiết lập một khóa bí mật chung (khóa phiên) giữa hai bên để sử dụng cho các hệ mã khóa bí mật tốc độ cao hơn.

**9. Mô tả chung chung một thủ tục hiệu quả để chọn một số nguyên tố.**

Để chọn một số nguyên tố lớn ($p$ hoặc $q$), các hệ mã khóa công khai không thể dùng phương pháp chia thử truyền thống vì quá chậm. Thay vào đó, cần sử dụng các thuật toán kiểm tra tính nguyên tố **xác suất** (probabilistic primality test). Thủ tục hiệu quả thường được sử dụng là dựa trên **thuật toán Miller–Rabin**:

1.  **Chuẩn bị:** Cần tìm số nguyên $n$ (số cần kiểm tra tính nguyên tố).
2.  **Biến đổi:** Tìm các số nguyên $k$ và $q$ sao cho $n-1 = 2^k q$, trong đó $k > 0$ và $q$ là số lẻ.
3.  **Chọn số ngẫu nhiên:** Chọn ngẫu nhiên một số nguyên $a$ làm cơ sở kiểm tra, với $1 < a < n-1$.
4.  **Kiểm tra 1:** Tính $a^q \bmod n$. Nếu kết quả là 1, số $n$ "có thể là nguyên tố" ("maybe prime").
5.  **Kiểm tra 2 (Vòng lặp):** Lặp từ $j=0$ đến $k-1$. Nếu $a^{2^j q} \bmod n = n-1$, số $n$ "có thể là nguyên tố".
6.  **Kết luận:** Nếu cả hai kiểm tra trên đều không thỏa mãn, thuật toán kết luận $n$ là **"hợp số"** ("composite").

**Tính hiệu quả và độ tin cậy:**
*   Nếu thuật toán trả về "hợp số", kết luận này là chắc chắn.
*   Nếu trả về "có thể là nguyên tố", nó có thể là số giả nguyên tố. Tuy nhiên, cơ hội để phát hiện sai sót (tức là $n$ là hợp số nhưng vẫn trả về "có thể là nguyên tố") trong một lần kiểm tra là $< 1/4$.
*   Bằng cách **lặp lại** thủ tục này $t$ lần với các giá trị $a$ khác nhau, xác suất để một hợp số vượt qua tất cả các lần kiểm tra là $1-4^{-t}$. Với $t=10$, xác suất này lớn hơn 0.99999, đảm bảo độ tin cậy rất cao khi chọn số nguyên tố lớn.

**10. Mô tả ngắn gọn lược đồ trao đổi khóa Diffie-Hellman**

**Lược đồ trao đổi khóa Diffie-Hellman** là lược đồ khóa công khai đầu tiên, được đề xuất vào năm 1976. Nó không dùng để trao đổi thông điệp tùy ý, mà dùng để **thiết lập một khóa bí mật chung (khóa phiên)** giữa hai bên tham gia.

Lược đồ này dựa trên **tính an toàn của việc khó khăn trong tính toán logarit rời rạc**.

**Các bước thực hiện:**

1.  **Tham số toàn cục:** Hai bên (ví dụ A và B) đồng ý sử dụng chung các tham số toàn cục: một **số nguyên tố lớn $q$** và **$a$ là căn nguyên thủy** của $q$.
2.  **Tạo khóa riêng/công khai:**
    *   Mỗi bên chọn ngẫu nhiên một **khóa riêng** (ví dụ $x_A$ cho A, $x_B$ cho B), với $x_A < q$ và $x_B < q$.
    *   Mỗi bên tính toán **khóa công khai** tương ứng: $y_A = a^{x_A} \bmod q$ và $y_B = a^{x_B} \bmod q$.
3.  **Trao đổi:** A và B công khai trao đổi các khóa công khai $y_A$ và $y_B$.
4.  **Tính khóa phiên chung:** Khóa phiên chung $K_{AB}$ được tính bằng cách sử dụng khóa riêng của mình và khóa công khai của người kia:
    *   A tính: $K_{AB} = y_B^{x_A} \bmod q$.
    *   B tính: $K_{AB} = y_A^{x_B} \bmod q$.

Kết quả là $K_{AB} = a^{x_A x_B} \bmod q$, đây là một khóa bí mật chỉ được biết bởi A và B. Khóa này sau đó được sử dụng như một khóa phiên làm việc trong lược đồ mã hóa khóa bí mật.