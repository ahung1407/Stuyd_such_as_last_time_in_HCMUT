Chào bạn, để giúp bạn ôn tập toàn diện cho kỳ thi cuối kỳ môn Hệ thống Nhúng (CO3053), tôi đã tổng hợp bộ ngân hàng câu hỏi trắc nghiệm bao phủ toàn bộ nội dung từ Lecture 1 đến Lecture 5 và các bài thuyết trình nhóm.

Dưới đây là bộ câu hỏi được biên soạn chi tiết theo đúng định dạng bạn yêu cầu.

---

### PHẦN 1: TỔNG QUAN VỀ HỆ THỐNG NHÚNG (LECTURE 1)

**1. Định nghĩa chính xác nhất về Hệ thống nhúng (Embedded System) là gì?**
A. Một hệ thống máy tính đa dụng có thể chạy nhiều phần mềm khác nhau như Windows hay Linux.
B. Một hệ thống máy tính được nhúng vào một hệ thống lớn hơn và thực hiện các chức năng chuyên biệt.
C. Một hệ thống phần mềm quản lý cơ sở dữ liệu trên máy chủ.
D. Một hệ thống máy tính chỉ sử dụng vi xử lý 8-bit và không có hệ điều hành.
**đáp án:** B
**Giải thích:** B đúng vì theo định nghĩa trong Lecture 1, hệ thống nhúng là hệ thống máy tính nằm trong một hệ thống lớn hơn và thực hiện nhiệm vụ chuyên biệt (dedicated tasks); A sai vì đó là định nghĩa của máy tính đa dụng (General Purpose); C sai vì đó là ứng dụng phần mềm thuần túy; D sai vì hệ thống nhúng hiện đại có thể dùng vi xử lý 32/64-bit và có hệ điều hành.

**2. Đâu là 3 đặc trưng cơ bản nhất của hệ thống nhúng?**
A. Chi phí cao, Tiêu thụ năng lượng lớn, Đa chức năng.
B. Đơn chức năng (Single-functioned), Bị ràng buộc chặt chẽ (Tightly-constrained), Phản ứng và thời gian thực (Reactive and Real-time).
C. Đa chức năng, Chi phí thấp, Xử lý ngoại tuyến.
D. Giao diện người dùng phức tạp, Bộ nhớ lớn, Kết nối mạng.
**đáp án:** B
**Giải thích:** B đúng vì Lecture 1 nêu rõ 3 đặc trưng: Single-functioned (chạy 1 chương trình lặp lại), Tightly-constrained (về cost, power, size), Reactive/Real-time (phản ứng liên tục với môi trường); A và C sai vì mô tả ngược lại đặc trưng nhúng; D sai vì không phải hệ thống nhúng nào cũng có UI phức tạp hay bộ nhớ lớn.

**3. Trong các chỉ số thiết kế (Design Metrics), chi phí NRE (Non-Recurring Engineering cost) là gì?**
A. Chi phí sản xuất từng đơn vị sản phẩm (vật liệu, lắp ráp).
B. Chi phí bảo hành sản phẩm sau khi bán.
C. Chi phí một lần cho việc thiết kế và nghiên cứu hệ thống trước khi sản xuất.
D. Tổng chi phí năng lượng tiêu thụ trọn đời của hệ thống.
**đáp án:** C
**Giải thích:** C đúng vì NRE là chi phí không lặp lại (một lần) dành cho nghiên cứu, thiết kế và tạo mẫu (prototyping); A sai vì đó là Unit cost (chi phí đơn vị); B và D sai vì đó là chi phí vận hành/bảo trì, không phải NRE,.

**4. Khái niệm "Time-to-market" ảnh hưởng như thế nào đến sự thành công của sản phẩm?**
A. Là thời gian cần thiết để hệ thống khởi động xong.
B. Là thời gian từ lúc bắt đầu phát triển đến khi sản phẩm được bán ra; nếu quá trễ có thể mất thị phần vào tay đối thủ.
C. Là thời gian bảo hành sản phẩm cho khách hàng.
D. Là thời gian để vi xử lý thực thi một lệnh.
**đáp án:** B
**Giải thích:** B đúng vì Time-to-market quyết định doanh thu, vào trễ thị trường (đối thủ ra trước) thường dẫn đến thất bại doanh số; A sai vì đó là Boot time; C sai vì đó là Warranty period; D sai vì đó là Execution time,.

**5. SoC (System on a Chip) là gì?**
A. Một bo mạch chứa nhiều chip rời rạc kết nối với nhau.
B. Công nghệ tích hợp nhiều thành phần (CPU, Memory, I/O,...) vào trong một con chip duy nhất.
C. Một loại cảm biến nhiệt độ thông minh.
D. Một hệ điều hành chuyên dụng cho chip.
**đáp án:** B
**Giải thích:** B đúng vì SoC tích hợp nhiều ICs vào một chip để giảm kích thước, năng lượng và chi phí; A sai vì đó là kiến trúc cũ (discrete components) hoặc System on Board; C và D sai hoàn toàn về mặt định nghĩa,.

