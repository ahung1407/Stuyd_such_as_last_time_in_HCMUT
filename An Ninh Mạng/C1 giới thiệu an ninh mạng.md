Chào bạn, để giúp bạn ôn thi hiệu quả nhất, tôi đã chắt lọc toàn bộ 74 slide thành **5 trụ cột kiến thức cốt lõi** dưới đây.

Đây là "xương sống" của chương này. Nếu nắm vững 5 điểm này, bạn có thể tự tin xử lý 80-90% câu hỏi liên quan đến Chương 1.

---

### 1. Tam giác bảo mật CIA (Mục tiêu tối thượng)

Mọi hành động bảo mật đều nhằm bảo vệ 3 thuộc tính này.

- **C (Confidentiality) - Tính Bí mật:**
  - _Định nghĩa:_ Chỉ người được phép mới xem được thông tin.
  - _Bị vi phạm bởi:_ Nghe lén, lộ password.
  - _Giải pháp:_ Mã hóa (Encryption).
- **I (Integrity) - Tính Toàn vẹn:**
  - _Định nghĩa:_ Thông tin không bị sửa đổi trái phép (thêm, xóa, sửa).
  - _Bị vi phạm bởi:_ Virus sửa file, hacker sửa số dư tài khoản.
  - _Giải pháp:_ Chữ ký số, Hashing (băm).
- **A (Availability) - Tính Sẵn sàng:**

  - _Định nghĩa:_ Hệ thống hoạt động bình thường khi người dùng cần.
  - _Bị vi phạm bởi:_ Tấn công DoS, cắt cáp, chập điện.
  - _Giải pháp:_ Firewall, Backup, Server dự phòng.

- **Mở rộng (AAA + Non-repudiation):**
  - **Xác thực (Authentication):** Bạn là ai? (User/Pass).
  - **Cấp quyền (Authorization):** Bạn được làm gì? (Admin/User).
  - **Chống thoái thác (Non-repudiation):** Không thể chối cãi hành động đã làm (Dùng Chữ ký số).

---

### 2. Phân loại Tấn công (Attacks)

Đây là phần hay bị hỏi nhất về sự khác biệt.

| Đặc điểm               | Tấn công THỤ ĐỘNG (Passive)                      | Tấn công CHỦ ĐỘNG (Active)                           |
| :--------------------- | :----------------------------------------------- | :--------------------------------------------------- |
| **Hành động**          | Nghe lén, theo dõi, phân tích lưu lượng.         | Sửa đổi, xóa, chèn, giả mạo, làm nghẽn.              |
| **Tác động dữ liệu**   | **Không** thay đổi dữ liệu.                      | **Có** thay đổi/ảnh hưởng dữ liệu hoặc hệ thống.     |
| **Mục tiêu bị hại**    | Tính Bí mật (C).                                 | Tính Toàn vẹn (I) & Sẵn sàng (A).                    |
| **Khả năng phát hiện** | Rất khó phát hiện (vì ko để lại dấu vết).        | Dễ phát hiện hơn (vì gây lỗi hệ thống).              |
| **Chiến lược đối phó** | **Phòng ngừa** (Prevention) - chủ yếu là Mã hóa. | **Phát hiện** (Detection) & **Phục hồi** (Recovery). |

---

### 3. Kiến trúc An ninh OSI (Chuẩn X.800)

Hãy nhớ mối quan hệ logic:

> Chúng ta dùng các **Cơ chế** (Mechanisms) để triển khai các **Dịch vụ** (Services) nhằm chống lại các **Tấn công** (Attacks).

- **Ví dụ điển hình:**
  - Để có _Dịch vụ Bí mật_ (Service) $\rightarrow$ Dùng _Cơ chế Mã hóa_ (Mechanism) $\rightarrow$ Chống lại _Tấn công Nghe lén_ (Attack).
  - Để có _Dịch vụ Chống thoái thác_ (Service) $\rightarrow$ Dùng _Cơ chế Chữ ký số_ (Mechanism).

---

### 4. Chiến lược & Công nghệ phòng thủ

Không có giải pháp nào hoàn hảo, phải phối hợp nhiều lớp.

- **Defense in Depth (Phòng thủ theo chiều sâu):**

  - _Nên dùng:_ Bảo vệ nhiều lớp (Firewall ngoài -> Firewall trong -> Antivirus -> Mã hóa). Lớp này thủng có lớp kia đỡ.
  - _Tránh dùng:_ **Perimeter Defense** (Bảo vệ vòng ngoài) - Chỉ xây tường cao bên ngoài, bên trong lỏng lẻo (như quả trứng, vỏ cứng nhưng vỡ là nát).

