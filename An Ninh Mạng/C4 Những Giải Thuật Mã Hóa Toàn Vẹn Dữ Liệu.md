Tuyệt vời. Vì bạn được mang tài liệu vào phòng thi, đây là **"Tài Liệu Tra Cứu Phòng Thi"** (Cheat Sheet) được tôi thiết kế tối ưu hóa để bạn **in ra giấy**.

Tài liệu này cô đọng toàn bộ kiến thức, các con số, so sánh và các bẫy trắc nghiệm. Bạn chỉ cần **nhìn vào từ khóa** là chọn được đáp án.

---

# TÀI LIỆU TRA CỨU NHANH: CHƯƠNG 4 - TOÀN VẸN DỮ LIỆU

**(Dành cho thi trắc nghiệm & Tự luận mở)**

### 1. BẢNG PHÂN BIỆT 3 TRỤ CỘT (QUAN TRỌNG NHẤT)

_Dùng để trả lời câu hỏi dạng: "Cơ chế nào dùng để...", "Sự khác biệt giữa..."_

| Tiêu chí              | **HÀM BĂM (HASH)**            | **MAC (MÃ XÁC THỰC)**                          | **CHỮ KÝ SỐ (DIGITAL SIG)**                                  |
| :-------------------- | :---------------------------- | :--------------------------------------------- | :----------------------------------------------------------- |
| **Mục tiêu chính**    | Kiểm tra toàn vẹn (Integrity) | Toàn vẹn + Xác thực nguồn gốc (Authentication) | Toàn vẹn + Xác thực + **Chống thoái thác (Non-repudiation)** |
| **Khóa sử dụng**      | **Không dùng khóa**           | **Khóa BÍ MẬT** (Symmetric - Đối xứng)         | **Cặp khóa (Riêng/Công khai)** (Asymmetric)                  |
| **Đầu vào**           | Thông điệp $M$                | Thông điệp $M$ + Khóa $K$                      | Hash($M$) + Khóa Riêng ($PR$)                                |
| **Ai kiểm tra được?** | Bất kỳ ai                     | Chỉ người có khóa $K$ (Người nhận/Gửi)         | Bất kỳ ai (dùng Khóa Công Khai)                              |
| **Đại diện**          | MD5, SHA-1, SHA-256           | HMAC, CMAC, DAA                                | RSA, DSA, ECDSA                                              |
| **Ví dụ ứng dụng**    | Checksum file tải về          | Giao dịch nội bộ ngân hàng                     | Hợp đồng điện tử, HTTPS, Căn cước công dân                   |

---

### 2. CÁC CON SỐ & THÔNG SỐ KỸ THUẬT (DÙNG ĐỂ KHOANH SỐ)

_Dùng để trả lời câu hỏi: "Kích thước đầu ra là bao nhiêu?", "Cái nào an toàn?"_

| Thuật toán        | Loại | Kích thước đầu ra (Output) | Trạng thái / Lưu ý                             |
| :---------------- | :--- | :------------------------- | :--------------------------------------------- |
| **MD5**           | Hash | **128 bits**               | **ĐÃ BỊ PHÁ** (Không dùng).                    |
| **SHA-1**         | Hash | **160 bits**               | **KHÔNG AN TOÀN** (Đã tìm thấy va chạm).       |
| **SHA-256**       | Hash | **256 bits**               | **AN TOÀN** (Khuyên dùng).                     |
| **DAA** (DES-CBC) | MAC  | **64 bits**                | **QUÁ NHỎ**, Yếu, Chậm (Dựa trên DES).         |
| **HMAC-MD5**      | MAC  | **128 bits**               | Kích thước bằng Hash gốc.                      |
| **Chữ ký DSA**    | Sig  | **320 bits**               | Cặp số $(r, s)$, mỗi số 160 bits. **Nhỏ gọn**. |
| **Chữ ký RSA**    | Sig  | 1024 - 4096 bits           | Rất lớn (bằng độ dài modulus $n$).             |

---

