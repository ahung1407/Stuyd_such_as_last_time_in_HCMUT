
### Ví dụ một luồng hoạt động đơn giản: RSA 
1.  **Alice tạo khóa:** Chọn $p=3, q=11 \Rightarrow n=33, \phi(n)=(3-1)(11-1)=20$. Chọn $e=3$ (vì $\text{gcd}(3, 20)=1$). Tính $d$: $3d \equiv 1 \pmod{20} \Rightarrow d=7$ (vì $3 \times 7 = 21 \equiv 1 \pmod{20}$).
    *   Khóa công khai của Alice: $(e=3, n=33)$
    *   Khóa riêng tư của Alice: $(d=7, n=33)$
2.  **Bob muốn gửi thông điệp $M=8$ cho Alice:**
    *   Bob lấy khóa công khai của Alice: $(3, 33)$.
    *   Bob mã hóa: $C = M^e \pmod{n} = 8^3 \pmod{33} = 512 \pmod{33}$.
    *   $512 = 15 \times 33 + 17$. Vậy $C = 17$.
    *   Bob gửi $C=17$ cho Alice.
3.  **Alice nhận $C=17$ và giải mã:**
    *   Alice dùng khóa riêng tư của mình: $(7, 33)$.
    *   Alice giải mã: $M = C^d \pmod{n} = 17^7 \pmod{33}$.
    *   Sử dụng thuật toán lũy thừa modulo, $17^7 \pmod{33} = 8$.
    *   Alice nhận được thông điệp gốc $M=8$.

---

Chắc chắn rồi! Dưới đây là ví dụ chi tiết về cách thức hoạt động của thuật toán trao đổi khóa Diffie-Hellman (DH). Thuật toán này cho phép hai bên thiết lập một khóa bí mật chung qua một kênh truyền thông không an toàn mà không cần trao đổi trực tiếp khóa đó.

### Ví dụ về Trao đổi Khóa Diffie-Hellman

Trong ví dụ này, chúng ta có Alice và Bob muốn thiết lập một khóa bí mật chung.

---

**Các tham số Công khai (Public Parameters):**

Đầu tiên, Alice và Bob đồng ý sử dụng các tham số sau, mà mọi người đều biết (kể cả kẻ nghe trộm Eve):

1.  **Số nguyên tố lớn ($p$):** $p = 23$ (Trong thực tế, $p$ sẽ là một số rất lớn).
2.  **Cơ số (generator $g$):** $g = 5$ (Đây là một "primitive root modulo $p$", tức là các lũy thừa của $g$ từ $1$ đến $p-1$ sẽ tạo ra tất cả các số từ $1$ đến $p-1$ theo modulo $p$).

---

**Quá trình Trao đổi Khóa:**

**Bước 1: Alice chọn Khóa Bí mật riêng của mình**

*   Alice chọn một số nguyên bí mật ($a$)
*   Giả sử **Alice chọn $a = 6$**
*   **Lưu ý:** $a$ phải được giữ bí mật tuyệt đối.

**Bước 2: Alice tính toán giá trị công khai của mình ($A$)**

*   Alice tính $A = g^a \pmod{p}$
*   $A = 5^6 \pmod{23}$
*   Tính toán:
    *   $5^1 \equiv 5 \pmod{23}$
    *   $5^2 \equiv 25 \equiv 2 \pmod{23}$
    *   $5^3 \equiv 5 \times 2 \equiv 10 \pmod{23}$
    *   $5^4 \equiv 5 \times 10 \equiv 50 \equiv 4 \pmod{23}$
    *   $5^5 \equiv 5 \times 4 \equiv 20 \pmod{23}$
    *   $5^6 \equiv 5 \times 20 \equiv 100 \equiv 8 \pmod{23}$ (vì $100 = 4 \times 23 + 8$)
*   Vậy, **$A = 8$**.
*   Alice gửi giá trị $A = 8$ này cho Bob (qua kênh không an toàn).

---

**Bước 3: Bob chọn Khóa Bí mật riêng của mình**

*   Bob chọn một số nguyên bí mật ($b$)
*   Giả sử **Bob chọn $b = 15$**
*   **Lưu ý:** $b$ phải được giữ bí mật tuyệt đối.

**Bước 4: Bob tính toán giá trị công khai của mình ($B$)**