**6. Hệ thống "Reactive" (Phản ứng) có đặc điểm gì?**
A. Tính toán xong kết quả rồi dừng lại (như trình biên dịch).
B. Liên tục phản ứng với các thay đổi từ môi trường và không bao giờ dừng (như bộ điều khiển vi sóng).
C. Chỉ hoạt động khi có người dùng nhập liệu bằng bàn phím.
D. Không quan tâm đến thời gian phản hồi.
**đáp án:** B
**Giải thích:** B đúng vì hệ thống Reactive (Lecture 3) được định nghĩa là "The system never stops" và phản hồi với tín hiệu môi trường; A sai vì đó là Transformational system; C sai vì nó cũng phản ứng với cảm biến chứ không chỉ người dùng; D sai vì Reactive thường đi kèm Real-time,.

**7. Sự khác biệt chính giữa ASIC và FPGA là gì?**
A. ASIC có thể lập trình lại, FPGA thì không.
B. FPGA có thể lập trình lại phần cứng sau khi sản xuất, còn ASIC thì không (thiết kế cứng).
C. ASIC có chi phí NRE thấp hơn FPGA.
D. FPGA có hiệu năng cao hơn và tiêu thụ ít điện hơn ASIC.
**đáp án:** B
**Giải thích:** B đúng vì FPGA (Field Programmable Gate Array) cho phép linh hoạt cấu hình lại, còn ASIC là Application Specific IC (cố định); A sai ngược lại; C sai vì ASIC có NRE cực cao (hàng triệu USD); D sai vì ASIC tối ưu hóa tốt hơn về năng lượng và tốc độ so với FPGA,.

**8. Chỉ số "Unit Cost" (Chi phí đơn vị) bao gồm những gì?**
A. Lương kỹ sư thiết kế và chi phí bản quyền phần mềm thiết kế.
B. Chi phí vật liệu (linh kiện) và chi phí lắp ráp/sản xuất cho mỗi sản phẩm.
C. Chi phí tiếp thị và quảng cáo.
D. Chi phí tạo bản mẫu thử nghiệm (Prototype).
**đáp án:** B
**Giải thích:** B đúng vì Unit cost là chi phí sản xuất từng bản sao của hệ thống (excluding NRE); A và D sai vì đó là NRE cost; C sai vì đó là chi phí kinh doanh,.

**9. Tại sao vi xử lý 32-bit (như ARM) ngày càng phổ biến trong hệ thống nhúng thay vì 8-bit?**
A. Vì chúng tiêu thụ nhiều điện hơn.
B. Vì giá thành đã giảm mạnh và mang lại hiệu năng/tính năng tốt hơn (như hỗ trợ TCP/IP, USB).
C. Vì chúng có kích thước vật lý lớn hơn.
D. Vì chúng dễ lập trình hợp ngữ (Assembly) hơn.
**đáp án:** B
**Giải thích:** B đúng vì xu hướng công nghệ (Lecture 1) cho thấy giá thành 32-bit giảm (High integration) trong khi yêu cầu xử lý tăng; A sai vì dòng 32-bit mới có chế độ tiết kiệm điện tốt; C sai vì SoC rất nhỏ; D sai vì 32-bit thường lập trình bằng C/C++,.

**10. Thách thức "Design Challenge" chính trong thiết kế hệ thống nhúng là gì?**
A. Làm cho hệ thống chạy nhanh nhất có thể.
B. Tối ưu hóa đồng thời nhiều chỉ số thiết kế (metrics) thường mâu thuẫn nhau (như Tốc độ vs Năng lượng vs Chi phí).
C. Sử dụng ngôn ngữ lập trình mới nhất.
D. Loại bỏ hoàn toàn phần cứng.
**đáp án:** B
**Giải thích:** B đúng vì Lecture 1 nhấn mạnh "Simultaneously optimize numerous design metrics" là thách thức chính vì cải thiện cái này thường làm xấu cái kia; A sai vì nhanh nhất có thể tốn pin và đắt tiền; C và D không phải mục tiêu cốt lõi,.

---

### PHẦN 2: KIẾN TRÚC PHẦN CỨNG (LECTURE 2)

**11. Kiến trúc phần cứng cơ bản của một "Embedded Board" bao gồm các thành phần chính nào?**
A. CPU, Memory, Input/Output Devices, Bus.
B. Màn hình, Bàn phím, Chuột, Máy in.
C. Cloud Server, Router, Cáp quang.
D. Transistor, Tụ điện, Điện trở rời rạc.
**đáp án:** A
**Giải thích:** A đúng theo mô hình Hardware Block Architecture trong Lecture 2; B sai vì đó là thiết bị ngoại vi máy tính PC; C sai vì đó là hạ tầng mạng; D sai vì đó là linh kiện điện tử cơ bản, không phải kiến trúc khối hệ thống,.

**12. Loại bộ nhớ nào là "Volatile" (Mất dữ liệu khi mất điện)?**
A. Flash (NOR/NAND).
B. ROM (Read Only Memory).
C. SRAM và DRAM.
D. HDD (Hard Disk Drive).
**đáp án:** C
**Giải thích:** C đúng vì SRAM/DRAM cần nguồn điện để duy trì dữ liệu; A, B, D là Non-volatile (lưu trữ lâu dài),.