### 3. SO SÁNH ĐỐI ĐẦU (SO SÁNH ƯU/NHƯỢC ĐIỂM)

#### A. RSA vs. DSA (Chữ ký số)

| Đặc điểm          | **RSA**                | **DSA**                                     |
| :---------------- | :--------------------- | :------------------------------------------ |
| **Chức năng**     | Vừa mã hóa, vừa ký.    | **Chỉ dùng để ký** (Chuyên biệt).           |
| **Tốc độ Tạo ký** | Chậm hơn.              | **Nhanh hơn** (Tính toán trước được).       |
| **Kích thước**    | Lớn (tốn băng thông).  | **Nhỏ (320 bits)**, cố định.                |
| **Rủi ro**        | Phân tích thừa số $n$. | Lộ số ngẫu nhiên **$k$** là mất khóa riêng. |

#### B. HMAC vs. CMAC vs. DAA (Mã xác thực)

- **DAA (Data Authentication Algorithm):** Cũ, dùng DES, chậm, output 64-bit (nhỏ), chỉ xử lý tốt dữ liệu độ dài cố định.
- **HMAC (Hash-based):** Dùng Hàm băm. **Nhanh trên phần mềm**. An toàn. Dùng cấu trúc băm lồng nhau (Nested) để chống tấn công mở rộng độ dài.
- **CMAC (Cipher-based):** Dùng Mã hóa khối (AES/3DES). **Khắc phục nhược điểm của DAA** về độ dài tin nhắn thay đổi. Chuẩn NIST.

---

### 4. CÁC LỖ HỔNG & TẤN CÔNG (SECURITY ATTACKS)

_Tìm từ khóa trong câu hỏi để chọn đáp án_

1.  **Tấn công Ngày sinh nhật (Birthday Attack):**
    - Mục tiêu: **Hàm băm**.
    - Nguyên lý: Tìm 2 thông điệp bất kỳ trùng hash.
    - Độ khó: Chỉ cần **$2^{n/2}$** phép thử (với hash $n$-bit).
    - _Ví dụ:_ Hash 64-bit thì chỉ cần $2^{32}$ phép thử là vỡ -> Phải dùng Hash > 128 bit.
2.  **Tấn công Mở rộng độ dài (Length Extension):**
    - Mục tiêu: Cách dùng Hash đơn giản `H(Key || Message)`.
    - Khắc phục: Dùng **HMAC** (Băm 2 lần với `ipad`, `opad`).
3.  **Tấn công Replay (Phát lại):**
    - Mục tiêu: Gửi lại gói tin xác thực cũ.
    - Khắc phục: Thêm **Timestamp** (thời gian) hoặc **Nonce** (số dùng 1 lần) vào gói tin.
4.  **Tái sử dụng $k$ (trong DSA):**
    - Hậu quả: Lộ khóa riêng (Private Key) ngay lập tức.

---

### 5. CÔNG THỨC & QUY TRÌNH CỐT LÕI

#### A. Quy trình Chữ ký số (Chuẩn):

1.  **Hash** thông điệp $M$ trước $\rightarrow$ $h = H(M)$.
2.  **Ký** lên $h$ bằng **Khóa Riêng** ($PR$).
3.  **Gửi** $M$ kèm Chữ ký $S$.
4.  **Xác minh** bằng **Khóa Công Khai** ($PU$).

#### B. Công thức HMAC (Nhớ hình ảnh 2 lớp):

$$HMAC = Hash[(K^+ \oplus opad) || Hash[(K^+ \oplus ipad) || M]]$$

- Từ khóa: **Nested Hash** (Băm lồng nhau), `ipad` (36), `opad` (5c).

#### C. Công thức RSA (Chữ ký):

- Ký: $S = h^d \mod n$ (dùng khóa riêng $d$).
- Xác minh: $h' = S^e \mod n$ (dùng khóa công khai $e$).

---

### 6. MẸO CHỌN ĐÁP ÁN TRẮC NGHIỆM NHANH (TỪ KHÓA)