*   Bob tính $B = g^b \pmod{p}$
*   $B = 5^{15} \pmod{23}$
*   Tính toán (có thể sử dụng kết quả từ $5^{11} \equiv 22 \equiv -1 \pmod{23}$ để tính nhanh):
    *   $5^{15} = 5^{11} \times 5^4 \pmod{23}$
    *   $5^4 \equiv 4 \pmod{23}$ (từ tính toán của Alice)
    *   $B \equiv (-1) \times 4 \equiv -4 \equiv 19 \pmod{23}$
*   Vậy, **$B = 19$**.
*   Bob gửi giá trị $B = 19$ này cho Alice (qua kênh không an toàn).

---

**Bước 5: Alice tính toán Khóa Bí mật chung**

*   Alice nhận được giá trị $B=19$ từ Bob.
*   Alice sử dụng khóa bí mật riêng của mình ($a=6$) và giá trị $B$ của Bob để tính toán khóa bí mật chung ($S_A$):
*   $S_A = B^a \pmod{p}$
*   $S_A = 19^6 \pmod{23}$
*   $19 \equiv -4 \pmod{23}$
*   $S_A \equiv (-4)^6 \equiv 4^6 \pmod{23}$
*   Tính toán:
    *   $4^1 \equiv 4 \pmod{23}$
    *   $4^2 \equiv 16 \pmod{23}$
    *   $4^3 \equiv 4 \times 16 \equiv 64 \equiv 18 \pmod{23}$
    *   $4^4 \equiv 4 \times 18 \equiv 72 \equiv 3 \pmod{23}$
    *   $4^5 \equiv 4 \times 3 \equiv 12 \pmod{23}$
    *   $4^6 \equiv 4 \times 12 \equiv 48 \equiv 2 \pmod{23}$ (vì $48 = 2 \times 23 + 2$)
*   Vậy, **Khóa bí mật chung của Alice là $S_A = 2$**.

---

**Bước 6: Bob tính toán Khóa Bí mật chung**

*   Bob nhận được giá trị $A=8$ từ Alice.
*   Bob sử dụng khóa bí mật riêng của mình ($b=15$) và giá trị $A$ của Alice để tính toán khóa bí mật chung ($S_B$):
*   $S_B = A^b \pmod{p}$
*   $S_B = 8^{15} \pmod{23}$
*   Tính toán (có thể sử dụng kết quả $8^{11} \equiv 1 \pmod{23}$):
    *   $8^{15} = 8^{11} \times 8^4 \pmod{23}$
    *   $8^{11} \equiv 1 \pmod{23}$
    *   $8^4 = (8^2)^2 \equiv 18^2 \equiv (-5)^2 \equiv 25 \equiv 2 \pmod{23}$
    *   $S_B \equiv 1 \times 2 \equiv 2 \pmod{23}$
*   Vậy, **Khóa bí mật chung của Bob là $S_B = 2$**.

---

**Kết quả:**

Cả Alice và Bob đều đã tính toán được cùng một khóa bí mật chung: **$S = 2$**.

*   Alice tính: $(g^b)^a \pmod{p} = (19)^6 \pmod{23} = 2$
*   Bob tính: $(g^a)^b \pmod{p} = (8)^{15} \pmod{23} = 2$

Đây là điều kỳ diệu của Diffie-Hellman, vì $(g^b)^a \equiv g^{ab} \equiv (g^a)^b \pmod{p}$.

---

**An toàn của Diffie-Hellman:**

*   **Kẻ nghe trộm Eve** chỉ biết các giá trị công khai: $p=23$, $g=5$, $A=8$, và $B=19$.
*   Để tìm khóa bí mật chung $S=2$, Eve cần tìm $a$ hoặc $b$.
*   Để tìm $a$ từ $A=g^a \pmod{p}$ (tức là $8 = 5^a \pmod{23}$), Eve phải giải bài toán **Logarit Rời rạc (Discrete Logarithm Problem)**. Tương tự để tìm $b$.
*   Đối với các số nhỏ trong ví dụ này, Eve có thể dễ dàng giải được bằng cách thử từng giá trị $a$ (từ 1 đến $p-1$). Nhưng trong thực tế, khi $p$ là một số rất lớn (ví dụ: 2048 bit trở lên), bài toán Logarit Rời rạc trở nên cực kỳ khó khăn về mặt tính toán, khiến Eve không thể tìm ra $a$ hoặc $b$ trong một khoảng thời gian hợp lý.

