Chào bạn, đây là bản **TỔNG HỢP TOÀN DIỆN (ULTIMATE CHEAT SHEET)** cho Chương 3.
Tài liệu này được thiết kế để bạn in ra và mang vào phòng thi. Nó bao gồm tất cả công thức tính toán, bảng tra cứu lý thuyết và các bẫy thường gặp.

---

# TÀI LIỆU ÔN THI CHƯƠNG 3: MẬT MÃ KHÓA CÔNG KHAI

## PHẦN 1: BẢNG TRA CỨU NHANH (LÝ THUYẾT & SO SÁNH)

_Dùng để khoanh trắc nghiệm cực nhanh_

### 1. So sánh Đối xứng (Symmetric) vs Bất đối xứng (Asymmetric)

| Tiêu chí            | Mã hóa Đối xứng (Chương 2)           | Mã hóa Khóa công khai (Chương 3)                  |
| :------------------ | :----------------------------------- | :------------------------------------------------ |
| **Số lượng khóa**   | **1 khóa** (Bí mật, chia sẻ chung).  | **2 khóa:** Công khai (Public) & Riêng (Private). |
| **Tốc độ**          | **Nhanh** (Dùng mã hóa dữ liệu lớn). | **Chậm** (Do tính toán mũ lớn).                   |
| **Chức năng chính** | Bảo mật dữ liệu (Confidentiality).   | Trao đổi khóa, Chữ ký số (Xác thực).              |
| **Vấn đề**          | Khó phân phối khóa an toàn.          | Dễ bị giả mạo khóa công khai (MITM).              |
| **Quan hệ**         | Không bị thay thế.                   | **Bổ sung** cho nhau (Mô hình lai - Hybrid).      |

### 2. So sánh 3 Thuật toán cốt lõi

| Thuật toán         | Cơ sở toán học (Bài toán khó)              | Mục đích chính         | Đặc điểm nhận dạng                                                       |
| :----------------- | :----------------------------------------- | :--------------------- | :----------------------------------------------------------------------- |
| **RSA**            | **Phân tích thừa số nguyên tố** ($n=p.q$). | Mã hóa & Chữ ký số.    | Phổ biến nhất. Cần đệm (Padding).                                        |
| **Diffie-Hellman** | **Logarit rời rạc** ($y=g^x \mod p$).      | **CHỈ Trao đổi khóa**. | Dễ bị tấn công Người đứng giữa (MITM).                                   |
| **ElGamal**        | **Logarit rời rạc**.                       | Mã hóa & Chữ ký số.    | Bản mã **dài gấp đôi** bản rõ ($C_1, C_2$). Có tính ngẫu nhiên (số $k$). |

### 3. Các dạng tấn công & Cách phòng chống

| Tấn công                  | Đặc điểm                    | Cách phòng chống                            |
| :------------------------ | :-------------------------- | :------------------------------------------ |
| **Vét cạn (Brute Force)** | Thử mọi khóa.               | Dùng khóa lớn (**$\ge$ 2048 bits**).        |
| **Toán học**              | Phân tích $n$ ra $p, q$.    | Chọn $p, q$ là số nguyên tố lớn ngẫu nhiên. |
| **Thời gian (Timing)**    | Đo thời gian giải mã.       | Thêm độ trễ ngẫu nhiên / Tính toán hằng số. |
| **Chosen Ciphertext**     | Gửi bản mã lạ để phân tích. | Dùng **Padding (OAEP)** trước khi mã hóa.   |
| **Man-in-the-Middle**     | Giả mạo khóa công khai.     | Dùng **Chứng chỉ số (CA)**.                 |

### CÁC DẠNG TẤN CÔNG RSA (Chi tiết)\*\*

Để trả lời câu hỏi trắc nghiệm, bạn cần phân biệt được đâu là tấn công vào toán học (tìm p, q) và đâu là tấn công vào cách cài đặt (kênh kề).

| Nhóm tấn công                                                                               | Tên thuật toán / Phương pháp cụ thể (Keyword)                                                                                                                  | Đặc điểm / Mục tiêu                                                                                                                                             |
| :------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **1. Phân tích thừa số (Mathematical Attacks)**<br>_(Nhắm trực tiếp vào $n$ để tìm $p, q$)_ | 1. **Trial Division** (Chia thử).<br>2. **Pollard's rho**.<br>3. **Quadratic Sieve (QS)**.<br>4. **General Number Field Sieve (GNFS)** (_Mạnh nhất hiện nay_). | Dựa trên độ khó toán học. Nếu giải được các thuật toán này nhanh $\rightarrow$ RSA sụp đổ.<br>_Lưu ý:_ GNFS là thuật toán hiệu quả nhất để phá mã RSA hiện tại. |
| **2. Tấn công Kênh kề (Side-Channel)**<br>_(KHÔNG nhắm vào toán học của $n$)_               | 1. **Timing Attack** (Tấn công thời gian).<br>2. **Power Analysis** (Phân tích điện năng).<br>3. **Fault Analysis** (Gây lỗi phần cứng).                       | Khai thác điểm yếu trong quá trình **thực thi** (phần cứng/phần mềm).<br>_Ví dụ:_ Đo thời gian giải mã để đoán khóa $d$.                                        |
| **3. Tấn công Bản mã (Protocol Attacks)**                                                   | **Chosen Ciphertext Attack (CCA)**                                                                                                                             | Gửi các bản mã được chọn lựa kỹ để máy chủ giải mã, từ đó suy ra tin tức.<br>_Phòng chống:_ Dùng đệm **OAEP**.                                                  |

