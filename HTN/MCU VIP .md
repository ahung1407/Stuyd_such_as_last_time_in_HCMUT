Chào bạn, để giúp bạn nắm vững kiến thức môn Hệ thống Nhúng (CO3053) và chuẩn bị tốt nhất cho kỳ thi, tôi đã biên soạn bộ câu hỏi trắc nghiệm tổng hợp dựa trên toàn bộ tài liệu bạn cung cấp (Lecture 1-5, Presentation). Bộ câu hỏi được chia thành 4 dạng tư duy như bạn yêu cầu.

---

### DẠNG 1: HIỂU & ÁP DỤNG (UNDERSTANDING & APPLICATION)

_Dạng câu hỏi yêu cầu nắm vững định nghĩa và biết cách tính toán hoặc áp dụng vào tình huống cụ thể._

**1. Một hệ thống Bus PCI hoạt động ở tần số 33 MHz với độ rộng dữ liệu là 32-bit. Băng thông lý thuyết (Throughput) của Bus này là bao nhiêu?**
A. 264 MB/s
B. 132 MB/s
C. 66 MB/s
D. 1056 MB/s
đáp án: B
Giải thích: B đúng vì theo công thức trong Lecture 2 thì Throughput = Frequency _ (Bus Width / 8) = 33 MHz _ (32/8) Bytes = 33 \* 4 = 132 MB/s; A sai vì đó là kết quả của 66MHz hoặc 64-bit; C và D sai do tính toán sai công thức cơ bản.

**2. Để xóa (clear) bit thứ 3 của một thanh ghi 8-bit `REG` về 0 mà không làm ảnh hưởng đến các bit khác, bạn sử dụng câu lệnh C nào sau đây?**
A. REG |= (1 << 3);
B. REG &= ~(1 << 3);
C. REG ^= (1 << 3);
D. REG = (1 << 3);
đáp án: B
Giải thích: B đúng vì phép toán AND với phủ định (NOT) của mặt nạ bit sẽ xóa bit tương ứng về 0 và giữ nguyên các bit khác (x & 1 = x, x & 0 = 0); A sai vì phép OR dùng để bật bit lên 1; C sai vì phép XOR dùng để đảo bit; D sai vì phép gán sẽ làm mất giá trị của các bit khác.

**3. Trong thiết kế Máy trạng thái (State Machine), đặc điểm nào phân biệt máy Moore so với máy Mealy?**
A. Máy Moore có ngõ ra phụ thuộc vào cả trạng thái hiện tại và tín hiệu đầu vào.
B. Máy Moore có ngõ ra chỉ phụ thuộc vào trạng thái hiện tại (Present State).
C. Máy Moore phản ứng nhanh hơn máy Mealy.
D. Máy Moore không có ngõ ra.
đáp án: B
Giải thích: B đúng vì Lecture 4 định nghĩa máy Moore có Output là hàm của Present State, trong khi máy Mealy có Output phụ thuộc cả Present State và Input; A là định nghĩa của máy Mealy; C sai vì Mealy thường phản ứng nhanh hơn do ngõ ra thay đổi ngay khi Input đổi; D sai vì cả hai đều có ngõ ra.

**4. Khi thiết kế hệ thống điều khiển túi khí ô tô (Airbag System), yêu cầu nào sau đây là quan trọng nhất cần phải tuân thủ?**
A. Soft Real-time (Thời gian thực mềm).
B. High Throughput (Thông lượng cao).
C. Hard Real-time (Thời gian thực cứng).
D. Low NRE Cost (Chi phí thiết kế thấp).
đáp án: C
Giải thích: C đúng vì túi khí là hệ thống an toàn tính mạng, việc trễ hạn (miss deadline) dù chỉ một phần nghìn giây cũng gây hậu quả thảm khốc (Lecture 1 và 3); A sai vì Soft Real-time cho phép trễ hạn; B và D là yếu tố phụ, không quan trọng bằng tính mạng con người.