- **Hệ thống phát hiện xâm nhập (IDS):**
  - **Dựa trên Mẫu (Signature-based):** So sánh với danh sách virus đã biết (Blacklist).
    - _Ưu:_ Ít báo giả. _Nhược:_ Mù tịt với virus mới (Zero-day).
  - **Dựa trên Hành vi/Bất thường (Anomaly-based):** Học thói quen bình thường, thấy lạ thì báo.
    - _Ưu:_ Bắt được virus mới. _Nhược:_ Hay báo động giả (False Positive).

---

### 5. Chính sách An toàn thông tin (Policy)

Là nền tảng pháp lý của tổ chức.

- **Thứ bậc văn bản:**
  1.  **Chính sách (Policy):** Tuyên bố tổng quát, bắt buộc (VD: Phải đặt mật khẩu mạnh).
  2.  **Tiêu chuẩn (Standard):** Thông số kỹ thuật cụ thể (VD: Mật khẩu dài 8 ký tự).
  3.  **Thủ tục (Procedure):** Hướng dẫn từng bước (VD: Bước 1 bấm vào đây, Bước 2 nhập mã).
- **Nguyên tắc:** Công nghệ mua được, nhưng Chính sách và Con người phải được xây dựng và đào tạo.

---

**MẸO NHỚ ĐI THI:**

- Thấy chữ **"Nghe lén/Traffic Analysis"** $\rightarrow$ Chọn **Thụ động**.
- Thấy chữ **"Sửa đổi/Giả mạo/DoS"** $\rightarrow$ Chọn **Chủ động**.
- Thấy chữ **"Zero-day"** $\rightarrow$ Chọn **Anomaly IDS**.
- Thấy câu hỏi **"Cái gì quan trọng nhất?"** $\rightarrow$ Thường là **Con người/Chính sách** (không phải công nghệ).
  Chào bạn, dựa trên nội dung bộ slide bạn đã gửi trước đó (đặc biệt là các kiến thức về mô hình OSI, chuẩn X.800, các loại tấn công và cơ chế bảo mật) và kiến thức chuẩn của môn An toàn thông tin, tôi xin gửi bạn lời giải chi tiết cho đề bài tập này.

---

# GIẢI CHI TIẾT BÀI TẬP CHƯƠNG I: MẬT MÃ VÀ AN NINH MẠNG

## I. PHẦN CÂU HỎI LÝ THUYẾT

**Câu 1: Cho biết các nguyên tắc cốt lõi của an toàn thông tin**
Dựa vào **Slide 12** và **Slide 28**, có 3 nguyên tắc cốt lõi (Tam giác CIA) và các nguyên tắc bổ sung:

1.  **Bí mật (Confidentiality):** Đảm bảo thông tin chỉ được tiếp cận bởi những người được cấp quyền.
2.  **Toàn vẹn (Integrity):** Đảm bảo thông tin không bị sửa đổi, thêm bớt trái phép.
3.  **Sẵn sàng (Availability):** Đảm bảo hệ thống và dữ liệu luôn khả dụng khi người dùng hợp lệ cần.

- _Nguyên tắc bổ sung:_ Xác thực (Authentication), Chống thoái thác (Non-repudiation), Kiểm soát truy cập (Access Control).

**Câu 2: Hãy cho biết khác biệt giữa tấn công thụ động và tấn công chủ động**
Dựa vào **Slide 37 và 38**:

| Tiêu chí               | Tấn công Thụ động (Passive)                              | Tấn công Chủ động (Active)                                          |
| :--------------------- | :------------------------------------------------------- | :------------------------------------------------------------------ |
| **Hành động**          | Chỉ nghe lén, theo dõi, giám sát đường truyền.           | Sửa đổi, xóa, chèn dữ liệu, giả mạo luồng dữ liệu.                  |
| **Ảnh hưởng dữ liệu**  | Không làm thay đổi dữ liệu hệ thống.                     | Thay đổi trạng thái hệ thống hoặc dữ liệu.                          |
| **Mục tiêu**           | Khai thác thông tin (xâm phạm tính Bí mật).              | Phá hoại, lừa đảo (xâm phạm tính Toàn vẹn, Sẵn sàng).               |
| **Khả năng phát hiện** | Rất khó phát hiện (do không để lại dấu vết).             | Dễ phát hiện hơn (do gây sai lệch hoặc ngưng trệ).                  |
| **Biện pháp đối phó**  | Tập trung vào **Ngăn chặn** (Prevention), ví dụ: Mã hóa. | Tập trung vào **Phát hiện** (Detection) và **Phục hồi** (Recovery). |

