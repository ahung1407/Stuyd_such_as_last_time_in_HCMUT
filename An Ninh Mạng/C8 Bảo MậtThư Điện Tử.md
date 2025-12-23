Chào bạn, đây là **Tài liệu tổng hợp "Cheat Sheet" A-Z về Bảo mật thư điện tử**. Tài liệu này được thiết kế tối ưu cho việc **mang vào phòng thi (Open book)**: tra cứu nhanh, bảng so sánh đối chiếu, giải thích các logic quan trọng để trả lời trắc nghiệm và tự luận.

---

# TỔNG HỢP KIẾN THỨC BẢO MẬT THƯ ĐIỆN TỬ (CHƯƠNG 8)

_(Dùng để tra cứu nhanh khi làm bài thi)_

---

## I. CƠ SỞ HẠ TẦNG EMAIL & MIME

### 1. Các thành phần & Giao thức

| Thành phần / Giao thức        | Cổng (Port)  | Chức năng chính                                            | Đặc điểm & Lưu ý thi cử                                       |
| :---------------------------- | :----------- | :--------------------------------------------------------- | :------------------------------------------------------------ |
| **MUA** (Mail User Agent)     | N/A          | Ứng dụng gửi/nhận mail phía người dùng (Outlook, Webmail). | Soạn thảo, đọc mail.                                          |
| **MTA** (Mail Transfer Agent) | 25           | Chuyển tiếp mail giữa các Server.                          | Server-to-Server.                                             |
| **SMTP** (RFC 5321)           | **25** (gốc) | **ĐẨY (Push)** thư đi.                                     | Chỉ hỗ trợ **ASCII 7-bit**. Không bảo mật mặc định.           |
| **POP3**                      | **110**      | **KÉO (Pull)** thư về.                                     | Tải về & Xóa trên server (mặc định). Khó dùng nhiều thiết bị. |
| **IMAP**                      | **143**      | **ĐỒNG BỘ** thư.                                           | Quản lý thư mục trên server. Dùng nhiều thiết bị tốt.         |

### 2. MIME (Multipurpose Internet Mail Extensions)

- **Mục đích:** Khắc phục hạn chế của SMTP (chỉ gửi được text ASCII). MIME giúp gửi: Ảnh, Video, File đính kèm, Tiếng Việt (Unicode).
- **Không phải giao thức bảo mật:** MIME chỉ định dạng dữ liệu, không mã hóa.
- **Các Header quan trọng:**
  - `Content-Type`: Báo loại dữ liệu (vd: `image/jpeg`, `multipart/mixed`).
  - `Content-Transfer-Encoding`: Cách biến đổi sang ASCII an toàn (vd: **Base64**).

---

## II. PGP (PRETTY GOOD PRIVACY) - CHI TIẾT

### 1. Đặc điểm cốt lõi

- **Tác giả:** Phil Zimmermann.
- **Mô hình tin cậy:** **Web of Trust** (Mạng lưới niềm tin). Cá nhân tự ký xác nhận khóa cho nhau, không phụ thuộc tổ chức CA tập trung.
- **Đối tượng:** Cá nhân, tự do, phi tập trung.

### 2. Năm (05) Dịch vụ của PGP (Cực quan trọng)

1.  **Xác thực (Authentication):** Dùng Chữ ký số (RSA/DSS + SHA).
2.  **Bí mật (Confidentiality):** Mã hóa lai (Symmetric + Asymmetric).
3.  **Nén (Compression):** Dùng thuật toán ZIP.
4.  **Tương thích Email (Email Compatibility):** Dùng **Radix-64** (biến Binary thành ASCII).
5.  **Phân mảnh (Segmentation):** Chia nhỏ thư quá lớn.

### 3. Quy trình xử lý dữ liệu (Thứ tự "vàng")

> **Quy tắc:** KÝ $\rightarrow$ NÉN $\rightarrow$ MÃ HÓA $\rightarrow$ RADIX-64