**5. Trong lập trình C cho hệ thống nhúng, tại sao nên dùng kiểu `int` cho biến đếm vòng lặp trên kiến trúc ARM thay vì `char` hay `short`?**
A. Vì kiểu int tốn ít bộ nhớ hơn.
B. Vì kiểu int tương thích với độ rộng thanh ghi tự nhiên (32-bit) của ARM, giúp xử lý hiệu quả hơn mà không cần lệnh che mặt nạ (masking).
C. Vì kiểu char không thể đếm quá 100.
D. Vì kiểu short không được hỗ trợ bởi trình biên dịch.
đáp án: B
Giải thích: B đúng vì Lecture 5 phần Efficient C Programming nhấn mạnh việc sử dụng kích thước thanh ghi tự nhiên (32-bit int trên ARM) giúp tăng tốc độ và giảm kích thước code do không cần thêm lệnh xử lý ép kiểu; A sai vì int tốn nhiều RAM hơn char; C sai vì char đếm được đến 255 (unsigned); D sai vì C hỗ trợ tất cả các kiểu này.

---

### DẠNG 2: TỔNG HỢP & LIÊN KẾT (SYNTHESIS & CONNECTION)

_Dạng câu hỏi yêu cầu kết nối kiến thức giữa các chương hoặc các khái niệm khác nhau._

**6. Sự khác biệt cơ bản về vai trò giữa "Host" và "Target" trong quy trình phát triển chéo (Cross-platform development) là gì?**
A. Host dùng để chạy ứng dụng cuối cùng; Target dùng để biên dịch code.
B. Host là hệ thống nhúng có tài nguyên hạn chế; Target là máy tính mạnh mẽ.
C. Host là máy tính dùng để soạn thảo, biên dịch và gỡ lỗi; Target là thiết bị nhúng nơi ứng dụng sẽ thực thi.
D. Host và Target luôn có cùng kiến trúc vi xử lý (ví dụ cùng là x86).
đáp án: C
Giải thích: C đúng vì Lecture 3 mô tả Cross-platform development xảy ra khi Target (thiết bị nhúng) không đủ mạnh để tự biên dịch, nên cần Host (PC) để thực hiện Cross-compilation; A và B bị ngược vai trò; D sai vì Host thường là x86 còn Target thường là ARM/MIPS.

**7. Mối liên hệ giữa khái niệm "Priority Inversion" (Đảo ngược độ ưu tiên) và "Mutex" trong RTOS là gì?**
A. Priority Inversion xảy ra khi không sử dụng Mutex.
B. Priority Inversion xảy ra khi tác vụ ưu tiên thấp giữ Mutex mà tác vụ ưu tiên cao cần, nhưng lại bị tác vụ ưu tiên trung bình chiếm quyền CPU.
C. Mutex giúp ngăn chặn hoàn toàn Priority Inversion mà không cần giao thức hỗ trợ.
D. Priority Inversion là tính năng giúp Mutex hoạt động nhanh hơn.
đáp án: B
Giải thích: B đúng vì theo Lecture 5 và bài thuyết trình nhóm, Priority Inversion là hiện tượng tác vụ cao bị chặn bởi tác vụ thấp (đang giữ Mutex), và tình trạng này kéo dài do tác vụ trung bình xen vào; A sai vì nó xảy ra chính vì cơ chế khóa của Mutex; C sai vì cần giao thức Priority Inheritance để khắc phục; D sai vì đây là lỗi hệ thống.

**8. Kết hợp kiến thức về "Bus Arbitration" (Lecture 2) và "Real-time" (Lecture 1), phương thức trọng tài nào phù hợp nhất cho hệ thống RTOS yêu cầu tính phản hồi nhanh (Responsive)?**
A. FIFO (First In First Out).
B. Daisy-chain (Central-serialized).
C. Priority-based Preemptive (Dựa trên độ ưu tiên có chiếm quyền).
D. Random access.
đáp án: C
Giải thích: C đúng vì cơ chế Preemptive cho phép thiết bị/tác vụ quan trọng (High Priority) chiếm quyền bus ngay lập tức, đảm bảo tính Real-time (Lecture 2); A sai vì FIFO có thể làm tác vụ khẩn cấp phải chờ đợi lâu; B sai vì độ trễ truyền tín hiệu qua chuỗi; D sai vì không đảm bảo tính đoán định.

