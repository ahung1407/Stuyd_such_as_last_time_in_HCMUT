Dựa trên các hình ảnh bạn cung cấp (đặc biệt là hình chụp bảng đen về thuật toán **Non-preemptive** và bài tập **Máy giặt**), tôi sẽ thiết kế một bộ bài tập đi từ cơ bản đến nâng cao, xoay quanh 3 mô hình: **Round Robin (RR)**, **Round Robin with Interrupts (RR+ISR)**, và **RTOS**.

---

### PHẦN 1: BÀI TẬP VỀ ROUND ROBIN (RR) - KIẾN TRÚC POLLING

_(Dựa trên hình ảnh bảng đen số 4: Code `while(1)` với các `if` check nút nhấn)_

**Bối cảnh:**
Nhìn vào bảng đen (hình 4), ta có một hệ thống Non-preemptive (không chiếm quyền) với 4 tác vụ (Task) được kiểm tra tuần tự trong vòng lặp `while(1)`. Thời gian xử lý của mỗi tác vụ như sau:

- Task 1 (Xử lý Btn1): 3 giây
- Task 2 (Xử lý Btn2): 2 giây
- Task 3 (Xử lý Btn3): 5 giây
- Task 4 (Xử lý Btn4): 4 giây

**Bài tập 1: Tính toán độ trễ (Latency)**
Giả sử hệ thống đang bắt đầu thực thi **Task 3** (vừa mới vào lệnh đầu tiên của Task 3). Đúng lúc này, người dùng nhấn **Btn 2**.

1. Hỏi sau bao lâu Task 2 mới bắt đầu được thực thi? (Tính thời gian chờ).
2. Đây là độ trễ tốt nhất (Best case) hay xấu nhất (Worst case) cho Task 2 trong tình huống này?

> **Gợi ý:** Trong Round Robin thuần túy, CPU phải chạy hết Task 3 -> Task 4 -> Task 1 -> mới quay lại kiểm tra Task 2.
> _Đáp án tham khảo:_ Chờ hết Task 3 (5s) + Task 4 (4s) + Task 1 (3s) = **12 giây**.

**Bài tập 2: Vấn đề "Blocking"**
Một yêu cầu mới được thêm vào: "Nếu nhấn Btn 1, đèn LED phải sáng ngay lập tức (độ trễ < 0.1 giây)".

1. Với kiến trúc hiện tại trên bảng, hệ thống có đáp ứng được yêu cầu này không? Tại sao?
2. Nếu Task 3 (5s) bị lỗi vòng lặp vô tận (`while(1);`), chuyện gì xảy ra với các nút nhấn còn lại?

---

### PHẦN 2: BÀI TẬP VỀ ROUND ROBIN WITH INTERRUPTS (RR + ISR)

_(Kết hợp hình 4 và bài Máy giặt hình 1)_

**Bối cảnh:**
Để khắc phục độ trễ ở Phần 1, chúng ta chuyển nút nhấn sang cơ chế **Ngắt (Interrupt)**.

**Bài tập 3: Cơ chế cờ hiệu (Flag approach)**
Bạn sửa lại code như sau: Khi nhấn nút, **ISR (Trình phục vụ ngắt)** sẽ chạy. ISR chỉ làm 1 việc duy nhất là set biến cờ `flag_btn_pressed = 1` rồi thoát. Trong vòng lặp chính `main()`, ta kiểm tra cờ này để xử lý motor.

1. Hỏi: Việc dùng ISR như trên có giải quyết được vấn đề độ trễ xử lý (Processing Latency) của **Bài tập 1** không? Tức là Task 2 có được chạy _ngay lập tức_ khi nhấn nút không, hay vẫn phải chờ Task 3 chạy xong?
2. Phân biệt "Detection Latency" (Độ trễ phát hiện) và "Processing Latency" (Độ trễ xử lý) trong trường hợp này.

> **Gợi ý:** ISR giúp phát hiện nút nhấn ngay lập tức (Detection nhanh), nhưng nếu việc xử lý motor nằm trong `main` (nơi đang bị kẹt bởi Task 3), thì Processing vẫn chậm.

**Bài tập 4: Vấn đề Shared Data (Dữ liệu chia sẻ) - Bài toán Máy giặt**
Trong bài toán Máy giặt (Hình 1), giả sử:

- Biến `Total_Money` (kiểu `int` 16-bit) lưu tổng tiền.
- **ISR của cảm biến xu:** Khi bỏ xu vào, ISR tự động cộng tiền: `Total_Money = Total_Money + CoinValue;`
- **Main Loop:** Khi nhấn RUN, main loop kiểm tra và trừ tiền: `if (Total_Money >= 50) { Total_Money = 0; StartMachine(); }`

**Câu hỏi:** Điều gì có thể xảy ra nếu `Main Loop` đang đọc dở biến `Total_Money` (ví dụ: mới đọc byte thấp) thì `ISR` xen vào và thay đổi giá trị `Total_Money`?

- A. Không sao cả.
- B. Biến `Total_Money` bị sai lệch giá trị (Data Corruption).
- C. Hệ thống reset.

> **Yêu cầu:** Đề xuất cách khắc phục (Gợi ý: Từ khóa `Atomic` hoặc `Disable Interrupts`).

---

### PHẦN 3: BÀI TẬP VỀ RTOS (REAL-TIME OPERATING SYSTEM)

_(Dựa trên bài toán Máy giặt - Hình 1)_

**Bối cảnh:**
Bài toán máy giặt có một yêu cầu rất khó chịu cho Round Robin: _"When paused... the timer is still counting down"_ (Khi tạm dừng, máy dừng chạy nhưng đồng hồ vẫn đếm ngược).

**Bài tập 5: Thiết kế Task trong RTOS**
Nếu dùng RTOS, bạn hãy chia hệ thống máy giặt thành các Task. Hãy đề xuất ít nhất 2 Task chính và độ ưu tiên (Priority) của chúng.

- **Gợi ý:**
- Task A (Giao diện): Quản lý nút nhấn STOP, PAUSE, RUN và đèn LED.
- Task B (Logic giặt): Quản lý Motor, Van nước.
- Task C (Timer): Quản lý đếm ngược thời gian.

**Câu hỏi:**

1. Task nào nên có độ ưu tiên cao nhất? (Gợi ý: Nút STOP cần phản hồi ngay lập tức).
2. Làm thế nào để Task C (Timer) vẫn chạy và trừ thời gian trong khi Task B (Motor) đang bị treo (Paused)? RTOS hỗ trợ tính năng gì để làm việc này (Preemption/Time Slicing)?

**Bài tập 6: So sánh RR và RTOS (Tổng hợp)**
Hãy điền vào bảng so sánh dựa trên bài toán máy giặt:

| Tiêu chí                              | Round Robin (Vòng lặp)                               | RTOS (Hệ điều hành)                     |
| ------------------------------------- | ---------------------------------------------------- | --------------------------------------- |
| **Xử lý nút STOP**                    | Phải chờ hết vòng lặp hiện tại                       | ... (1) ...                             |
| **Tính năng Timer đếm lùi khi Pause** | Khó cài đặt (phải dùng Timer HW hoặc check liên tục) | Dễ (Timer chạy ở một Task/Thread riêng) |
| **Độ phức tạp code**                  | ... (2) ...                                          | Phức tạp hơn, tốn RAM hơn               |
| **Khả năng mở rộng (thêm tính năng)** | Khó (ảnh hưởng thời gian vòng lặp)                   | ... (3) ...                             |

---

### PHẦN 4: GIẢI MÃ HÌNH ẢNH BẢNG ĐEN (HÌNH 3)

**Bài tập vui:** Hình ảnh số 3 ghi: `(3 + 5 + 8 + 7 + 10 + 9 + 12 + 14) / 8`.
Đây có thể là bài tập tính **Thời gian thực thi trung bình (Average Execution Time)** của một tác vụ qua 8 lần đo.

**Câu hỏi:** Trong hệ thống Hard Real-Time (như túi khí ô tô), chúng ta quan tâm đến con số "Trung bình" này hay quan tâm đến con số lớn nhất (14) trong dãy số trên? Tại sao?

> **Gợi ý:** Hard Real-Time quan tâm đến **WCET (Worst Case Execution Time)** để đảm bảo Deadline không bao giờ bị trễ. Trung bình tốt nhưng 1 lần trễ có thể gây tai nạn.

Nếu bạn cần giải chi tiết bài nào trong số này, hãy cho tôi biết nhé!