Chắc chắn rồi! Dưới đây là ví dụ chi tiết về cách hoạt động của thuật toán mã hóa khóa công khai ElGamal. ElGamal cũng dựa trên độ khó của bài toán Logarit Rời rạc (Discrete Logarithm Problem), tương tự như Diffie-Hellman, nhưng nó cung cấp chức năng mã hóa/giải mã thông điệp.

---

### Ví dụ về Mã hóa ElGamal

Chúng ta sẽ có Alice là người nhận muốn nhận thông điệp mã hóa, và Bob là người gửi muốn gửi thông điệp cho Alice.

---

**Các tham số Công khai (Public Parameters):**

Trước tiên, Alice (người nhận) chọn và công bố các tham số sau cho mọi người (kể cả Bob và kẻ nghe trộm Eve) biết:

1.  **Số nguyên tố lớn ($p$):** $p = 23$ (Trong thực tế, $p$ sẽ là một số rất lớn, ví dụ 1024-bit hoặc 2048-bit).
2.  **Cơ số (generator $g$):** $g = 5$ (Đây là một "primitive root modulo $p$", nghĩa là các lũy thừa của $g$ sẽ tạo ra tất cả các số từ $1$ đến $p-1$ theo modulo $p$).

---

**Bước 1: Alice (Người nhận) Tạo Khóa**

Alice sẽ tạo ra cặp khóa công khai/riêng tư của mình:

*   **Alice chọn khóa bí mật riêng ($x$):**
    *   $x$ phải là một số nguyên sao cho $1 < x < p-1$.
    *   Giả sử **Alice chọn $x = 7$**.
    *   **Lưu ý:** $x$ phải được giữ bí mật tuyệt đối.

*   **Alice tính toán khóa công khai ($y$):**
    *   Alice tính $y = g^x \pmod{p}$
    *   $y = 5^7 \pmod{23}$
    *   Tính toán:
        *   $5^1 \equiv 5 \pmod{23}$
        *   $5^2 \equiv 25 \equiv 2 \pmod{23}$
        *   $5^3 \equiv 5 \times 2 \equiv 10 \pmod{23}$
        *   $5^4 \equiv 5 \times 10 \equiv 50 \equiv 4 \pmod{23}$
        *   $5^5 \equiv 5 \times 4 \equiv 20 \pmod{23}$
        *   $5^6 \equiv 5 \times 20 \equiv 100 \equiv 8 \pmod{23}$
        *   $5^7 \equiv 5 \times 8 \equiv 40 \equiv 17 \pmod{23}$
    *   Vậy, **$y = 17$**.

*   **Khóa của Alice:**
    *   **Khóa công khai của Alice (Public Key):** $(y=17, g=5, p=23)$. Alice công bố khóa này.
    *   **Khóa riêng tư của Alice (Private Key):** $(x=7)$. Alice giữ bí mật khóa này.

---

**Bước 2: Bob (Người gửi) Mã hóa Thông điệp**

Bob muốn gửi thông điệp $M$ cho Alice.

*   **Thông điệp ($M$):** $M$ phải là một số nguyên sao cho $0 < M < p$.
    *   Giả sử **Bob muốn gửi $M = 10$**.
*   **Bob lấy khóa công khai của Alice:** $(y=17, g=5, p=23)$.

*   **Bob chọn một khóa ngẫu nhiên tạm thời ($k$ - ephemeral key):**
    *   $k$ phải là một số nguyên sao cho $1 < k < p-1$ và $\text{gcd}(k, p-1) = 1$.
    *   Giả sử **Bob chọn $k = 3$**. (Vì $\text{gcd}(3, 22)=1$).
    *   **Lưu ý:** $k$ phải được giữ bí mật bởi Bob và chỉ dùng một lần cho mỗi thông điệp.

