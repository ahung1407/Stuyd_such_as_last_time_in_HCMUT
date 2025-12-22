Chào bạn, đây là **BỘ TÀI LIỆU TỔNG HỢP TOÀN DIỆN NHẤT (MASTER CHEAT SHEET)** cho chương Mã hóa đối xứng.

Tôi đã đồng bộ hóa tất cả các nội dung: từ kiến thức cốt lõi, bảng so sánh nâng cao, chi tiết kỹ thuật AES/DES, cho đến các chiến thuật làm bài thi vào **một tài liệu duy nhất**. Bạn có thể in tài liệu này ra để tra cứu cực nhanh trong phòng thi.

---

# TỔNG HỢP KIẾN THỨC: MÃ HÓA ĐỐI XỨNG (SYMMETRIC ENCRYPTION)

## I. NGUYÊN LÝ CỐT LÕI (FUNDAMENTALS)

1.  **Định nghĩa:** Người gửi và nhận dùng **chung 1 khóa bí mật**. ($K_{Enc} = K_{Dec}$).
2.  **Nguyên tắc Kerckhoffs:** Sự an toàn phải nằm ở **Khóa (Key)**. Thuật toán được phép công khai.
3.  **Hai thuộc tính "sống còn" (Claude Shannon):**
    - **Confusion (Nhầm lẫn):** Làm mất liên hệ giữa _Bản mã_ và _Khóa_. $\rightarrow$ Thực hiện bằng **Thay thế (Substitution/S-box)**.
    - **Diffusion (Khuếch tán):** Làm loang thống kê của _Bản rõ_ ra toàn bộ _Bản mã_. $\rightarrow$ Thực hiện bằng **Hoán vị (Permutation/ShiftRows/MixCols)**.
4.  **Avalanche Effect (Hiệu ứng tuyết lở):** Thay đổi 1 bit đầu vào $\rightarrow$ thay đổi ~50% bit đầu ra.

---

## II. THUẬT TOÁN MÃ HÓA (ALGORITHMS)

### 1. So sánh DES vs AES (Cực quan trọng)

| Đặc điểm            | **DES (Data Encryption Standard)**           | **AES (Advanced Encryption Standard)**                     |
| :------------------ | :------------------------------------------- | :--------------------------------------------------------- |
| **Kiến trúc**       | **Feistel** (Chia đôi khối, xử lý 1 nửa)     | **SPN** (Substitution-Permutation Network - Xử lý cả khối) |
| **Kích thước Khối** | **64 bits**                                  | **128 bits** (Cố định, bất kể độ dài khóa)                 |
| **Kích thước Khóa** | **56 bits** (Input 64, bỏ 8 bit parity)      | **128, 192, hoặc 256 bits**                                |
| **Số vòng lặp**     | 16 vòng                                      | 10 (key 128) / 12 (key 192) / 14 (key 256)                 |
| **An toàn**         | **Yếu** (Dễ bị Brute-force)                  | **Rất cao** (Chuẩn hiện hành)                              |
| **Giải mã**         | Giống hệt mã hóa (đảo ngược thứ tự khóa con) | Khác mã hóa (cần hàm ngược $InvSubBytes...$)               |

### 2. Chi tiết kỹ thuật AES (4 bước/vòng)

_Nhớ kỹ thứ tự và chức năng:_

1.  **SubBytes:** Thay thế phi tuyến (S-box 8 bit $\to$ 8 bit). $\rightarrow$ Tạo **Confusion**.
2.  **ShiftRows:** Dịch vòng các hàng (H0 giữ, H1 dịch 1, H2 dịch 2...). $\rightarrow$ Tạo **Diffusion**.
3.  **MixColumns:** Nhân ma trận cột trong $GF(2^8)$. $\rightarrow$ Tạo **Diffusion**.
    - _Lưu ý: Vòng cuối cùng KHÔNG có MixColumns._
4.  **AddRoundKey:** XOR với khóa vòng. $\rightarrow$ Bước duy nhất dùng Khóa.

### 3. Chi tiết kỹ thuật DES & 3DES

- **Double DES (2DES):** Bị loại bỏ do tấn công **Meet-in-the-Middle** (giảm độ khó từ $2^{112}$ xuống $2^{57}$).
- **Triple DES (3DES):**
  - Cấu trúc chuẩn: **E - D - E** (Mã hóa - Giải mã - Mã hóa).
  - Công thức: $C = E_{K3}(D_{K2}(E_{K1}(P)))$.
  - **Tương thích ngược:** Nếu gán **$K1 = K2$**, quy trình E-D-E triệt tiêu nhau bước đầu, trở thành DES đơn (Single DES).

---

## III. TOÁN HỌC NỀN TẢNG (MATH BASE)

1.  **Phép XOR ($\oplus$):** Là phép cộng cơ bản trong trường $GF(2^n)$. ($1+1=0$).
2.  **Trường hữu hạn $GF(2^8)$:** Dùng trong AES (xử lý 1 byte).
    - **Đa thức bất quy tắc (Irreducible Polynomial):** $m(x) = x^8 + x^4 + x^3 + x + 1$ (Dùng để chia lấy dư khi nhân đa thức bị tràn).