| Bước                    | Hành động                                                                            | Tại sao làm lúc này? (Lý giải trắc nghiệm)                                                                                     |
| :---------------------- | :----------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------- |
| **1. Ký (Sign)**        | Tạo Hash $\rightarrow$ Mã hóa Hash bằng **Khóa riêng người gửi**.                    | Ký vào bản gốc để đảm bảo toàn vẹn. Nếu ký sau nén, giải nén khác nhau sẽ sai chữ ký.                                          |
| **2. Nén (Zip)**        | Nén cả (Thư + Chữ ký).                                                               | **Nén trước mã hóa** để giảm dư thừa, tăng độ khó thám mã, tiết kiệm dung lượng. (Mã hóa xong dữ liệu ngẫu nhiên rất khó nén). |
| **3. Mã hóa (Encrypt)** | Mã hóa bằng **Khóa phiên ($K_s$)**. Mã hóa $K_s$ bằng **Khóa công khai người nhận**. | Bảo vệ bí mật toàn bộ gói tin.                                                                                                 |
| **4. Radix-64**         | Chuyển đổi sang ký tự in được.                                                       | Để đi qua được các SMTP Server cũ (chỉ hiểu ASCII).                                                                            |

### 4. Quản lý Khóa trong PGP

- **Khóa phiên ($K_s$ - Session Key):**
  - Sinh ngẫu nhiên dùng **1 lần**.
  - Độ dài: 128-bit (CAST/IDEA) hoặc 168-bit (3DES).
- **Key ID (Định danh khóa):**
  - Là **64-bit thấp nhất** (đuôi) của Khóa công khai.
  - Mục đích: Để biết dùng khóa nào giải mã mà không cần gửi cả khóa dài.
- **Lưu trữ khóa (Key Rings):**
  - _Public Key Ring:_ Chứa khóa công khai của người khác.
  - _Private Key Ring:_ Chứa khóa riêng của mình. Được bảo vệ (mã hóa) bằng **Pass-phrase** (Mật khẩu).

---

## III. S/MIME (SECURE/MIME) - CHI TIẾT

### 1. Đặc điểm cốt lõi

- **Chuẩn:** Tích hợp trong Outlook, Mail doanh nghiệp.
- **Mô hình tin cậy:** **PKI (Public Key Infrastructure)** tập trung. Dựa vào **CA** (Certificate Authority - như Verisign, Comodo) để cấp chứng chỉ X.509.
- **Đối tượng:** Doanh nghiệp, Chính phủ, Tổ chức cần quản lý chặt.

### 2. Cấu trúc tin nhắn (CMS - Cryptographic Message Syntax)

S/MIME dùng các "hộp" chứa dữ liệu gọi là CMS (RFC 5652):

- **Data:** Nội dung thư gốc.
- **SignedData:** Thư đã được ký + Chứng chỉ số X.509.
- **EnvelopedData:** Thư đã được mã hóa (Bí mật).
- **CompressedData:** Thư đã nén.

### 3. Thuật toán (Theo RFC quy định)

- **Hàm băm (Hash):** PHẢI hỗ trợ **SHA-256**. (MD5 chỉ để tương thích ngược).
- **Mã hóa dữ liệu:** PHẢI hỗ trợ **AES-128 CBC**.
- **Chữ ký/Trao đổi khóa:** RSA.

### 4. Tính năng nâng cao (Chỉ S/MIME mới có)

- **Biên nhận có chữ ký (Signed Receipt):** Chứng minh "Tôi đã nhận thư" (Non-repudiation of receipt).
- **Nhãn bảo mật (Security Labels):** Phân quyền (vd: "Secret", "Top Secret").
- **Mailing Lists (MLA):** Server trung gian xử lý mã hóa cho danh sách gửi nhiều người.

---

## IV. BẢNG SO SÁNH ĐỐI CHIẾU (PGP vs S/MIME)

