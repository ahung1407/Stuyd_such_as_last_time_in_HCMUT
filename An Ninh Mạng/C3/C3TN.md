Chắc chắn rồi, dưới đây là đáp án và giải thích chi tiết cho các câu hỏi trắc nghiệm của bạn.

---

### **Câu 1 - 3: Lý thuyết số và Mật mã**

**1. Hãy cho biết kết quả của (7²⁰¹⁰ mod 13):**
* **Đáp án: b. 12**
* **Giải thích:** Ta sử dụng Định lý nhỏ Fermat vì 13 là số nguyên tố: $a^{p-1} \equiv 1 \pmod{p}$.
    * Áp dụng: $7^{13-1} \equiv 7^{12} \equiv 1 \pmod{13}$.
    * Ta lấy số mũ chia cho 12: $2010 = 12 \times 167 + 6$.
    * Vậy $7^{2010} = 7^{12 \times 167 + 6} = (7^{12})^{167} \times 7^6 \equiv 1^{167} \times 7^6 \equiv 7^6 \pmod{13}$.
    * Tính $7^6 \pmod{13}$:
        * $7^2 = 49 \equiv 10 \pmod{13}$
        * $7^3 \equiv 10 \times 7 = 70 \equiv 5 \pmod{13}$
        * $7^6 = (7^3)^2 \equiv 5^2 = 25 \equiv \mathbf{12} \pmod{13}$.

**2. Cho biết giá trị hàm phi Euler $\phi(440)$ là:**
* **Đáp án: c. 160**
* **Giải thích:** Đầu tiên, ta phân tích 440 ra thừa số nguyên tố: $440 = 44 \times 10 = (4 \times 11) \times (2 \times 5) = 2^3 \times 5 \times 11$.
    * Áp dụng công thức của hàm phi Euler: $\phi(n) = n \times (1 - \frac{1}{p_1}) \times (1 - \frac{1}{p_2}) \times ...$
    * $\phi(440) = 440 \times (1 - \frac{1}{2}) \times (1 - \frac{1}{5}) \times (1 - \frac{1}{11})$
    * $\phi(440) = 440 \times \frac{1}{2} \times \frac{4}{5} \times \frac{10}{11} = \mathbf{160}$.

**3. Hãy cho biết kết quả của (3²⁰⁸⁶ mod 440):**
* **Đáp án: d. 289**
* **Giải thích:** Ta sử dụng Định lý Euler vì gcd(3, 440) = 1: $a^{\phi(n)} \equiv 1 \pmod{n}$.
    * Từ câu 2, ta có $\phi(440) = 160$. Vậy $3^{160} \equiv 1 \pmod{440}$.
    * Ta lấy số mũ chia cho 160: $2086 = 160 \times 13 + 6$.
    * Vậy $3^{2086} = (3^{160})^{13} \times 3^6 \equiv 1^{13} \times 3^6 \equiv 3^6 \pmod{440}$.
    * Tính $3^6 = 729$.
    * $729 \pmod{440} = \mathbf{289}$.

---

### **Câu 4 - 5: Chữ ký số và Mã hóa**

**4. Đối với mã hóa khóa công khai, khóa nào được sử dụng để tạo chữ ký số trên một thông điệp:**
* **Đáp án: d. Khóa riêng của người gửi**
* **Giải thích:** Người gửi dùng **khóa riêng** của mình để ký. Người nhận sẽ dùng **khóa công khai** tương ứng của người gửi để xác thực chữ ký đó. Điều này đảm bảo chỉ có người sở hữu khóa riêng mới có thể tạo ra chữ ký đó.

**5. Đối với mã hóa khóa công khai, khóa nào được sử dụng để mã hóa một thông điệp:**
* **Đáp án: a. Khóa công khai của người nhận**
* **Giải thích:** Để gửi một thông điệp bí mật cho người nhận, bạn phải dùng **khóa công khai** của họ để mã hóa. Chỉ họ mới có **khóa riêng** tương ứng để giải mã được thông điệp.

---

### **Câu 6 - 7: Thuật toán RSA**

Dữ liệu: $p = 3, q = 11, e = 7$, bản mã $C = 5$.

**6. Giá trị của d là:**
* **Đáp án: c. 3**
* **Giải thích:**
    * Tính $n = p \times q = 3 \times 11 = 33$.
    * Tính $\phi(n) = (p-1)(q-1) = (2)(10) = 20$.
    * Tìm d sao cho $d \times e \equiv 1 \pmod{\phi(n)} \Rightarrow d \times 7 \equiv 1 \pmod{20}$.
    * Bằng cách thử, ta thấy $3 \times 7 = 21$, và $21 \equiv 1 \pmod{20}$. Vậy **d = 3**.

**7. Giá trị của bản rõ M tương ứng là:**
* **Đáp án: a. 26**
* **Giải thích:**
    * Công thức giải mã là $M = C^d \pmod{n}$.
    * $M = 5^3 \pmod{33} = 125 \pmod{33}$.
    * $125 = 3 \times 33 + 26$.
    * Vậy **M = 26**.

---

### **Câu 8 - 10: Trao đổi khóa Diffie-Hellman**

Dữ liệu: $q = 71, \alpha = 7$. Khóa riêng A: $X_A = 5$. Khóa riêng B: $X_B = 12$.

**8. Nếu A có khóa riêng Xᴀ = 5, hãy cho biết khóa công khai của A (Yᴀ)?**
* **Đáp án: d. 51**
* **Giải thích:**
    * $Y_A = \alpha^{X_A} \pmod{q} = 7^5 \pmod{71}$.
    * $7^2 = 49$
    * $7^3 = 49 \times 7 = 343 \equiv 59 \pmod{71}$
    * $7^5 = 7^3 \times 7^2 \equiv 59 \times 49 = 2891 \equiv \mathbf{51} \pmod{71}$.

**9. Nếu B có khóa riêng Xʙ = 12, hãy cho biết khóa công khai của B (Yʙ)?**
* **Đáp án: a. 4**
* **Giải thích:**
    * $Y_B = \alpha^{X_B} \pmod{q} = 7^{12} \pmod{71}$.
    * $7^{12} = (7^5)^2 \times 7^2 \equiv 51^2 \times 49 \pmod{71}$.
    * $51^2 = 2601 \equiv 45 \pmod{71}$.
    * $Y_B \equiv 45 \times 49 = 2205 \equiv \mathbf{4} \pmod{71}$.

**10. Nếu A có khóa riêng Xᴀ = 5 và B có khóa riêng Xʙ = 12, hãy cho biết khóa bí mật dùng chung giữa A và B(Kᴀʙ)?**
* **Đáp án: c. 30**
* **Giải thích:** Khóa chung có thể được tính theo hai cách và cho cùng một kết quả.
    * **Phía A tính:** $K_{AB} = (Y_B)^{X_A} \pmod{q} = 4^5 \pmod{71}$.
        * $4^2 = 16$
        * $4^3 = 64$
        * $4^5 = 4^3 \times 4^2 = 64 \times 16 = 1024$.
        * $1024 \pmod{71} = \mathbf{30}$.
    * **Phía B tính:** $K_{AB} = (Y_A)^{X_B} \pmod{q} = 51^{12} \pmod{71}$ (kết quả cũng là 30).