---

Chào bạn, quả thật đây là phần kiến thức **CỰC KỲ QUAN TRỌNG** để đạt điểm tối đa (thường dùng cho các câu phân loại điểm 9-10).

Tôi đã bổ sung một mục riêng biệt và chuyên sâu về các lỗi này. Bạn hãy chèn nội dung dưới đây vào phần cuối của **PHẦN 3: CÁC DẠNG TẤN CÔNG** trong file tổng hợp nhé.

---

### CÁC LỖI TRIỂN KHAI RSA CỤ THỂ

#### **1. Lỗi chọn $e$ quá nhỏ (Broadcast Attack)**

- **Kịch bản:** Người gửi dùng khóa công khai $e=3$ (rất nhỏ) để gửi **cùng một tin nhắn $M$** cho 3 người nhận khác nhau (có $n_1, n_2, n_3$ khác nhau).
- **Tấn công:** Kẻ tấn công thu được 3 bản mã:
  - $C_1 \equiv M^3 \pmod{n_1}$
  - $C_2 \equiv M^3 \pmod{n_2}$
  - $C_3 \equiv M^3 \pmod{n_3}$
- **Hậu quả:** Dùng **Định lý phần dư Trung Hoa (Chinese Remainder Theorem - CRT)** để gộp 3 phương trình lại thành một phương trình: $C' = M^3 \pmod{n_1n_2n_3}$.
  - Vì $M < n_i$ nên $M^3 < n_1n_2n_3$, phép modulo không còn tác dụng. Kẻ tấn công chỉ cần tính **căn bậc 3 thường** của $C'$ là ra ngay $M$.
- **Từ khóa nhận diện:** "$e=3$", "gửi cho nhiều người", "Định lý phần dư Trung Hoa (CRT)".

#### **2. Lỗi chọn $d$ quá nhỏ (Wiener's Attack)**

- **Lý do mắc lỗi:** Cố tình chọn khóa bí mật $d$ nhỏ để **giải mã nhanh** (giảm tải cho server).
- **Tấn công:** Nếu $d < \frac{1}{3}N^{1/4}$, Michael Wiener chứng minh rằng có thể tìm ra $d$ cực nhanh bằng phương pháp **Liên phân số (Continued Fractions)**.
- **Hậu quả:** Mất toàn bộ khóa bí mật.
- **Từ khóa nhận diện:** "$d$ nhỏ", "tăng tốc giải mã", "liên phân số".

#### **3. Lỗi dùng chung Modulo (Common Modulus Attack)**

- **Kịch bản:** Một công ty cấp cho nhân viên các cặp khóa $(e_1, n), (e_2, n)...$ dùng chung một số $n$ để tiết kiệm công sức tạo số nguyên tố.
- **Tấn công:** Nếu cùng một tin $M$ được gửi cho 2 nhân viên (có $e_1, e_2$ nguyên tố cùng nhau), kẻ tấn công có thể dùng thuật toán Euclid mở rộng để khôi phục $M$ mà không cần $d$.
- **Từ khóa nhận diện:** "Dùng chung n", "Common Modulus".

#### **4. Lỗi không dùng đệm hoặc đệm yếu (Padding Oracle Attack)**