**9. Trong quy trình thiết kế ECU (Lecture 3), tại sao phương án kết hợp "CPU + FPGA" lại tối ưu hơn phương án "Single CPU" về mặt đáp ứng thời gian thực?**
A. Vì FPGA rẻ hơn CPU.
B. Vì FPGA có thể xử lý song song phần điều khiển chấp hành (Actuators) với độ chính xác cao, giảm tải cho CPU.
C. Vì CPU không thể tính toán số học.
D. Vì FPGA tiêu thụ nhiều năng lượng hơn giúp động cơ chạy khỏe hơn.
đáp án: B
Giải thích: B đúng vì theo phân tích Design Option 2 trong Lecture 3, việc phân chia (partitioning) nhiệm vụ kích hoạt (actuation) sang FPGA giúp đảm bảo timing requirement mà CPU đơn lẻ có thể bỏ lỡ do bận tính toán; A, C, D sai về mặt kỹ thuật và logic thiết kế.

---

### DẠNG 3: TÌM ĐIỂM SAI/NGOẠI LỆ (FINDING ERRORS/EXCEPTIONS)

_Dạng câu hỏi yêu cầu tìm phương án SAI hoặc KHÔNG thuộc nhóm._

**10. Đâu KHÔNG phải là một trong 3 đặc trưng cơ bản (Common Characteristics) của hệ thống nhúng được nhắc đến trong Lecture 1?**
A. Đơn chức năng (Single-functioned).
B. Đa dụng (General Purpose).
C. Bị ràng buộc chặt chẽ (Tightly-constrained).
D. Phản ứng và thời gian thực (Reactive and Real-time).
đáp án: B
Giải thích: B là đáp án cần chọn vì "General Purpose" là đặc điểm của máy tính cá nhân (PC), ngược lại với "Single-functioned" là đặc trưng của hệ thống nhúng (Lecture 1); A, C, D đều là 3 đặc trưng cốt lõi.

**11. Trong mô hình lập trình "Round Robin with Interrupts", phát biểu nào sau đây là SAI về vai trò của trình phục vụ ngắt (ISR)?**
A. ISR nên thực hiện càng nhanh càng tốt.
B. ISR nên chứa các vòng lặp phức tạp và xử lý tính toán nặng.
C. ISR thường chỉ nên thiết lập cờ (flag) hoặc sao chép dữ liệu nhỏ.
D. ISR giúp hệ thống phản ứng nhanh với các sự kiện khẩn cấp.
đáp án: B
Giải thích: B là phát biểu sai vì Lecture 5 khuyến cáo ISR phải ngắn gọn; nếu ISR xử lý nặng sẽ chặn các ngắt khác và làm treo vòng lặp chính (blocking), phá vỡ tính thời gian thực của hệ thống.

**12. Quy tắc nào sau đây KHÔNG nằm trong "9 Quy tắc Debugging" của David J. Agans (Lecture 5)?**
A. Check the Plug (Kiểm tra kết nối cơ bản).
B. Divide and Conquer (Chia để trị).
C. Rewrite Everything (Viết lại toàn bộ code).
D. Make It Fail (Làm cho lỗi tái hiện).
đáp án: C
Giải thích: C là đáp án cần chọn vì "Viết lại toàn bộ code" không phải là quy tắc debugging khôn ngoan, nó tốn kém và có thể sinh ra lỗi mới; 9 quy tắc bao gồm Understand the System, Make It Fail, Quit Thinking and Look, Divide and Conquer, Change One Thing at a Time, Keep an Audit Trail, Check the Plug, Get a Fresh View, If You Didn't Fix It, It Ain't Fixed.

**13. Giao tiếp nào sau đây KHÔNG thuộc nhóm "Expandable Bus" (Bus có khả năng mở rộng nóng/cắm thêm thiết bị dễ dàng cho người dùng)?**
A. USB.
B. PCI.
C. SPI.
D. PCMCIA.
đáp án: C
Giải thích: C là đáp án cần chọn vì SPI (và I2C) được xếp vào nhóm "Non-expandable bus" trong Lecture 2, thường được hàn cố định trên mạch để nối các chip nội bộ, không thiết kế để người dùng cắm rút nóng như USB hay PCI.

---

### DẠNG 4: BẪY TỪ NGỮ (WORD TRAPS)

_Dạng câu hỏi chứa các thuật ngữ dễ gây nhầm lẫn hoặc chi tiết nhỏ dễ bỏ sót._

