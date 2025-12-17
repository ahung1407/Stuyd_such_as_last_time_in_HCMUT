Chào bạn, để nắm vững chương IV (Slide 1-40) phục vụ cho thi cử hoặc làm việc, bạn không cần nhớ từng slide, nhưng bắt buộc phải hiểu sâu **3 trụ cột chính** và **sự khác biệt** giữa chúng.

Dưới đây là bản tổng hợp cốt lõi nhất:

### 1. MỤC TIÊU CHƯƠNG: TOÀN VẸN DỮ LIỆU (INTEGRITY)

Khác với mã hóa (Confidentiality - Giữ bí mật), chương này tập trung vào việc **phát hiện xem dữ liệu có bị ai đó sửa đổi hay không**.

### 2. BẢNG SO SÁNH "THẦN THÁNH" (BẮT BUỘC NHỚ)

Đây là chìa khóa để phân biệt 3 công cụ chính:

| Đặc điểm         | Hàm băm (Hash)       | MAC (Mã xác thực)                | Chữ ký số (Digital Signature)               |
| :--------------- | :------------------- | :------------------------------- | :------------------------------------------ |
| **Đầu vào**      | Thông điệp M         | Thông điệp M + **Khóa bí mật K** | Thông điệp M + **Khóa Riêng (Private Key)** |
| **Khóa sử dụng** | Không có             | Khóa đối xứng (Symmetric)        | Khóa bất đối xứng (Asymmetric)              |
| **Tính chất**    | Toàn vẹn (Integrity) | Toàn vẹn + Xác thực (Auth)       | Toàn vẹn + Xác thực + **Chống thoái thác**  |
| **Ai kiểm tra?** | Bất kỳ ai            | Chỉ người giữ khóa K             | Bất kỳ ai có Khóa Công Khai                 |
| **Ví dụ**        | SHA-256, MD5         | HMAC, CMAC                       | RSA, DSA                                    |

---

### 3. CHI TIẾT 3 TRỤ CỘT

#### A. Hàm băm (Hash Functions)

- **Bản chất:** Nén dữ liệu tùy ý thành một chuỗi có độ dài cố định (Digest).
- **3 Yêu cầu an toàn:**
  1.  **Một chiều:** Biết $h$, không tìm được $M$.
  2.  **Kháng va chạm yếu:** Biết $x$, không tìm được $y$ để $H(y) = H(x)$.
  3.  **Kháng va chạm mạnh:** Không tìm được cặp $(x, y)$ bất kỳ nào trùng Hash. (Quan trọng nhất).
- **Tấn công Birthday Attack:** Cho thấy Hash 64-bit là quá yếu (chỉ cần $2^{32}$ phép thử để tìm va chạm). **Phải dùng Hash > 128 bit** (như SHA-256).

#### B. Mã xác thực thông điệp (MAC)

- **Bản chất:** Là hàm băm có gắn thêm "Khóa bí mật" để chứng minh người gửi là người trong nhóm tin cậy.
- **HMAC (Quan trọng nhất):**
  - **Lý do ra đời:** Việc ghép khóa đơn giản `Hash(Key|Message)` bị lỗi bảo mật (Length Extension Attack).
  - **Cấu trúc:** Băm lồng nhau (Nested Hash). Băm 2 lần với 2 khóa đệm khác nhau (`ipad` và `opad`).
- **CMAC:** Dùng thuật toán mã hóa khối (AES/DES) để tạo MAC, xử lý tốt vấn đề độ dài tin nhắn thay đổi.

#### C. Chữ ký số (Digital Signature)

- **Tính năng độc nhất:** **Chống thoái thác (Non-repudiation)**. Người ký không thể chối cãi trước pháp luật.
- **Nguyên tắc "Ngược đời" so với mã hóa:**
  - **Ký (Sign):** Dùng **Khóa Riêng** (Private Key).
  - **Xác minh (Verify):** Dùng **Khóa Công Khai** (Public Key).
- **Quy trình chuẩn:** Không ký trực tiếp lên File (quá chậm). Hãy **Băm file trước**, sau đó **Ký lên mã băm đó**.

---

### 4. CÁC THUẬT TOÁN CỤ THỂ CẦN LƯU Ý

#### 1. SHA (Secure Hash Algorithm)

- Gia đình hàm băm chuẩn.
- SHA-1 (160 bit) đã bị phá vỡ -> Không nên dùng.
- **Khuyên dùng:** SHA-256 hoặc SHA-512.

#### 2. RSA (Dùng cho Chữ ký số)