**Câu 3: Liệt kê các loại tấn công thụ động, tấn công chủ động**
Dựa vào **Slide 40-45**:

- **Tấn công thụ động:**
  1.  Nghe lén nội dung thông điệp (Release of message contents).
  2.  Phân tích lưu lượng (Traffic Analysis).
- **Tấn công chủ động:**
  1.  Giả mạo (Masquerade).
  2.  Phát lại (Replay).
  3.  Thay đổi thông điệp (Modification of messages).
  4.  Từ chối dịch vụ (Denial of Service - DoS).

**Câu 4: Liệt kê và định nghĩa các cơ chế trong kiến trúc an ninh OSI**
Dựa vào **Slide 47-50**, có 8 cơ chế an ninh cụ thể:

1.  **Mã hóa (Encipherment):** Dùng thuật toán biến đổi dữ liệu để che giấu nội dung.
2.  **Chữ ký số (Digital Signature):** Dùng để chứng thực nguồn gốc và độ toàn vẹn của dữ liệu.
3.  **Kiểm soát truy cập (Access Control):** Các biện pháp giới hạn quyền truy cập vào tài nguyên.
4.  **Toàn vẹn dữ liệu (Data Integrity):** Cơ chế đảm bảo dữ liệu không bị thay đổi (VD: Hashing).
5.  **Trao đổi xác thực (Authentication Exchange):** Quá trình bắt tay, trao đổi thông tin để xác minh danh tính.
6.  **Chèn lưu lượng giả (Traffic Padding):** Chèn dữ liệu vô nghĩa để chống phân tích lưu lượng.
7.  **Điều khiển định tuyến (Routing Control):** Chọn đường đi an toàn cho dữ liệu nhạy cảm.
8.  **Công chứng (Notarization):** Sử dụng bên thứ 3 tin cậy để đảm bảo cho giao dịch.

**Câu 5: Liệt kê và định nghĩa các dịch vụ trong kiến trúc an ninh OSI**
Dựa vào **Slide 52-57**, có 5 dịch vụ chính:

1.  **Dịch vụ Xác thực (Authentication):** Đảm bảo danh tính của các bên tham gia giao tiếp là thật.
2.  **Dịch vụ Kiểm soát truy cập (Access Control):** Chống lại việc sử dụng trái phép tài nguyên hệ thống.
3.  **Dịch vụ Bí mật dữ liệu (Data Confidentiality):** Bảo vệ dữ liệu khỏi việc bị tiết lộ trái phép.
4.  **Dịch vụ Toàn vẹn dữ liệu (Data Integrity):** Bảo đảm dữ liệu nhận được chính xác như khi gửi đi.
5.  **Dịch vụ Chống thoái thác (Non-repudiation):** Ngăn chặn việc một bên từ chối hành động mình đã thực hiện (gửi hoặc nhận).

---

## II. PHẦN CÂU HỎI TRẮC NGHIỆM

**Câu 1: Hình thức tấn công thụ động chống lại nguyên tắc cốt lõi nào của an toàn thông tin?**

- **Đáp án: a. Bí mật**
- _Giải thích:_ Tấn công thụ động (nghe lén) nhằm mục đích đánh cắp thông tin, làm lộ lọt dữ liệu -> Vi phạm tính Bí mật.

**Câu 2: Tấn công DOS (Denial of Service) thuộc loại tấn công nào trong kiến trúc an ninh OSI?**

- **Đáp án: b. Tấn công chủ động (Active Attack)**
- _Giải thích:_ DoS làm gián đoạn hệ thống, ảnh hưởng đến tính Sẵn sàng. Đây là tác động trực tiếp nên là tấn công chủ động (xem Slide 45).
- _(Lưu ý: Tuy DoS thường được thực hiện từ xa (remote), nhưng trong phân loại chuẩn của kiến trúc OSI X.800 được học trong slide, phân loại chính là Chủ động vs Thụ động)._

**Câu 3: Cơ chế nào sau đây KHÔNG cần thiết sử dụng để chống lại tấn công từ chối dịch vụ (DoS)?**

- **Đáp án: a. Mã hóa dữ liệu (encipherment)**
- _Giải thích:_
  - Mã hóa dùng để bảo vệ tính _Bí mật_. Kẻ tấn công DoS không cần đọc dữ liệu, chúng chỉ cần làm nghẽn mạng. Dù gói tin có mã hóa hay không thì việc gửi 1 triệu gói tin vẫn gây sập server.
  - Các cơ chế khác: _Quản lý định tuyến_ (để điều hướng tránh vùng nghẽn), _Xác thực_ và _Kiểm soát truy cập_ (để chặn các yêu cầu từ nguồn tấn công) đều hữu ích để giảm thiểu DoS.