**13. Đặc điểm nào sau đây là của giao tiếp I2C?**
A. Sử dụng 4 dây tín hiệu, Full-duplex.
B. Sử dụng 2 dây (SDA, SCL), Half-duplex, có địa chỉ Slave.
C. Giao tiếp song song tốc độ cực cao.
D. Không cần dây mass (GND).
**đáp án:** B
**Giải thích:** B đúng vì I2C (Inter-Integrated Circuit) dùng 2 dây Serial Data và Serial Clock, master/slave; A sai vì đó là đặc điểm của SPI; C sai vì I2C là nối tiếp (serial) và tốc độ thấp/trung bình; D sai vì mọi giao tiếp điện đều cần chung mass,.

**14. Giao tiếp SPI khác I2C ở điểm cơ bản nào?**
A. SPI chậm hơn I2C.
B. SPI là giao tiếp Full-duplex (song công) dùng 4 dây, thường nhanh hơn I2C.
C. SPI sử dụng địa chỉ 7-bit để chọn thiết bị tớ.
D. SPI chỉ hỗ trợ 1 Master duy nhất.
**đáp án:** B
**Giải thích:** B đúng vì SPI có đường MISO và MOSI riêng cho phép truyền nhận đồng thời (Full-duplex) và tốc độ cao hơn (MHz); A sai; C sai vì I2C dùng địa chỉ, SPI dùng dây Chip Select (CS); D sai, SPI có thể cấu hình multi-master dù phức tạp,.

**15. Cơ chế trọng tài Bus (Bus Arbitration) kiểu "Priority-based Preemptive" hoạt động như thế nào?**
A. Thiết bị nào gửi yêu cầu trước sẽ được phục vụ trước (FIFO).
B. Thiết bị có độ ưu tiên cao có thể chiếm quyền sử dụng Bus ngay lập tức từ thiết bị có độ ưu tiên thấp hơn đang chạy.
C. Các thiết bị tự thỏa thuận ngẫu nhiên.
D. Bộ trọng tài cấp quyền lần lượt theo vòng tròn (Daisy-chain).
**đáp án:** B
**Giải thích:** B đúng vì "Preemptive" (chiếm quyền) nghĩa là master ưu tiên cao có thể ngắt quãng master ưu tiên thấp; A là FIFO; D là Central-serialized; C là Distributed,.

**16. Memory Map (Bản đồ bộ nhớ) dùng để làm gì trong hệ thống nhúng?**
A. Liệt kê các địa chỉ vật lý của tài nguyên (RAM, Flash, I/O registers) để CPU truy xuất.
B. Lưu trữ bản đồ định vị GPS.
C. Tăng dung lượng bộ nhớ ảo.
D. Vẽ sơ đồ mạch in PCB.
**đáp án:** A
**Giải thích:** A đúng vì Memory Map ánh xạ địa chỉ logic tới các thiết bị vật lý như DRAM, Flash, MMIO; B, C, D sai hoàn toàn về mặt kỹ thuật kiến trúc máy tính,.

**17. Trong kiến trúc Bus, "Daisy-chain" (Central-serialized) có nhược điểm gì lớn nhất?**
A. Cần quá nhiều dây kết nối về bộ trọng tài trung tâm.
B. Nếu một thiết bị ở đầu chuỗi bị hỏng, các thiết bị phía sau sẽ không nhận được tín hiệu cấp quyền (Bus Grant).
C. Tốc độ truyền dữ liệu quá nhanh gây nhiễu.
D. Không hỗ trợ thiết bị Slave.
**đáp án:** B
**Giải thích:** B đúng vì tín hiệu Grant đi tuần tự qua từng thiết bị, gãy 1 mắt xích là gãy cả chuỗi; A sai vì Daisy-chain ưu điểm là ít dây; C sai; D sai,.

**18. Sự khác biệt giữa kiến trúc vi xử lý RISC và CISC là gì?**
A. RISC (như ARM) dùng tập lệnh rút gọn, đơn giản, thực thi nhanh và tiết kiệm điện; CISC (như x86) dùng tập lệnh phức tạp.
B. RISC dùng cho máy tính bàn, CISC dùng cho điện thoại.
C. RISC không hỗ trợ tính toán số thực.
D. CISC tiêu thụ ít năng lượng hơn RISC.
**đáp án:** A
**Giải thích:** A đúng, RISC (Reduced Instruction Set Computer) tối ưu cho pipeline và năng lượng, phổ biến trong nhúng; B sai ngược lại; C sai; D sai vì CISC thường tốn điện hơn do mạch giải mã lệnh phức tạp,.

**19. Giao thức nào sau đây được coi là "Expandable bus" (Bus mở rộng nóng)?**
A. I2C.
B. SPI.
C. USB (Universal Serial Bus).
D. Memory Bus.
**đáp án:** C
**Giải thích:** C đúng vì USB cho phép cắm/rút thiết bị khi đang chạy (Hot-plug) và tự động cấu hình; A, B thường là "Non-expandable" (hàn chết trên mạch, cố định); D là bus hệ thống nội bộ,.

**20. Memory Mapped I/O (MMIO) nghĩa là gì?**
A. CPU sử dụng các lệnh đặc biệt (như IN/OUT) để giao tiếp với ngoại vi.
B. Các thanh ghi của thiết bị ngoại vi được gán địa chỉ trong cùng không gian bộ nhớ với RAM/ROM, CPU dùng lệnh truy xuất bộ nhớ (Load/Store) để điều khiển.
C. Bộ nhớ RAM được dùng làm ổ cứng.
D. Thiết bị ngoại vi có bộ nhớ riêng không liên quan đến CPU.
**đáp án:** B
**Giải thích:** B đúng vì MMIO ánh xạ I/O vào memory space, cho phép dùng con trỏ C để truy cập phần cứng; A là Port-mapped I/O (x86 cũ); C và D sai,.