- **Kịch bản:** Sử dụng RSA thuần ($M^e$) hoặc chuẩn đệm cũ (PKCS#1 v1.5).
- **Tấn công:** Kẻ tấn công gửi hàng nghìn bản mã bị chỉnh sửa nhẹ đến server và quan sát thông báo lỗi (Error Message) trả về (ví dụ: "Padding Error" vs "Decryption Failed"). Dựa vào sự khác biệt này để đoán từng byte của $M$.
- **Hậu quả:** Khôi phục toàn bộ bản rõ (điển hình là tấn công Bleichenbacher).
- **Phòng chống:** Bắt buộc dùng **OAEP (Optimal Asymmetric Encryption Padding)**.

## PHẦN 2: CÔNG THỨC TOÁN HỌC (CÔNG CỤ TÍNH TOÁN)

### 1. Hàm Phi Euler $\phi(n)$

- Với số nguyên tố $p$: **$\phi(p) = p - 1$**
- Với tích 2 số nguyên tố $n = p \times q$: **$\phi(n) = (p - 1)(q - 1)$**

### 2. Các Định lý rút gọn mũ

- **Fermat nhỏ** (với $p$ nguyên tố): $a^{p-1} \equiv 1 \pmod p$
- **Euler** (Tổng quát): $a^{\phi(n)} \equiv 1 \pmod n$

### 3. Nghịch đảo Modulo

- $d$ là nghịch đảo của $e$ mod $\phi(n)$ khi: $e \times d \equiv 1 \pmod{\phi(n)}$
- _Cách tính:_ Dùng thuật toán **Euclid mở rộng**.

---

## PHẦN 3: QUY TRÌNH THUẬT TOÁN (STEP-BY-STEP)

### 1. Thuật toán RSA (Học thuộc lòng)

- **Bước 1: Tạo khóa**

  1.  Chọn $p, q$ (nguyên tố lớn).
  2.  Tính **$n = p \times q$**. (Công khai)
  3.  Tính **$\phi(n) = (p-1)(q-1)$**. (Bí mật)
  4.  Chọn $e$: $1 < e < \phi(n)$ và $\text{gcd}(e, \phi(n)) = 1$. (Công khai)
  5.  Tính $d$: **$e \times d \equiv 1 \pmod{\phi(n)}$**. (Bí mật)

  - $\rightarrow$ **Public Key:** $\{e, n\}$ | **Private Key:** $\{d, n\}$

- **Bước 2: Mã hóa (Người gửi dùng PU người nhận)**

  - $C = M^e \pmod n$

- **Bước 3: Giải mã (Người nhận dùng PR của mình)**
  - $M = C^d \pmod n$
    Chào bạn, 3 câu hỏi này đánh vào những **điểm mù lý thuyết** rất tinh vi mà nếu chỉ học thuộc công thức hời hợt sẽ rất dễ sai.

Để "cân" được 3 câu này (và các câu tương tự), bạn cần bổ sung ngay 3 mục nhỏ dưới đây vào file tổng hợp (tôi đã đóng gói sẵn để bạn copy).

---

### CÁC BẪY & CHI TIẾT LÝ THUYẾT (QUAN TRỌNG)\*\*

#### **1. Cơ chế kết luận của Miller-Rabin (Kiểm tra nguyên tố)**

_Dùng để trả lời câu hỏi về xác suất/độ chính xác._

- **Bản chất:** Là thuật toán **xác suất** (Probabilistic), không phải thuật toán xác định (Deterministic).
- **Quy tắc kết luận (Bất đối xứng):**
  - Nếu trả về **"Hợp số" (Composite):** Chắc chắn **100% đúng**. (Không bao giờ sai).
  - Nếu trả về **"Nguyên tố" (Prime):** Chỉ là **"Có thể là nguyên tố"** (Probable Prime). Vẫn có xác suất rất nhỏ (sai số $< 1/4$ mỗi vòng lặp) nó là hợp số (gọi là _Giả nguyên tố_).
  - $\rightarrow$ Muốn tăng độ chính xác: Phải chạy lặp lại nhiều lần.

> **Áp dụng:** Câu 1 chọn **A** (Chắc chắn là hợp số).

#### **2. Phân biệt rõ ràng vai trò của $n$ và $\phi(n)$**

_Dùng để trả lời câu hỏi về công thức sai._

Đây là cái bẫy lớn nhất của chương này. Hãy nhớ quy tắc "2 thế giới":

| Thế giới của KHÓA (Tạo khóa)                   | Thế giới của TIN (Mã/Giải mã) |
| :--------------------------------------------- | :---------------------------- |
| Dùng **$\phi(n)$**                             | Dùng **$n$**                  |
| $e$ phải nguyên tố cùng nhau với **$\phi(n)$** | $M$ phải nhỏ hơn **$n$**      |
| $d = e^{-1} \pmod{\mathbf{\phi(n)}}$           | $C = M^e \pmod{\mathbf{n}}$   |
|                                                | $M = C^d \pmod{\mathbf{n}}$   |

> **Áp dụng:** Câu 2 chọn **C** là biểu thức SAI (vì trong câu C viết là mod $n$, đúng ra phải là mod $\phi(n)$).

#### **3. Điều kiện tồn tại khóa $d$**

_Dùng để trả lời câu hỏi "Tại sao tạo khóa thất bại?"._

- **Toán học:** $d$ là nghịch đảo nhân của $e$ theo modulo $\phi(n)$.
- **Điều kiện tiên quyết:** Để tồn tại nghịch đảo, $e$ và $\phi(n)$ phải **nguyên tố cùng nhau**.
  - Tức là: $\text{GCD}(e, \phi(n)) = 1$.
- **Hệ quả:** Nếu bạn chọn $e$ sao cho nó có ước chung với $\phi(n)$ (ví dụ $\text{GCD} \neq 1$), thuật toán Euclid mở rộng sẽ **không tìm được $d$**. Quá trình tạo khóa thất bại.

> **Áp dụng:** Câu 3 chọn **B** (Ước chung lớn nhất khác 1 $\rightarrow$ Không có nghịch đảo $\rightarrow$ Thất bại).

---

### 2. Thuật toán Diffie-Hellman (Trao đổi khóa)

- **Tham số chung:** Số nguyên tố $q$, căn nguyên thủy $\alpha$.
- **Bước 1: Tạo khóa công khai**
  - Alice chọn $X_A$ (riêng) $\rightarrow$ Tính $Y_A = \alpha^{X_A} \pmod q$ (gửi đi).
  - Bob chọn $X_B$ (riêng) $\rightarrow$ Tính $Y_B = \alpha^{X_B} \pmod q$ (gửi đi).
- **Bước 2: Tính khóa chung ($K$)**
  - Alice tính: $K = (Y_B)^{X_A} \pmod q$
  - Bob tính: $K = (Y_A)^{X_B} \pmod q$

---

## PHẦN 4: QUẢN LÝ KHÓA & ỨNG DỤNG

### 1. Vấn đề "Man-in-the-Middle" (MITM)

- **Mô tả:** Hacker đứng giữa A và B, giả mạo khóa công khai của A gửi cho B và ngược lại.
- **Hậu quả:** Hacker đọc được toàn bộ tin nhắn mà A, B không biết.

### 2. Giải pháp: Chứng chỉ số (Digital Certificate)

- **CA (Certificate Authority):** Tổ chức tin cậy (bên thứ 3).
- **Cách hoạt động:** CA dùng **Khóa riêng của CA** để ký xác nhận vào khóa công khai của người dùng.
- **X.509:** Chuẩn định dạng chứng chỉ phổ biến nhất.

### 3. Quy tắc sử dụng Khóa (Quy tắc Vàng)

- **Muốn BẢO MẬT (Gửi thư kín):** Mã hóa bằng **Khóa Công khai của Người nhận**.
- **Muốn XÁC THỰC (Ký tên):** Ký bằng **Khóa Riêng của Người gửi**.

**Câu hỏi:** Làm sao để vừa bảo mật (bí mật) vừa xác thực (chính chủ)?
**Quy tắc:** **"KÝ TRƯỚC - MÃ SAU" (Sign-then-Encrypt)**

1.  **Bước 1 (Ký):** Dùng **Khóa RIÊNG của người gửi** để ký vào bản rõ $M$.
    - $\rightarrow$ Tạo ra chữ ký $S$.
2.  **Bước 2 (Mã):** Dùng **Khóa CÔNG KHAI của người nhận** để mã hóa cả ($M$ + $S$).
    - $\rightarrow$ Tạo ra gói tin bảo mật gửi đi.

**Tại sao? (Tư duy để nhớ):**
Giống như gửi thư tay: Bạn viết thư $\rightarrow$ **Ký tên vào thư** (Ký) $\rightarrow$ Sau đó mới **bỏ vào phong bì dán lại** (Mã hóa).

- Nếu làm ngược lại (Mã hóa rồi mới Ký): Giống như dán phong bì rồi mới ký tên lên vỏ phong bì. Kẻ xấu có thể xé phong bì đó đi, lấy chữ ký của bạn dán sang một phong bì rác khác (tấn công cắt dán).

---

---

## PHẦN 5: CÁC LỖI "CHẾT NGƯỜI" CẦN TRÁNH

1.  **Nhầm lẫn Modulo trong RSA:**

    - Tìm $d$: Phải dùng modulo **$\phi(n)$**. (Sai lầm phổ biến nhất là dùng $n$).
    - Mã hóa/Giải mã: Phải dùng modulo **$n$**.

2.  **Nhầm lẫn vai trò khóa:**

    - Không bao giờ dùng khóa công khai để giải mã.
    - Không bao giờ dùng khóa riêng để mã hóa gửi đi (vì ai cũng có khóa công khai để giải $\rightarrow$ mất tính bí mật).

3.  **Điều kiện dữ liệu:**

    - Bản rõ $M$ phải nhỏ hơn $n$ ($M < n$). Nếu lớn hơn phải chia khối.

4.  **Tính toán:**
    - Khi tính $a^b \pmod n$: Không được bấm máy tính $a^b$ ra số khổng lồ rồi mới chia dư. Phải dùng tính chất $(A \times B) \mod n$ để thu gọn từng bước (Square & Multiply).

---