3.  **Nghịch đảo nhân:** $a^{-1} \pmod n$ chỉ tồn tại khi **$GCD(a, n) = 1$**.
4.  **Thuật toán Euclid mở rộng:** Dùng để tìm nghịch đảo (tạo S-box).

---

## IV. CÁC CHẾ ĐỘ HOẠT ĐỘNG (MODES OF OPERATION)

### 1. Bảng so sánh tính năng (Tra cứu nhanh)

| Tiêu chí                          | **ECB**       | **CBC**                            | **CFB**                           | **OFB**                              | **CTR**                              |
| :-------------------------------- | :------------ | :--------------------------------- | :-------------------------------- | :----------------------------------- | :----------------------------------- |
| **Song song hóa (Mã hóa)**        | ✅ **CÓ**     | ❌ KHÔNG                           | ❌ KHÔNG                          | ❌ KHÔNG                             | ✅ **CÓ** (Nhanh nhất)               |
| **Song song hóa (Giải mã)**       | ✅ **CÓ**     | ✅ **CÓ**                          | ❌ KHÔNG                          | ❌ KHÔNG                             | ✅ **CÓ**                            |
| **Truy cập ngẫu nhiên**           | ✅ CÓ         | ❌ KHÔNG                           | ❌ KHÔNG                          | ❌ KHÔNG                             | ✅ **CÓ**                            |
| **Lan truyền lỗi** (1 bit mã sai) | Hỏng khối đó. | Hỏng khối đó + sai bit ở khối sau. | Hỏng khối đó + lan truyền k khối. | **KHÔNG lan truyền** (sai 1 bit rõ). | **KHÔNG lan truyền** (sai 1 bit rõ). |
| **Yêu cầu IV/Nonce**              | Không.        | Cần IV (ngẫu nhiên).               | Cần IV.                           | Cần Nonce.                           | Cần Nonce + Counter.                 |
| **Bản chất**                      | Mã khối.      | Mã khối liên kết.                  | Giả lập Mã dòng.                  | Giả lập Mã dòng.                     | Giả lập Mã dòng.                     |

### 2. Chi tiết từng chế độ & Ứng dụng

- **ECB (Electronic Code Book):**

  - _Đặc điểm:_ Mã hóa từng khối độc lập.
  - _Điểm chết:_ Bản rõ giống nhau $\to$ Bản mã giống nhau. **Lộ mẫu (Pattern)** hình ảnh.
  - _Dùng khi:_ Dữ liệu cực ngắn (vài byte).

- **CBC (Cipher Block Chaining):**

  - _Đặc điểm:_ $C_i = E(P_i \oplus C_{i-1})$. Dùng IV.
  - _Điểm yếu:_ Mã hóa tuần tự (chậm).
  - _Dùng khi:_ Mã hóa file dữ liệu thông thường, cần an toàn cao.

- **CTR (Counter Mode):**

  - _Đặc điểm:_ Mã hóa bộ đếm ($Enc(Counter)$) rồi XOR với bản rõ.
  - _Điểm mạnh:_ **Nhanh nhất**, xử lý song song, truy cập ngẫu nhiên.
  - _Cấm kỵ:_ **Không bao giờ dùng lại cặp (Key, Counter)**.
  - _Dùng khi:_ Mạng tốc độ cao, ổ cứng (cần random access), vi xử lý đa nhân.

- **CFB & OFB:**
  - _Đặc điểm:_ Giả lập mã dòng (Stream cipher).
  - _OFB:_ Tốt cho đường truyền nhiễu (vệ tinh) vì không lan truyền lỗi.

---

## V. MẸO LÀM BÀI TRẮC NGHIỆM (EXAM HACKS)

1.  **Hỏi về Tốc độ / Hiệu năng / Song song:** $\rightarrow$ Chọn **CTR** (Counter).
2.  **Hỏi về An toàn nhất hiện nay:** $\rightarrow$ Chọn **AES** (Key 256 bit).
3.  **Hỏi về "Lộ mẫu" / "Ảnh bị nhìn thấy":** $\rightarrow$ Chọn **ECB**.
4.  **Hỏi về 3DES:**
    - Cấu trúc? $\rightarrow$ **E - D - E**.
    - Tại sao có bước D ở giữa? $\rightarrow$ Để **tương thích ngược** với DES (khi K1=K2).
    - Tại sao không dùng Double DES? $\rightarrow$ Bị tấn công **Meet-in-the-Middle**.
5.  **Hỏi về khóa DES:**
    - Input? $\rightarrow$ 64 bit.
    - Hiệu dụng (Thực tế)? $\rightarrow$ **56 bit**.
    - Số bit kiểm tra? $\rightarrow$ 8 bit.
6.  **Hỏi về AES:**
    - Kích thước khối? $\rightarrow$ Luôn là **128 bit**.
    - Vòng cuối? $\rightarrow$ Không có **MixColumns**.
7.  **Padding (Đệm dữ liệu):**
    - Bắt buộc với: **ECB, CBC**.
    - Không cần với: **CTR, CFB, OFB** (vì chúng hoạt động như mã dòng).
