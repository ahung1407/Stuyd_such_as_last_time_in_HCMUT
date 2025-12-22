Chào bạn, đây là bản **"Tài liệu tra cứu nhanh (Cheat Sheet)"** được cô đọng lại từ toàn bộ nội dung lý thuyết và bài tập chúng ta đã thảo luận.

Tài liệu này được thiết kế tối ưu để bạn **nhìn vào là thấy ngay đáp án** khi làm bài thi (đặc biệt là trắc nghiệm và điền từ).

---

# CHEAT SHEET: CHƯƠNG 1 - MẬT MÃ VÀ AN NINH MẠNG

## 1. CÁC NGUYÊN TẮC CỐT LÕI (CIA +)

_Mẹo: Tìm từ khóa trong câu hỏi để chọn đáp án tương ứng._

| Nguyên tắc                             | Từ khóa nhận diện                    | Vi phạm bởi                   | Giải pháp (Cơ chế)                        |
| :------------------------------------- | :----------------------------------- | :---------------------------- | :---------------------------------------- |
| **Bí mật** (Confidentiality)           | Xem trộm, lộ thông tin, nghe lén.    | Eavesdropping, Sniffing.      | **Mã hóa** (Encipherment).                |
| **Toàn vẹn** (Integrity)               | Sửa đổi, thêm bớt, sai lệch dữ liệu. | Virus, Modification, Replay.  | **Chữ ký số**, Hashing, Toàn vẹn dữ liệu. |
| **Sẵn sàng** (Availability)            | Treo máy, sập mạng, ngắt kết nối.    | **DoS/DDoS**, cắt cáp.        | Tường lửa, Backup, Dư thừa (Redundancy).  |
| **Xác thực** (Authentication)          | Bạn là ai? Danh tính.                | Giả mạo (Masquerade), Replay. | Trao đổi xác thực, Chữ ký số, OTP.        |
| **Chống thoái thác** (Non-repudiation) | Chối bỏ, từ chối trách nhiệm.        | Repudiation.                  | **Chữ ký số**, Công chứng.                |

---

## 2. PHÂN LOẠI TẤN CÔNG (ATTACKS)

_Mẹo: Phân biệt dựa trên hành động "Có sửa dữ liệu không?"._

| Đặc điểm            | **THỤ ĐỘNG** (Passive)                                              | **CHỦ ĐỘNG** (Active)                                                                                                |
| :------------------ | :------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------- |
| **Bản chất**        | Chỉ nhìn/nghe, **KHÔNG** sửa dữ liệu.                               | Sửa/Xóa/Chèn/Làm nghẽn.                                                                                              |
| **Mục tiêu**        | Đánh cắp thông tin (**Bí mật**).                                    | Phá hoại hệ thống (**Toàn vẹn, Sẵn sàng**).                                                                          |
| **Phát hiện**       | **Rất khó** (do không để lại dấu vết).                              | **Dễ hơn** (do gây lỗi hệ thống).                                                                                    |
| **Đối phó**         | **Phòng ngừa** (Prevention).                                        | **Phát hiện** (Detection) & **Phục hồi**.                                                                            |
| **Các loại cụ thể** | 1. Nghe lén nội dung.<br>2. Phân tích lưu lượng (Traffic Analysis). | 1. Giả mạo (Masquerade).<br>2. Phát lại (Replay).<br>3. Sửa đổi tin (Modification).<br>4. Từ chối dịch vụ (**DoS**). |

---

## 3. KIẾN TRÚC AN NINH OSI (CHUẨN X.800)

_Mẹo: Đây là phần hay bị hỏi "Cái gì dùng cho cái gì?"._

### A. Bảng quan hệ: Dịch vụ & Cơ chế (Mapping)

_Dịch vụ (Cột 1) được thực hiện bởi Cơ chế (Cột 2)_