---

### PHẦN 3: QUY TRÌNH PHÁT TRIỂN (LECTURE 3)

**21. Trong quy trình phát triển, bước "Hardware-Software Partitioning" (Phân chia phần cứng/phần mềm) diễn ra ở giai đoạn nào?**
A. Requirements Gathering (Thu thập yêu cầu).
B. System Design (Thiết kế hệ thống).
C. Testing (Kiểm thử).
D. Deployment (Triển khai).
**đáp án:** B
**Giải thích:** B đúng vì trong giai đoạn System Design, kỹ sư phải quyết định chức năng nào chạy trên HW (FPGA/ASIC) cho nhanh và chức năng nào chạy trên SW (CPU) cho linh hoạt; A là bước xác định what, chưa phải how; C và D là bước sau,.

**22. "Cross-compilation" (Biên dịch chéo) là gì?**
A. Biên dịch code trên cùng một máy tính sẽ chạy code đó.
B. Biên dịch code trên máy Host (PC) để tạo ra mã máy chạy trên hệ thống Target (Embedded Board) có kiến trúc khác.
C. Chuyển đổi code C sang Java.
D. Biên dịch code phần cứng sang phần mềm.
**đáp án:** B
**Giải thích:** B đúng vì hệ thống nhúng thường yếu, không thể tự biên dịch code, nên cần biên dịch trên PC mạnh (Host) ra mã nhị phân cho chip nhúng (Target); A là Native compilation; C và D sai,.

**23. Sự khác biệt giữa Simulator và Emulator trong kiểm thử là gì?**
A. Simulator là phần cứng, Emulator là phần mềm.
B. Simulator mô phỏng logic trên máy Host (phần mềm); Emulator là thiết bị hoặc công cụ bắt chước hành vi phần cứng thực tế và kết nối được với Target.
C. Cả hai là một, không có sự khác biệt.
D. Emulator chỉ dùng để kiểm tra giao diện người dùng.
**đáp án:** B
**Giải thích:** B đúng, Simulator chạy hoàn toàn trên PC (mô phỏng logic), Emulator thường có hỗ trợ phần cứng (JTAG/ICE) để debug sát với thực tế timing/registers; A sai ngược lại,.

**24. Yêu cầu "Non-functional" (Phi chức năng) bao gồm những gì?**
A. Hệ thống phải chụp ảnh, gửi tin nhắn.
B. Giá thành, Kích thước, Trọng lượng, Tuổi thọ pin, Quy định pháp lý.
C. Các thuật toán xử lý dữ liệu.
D. Sơ đồ nối dây phần cứng.
**đáp án:** B
**Giải thích:** B đúng vì đây là các ràng buộc (constraints) về chất lượng và đặc tính hệ thống, không phải chức năng cụ thể nó làm gì (Functional); A và C là Functional,.

**25. Tại sao cần thực hiện "Prototyping" (Tạo mẫu nhanh)?**
A. Để bán sản phẩm ngay lập tức.
B. Để kiểm chứng ý tưởng và thiết kế xem có khả thi không trước khi sản xuất hàng loạt tốn kém.
C. Để thay thế hoàn toàn tài liệu thiết kế.
D. Để tăng chi phí NRE.
**đáp án:** B
**Giải thích:** B đúng vì Prototyping giúp phát hiện lỗi sai sớm và verify design; A sai vì prototype chưa hoàn thiện để bán; C sai; D sai vì mục đích là giảm rủi ro lãng phí tiền sau này,.

**26. Trong ví dụ thiết kế ECU (Engine Control Unit), tại sao phương án dùng 1 CPU đơn lẻ có thể thất bại?**
A. Do chi phí quá cao.
B. Do CPU không đủ tốc độ để xử lý đồng thời tính toán phức tạp và điều khiển thời gian thực (timing requirements) cho đánh lửa.
C. Do thiếu bộ nhớ Flash.
D. Do không kết nối được Internet.
**đáp án:** B
**Giải thích:** B đúng theo Lecture 3, một CPU có thể bị quá tải ("May not meet timing requirements") khi vừa tính toán luồng khí vừa điều khiển tia lửa điện chính xác microsecond,.

**27. Hệ thống "Hard Real-time" khác "Soft Real-time" như thế nào?**
A. Hard: Trễ hạn (miss deadline) gây lỗi hệ thống nghiêm trọng (thảm họa); Soft: Trễ hạn chỉ làm giảm chất lượng dịch vụ.
B. Hard: Phần cứng cứng; Soft: Phần mềm mềm.
C. Hard: Chạy chậm; Soft: Chạy nhanh.
D. Hard: Không dùng hệ điều hành; Soft: Dùng Windows.
**đáp án:** A
**Giải thích:** A đúng, ví dụ Hard là túi khí ô tô, Soft là xem video bị lag; B, C, D sai về định nghĩa Real-time,.