- Thấy **"Chống thoái thác"** (Non-repudiation) $\rightarrow$ Chọn **Chữ ký số**.
- Thấy **"Phần mềm nhanh", "Thư viện phổ biến"** $\rightarrow$ Chọn **HMAC**.
- Thấy **"AES", "Khắc phục DAA", "NIST 800-38B"** $\rightarrow$ Chọn **CMAC**.
- Thấy **"Số ngẫu nhiên k", "320 bits"** $\rightarrow$ Chọn **DSA**.
- Thấy **"Cặp khóa", "Khóa công khai"** $\rightarrow$ Chọn **Chữ ký số**.
- Thấy **"Khóa chung", "Khóa bí mật chia sẻ"** $\rightarrow$ Chọn **MAC**.
- Thấy **"Collisions", "Birthday Attack"** $\rightarrow$ Chọn **Hàm băm**.

---

#### 7. CÁC TÍNH CHẤT AN TOÀN CỦA HÀM BĂM (Rất hay hỏi định nghĩa)

Để hàm băm $H$ an toàn, nó phải thỏa mãn 3 tính chất:

| Tính chất                                       | Tên tiếng Anh                   | Định nghĩa (Yêu cầu)                                                    | Bị tấn công bởi                               |
| :---------------------------------------------- | :------------------------------ | :---------------------------------------------------------------------- | :-------------------------------------------- |
| **1. Một chiều** (Kháng tiền ảnh)               | **Pre-image** resistance        | Cho biết hash $h$, **KHÔNG** tìm được thông điệp $x$ để $H(x)=h$.       | Tấn công vét cạn (Brute-force)                |
| **2. Kháng va chạm YẾU** (Kháng tiền ảnh thứ 2) | **Weak** collision resistance   | Cho biết trước $x$, **KHÔNG** tìm được $y$ ($y \neq x$) để $H(y)=H(x)$. | Tấn công thay thế thông điệp cụ thể           |
| **3. Kháng va chạm MẠNH**                       | **Strong** collision resistance | **KHÔNG** tìm được cặp $(x, y)$ **bất kỳ** nào để $H(x)=H(y)$.          | **Tấn công Ngày sinh nhật (Birthday Attack)** |

**-> Mẹo nhớ:**

- **Birthday Attack** luôn đánh vào tính **Kháng va chạm MẠNH** (Strong).
- **Strong** = Tìm cặp bất kỳ. **Weak** = Tìm cái khác giống cái đã cho.
  Đúng là bạn rất tinh ý! Trong các bản tổng hợp trước, tôi tập trung nhiều vào so sánh thuật toán (RSA/DSA/HMAC) mà lướt qua phần **Lý thuyết định nghĩa** ở những slide đầu tiên (cụ thể là **Slide 4**).

Để trả lời được câu hỏi này và tránh các bẫy liên quan đến "Mục tiêu bảo mật", bạn cần bổ sung **Mục 8** này vào tài liệu mang đi thi.

---

#### 8. PHẠM VI BẢO VỆ CỦA "XÁC THỰC THÔNG ĐIỆP" (Slide 4)

Xác thực thông điệp (Message Authentication) sinh ra để chống lại **4 loại tấn công** cụ thể vào tính Toàn vẹn (Integrity):

| Loại tấn công             | Tiếng Anh                 | Định nghĩa / Ví dụ                                                      |
| :------------------------ | :------------------------ | :---------------------------------------------------------------------- |
| **1. Giả mạo**            | **Masquerade**            | Hacker giả danh Alice gửi tin cho Bob.                                  |
| **2. Thay đổi nội dung**  | **Content** modification  | Sửa "Chuyển 100$" thành "Chuyển 1000$".                                 |
| **3. Thay đổi trình tự**  | **Sequence** modification | Làm đảo lộn thứ tự các gói tin (Gói 2 đến trước Gói 1).                 |
| **4. Thay đổi thời gian** | **Timing** modification   | Ghi âm gói tin cũ và phát lại (**Replay attack**) hoặc làm trễ gói tin. |