**Câu 4: Cơ chế nào KHÔNG sử dụng cho dịch vụ xác thực?**

- **Đáp án: d. Quản lý truy cập (access control)**
- _Giải thích:_ Hãy xem bảng quan hệ ở **Slide 58**.
  - Dịch vụ Xác thực (Authentication) được hiện thực bởi các cơ chế: Mã hóa, Chữ ký số, Trao đổi xác thực.
  - Cơ chế Kiểm soát truy cập (Access Control) dùng để phục vụ Dịch vụ Kiểm soát truy cập, nó thực hiện _sau khi_ đã xác thực xong.

**Câu 5: Cho biết Code Red thuộc vào loại mã độc nào sau đây:**

- **Đáp án: c. Worm (Sâu máy tính)**
- _Giải thích:_ Code Red là một loại sâu máy tính nổi tiếng xuất hiện năm 2001, tấn công các máy chủ web IIS của Microsoft. Nó tự nhân bản qua mạng mà không cần file vật chủ (đặc điểm của Worm).

---

## III. PHẦN BÀI TẬP

Các bảng dưới đây được xây dựng dựa trên chuẩn X.800 (tương ứng với nội dung trong sách _William Stallings - Cryptography and Network Security_ - Tài liệu tham khảo [1] trong slide).

### Bài 1: Mối quan hệ giữa Dịch vụ và Tấn công

Bảng này mô tả dịch vụ nào sinh ra để chống lại loại tấn công nào.

| Dịch vụ (Service)                         | Tấn công bị ngăn chặn (Attack Prevention)                                                                    |
| :---------------------------------------- | :----------------------------------------------------------------------------------------------------------- |
| **Xác thực (Authentication)**             | **Giả mạo (Masquerade)**, **Phát lại (Replay)** (loại bỏ khả năng kẻ giả mạo tham gia hệ thống).             |
| **Kiểm soát truy cập (Access Control)**   | **Truy cập trái phép**, một số dạng **DoS**, **Giả mạo**.                                                    |
| **Bí mật dữ liệu (Data Confidentiality)** | **Nghe lén (Passive attacks)**, **Phân tích lưu lượng (Traffic Analysis)**.                                  |
| **Toàn vẹn dữ liệu (Data Integrity)**     | **Thay đổi thông điệp (Modification)**, **Phát lại (Replay)**, **Giả mạo**, **DoS** (dạng phá hoại dữ liệu). |
| **Chống thoái thác (Non-repudiation)**    | **Thoái thác (Repudiation)** (Từ chối đã gửi hoặc đã nhận).                                                  |
| **Sẵn sàng (Availability)**               | **Từ chối dịch vụ (Denial of Service)**.                                                                     |

---

### Bài 2: Mối quan hệ giữa Cơ chế và Tấn công

Bảng này mô tả cơ chế kỹ thuật nào hiệu quả để chống lại loại tấn công nào.

| Cơ chế (Mechanism)                              | Tấn công bị ngăn chặn/phát hiện (Attacks)                                                                                    |
| :---------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------- |
| **Mã hóa (Encipherment)**                       | **Nghe lén (Release of message contents)**, **Phân tích lưu lượng** (một phần), **Giả mạo** (nếu kẻ tấn công không có khóa). |
| **Chữ ký số (Digital Signature)**               | **Giả mạo (Masquerade)**, **Thay đổi nội dung (Modification)**, **Thoái thác (Repudiation)**.                                |
| **Kiểm soát truy cập (Access Control)**         | **Truy cập trái phép**, **Giả mạo**, **DoS** (ngăn kẻ tấn công sử dụng tài nguyên).                                          |
| **Toàn vẹn dữ liệu (Data Integrity)**           | **Thay đổi nội dung (Modification)**.                                                                                        |
| **Trao đổi xác thực (Authentication Exchange)** | **Giả mạo (Masquerade)**, **Phát lại (Replay)**.                                                                             |
| **Chèn lưu lượng giả (Traffic Padding)**        | **Phân tích lưu lượng (Traffic Analysis)**.                                                                                  |
| **Điều khiển định tuyến (Routing Control)**     | **Nghe lén** (tránh đường truyền không an toàn), **DoS** (cục bộ trên một tuyến).                                            |
| **Công chứng (Notarization)**                   | **Thoái thác (Repudiation)**, **Giả mạo**.                                                                                   |

Hi vọng phần giải chi tiết này giúp ích cho việc ôn tập của bạn!