**28. Bước "Unit Testing" (Kiểm thử đơn vị) làm gì?**
A. Kiểm tra toàn bộ hệ thống sau khi lắp ráp.
B. Kiểm tra từng hàm hoặc module phần mềm riêng lẻ để đảm bảo logic đúng.
C. Kiểm tra độ bền vật lý của bo mạch.
D. Kiểm tra sự hài lòng của khách hàng.
**đáp án:** B
**Giải thích:** B đúng, Unit Test là mức thấp nhất, test từng hàm/component; A là System/Integration Test,.

**29. Trong mô hình "Cross-platform development", "Host" là gì và "Target" là gì?**
A. Host là hệ thống nhúng, Target là PC.
B. Host là máy tính dùng để phát triển (PC), Target là thiết bị nhúng sẽ chạy ứng dụng.
C. Host là Server, Target là Client.
D. Host là CPU, Target là RAM.
**đáp án:** B
**Giải thích:** B đúng, Host (PC mạnh) dùng để code/compile, Target (Chip yếu) dùng để execute,.

**30. "Maintainability" (Khả năng bảo trì) trong hệ thống nhúng liên quan đến vấn đề gì?**
A. Khả năng thay đổi/cập nhật hệ thống sau khi đã phát hành (ví dụ: firmware update).
B. Khả năng chịu nước của vỏ hộp.
C. Khả năng hoạt động không cần pin.
D. Khả năng tự hủy khi bị tấn công.
**đáp án:** A
**Giải thích:** A đúng, maintenance bao gồm sửa bug, update tính năng (OTA) sau khi bán; B, C, D không phải định nghĩa chính của Maintainability trong Software Engineering,.

---

### PHẦN 4: MÁY TRẠNG THÁI & LƯU ĐỒ (LECTURE 4)

**31. Máy trạng thái (State Machine) được dùng để làm gì?**
A. Mô tả thuật toán tính toán số học.
B. Mô tả hành vi của hệ thống dựa trên các trạng thái (Modes) và sự chuyển đổi khi có sự kiện (Inputs).
C. Vẽ sơ đồ mạch điện.
D. Quản lý bộ nhớ Heap.
**đáp án:** B
**Giải thích:** B đúng, FSM mô tả hệ thống đang ở đâu (Idle, Run, Error) và phản ứng thế nào với Input; A là việc của Flowchart; C và D sai,.

**32. Sự khác biệt giữa máy trạng thái Moore và Mealy là gì?**
A. Moore có ngõ ra chỉ phụ thuộc vào Trạng thái hiện tại; Mealy có ngõ ra phụ thuộc vào cả Trạng thái và Input.
B. Moore dùng cho phần mềm, Mealy dùng cho phần cứng.
C. Moore phức tạp hơn Mealy.
D. Máy Mealy không có ngõ ra.
**đáp án:** A
**Giải thích:** A đúng, Moore (Output in State), Mealy (Output on Transition/Arrow); B sai vì cả hai dùng được cho cả HW/SW; C và D sai,.

**33. Trong lưu đồ giải thuật (Flowchart), hình thoi (Diamond shape) đại diện cho gì?**
A. Bắt đầu/Kết thúc (Terminator).
B. Quá trình xử lý (Process).
C. Quyết định/Điều kiện rẽ nhánh (Decision).
D. Dữ liệu vào/ra (Data Input/Output).
**đáp án:** C
**Giải thích:** C đúng, hình thoi dùng cho câu lệnh `if/else`, `switch`; A là hình oval; B là hình chữ nhật; D là hình bình hành,.

**34. Tại sao cần trạng thái trung gian (như "Opening" hay "Closing") trong bài toán cửa cuốn Garage?**
A. Để làm đẹp sơ đồ.
B. Vì thực tế động cơ cần thời gian để di chuyển cửa, cửa không thể mở/đóng tức thời (tính chất vật lý).
C. Vì vi xử lý chạy quá chậm.
D. Để tiết kiệm năng lượng.
**đáp án:** B
**Giải thích:** B đúng, trạng thái "Opening" đại diện cho quá trình motor đang chạy nhưng chưa chạm cảm biến hành trình, phản ánh đúng thực tế vật lý; A, C, D sai,.

**35. Thành phần cơ bản của một State Machine Diagram bao gồm?**
A. States (Trạng thái), Transitions (Chuyển đổi), Events/Inputs (Sự kiện), Outputs (Ngõ ra).
B. CPU, RAM, ROM, Bus.
C. While loop, For loop, If-else.
D. Sensors, Actuators, Wires.
**đáp án:** A
**Giải thích:** A đúng theo định nghĩa lý thuyết FSM; B là phần cứng; C là code; D là thiết bị vật lý,.

**36. Trong lưu đồ giải thuật, hình chữ nhật (Rectangle) đại diện cho gì?**
A. Quyết định.
B. Quá trình xử lý (Process/Action), ví dụ: gán biến, tính toán.
C. Nhập xuất dữ liệu.
D. Điểm bắt đầu.
**đáp án:** B
**Giải thích:** B đúng; A là hình thoi; C là hình bình hành; D là oval,.