**⚠️ BẪY TRẮC NGHIỆM (CỰC KỲ QUAN TRỌNG):**

- **Xác thực KHÔNG chống nghe lén (Eavesdropping):** Để chống nghe lén cần **Mã hóa (Encryption)** để đảm bảo tính Bí mật (Confidentiality).
- **Xác thực KHÔNG chống Tấn công từ chối dịch vụ (DoS):** DoS đánh vào tính Sẵn sàng (Availability).

Đúng là thiếu sót lớn! Bạn rất tinh mắt.

Trong các phần trước, tôi đã đưa vào "Các tính chất **bảo mật**" (Kháng va chạm, Kháng tiền ảnh - để chống tấn công), nhưng chưa đưa vào "Các đặc tính **hoạt động**" (Cơ chế vận hành).

Để trả lời câu hỏi này (đặc biệt là để nhận ra câu C sai vì **Hiệu ứng tuyết lở**), bạn cần bổ sung **Mục 9** này vào tài liệu. Đây là mảnh ghép cuối cùng về lý thuyết Hàm băm.

---

#### 9. ĐẶC TÍNH HOẠT ĐỘNG CỦA HÀM BĂM (Hash Operational Properties)

Ngoài tính bảo mật, một hàm băm mật mã chuẩn phải có các đặc tính sau:

| Đặc tính                  | Tiếng Anh            | Giải thích (Từ khóa)                                                      | Lưu ý cho trắc nghiệm                                                       |
| :------------------------ | :------------------- | :------------------------------------------------------------------------ | :-------------------------------------------------------------------------- |
| **1. Nén**                | Compression          | Đầu vào độ dài **tùy ý** $\rightarrow$ Đầu ra độ dài **cố định**.         | Khớp với đáp án B (Đúng).                                                   |
| **2. Hiệu ứng tuyết lở**  | **Avalanche Effect** | Thay đổi **1 bit** đầu vào $\rightarrow$ Thay đổi **~50% số bit** đầu ra. | **Rất quan trọng!** Thay đổi nhỏ phải tạo ra thay đổi LỚN. (Làm câu C sai). |
| **3. Đơn ánh / Xác định** | Deterministic        | Cùng một đầu vào **luôn luôn** cho ra cùng một đầu ra.                    | Không có yếu tố ngẫu nhiên trong hàm băm thuần túy.                         |
| **4. Hiệu quả**           | Efficiency           | Dễ dàng tính toán $H(x)$ (Tốc độ nhanh).                                  | Nhanh hơn mã hóa khóa công khai rất nhiều.                                  |

### BỔ SUNG VÀO "TÀI LIỆU TRA CỨU NHANH" (Mục 10)

(Dùng để trả lời các câu hỏi về Lịch sử, Tên chuẩn, Quy định chính phủ - Slide 34)

#### 10\. CHUẨN CHỮ KÝ SỐ (DSS - Digital Signature Standard)

| Thông tin                     | Chi tiết (Từ khóa cần nhớ)                                                                                                              |
| ----------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| Tên chuẩn                     | DSS (Digital Signature Standard).                                                                                                       |
| Văn bản công bố               | FIPS-186 (Federal Information Processing Standard).                                                                                     |
| Tổ chức ban hành              | NIST (Viện Tiêu chuẩn và Công nghệ Quốc gia Mỹ) & NSA.                                                                                  |
| Năm ra đời                    | 1991 (Sửa đổi 1993, 1996, 2000...).                                                                                                     |
| Hàm băm bắt buộc              | SHA (Secure Hash Algorithm). TUYỆT ĐỐI KHÔNG DÙNG MD5.                                                                                  |
| Các thuật toán được chấp nhận | 1. DSA (Thuật toán gốc của chuẩn này).<br>2. RSA (Thêm vào trong FIPS 186-2).<br>3. ECDSA (Elliptic Curve - Thêm vào trong FIPS 186-2). |
| Phân biệt                     | DSS là cái Chuẩn (luật). DSA là Thuật toán (công cụ).                                                                                   |