- Dùng chung thuật toán với mã hóa RSA nhưng đảo ngược vai trò khóa.
- **Tạo chữ ký:** $S = h^d \mod n$ (d là khóa riêng).
- **Kiểm tra:** $h' = S^e \mod n$ (e là khóa công khai).

#### 3. DSA (Digital Signature Algorithm)

- Chuyên dụng chỉ để ký, tạo ra chữ ký nhỏ gọn (320 bit).
- **Tử huyệt:** Số ngẫu nhiên **$k$ (nonce)**.
  - Nếu lộ $k$ -> Mất khóa riêng.
  - Nếu dùng lại $k$ cho 2 tin nhắn khác nhau -> Mất khóa riêng.

---

### 5. TỔNG KẾT CÁC LỖI HAY GẶP TRONG THI CỬ

1.  **Nhầm lẫn:** "MAC dùng để mã hóa bí mật tin nhắn". -> **Sai**. MAC vẫn gửi tin nhắn rõ (plaintext), nó chỉ kẹp thêm cái tem kiểm tra thôi.
2.  **Nhầm lẫn:** "Dùng khóa công khai để ký". -> **Sai**. Khóa công khai là để cho thiên hạ kiểm tra. Khóa riêng mới dùng để ký.
3.  **Tấn công:** Nhớ rằng **Birthday Attack** là kẻ thù của Hàm băm, còn **Tái sử dụng k** là kẻ thù của DSA.

Đây là toàn bộ cốt lõi 40 slide đầu tiên. Nắm chắc phần này bạn đã hiểu được bản chất của xác thực dữ liệu hiện đại!
Chào bạn, dưới đây là lời giải chi tiết và phân tích cho các câu hỏi và bài tập trong hình bạn cung cấp. Nội dung thuộc Chương IV: Những giải thuật mã hóa toàn vẹn dữ liệu (Hash, MAC, Chữ ký số).

---

### **PHẦN I. CÂU HỎI TỰ LUẬN**

**Câu 1: Cho biết các hướng tiếp cận nhằm cung cấp khả năng xác thực thông điệp.**
Có 3 hướng tiếp cận chính:

1.  **Sử dụng mã hóa thông điệp (Message Encryption):** Toàn bộ bản tin được mã hóa. Nếu giải mã thành công ra bản rõ có nghĩa, ta xác thực được người gửi (vì chỉ người gửi có khóa để mã hóa) và tính toàn vẹn (vì nếu sửa ciphertext thì plaintext sẽ hỏng).
2.  **Sử dụng Mã xác thực thông điệp (Message Authentication Code - MAC):** Sử dụng một khóa bí mật chung để tạo ra một đoạn mã nhỏ gắn kèm thông điệp.
3.  **Sử dụng Hàm băm (Hash Function):** Tạo ra một "dấu vân tay" của thông điệp (thường kết hợp với mã hóa khóa công khai để tạo chữ ký số hoặc dùng khóa bí mật để tạo HMAC).

**Câu 2: Khác biệt giữa mã xác thực thông điệp (MAC) và hàm băm một chiều là gì?**

- **MAC (Message Authentication Code):** Sử dụng **khóa bí mật**. Nó đảm bảo cả tính toàn vẹn dữ liệu (Integrity) và xác thực nguồn gốc (Authentication - biết ai gửi).
- **Hàm băm (Hash):** **Không sử dụng khóa**. Nó chỉ đảm bảo tính toàn vẹn (kiểm tra xem dữ liệu có bị thay đổi không), nhưng bất kỳ ai cũng có thể tính lại giá trị băm mới cho dữ liệu giả mạo, nên nó không tự xác thực được nguồn gốc nếu không đi kèm cơ chế khác (như chữ ký số).

**Câu 3: Mã xác thực thông điệp dựa trên hàm băm được gọi là gì?**

- Được gọi là **HMAC** (Hash-based Message Authentication Code). Ví dụ: HMAC-SHA256, HMAC-MD5.

**Câu 4: Cho biết các đặc tính mà chữ ký số phải có.**

1.  **Xác thực (Authentication):** Xác minh được danh tính người ký.
2.  **Toàn vẹn (Integrity):** Đảm bảo thông điệp không bị sửa đổi sau khi ký.
3.  **Chống thoái thác (Non-repudiation):** Người ký không thể phủ nhận việc mình đã ký (do chỉ họ giữ khóa riêng).
4.  **Không thể giả mạo:** Rất khó để tạo ra chữ ký hợp lệ nếu không có khóa riêng.
5.  **Gắn liền với thông điệp:** Chữ ký phụ thuộc vào nội dung thông điệp, không thể cắt chữ ký từ văn bản này dán sang văn bản khác.