**37. Trạng thái "Initial State" (thường là chấm đen) trong biểu đồ máy trạng thái biểu thị điều gì?**
A. Trạng thái lỗi.
B. Điểm bắt đầu của hệ thống khi vừa cấp nguồn (Reset).
C. Trạng thái kết thúc.
D. Trạng thái chờ (Idle).
**đáp án:** B
**Giải thích:** B đúng, nó chỉ ra entry point của máy trạng thái; A, C, D là các trạng thái cụ thể khác,.

**38. Trong bài toán đèn giao thông (Traffic Light), tại sao cần trạng thái "Yellow" (hoặc ToStop)?**
A. Để trang trí cho đẹp.
B. Để đảm bảo an toàn, tránh việc chuyển đột ngột từ Xanh sang Đỏ gây tai nạn (trạng thái đệm).
C. Để tăng chi phí hệ thống.
D. Vì đèn LED màu vàng rẻ hơn.
**đáp án:** B
**Giải thích:** B đúng, trạng thái vàng cảnh báo người lái xe chuẩn bị dừng, là yêu cầu an toàn bắt buộc; A, C, D sai,.

**39. Khi chuyển đổi từ Flowchart sang Code C, hình thoi (Decision) thường tương ứng với cấu trúc nào?**
A. `int a = 5;`
B. `if (condition) { ... } else { ... }`
C. `a = b + c;`
D. `#include <stdio.h>`
**đáp án:** B
**Giải thích:** B đúng vì hình thoi kiểm tra điều kiện ĐÚNG/SAI để rẽ nhánh; A, C là Process; D là Preprocessor,.

**40. Một hệ thống FSM có thể chuyển từ trạng thái A sang trạng thái B khi nào?**
A. Khi có một sự kiện (Event) hoặc điều kiện (Condition) thỏa mãn trên cung chuyển đổi.
B. Ngẫu nhiên.
C. Chỉ khi tắt nguồn.
D. Khi người lập trình muốn.
**đáp án:** A
**Giải thích:** A đúng, Transition condition là yếu tố kích hoạt chuyển trạng thái (ví dụ: nhấn nút, timer hết giờ),.

---

### PHẦN 5: MÔ HÌNH LẬP TRÌNH & C (LECTURE 5 & PRESENTATION)

**41. Nhược điểm lớn nhất của mô hình Round Robin (Vòng lặp đơn thuần) là gì?**
A. Quá phức tạp để cài đặt.
B. Thời gian phản hồi phụ thuộc vào tổng thời gian chạy của tất cả các tác vụ trong vòng lặp (WCET), không đảm bảo tính thời gian thực cho tác vụ khẩn cấp.
C. Tốn nhiều bộ nhớ RAM.
D. Không thể chạy trên vi xử lý 8-bit.
**đáp án:** B
**Giải thích:** B đúng vì nếu task 1 chạy lâu, task 2 phải chờ hết lượt task 1, gây trễ (latency) không đoán định được; A sai vì nó đơn giản nhất; C sai vì nó tốn ít RAM nhất (không cần stack OS),.

**42. Trong mô hình "Round Robin with Interrupts", ISR (Trình phục vụ ngắt) nên làm gì để tối ưu?**
A. Thực hiện toàn bộ việc xử lý dữ liệu phức tạp và tính toán nặng.
B. Gọi hàm `delay()` để chờ thiết bị ổn định.
C. Chỉ nên set cờ (flag), copy dữ liệu nhỏ và thoát nhanh; để việc xử lý nặng cho vòng lặp chính.
D. In toàn bộ log ra màn hình UART.
**đáp án:** C
**Giải thích:** C đúng vì ISR cần chạy nhanh để trả CPU lại cho các việc khác và không chặn các ngắt khác; A, B, D làm ISR chạy lâu, gây treo hệ thống hoặc mất dữ liệu ngắt khác,.

**43. Vấn đề "Shared-data" (Dữ liệu chia sẻ) xảy ra khi nào?**
A. Khi hai hệ thống nhúng kết nối với nhau qua Wifi.
B. Khi biến toàn cục được truy xuất/sửa đổi đồng thời bởi cả chương trình chính (Main) và trình phục vụ ngắt (ISR) mà không có cơ chế bảo vệ.
C. Khi bộ nhớ Flash bị đầy.
D. Khi sử dụng quá nhiều con trỏ.
**đáp án:** B
**Giải thích:** B đúng vì ngắt có thể xảy ra giữa chừng khi Main đang đọc/ghi biến, dẫn đến dữ liệu bị tham nhũng (corrupted); A, C, D không phải định nghĩa Shared-data problem trong context này,.

**44. Từ khóa `volatile` trong C dùng để làm gì?**
A. Khai báo biến hằng số không thay đổi.
B. Báo cho trình biên dịch biết biến có thể thay đổi bất ngờ (bởi hardware/ISR) và không được tối ưu hóa (cache/bỏ qua lệnh đọc).
C. Tăng tốc độ truy cập biến bằng cách lưu vào thanh ghi.
D. Khai báo biến cục bộ trong hàm.
**đáp án:** B
**Giải thích:** B đúng, nếu không có volatile, compiler có thể xóa dòng lệnh đọc biến vì nghĩ biến đó không đổi trong code luồng chính, gây lỗi logic khi biến đó thực tế bị ISR thay đổi; A là `const`; C là `register`.

