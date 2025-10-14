Chắc chắn rồi, đây là lời giải chi tiết cho các bài tập của bạn.

---
### ## 1. Tìm x nguyên dương nhỏ nhất

Phương pháp chung là rút gọn phương trình đồng dư và thử các giá trị x nhỏ nhất (1, 2, 3, ...).

**a. 5x ≡ 4 (mod 3)**
* Rút gọn các hệ số theo mod 3:
    * `5 ≡ 2 (mod 3)`
    * `4 ≡ 1 (mod 3)`
* Phương trình trở thành: `2x ≡ 1 (mod 3)`.
* Thử x:
    * Nếu x = 1: `2 * 1 = 2 ≡ 2 (mod 3)` (Không thỏa)
    * Nếu x = 2: `2 * 2 = 4 ≡ 1 (mod 3)` (Thỏa mãn)
* **Vậy, x nhỏ nhất là 2.**

**b. 7x ≡ 6 (mod 3)**
* Rút gọn các hệ số theo mod 3:
    * `7 ≡ 1 (mod 3)`
    * `6 ≡ 0 (mod 3)`
* Phương trình trở thành: `1x ≡ 0 (mod 3)` hay `x ≡ 0 (mod 3)`.
* Số nguyên dương nhỏ nhất chia hết cho 3 là 3.
* **Vậy, x nhỏ nhất là 3.**

**c. 9x ≡ 8 (mod 3)**
* Rút gọn các hệ số theo mod 3:
    * `9 ≡ 0 (mod 3)`
    * `8 ≡ 2 (mod 3)`
* Phương trình trở thành: `0 * x ≡ 2 (mod 3)` hay `0 ≡ 2 (mod 3)`.
* Đây là một điều vô lý, không có giá trị x nào có thể thỏa mãn.
* **Vậy, không tồn tại x.**

---
### ## 2. Dùng thuật toán Euclid mở rộng

**a. 1234 mod 4321**
Sử dụng thuật toán Euclid mở rộng cho 4321 và 1234, ta tìm được:
`(-1023) * 4321 + 3581 * 1234 = 1`
Do đó, `3581 * 1234 ≡ 1 (mod 4321)`.
* **Nghịch đảo là 3581.**

**b. 24140 mod 40902**
Sử dụng thuật toán Euclid mở rộng cho 40902 và 24140, ta tìm được:
`(-5899) * 40902 + 10001 * 24140 = 2`
Vì `gcd(24140, 40902) = 2 ≠ 1`, nên 24140 không có nghịch đảo nhân theo mod 40902.
* **Không tồn tại nghịch đảo.**

**c. 550 mod 1769**
Sử dụng thuật toán Euclid mở rộng cho 1769 và 550, ta tìm được:
`(-169) * 1769 + 541 * 550 = 1`
Do đó, `541 * 550 ≡ 1 (mod 1769)`.
* **Nghịch đảo là 541.**


---
### ## 3. Dùng Định lý Fermat

**Tính 3²⁰¹ mod 11**
* Vì 11 là số nguyên tố, theo Định lý nhỏ Fermat: $a^{p-1} \equiv 1 \pmod p$.
* Ta có: $3^{11-1} \equiv 3^{10} \equiv 1 \pmod{11}$.
* Ta lấy số mũ chia cho 10: `201 = 20 * 10 + 1`.
* $3^{201} = 3^{20 \times 10 + 1} = (3^{10})^{20} \times 3^1$.
* $3^{201} \equiv 1^{20} \times 3 \equiv 3 \pmod{11}$.
* **Kết quả là 3.**

---
### ## 4. Dùng Định lý Euler

**Tính 7¹⁰⁰⁰ mod 10**
* Ta cần tính $\phi(10)$. Phân tích 10 ra thừa số nguyên tố: $10 = 2 \times 5$.
* $\phi(10) = 10 \times (1 - 1/2) \times (1 - 1/5) = 10 \times (1/2) \times (4/5) = 4$.
* Vì `gcd(7, 10) = 1`, theo Định lý Euler: $a^{\phi(n)} \equiv 1 \pmod n$.
* Ta có: $7^4 \equiv 1 \pmod{10}$.
* Ta lấy số mũ chia cho 4: `1000` chia hết cho 4.
* $7^{1000} = 7^{4 \times 250} = (7^4)^{250} \equiv 1^{250} \equiv 1 \pmod{10}$.
* **Kết quả là 1.**

---
### ## 5. Tính hàm phi Euler

* **a. $\phi(41)$:** Vì 41 là số nguyên tố, $\phi(41) = 41 - 1 = \mathbf{40}$.
* **b. $\phi(27)$:** $27 = 3^3$. $\phi(27) = 27 \times (1 - 1/3) = 27 \times (2/3) = \mathbf{18}$.
* **c. $\phi(231)$:** $231 = 3 \times 7 \times 11$. $\phi(231) = 231 \times (1-1/3) \times (1-1/7) \times (1-1/11) = 231 \times (2/3) \times (6/7) \times (10/11) = \mathbf{120}$.
* **d. $\phi(440)$:** $440 = 2^3 \times 5 \times 11$. $\phi(440) = 440 \times (1-1/2) \times (1-1/5) \times (1-1/11) = 440 \times (1/2) \times (4/5) \times (10/11) = \mathbf{160}$.