**Câu 5: Cho biết ưu điểm của lược đồ chữ ký số với DSA so với lược đồ chữ ký số với RSA.**

- **Kích thước chữ ký nhỏ gọn:** Chữ ký DSA có độ dài cố định là 320 bits (cặp số r, s mỗi số 160 bits), nhỏ hơn nhiều so với chữ ký RSA (thường là 1024, 2048 hoặc 4096 bits tùy theo độ dài khóa).
- **Tốc độ tạo chữ ký:** Quá trình tạo chữ ký DSA có thể nhanh hơn RSA vì một số phép toán nặng có thể được tính toán trước (pre-computation) khi rảnh rỗi, chỉ để lại phần tính toán nhẹ khi thực sự ký.

---

### **PHẦN II. CÂU HỎI TRẮC NGHIỆM**

**Câu 1: DAA (Data Authentication Algorithm) tạo ra mã xác thực thông điệp có kích thước là:**

- **Đáp án: b. 64 bits**
- **Giải thích:** DAA dựa trên thuật toán DES ở chế độ CBC. DES có khối 64 bits, do đó MAC tạo ra (thường lấy từ khối cuối cùng) cũng có kích thước 64 bits.

**Câu 2: Cho một hàm băm với kết quả băm có chiều dài là 128 bits... xác suất để có hai văn bản P1 và P2 mà giá trị băm của chúng bằng nhau là 0.5 (Tấn công ngày sinh nhật):**

- **Đáp án: c. $2^{64}$**
- **Giải thích:** Đây là nguyên lý của tấn công sinh nhật (Birthday Attack). Để tìm ra một đụng độ (collision) với xác suất 50% cho hàm băm độ dài $n$ bits, ta cần thực hiện khoảng $2^{n/2}$ phép thử. Với $n=128$, số phép thử là $2^{128/2} = 2^{64}$.

**Câu 3: Mã xác thực thông điệp dựa trên hàm băm MD5 tạo ra mã xác thực thông điệp có kích thước là:**

- **Đáp án: a. 128 bits**
- **Giải thích:** HMAC tạo ra đầu ra có độ dài bằng với độ dài của hàm băm cơ sở. MD5 có đầu ra 128 bits, nên HMAC-MD5 cũng là 128 bits.

**Câu 4: Chữ ký số là một cơ chế xác thực nhằm:**

- **Đáp án: d. Cả ba câu trên đều đúng**
- **Giải thích:** Chữ ký số đảm bảo: (a) Toàn vẹn, (b) Xác thực người gửi, (c) Chống thoái thác (đây là tính năng quan trọng nhất phân biệt với MAC).

**Câu 5: Cho biết phát biểu SAI khi nói về các lược đồ tạo chữ ký số:**

- **Đáp án: a. Lược đồ DSA tạo chữ ký có chiều dài 512 bits.**
- **Giải thích:**
  - Câu a SAI vì: Chữ ký DSA chuẩn bao gồm cặp số $(r, s)$, mỗi số có độ dài bằng độ dài của $q$ (thường là 160 bits). Vậy tổng độ dài chữ ký là $160 + 160 = 320$ bits. (Kích thước 512 bits thường nói về độ dài khóa tối thiểu $L$, không phải chữ ký).
  - Câu b (Đúng theo tài liệu giáo trình): Slide bài giảng thường đề cập DSA tính toán ký và xác minh (về mặt dung lượng bit tính toán) nhỏ/nhanh hơn RSA (dù thực tế RSA verify thường nhanh hơn, nhưng trong ngữ cảnh so sánh "hiệu quả" về kích thước bit thì DSA ưu việt hơn).
  - Câu c (Đúng): RSA tạo chữ ký dài bằng độ dài khóa (VD: 1024 bits), lớn hơn DSA (320 bits).
  - Câu d (Đúng): DSA được thiết kế _chỉ_ để ký số, không dùng để mã hóa dữ liệu hay trao đổi khóa như RSA.

**Câu 6: Dịch vụ xác thực X.509 dùng mã hóa dạng gì?**

- **Đáp án: c. Mã hóa khóa công khai**
- **Giải thích:** X.509 là chuẩn cho hạ tầng khóa công khai (PKI), sử dụng các cặp khóa công khai/riêng để xác thực và ký chứng thư số.

**Câu 7: Chữ ký số trong chứng chỉ X.509 được tạo dùng khóa nào sau đây:**

- **Đáp án: d. Khóa riêng của đơn vị phát hành chứng chỉ (CA)**
- **Giải thích:** Để chứng nhận một chứng chỉ là thật, đơn vị cấp phát (Certificate Authority - CA) phải dùng **khóa riêng** của họ để ký lên thông tin của người dùng. Khi đó, mọi người dùng **khóa công khai** của CA để kiểm tra chữ ký đó.