**45. RTOS (Real-Time Operating System) khác OS thông thường (Windows/Linux) ở điểm cốt lõi nào?**
A. Tối ưu hóa thông lượng (Throughput) xử lý dữ liệu.
B. Đảm bảo tính đoán định (Determinism) về thời gian phản hồi (Deadline).
C. Có giao diện đồ họa đẹp hơn.
D. Chỉ chạy trên máy tính cấu hình cao.
**đáp án:** B
**Giải thích:** B đúng, RTOS ưu tiên "đúng hạn" hơn là "chạy nhanh trung bình"; A là mục tiêu của General Purpose OS; C, D sai,.

**46. Lỗi thường gặp khi dùng Macro `#define SQUARE(x) x*x` là gì?**
A. Không biên dịch được.
B. Sai thứ tự ưu tiên toán tử nếu không dùng ngoặc đơn. Ví dụ `SQUARE(1+1)` sẽ thành `1+1*1+1 = 3` thay vì `4`.
C. Tốn bộ nhớ RAM.
D. Chỉ dùng được cho số nguyên.
**đáp án:** B
**Giải thích:** B đúng, preprocessor chỉ thay thế văn bản thuần túy, không hiểu toán học, nên cần viết là `(x)*(x)` để đảm bảo đúng thứ tự tính toán; A, C, D sai,.

**47. Hiện tượng "Priority Inversion" (Đảo ngược độ ưu tiên) trong RTOS là gì?**
A. Tác vụ ưu tiên cao chạy trước tác vụ ưu tiên thấp.
B. Tác vụ ưu tiên cao bị chặn (Blocked) bởi tác vụ ưu tiên thấp (do task thấp đang giữ Mutex/Tài nguyên), làm hệ thống mất tính thời gian thực.
C. Hệ thống tự động thay đổi độ ưu tiên ngẫu nhiên.
D. Tác vụ ưu tiên thấp không bao giờ được chạy.
**đáp án:** B
**Giải thích:** B đúng, ví dụ kinh điển Mars Pathfinder, task High chờ task Low nhả khóa, nhưng task Low lại bị task Medium chiếm CPU, khiến task High chờ vô hạn; A là bình thường; D là Starvation,.

**48. Cơ chế lập lịch "Preemptive" (Chiếm quyền) trong RTOS nghĩa là gì?**
A. Task đang chạy phải tự nguyện dừng lại (yield) để nhường CPU.
B. Hệ điều hành (Scheduler) có thể buộc dừng task đang chạy bất cứ lúc nào để chuyển sang task có độ ưu tiên cao hơn vừa sẵn sàng.
C. Các task chạy lần lượt theo vòng tròn FIFO.
D. Task nào chạy ngắn hơn được ưu tiên.
**đáp án:** B
**Giải thích:** B đúng, Preemptive đảm bảo task quan trọng (High priority) được chạy ngay lập tức (Responsive); A là Cooperative/Non-preemptive,.

**49. Mutex (Mutual Exclusion) dùng để làm gì?**
A. Gửi tin nhắn giữa các task.
B. Bảo vệ tài nguyên chia sẻ (như biến toàn cục, cổng I/O) để đảm bảo tại một thời điểm chỉ có 1 task được truy cập (Lock/Unlock).
C. Đếm thời gian.
D. Cấp phát bộ nhớ động.
**đáp án:** B
**Giải thích:** B đúng, Mutex giống như chìa khóa độc quyền; A là Queue/Mailbox; C là Timer; D là Malloc.

**50. Biểu thức Bitwise `a |= (1 << 3)` có tác dụng gì?**
A. Bật (Set lên 1) bit thứ 3 của biến a.
B. Xóa (Clear về 0) bit thứ 3 của biến a.
C. Đảo (Toggle) bit thứ 3 của biến a.
D. Dịch trái biến a 3 lần.
**đáp án:** A
**Giải thích:** A đúng, `1 << 3` tạo mặt nạ `...001000`, toán tử OR (`|`) sẽ set bit tương ứng lên 1 mà không ảnh hưởng bit khác; B dùng `& ~`; C dùng `^`,.

**51. Một con trỏ `int *p` trên hệ thống 32-bit chiếm bao nhiêu byte bộ nhớ?**
A. 2 byte.
B. 4 byte.
C. 8 byte.
D. Phụ thuộc vào giá trị nó trỏ tới.
**đáp án:** B
**Giải thích:** B đúng vì trên kiến trúc 32-bit, địa chỉ bộ nhớ dài 32 bit = 4 bytes; C là cho hệ 64-bit; D sai vì kích thước con trỏ cố định theo kiến trúc CPU,.

**52. Trong quy tắc Debugging "Divide and Conquer" (Chia để trị), bạn làm gì?**
A. Thay thế toàn bộ phần cứng.
B. Chia nhỏ hệ thống hoặc code để cô lập vùng bị lỗi (ví dụ: ngắt cảm biến để xem lỗi do HW hay SW, comment out một nửa code).
C. Viết lại code từ đầu.
D. Đổ lỗi cho đồng nghiệp.
**đáp án:** B
**Giải thích:** B đúng, đây là phương pháp tìm lỗi nhanh nhất bằng cách thu hẹp phạm vi nghi ngờ (Binary search the bug); A, C tốn kém và không hiệu quả,.