---
### ## 6. Mã hóa RSA

Công thức mã hóa: $C = M^e \pmod n$, với $n = p \times q$.

* **a. p=3, q=11, e=7, M=5:**
    * $n = 3 \times 11 = 33$.
    * $C = 5^7 \pmod{33} = 78125 \pmod{33} = \mathbf{14}$.
* **b. p=5, q=11, e=3, M=9:**
    * $n = 5 \times 11 = 55$.
    * $C = 9^3 \pmod{55} = 729 \pmod{55} = \mathbf{14}$.
* **c. p=7, q=11, e=17, M=8:**
    * $n = 7 \times 11 = 77$.
    * $\phi(n) = (7-1)(11-1) = 60$.
    * $C = 8^{17} \pmod{77}$.
    * $8^{17} = (8^2)^8 \times 8 = 64^8 \times 8 \equiv (-13)^8 \times 8 \pmod{77}$.
    * Tính toán tiếp: $(-13)^2 = 169 \equiv 15$. $(-13)^4 \equiv 15^2 = 225 \equiv -6$. $(-13)^8 \equiv (-6)^2 = 36$.
    * $C \equiv 36 \times 8 = 288 \pmod{77} = \mathbf{57}$.
* **d. p=11, q=13, e=11, M=7:**
    * $n = 11 \times 13 = 143$.
    * $C = 7^{11} \pmod{143} = \mathbf{106}$.
* **e. p=17, q=31, e=7, M=2:**
    * $n = 17 \times 31 = 527$.
    * $C = 2^7 \pmod{527} = \mathbf{128}$.

---
### ## 7. Giải mã RSA

* **Dữ liệu:** $C = 10$, khóa công khai $(e, n) = (5, 35)$.
* **Bước 1: Tìm p và q.**
    * $n = 35 = 5 \times 7$. Vậy $p=5, q=7$.
* **Bước 2: Tính $\phi(n)$.**
    * $\phi(35) = (5-1)(7-1) = 4 \times 6 = 24$.
* **Bước 3: Tìm khóa riêng d.**
    * Ta cần tìm $d$ sao cho $e \times d \equiv 1 \pmod{\phi(n)}$.
    * $5 \times d \equiv 1 \pmod{24}$.
    * Thử các giá trị, ta thấy $5 \times 5 = 25 \equiv 1 \pmod{24}$. Vậy **d = 5**.
* **Bước 4: Giải mã.**
    * Công thức giải mã: $M = C^d \pmod n$.
    * $M = 10^5 \pmod{35} = 100000 \pmod{35}$.
    * $100000 = (100 \times 1000) \equiv ((-5) \times (1000)) \pmod{35}$.
    * $1000 = 28 \times 35 + 20 \equiv 20 \pmod{35}$.
    * $M \equiv (-5) \times 20 = -100 \equiv 5 \pmod{35}$.
* **Bản rõ M là 5.**

---
### ## 8. Trao đổi khóa Diffie-Hellman

Dữ liệu: $q = 11, \alpha = 2$.

**a. Chứng minh 2 là căn nguyên thủy của 11**
Ta cần tính các lũy thừa của 2 theo mod 11 và xem chúng có tạo ra tất cả các số từ 1 đến 10 hay không.
* $2^1 \equiv 2$
* $2^2 \equiv 4$
* $2^3 \equiv 8$
* $2^4 \equiv 16 \equiv 5$
* $2^5 \equiv 10$
* $2^6 \equiv 20 \equiv 9$
* $2^7 \equiv 18 \equiv 7$
* $2^8 \equiv 14 \equiv 3$
* $2^9 \equiv 6$
* $2^{10} \equiv 12 \equiv 1$
Các kết quả `(2, 4, 8, 5, 10, 9, 7, 3, 6, 1)` là một hoán vị của các số từ 1 đến 10.
* **Vậy, 2 là một căn nguyên thủy của 11.**

**b. Tìm khóa riêng của A**
* Ta có khóa công khai của A là $Y_A = 9$.
* Ta cần tìm khóa riêng $X_A$ sao cho $\alpha^{X_A} \equiv Y_A \pmod q$.
* $2^{X_A} \equiv 9 \pmod{11}$.
* Nhìn vào bảng tính ở câu a, ta thấy $2^6 \equiv 9 \pmod{11}$.
* **Khóa riêng của A là $X_A = 6$.**

**c. Tính khóa bí mật chung K**
* Khóa công khai của B là $Y_B = 3$.
* Khóa riêng của A là $X_A = 6$.
* A tính khóa chung bằng công thức: $K = (Y_B)^{X_A} \pmod q$.
* $K = 3^6 \pmod{11}$.
* $3^2 = 9$.
* $3^3 = 27 \equiv 5 \pmod{11}$.
* $3^6 = (3^3)^2 \equiv 5^2 = 25 \equiv 3 \pmod{11}$.
* **Khóa bí mật chung là K = 3.**