---

### **PHẦN III. BÀI TẬP**

**Bài 1: Xem xét hàm băm cộng module**
**a. Hàm băm $h = (\sum a_i) \mod n$ có thỏa mãn các yêu cầu bảo mật không?**

- **Trả lời:** **Không.**
- **Giải thích:**
  1.  **Không kháng tiền ảnh (One-way):** Rất dễ để tạo ra thông điệp $M$ có giá trị băm mong muốn. Ví dụ muốn có h=10, chỉ cần chọn thông điệp là số 10 (hoặc 5,5).
  2.  **Không kháng va chạm (Collision resistance):** Phép cộng có tính chất giao hoán ($a+b = b+a$). Nếu $M = (1, 2)$ thì $h = 3$. Nếu đổi chỗ $M' = (2, 1)$ thì $h = 3$. Hai thông điệp khác nhau có cùng mã băm -> Dễ dàng tìm thấy va chạm.

**b. Tương tự cho hàm băm $h = (\sum a_i^2) \mod n$**

- **Trả lời:** **Không.**
- **Giải thích:** Tương tự câu a, phép bình phương và phép cộng vẫn có tính giao hoán. $M=(1, 2)$ sẽ có tổng bình phương là $1^2+2^2=5$. $M'=(2, 1)$ cũng có tổng là $5$. Vẫn rất dễ tìm va chạm bằng cách đảo vị trí các khối dữ liệu.

**c. Tính toán giá trị băm câu (b)**

- **Đề bài:** $M = (189, 632, 900, 722, 349)$ và $n = 989$. Hàm $h = (\sum a_i^2) \mod n$.
- **Tính toán:**
  Ta tính từng số hạng modulo 989 trước để số nhỏ hơn (sử dụng tính chất $(a+b)\mod n = (a\mod n + b\mod n)\mod n$):

  1.  $189^2 = 35721$.
      $35721 \div 989 = 36$ dư **117**.
  2.  $632^2 = 399424$.
      $399424 \div 989 = 403$ dư **857**.
  3.  $900^2 = 810000$.
      $810000 \div 989 = 818$ dư **998**. (Lưu ý: số dư này lớn hơn n? $819 \times 989 = 809991$. $810000 - 809991 = 9$).
      _Cách khác:_ $900 \equiv -89 \pmod{989}$. $(-89)^2 = 7921$. $7921 \div 989 = 8$ dư **9**.
  4.  $722^2 = 521284$.
      $521284 \div 989 = 527$ dư **81**.
  5.  $349^2 = 121801$.
      $121801 \div 989 = 123$ dư **154**.

  **Tổng các số dư:**
  $Sum = 117 + 857 + 9 + 81 + 154 = 1218$.

  **Tính hash cuối cùng:**
  $h = 1218 \mod 989 = 1218 - 989 = \mathbf{229}$.

  **Kết quả:** $h = 229$.

**Bài 2: Vấn đề gì xảy ra nếu giá trị k (ngẫu nhiên) dùng để tạo chữ ký trong DSA bị lộ?**

- **Trả lời:** Nếu $k$ bị lộ, kẻ tấn công sẽ **tìm ra được Khóa riêng (Private Key - x)** của người dùng. Toàn bộ hệ thống chữ ký bị phá vỡ.
- **Chứng minh toán học:**
  Công thức tạo chữ ký DSA phần tính $s$ là:
  $$s = k^{-1} \cdot (H(M) + x \cdot r) \mod q$$

  Trong đó:

  - $s, r$: Là chữ ký (công khai).
  - $H(M)$: Giá trị băm của thông điệp (công khai).
  - $q$: Tham số toàn cục (công khai).
  - $k$: Số ngẫu nhiên (đã bị lộ).
  - $x$: Khóa riêng (cần tìm).

  Kẻ tấn công sẽ biến đổi phương trình để tìm $x$:

  1.  Nhân 2 vế với $k$:
      $$s \cdot k = H(M) + x \cdot r \pmod q$$
  2.  Chuyển vế:
      $$x \cdot r = s \cdot k - H(M) \pmod q$$
  3.  Nhân với nghịch đảo của $r$ ($r^{-1}$):
      $$x = r^{-1} \cdot (s \cdot k - H(M)) \pmod q$$

  Vì tất cả các giá trị bên vế phải ($r, s, k, H(M)$) đều đã biết, kẻ tấn công dễ dàng tính ra khóa riêng $x$.