| Muốn có Dịch vụ này...                  | ...Phải dùng các Cơ chế này                                            |
| :-------------------------------------- | :--------------------------------------------------------------------- |
| **Xác thực** (Authentication)           | Mã hóa, Chữ ký số, Trao đổi xác thực.                                  |
| **Kiểm soát truy cập** (Access Control) | Cơ chế kiểm soát truy cập.                                             |
| **Bí mật** (Confidentiality)            | **Mã hóa**, Điều khiển định tuyến, **Traffic Padding** (cho dòng tin). |
| **Toàn vẹn** (Integrity)                | Mã hóa, Chữ ký số, Cơ chế toàn vẹn dữ liệu.                            |
| **Chống thoái thác** (Non-repudiation)  | **Chữ ký số**, Công chứng, Toàn vẹn dữ liệu.                           |

### B. Bảng quan hệ: Cơ chế & Tấn công

_Cơ chế (Cột 1) chống lại Tấn công (Cột 2)_

| Cơ chế                                   | Chống lại Tấn công                          |
| :--------------------------------------- | :------------------------------------------ |
| **Mã hóa**                               | Nghe lén, Phân tích lưu lượng (một phần).   |
| **Chữ ký số**                            | Giả mạo, Sửa đổi tin, Thoái thác.           |
| **Chèn lưu lượng giả** (Traffic Padding) | **Phân tích lưu lượng** (Traffic Analysis). |
| **Trao đổi xác thực**                    | Giả mạo, **Phát lại** (Replay).             |
| **Kiểm soát truy cập**                   | Truy cập trái phép.                         |

---

## 4. CÔNG NGHỆ & CHIẾN LƯỢC PHÒNG THỦ

### Tường lửa (Firewall)

- **Vị trí:** Giữa mạng nội bộ (Trusted) và Internet (Untrusted).
- **Nguyên tắc:** Lọc gói tin dựa trên luật (Rules/ACL).
- **Điểm yếu chết người:** **KHÔNG chặn được tấn công nội bộ (Internal Attacks)**.
- **UTM:** Tường lửa thế hệ mới (All-in-one: Firewall + Antivirus + VPN...).

### IDS (Phát hiện xâm nhập)

- **Signature-based (Dựa trên mẫu):** So khớp với Blacklist. _Ưu:_ Ít báo giả. _Nhược:_ **Mù với Zero-day**.
- **Anomaly-based (Dựa hành vi):** Thấy lạ thì báo. _Ưu:_ Bắt được Zero-day. _Nhược:_ **Hay báo giả (False Positive)**.

### Chiến lược

- **Defense in Depth (Chiều sâu):** Nhiều lớp bảo vệ (Tốt nhất).
- **Perimeter Defense (Vòng ngoài):** Chỉ có tường lửa bao quanh, bên trong rỗng (Dễ chết).

---

## 5. ĐÁP ÁN TRẮC NGHIỆM & BẪY THƯỜNG GẶP (REVIEW)

1.  **DoS** là tấn công **Chủ động** (Active) $\rightarrow$ Vi phạm tính **Sẵn sàng**.
2.  **Phân tích lưu lượng** là tấn công **Thụ động** $\rightarrow$ Vi phạm tính **Bí mật** $\rightarrow$ Chống bằng **Traffic Padding**.
3.  **Mã hóa (Encipherment)** KHÔNG dùng để chống **DoS** (Vì mã hóa hay không thì Server vẫn sập nếu bị flood).
4.  **Replay (Phát lại)** bị chặn bởi **Trao đổi xác thực** (Authentication Exchange) hoặc **Số thứ tự/Timestamp**.
5.  **Code Red** là **Worm** (Sâu máy tính - tự lây lan không cần vật chủ).
6.  **Chính sách (Policy)** là quan trọng nhất, công nghệ chỉ là công cụ.
7.  **Quản lý truy cập** KHÔNG dùng cho dịch vụ **Xác thực** (Nó dùng _sau khi_ đã xác thực xong).

---

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