**14. Kết quả của đoạn macro `#define SQUARE(x) x*x` khi gọi `SQUARE(1+1)` là bao nhiêu?**
A. 4
B. 3
C. 2
D. Lỗi biên dịch.
đáp án: B
Giải thích: B đúng vì đây là bẫy macro kinh điển (Lecture 5); trình biên dịch thay thế văn bản thuần túy thành `1+1*1+1`, do ưu tiên toán tử nhân chia trước cộng trừ nên kết quả là `1 + (1*1) + 1 = 3`; đáp án mong đợi là 4 chỉ đạt được khi viết macro đúng là `((x)*(x))`.

**15. Phân biệt "Simulator" và "Emulator" trong giai đoạn kiểm thử (Testing - Lecture 3):**
A. Simulator là phần cứng, Emulator là phần mềm.
B. Simulator chạy trên máy Host để mô phỏng hành vi; Emulator là thiết bị phần cứng kết nối với Target để bắt chước hành vi vi xử lý.
C. Simulator và Emulator là hai từ đồng nghĩa, dùng thay thế cho nhau được.
D. Simulator dùng cho kiểm thử ngoại vi, Emulator dùng cho kiểm thử CPU.
đáp án: B
Giải thích: B đúng vì Simulator là phần mềm chạy hoàn toàn trên PC (Host) mô phỏng logic; Emulator (như JTAG/ICE) là công cụ phần cứng thay thế hoặc kết nối với chip thật (Target) để gỡ lỗi thời gian thực; các đáp án khác sai về bản chất kỹ thuật.

**16. Sự khác biệt giữa biến "volatile" và biến "const" trong C là gì?**
A. Volatile là biến không thể thay đổi giá trị; Const là biến có thể thay đổi bất ngờ.
B. Volatile báo cho compiler biết biến có thể bị thay đổi bởi tác nhân bên ngoài (HW/ISR) nên không được tối ưu hóa; Const báo biến không được phép thay đổi bởi code.
C. Volatile giúp truy cập biến nhanh hơn; Const làm chậm truy cập.
D. Volatile chỉ dùng cho số nguyên; Const dùng cho chuỗi.
đáp án: B
Giải thích: B đúng vì từ khóa volatile (Lecture 5) ngăn compiler bỏ qua các lệnh đọc/ghi biến (do compiler tưởng biến không đổi), rất quan trọng khi biến đó được update bởi ngắt hoặc phần cứng; Const chỉ mang ý nghĩa bảo vệ biến khỏi bị ghi đè bởi lập trình viên.

**17. "NRE Cost" khác "Unit Cost" ở điểm nào?**
A. NRE Cost là chi phí trả định kỳ hàng tháng.
B. NRE Cost là chi phí một lần (nghiên cứu, thiết kế); Unit Cost là chi phí sản xuất từng sản phẩm (vật liệu, lắp ráp).
C. NRE Cost tính trên mỗi sản phẩm bán ra.
D. Unit Cost bao gồm lương của đội ngũ R&D.
đáp án: B
Giải thích: B đúng vì NRE (Non-Recurring Engineering) là chi phí cố định ban đầu (Fixed cost), không phụ thuộc số lượng sản xuất; Unit Cost (Variable cost) tăng tuyến tính theo số lượng sản phẩm (Lecture 1); đây là bẫy về kinh tế kỹ thuật thường gặp.

**18. Thuật ngữ "Atomic operation" (Thao tác nguyên tử) trong ngữ cảnh Shared-data problem (Lecture 5) nghĩa là gì?**
A. Một thao tác liên quan đến năng lượng hạt nhân.
B. Một thao tác xử lý dữ liệu cực nhỏ.
C. Một thao tác không thể bị ngắt quãng (uninterruptible); nó phải chạy xong hoàn toàn hoặc không chạy gì cả.
D. Một thao tác diễn ra trong 1 giây.
đáp án: C
Giải thích: C đúng vì Atomic (nguyên tử) nghĩa là không thể chia cắt; trong lập trình nhúng, để bảo vệ shared data, ta cần đảm bảo việc đọc/ghi biến là atomic (ví dụ bằng cách tắt ngắt tạm thời) để tránh bị ISR xen vào giữa chừng gây sai lệch dữ liệu.
