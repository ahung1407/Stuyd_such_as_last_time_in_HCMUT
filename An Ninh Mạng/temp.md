Chào bạn,

Trong file tổng hợp trước, tôi đã có mục **"Các dạng tấn công"** ở Phần 1, nhưng tôi mới chỉ ghi chung chung là "Tấn công Toán học".

Để làm được câu trắc nghiệm yêu cầu phân biệt **tên cụ thể của các thuật toán** như câu bạn vừa gửi (GNFS, Pollard's rho...), bạn cần **BỔ SUNG CHI TIẾT** mục đó như sau.

Hãy cập nhật lại bảng **3. Các dạng tấn công** trong **PHẦN 1** của file tổng hợp thành phiên bản chi tiết dưới đây:

---

### **CẬP NHẬT PHẦN 1 - MỤC 3: CÁC DẠNG TẤN CÔNG RSA (Chi tiết)**

Để trả lời câu hỏi trắc nghiệm, bạn cần phân biệt được đâu là tấn công vào toán học (tìm p, q) và đâu là tấn công vào cách cài đặt (kênh kề).

| Nhóm tấn công                                                                               | Tên thuật toán / Phương pháp cụ thể (Keyword)                                                                                                                  | Đặc điểm / Mục tiêu                                                                                                                                             |
| :------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **1. Phân tích thừa số (Mathematical Attacks)**<br>_(Nhắm trực tiếp vào $n$ để tìm $p, q$)_ | 1. **Trial Division** (Chia thử).<br>2. **Pollard's rho**.<br>3. **Quadratic Sieve (QS)**.<br>4. **General Number Field Sieve (GNFS)** (_Mạnh nhất hiện nay_). | Dựa trên độ khó toán học. Nếu giải được các thuật toán này nhanh $\rightarrow$ RSA sụp đổ.<br>_Lưu ý:_ GNFS là thuật toán hiệu quả nhất để phá mã RSA hiện tại. |
| **2. Tấn công Kênh kề (Side-Channel)**<br>_(KHÔNG nhắm vào toán học của $n$)_               | 1. **Timing Attack** (Tấn công thời gian).<br>2. **Power Analysis** (Phân tích điện năng).<br>3. **Fault Analysis** (Gây lỗi phần cứng).                       | Khai thác điểm yếu trong quá trình **thực thi** (phần cứng/phần mềm).<br>_Ví dụ:_ Đo thời gian giải mã để đoán khóa $d$.                                        |
| **3. Tấn công Bản mã (Protocol Attacks)**                                                   | **Chosen Ciphertext Attack (CCA)**                                                                                                                             | Gửi các bản mã được chọn lựa kỹ để máy chủ giải mã, từ đó suy ra tin tức.<br>_Phòng chống:_ Dùng đệm **OAEP**.                                                  |

---

**Áp dụng vào câu hỏi của bạn:**

- **A. Tấn công thời gian:** Thuộc nhóm 2 (Kênh kề) $\rightarrow$ **KHÔNG** nhắm vào phân tích thừa số $n$. $\rightarrow$ **ĐÁP ÁN ĐÚNG.**
- **B, C, D:** Đều là tên các thuật toán thuộc nhóm 1 (Phân tích thừa số).

Bạn thêm bảng chi tiết này vào là "bất tử" với các câu hỏi về tên thuật toán tấn công nhé!