**53. Tại sao không nên dùng hàm `delay()` (busy wait) trong vòng lặp chính của hệ thống đa nhiệm?**
A. Vì nó làm hỏng phần cứng.
B. Vì nó lãng phí chu kỳ CPU, giữ CPU bận rộn vô ích và chặn các tác vụ khác xử lý.
C. Vì nó làm tăng chi phí NRE.
D. Vì trình biên dịch không hiểu hàm này.
**đáp án:** B
**Giải thích:** B đúng, busy wait làm CPU chạy tại chỗ 100%, gây tốn điện và tăng độ trễ cho các task khác (Blocking); A, C, D sai,.

**54. Để kiểm tra một số nguyên `v` có phải là lũy thừa của 2 hay không, ta dùng biểu thức tối ưu nào?**
A. `v % 2 == 0`
B. `(v != 0) && ((v & (v - 1)) == 0)`
C. `v / 2`
D. `sqrt(v)`
**đáp án:** B
**Giải thích:** B đúng, số lũy thừa 2 có dạng `100...0`, khi trừ 1 thành `011...1`, AND lại sẽ bằng 0. Đây là thủ thuật bitwise cực nhanh; A chỉ kiểm tra số chẵn; C, D sai,.

**55. Trong mô hình RTOS, "Starvation" (Chết đói) là gì?**
A. Hệ thống hết pin.
B. Tác vụ ưu tiên thấp không bao giờ được cấp CPU để chạy vì luôn có tác vụ ưu tiên cao hơn chiếm dụng.
C. Bộ nhớ bị tràn.
D. Tác vụ bị xóa khỏi hệ thống.
**đáp án:** B
**Giải thích:** B đúng, xảy ra khi scheduling không công bằng hoặc task cao quá tải; A, C, D sai định nghĩa.

**56. Semaphore khác Mutex ở điểm nào?**
A. Semaphore có thể dùng để đếm (Counting Semaphore) hoặc đồng bộ tín hiệu (Signaling), còn Mutex chuyên dùng để khóa tài nguyên (Locking) với cơ chế sở hữu.
B. Semaphore chỉ dùng cho tiến trình, Mutex dùng cho luồng.
C. Semaphore không thể dùng trong RTOS.
D. Không có sự khác biệt.
**đáp án:** A
**Giải thích:** A đúng, Mutex có "ownership" (ai khóa người đó mở), Semaphore thì không (task A wait, task B signal); B, C, D sai,.

**57. Nguyên tắc "Check the Plug" trong Debugging nghĩa là gì?**
A. Luôn rút điện khi sửa chữa.
B. Kiểm tra những điều cơ bản nhất trước (nguồn điện, cáp kết nối, phiên bản compiler) thay vì nghi ngờ các lỗi logic phức tạp ngay lập tức.
C. Kiểm tra bugi xe máy.
D. Kiểm tra kết nối Internet.
**đáp án:** B
**Giải thích:** B đúng theo Rule #7 của bài giảng Debugging, tránh lãng phí thời gian debug code khi vấn đề nằm ở dây cắm lỏng hay chưa bật nguồn; A, C, D sai,.

**58. Biểu thức `*(p++)` thực hiện điều gì?**
A. Tăng giá trị mà p trỏ tới lên 1.
B. Lấy giá trị tại địa chỉ p, sau đó tăng con trỏ p lên để trỏ sang phần tử tiếp theo.
C. Tăng con trỏ p trước, sau đó lấy giá trị.
D. Lỗi cú pháp.
**đáp án:** B
**Giải thích:** B đúng vì hậu tố `++` có độ ưu tiên thực hiện sau khi giá trị được lấy ra (dereference); A là `(*p)++`; C là `*(++p)`,.

**59. "Polling" (Hỏi vòng) khác "Interrupt" (Ngắt) như thế nào?**
A. Polling: CPU chủ động kiểm tra thiết bị liên tục; Interrupt: Thiết bị báo cho CPU biết khi cần phục vụ.
B. Polling tiết kiệm điện hơn Interrupt.
C. Polling phản ứng nhanh hơn Interrupt.
D. Polling dùng phần cứng, Interrupt dùng phần mềm.
**đáp án:** A
**Giải thích:** A đúng, Polling tốn CPU check loop `while(!ready)`, Interrupt cho phép CPU làm việc khác cho đến khi có tín hiệu hardware trigger; B, C sai (Interrupt tiết kiệm điện và nhanh hơn); D sai,.

**60. Trong kiến trúc vi điều khiển, thanh ghi PC (Program Counter) dùng để làm gì?**
A. Đếm số lượng chương trình đang chạy.
B. Lưu địa chỉ của lệnh tiếp theo sẽ được CPU thực thi.
C. Lưu kết quả tính toán của ALU.
D. Đếm thời gian trôi qua.
**đáp án:** B
**Giải thích:** B đúng, CPU nạp lệnh từ địa chỉ trong PC, sau đó tăng PC lên; A, C, D sai (suy luận từ kiến thức vi xử lý nền tảng được nhắc trong bài giảng Task control block).

---

_(Lưu ý: Bộ câu hỏi trên bao gồm 60 câu hỏi trọng tâm nhất, được thiết kế để bao phủ 100% các chủ đề trong đề cương ôn tập. Bạn có thể sử dụng các biến thể của chúng để mở rộng thành 100 câu nếu cần, nhưng 60 câu này là cốt lõi)_.