_Dùng để trả lời câu hỏi "Cái nào tốt hơn?", "Sự khác biệt là gì?"_

| Tiêu chí              | **PGP (Pretty Good Privacy)**                                           | **S/MIME (Secure/MIME)**                                                |
| :-------------------- | :---------------------------------------------------------------------- | :---------------------------------------------------------------------- |
| **Mô hình tin cậy**   | **Web of Trust** (Mạng lưới cá nhân). Không có trung tâm.               | **PKI / X.509 Certificates**. Có tổ chức CA xác thực tập trung.         |
| **Quản lý khóa**      | Người dùng tự quản lý Key Ring.                                         | Dựa vào CA và Chứng chỉ số.                                             |
| **Định dạng dữ liệu** | PGP Message / Radix-64                                                  | MIME CMS (EnvelopedData, SignedData)                                    |
| **Thuật toán gốc**    | IDEA, CAST-128, RSA, SHA-1                                              | AES, 3DES, RSA, SHA-256                                                 |
| **Mã hóa khóa riêng** | Bằng **Pass-phrase** người dùng tự đặt.                                 | Thường lưu trong Smartcard/Token hoặc OS KeyStore.                      |
| **Ưu điểm**           | Độc lập, miễn phí, không sợ bị chính phủ/CA kiểm soát. Tốt cho cá nhân. | Tích hợp sẵn trong Outlook/Webmail. Dễ quản lý quy mô lớn. Tốt cho Cty. |
| **Nhược điểm**        | Khó dùng với người không rành công nghệ. Phải tự trao đổi khóa.         | Phải mua chứng chỉ từ CA. Phụ thuộc vào hạ tầng PKI.                    |

---

## V. CÁC "CÔNG THỨC" MẬT MÃ CẦN NHỚ

_Áp dụng cho cả PGP và S/MIME_

1.  **Muốn BÍ MẬT (Chỉ người nhận đọc được):**

    - Công thức: $E(K_{Public\_Receiver}, \text{SessionKey})$ + $E(\text{SessionKey}, \text{Message})$
    - _Dùng khóa công khai người nhận._

2.  **Muốn XÁC THỰC (Chứng minh tôi gửi):**

    - Công thức: $E(K_{Private\_Sender}, \text{Hash(Message)})$
    - _Dùng khóa riêng người gửi._

3.  **Muốn CẢ HAI (Ký rồi Mã hóa):**
    - Người gửi: Ký bằng $K_{Private\_Sender}$ $\rightarrow$ Mã hóa bằng $K_{Public\_Receiver}$.
    - Người nhận: Giải mã bằng $K_{Private\_Receiver}$ $\rightarrow$ Kiểm tra ký bằng $K_{Public\_Sender}$.

---

## VI. TRA CỨU NHANH TRẮC NGHIỆM (KEYWORD)

- **SMTP Port:** 25 (Push).
- **POP3 Port:** 110 (Pull/Delete).
- **IMAP Port:** 143 (Sync).
- **RFC 822:** Chuẩn format mail cũ.
- **RFC 5322:** Chuẩn format mail mới (hiện tại).
- **RFC 5321:** Chuẩn giao thức SMTP hiện tại.
- **Base64 / Radix-64:** Biến 3 bytes (24 bit) $\rightarrow$ 4 ký tự ASCII (6 bit/char). Tăng kích thước file lên khoảng 33%.
- **Session Key PGP:** Sinh ngẫu nhiên từ di chuột/gõ phím (ANSI X12.17).
- **Key ID PGP:** 64 bit đuôi.
- **Pass-phrase:** Bảo vệ Private Key.
- **EnvelopedData:** Từ khóa cho "Mã hóa" trong S/MIME.
- **SignedData:** Từ khóa cho "Xác thực" trong S/MIME.
- **SHA-256 & AES:** Thuật toán bắt buộc của S/MIME.
- **ZIP:** Thuật toán nén mặc định của PGP.