*   **Bob tính toán bản mã ($C_1, C_2$):**
    1.  **$C_1 = g^k \pmod{p}$**
        *   $C_1 = 5^3 \pmod{23}$
        *   $C_1 = 125 \pmod{23}$
        *   $125 = 5 \times 23 + 10$
        *   Vậy, **$C_1 = 10$**.
    2.  **$C_2 = M \cdot y^k \pmod{p}$**
        *   $C_2 = 10 \cdot 17^3 \pmod{23}$
        *   Tính $17^3 \pmod{23}$:
            *   $17^1 \equiv 17 \equiv -6 \pmod{23}$
            *   $17^2 \equiv (-6)^2 \equiv 36 \equiv 13 \pmod{23}$
            *   $17^3 \equiv 17 \times 13 \equiv (-6) \times 13 \equiv -78 \pmod{23}$
            *   $-78 = -4 \times 23 + 14$
            *   Vậy $17^3 \equiv 14 \pmod{23}$.
        *   $C_2 = 10 \cdot 14 \pmod{23}$
        *   $C_2 = 140 \pmod{23}$
        *   $140 = 6 \times 23 + 2$
        *   Vậy, **$C_2 = 2$**.

*   **Bản mã của Bob:** Bob gửi cặp $(C_1=10, C_2=2)$ cho Alice.

---

**Bước 3: Alice (Người nhận) Giải mã Bản mã**

Alice nhận được cặp $(C_1=10, C_2=2)$ từ Bob.

*   Alice sử dụng khóa riêng tư của mình ($x=7$).

*   **Alice tính toán thông điệp gốc ($M$):**
    *   Công thức giải mã: $M = C_2 \cdot (C_1^x)^{-1} \pmod{p}$
    *   Đầu tiên, Alice tính $C_1^x \pmod{p}$:
        *   $C_1^x = 10^7 \pmod{23}$
        *   Tính toán (chú ý cẩn thận từng bước):
            *   $10^1 \equiv 10 \pmod{23}$
            *   $10^2 \equiv 100 \equiv 8 \pmod{23}$
            *   $10^3 \equiv 10 \times 8 \equiv 80 \equiv 11 \pmod{23}$
            *   $10^4 \equiv 10 \times 11 \equiv 110 \equiv 18 \pmod{23}$
            *   $10^5 \equiv 10 \times 18 \equiv 180 \equiv 19 \pmod{23}$
            *   $10^6 \equiv 10 \times 19 \equiv 190 \equiv 6 \pmod{23}$ (vì $190 = 8 \times 23 + 6$)
            *   $10^7 \equiv 10 \times 6 \equiv 60 \equiv 14 \pmod{23}$ (vì $60 = 2 \times 23 + 14$)
        *   Vậy, $C_1^x = 14$.
    *   Tiếp theo, Alice tìm nghịch đảo modulo của $C_1^x$ theo modulo $p$. Tức là tìm $(14)^{-1} \pmod{23}$:
        *   Ta cần tìm một số $z$ sao cho $14z \equiv 1 \pmod{23}$.
        *   Thử các giá trị:
            *   $14 \times 1 = 14$
            *   $14 \times 2 = 28 \equiv 5$
            *   $14 \times 3 = 42 \equiv 19$
            *   $14 \times 4 = 56 \equiv 10$
            *   $14 \times 5 = 70 \equiv 1 \pmod{23}$
        *   Vậy, $(14)^{-1} \equiv 5 \pmod{23}$.
    *   Cuối cùng, Alice tính $M$:
        *   $M = C_2 \cdot (C_1^x)^{-1} \pmod{p}$
        *   $M = 2 \cdot 5 \pmod{23}$
        *   $M = 10 \pmod{23}$
        *   Vậy, **$M = 10$**.

---

**Kết quả:**

Alice đã giải mã thành công bản mã và nhận được thông điệp gốc **$M = 10$**, chính xác như thông điệp Bob đã gửi.

---

**Cơ sở An toàn của ElGamal:**

An toàn của ElGamal dựa trên độ khó của Bài toán Logarit Rời rạc (DLP).
*   Kẻ nghe trộm Eve biết các giá trị công khai ($p, g, y$), và biết bản mã $(C_1, C_2)$.
*   Để giải mã, Eve cần tìm khóa riêng tư $x$ của Alice (từ $y = g^x \pmod{p}$) hoặc khóa ngẫu nhiên tạm thời $k$ của Bob (từ $C_1 = g^k \pmod{p}$).
*   Cả hai bài toán này đều là bài toán Logarit Rời rạc. Với $p$ đủ lớn, việc giải quyết bài toán này là không khả thi về mặt tính toán, do đó đảm bảo an toàn cho ElGamal.
*   

