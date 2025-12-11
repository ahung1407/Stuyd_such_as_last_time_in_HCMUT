Chào bạn, đây là bộ **40 câu hỏi trắc nghiệm** bao phủ toàn bộ nội dung chương Reliability Engineering (Slide 1-81), được chia theo 3 cấp độ trong kế hoạch ôn tập để giúp bạn Master môn này.

---

### **PHẦN 1: MỨC ĐỘ HIỂU (COMPREHENSION) - 10 CÂU**
*Mục tiêu: Nắm vững định nghĩa, tránh tra cứu nhầm.*

**1. Theo Slide 4, mối quan hệ nhân quả nào sau đây mô tả đúng quá trình hình thành sự cố phần mềm?**
A. System Error -> System Fault -> System Failure.
B. System Failure -> System Error -> System Fault.
C. Human Error -> System Fault -> System Error -> System Failure.
D. Human Error -> System Failure -> System Fault -> System Error.
đáp án: C
Giải thích: C đúng vì quy trình bắt đầu từ sai lầm con người (Human Error) tạo ra lỗi trong code (Fault), khi chạy dẫn đến trạng thái sai (Error) và cuối cùng là hỏng hóc (Failure); A, B, D sai thứ tự logic được mô tả trong Slide 4.

**2. Định nghĩa nào sau đây về "Reliability" (Độ tin cậy) là chính xác nhất theo Slide 10?**
A. Xác suất hệ thống đang hoạt động tại một thời điểm bất kỳ.
B. Xác suất hệ thống hoạt động không có lỗi trong một khoảng thời gian xác định, trong môi trường xác định.
C. Khả năng hệ thống tự khởi động lại sau khi gặp sự cố.
D. Tỷ lệ phần trăm thời gian hệ thống sẵn sàng phục vụ người dùng.
đáp án: B
Giải thích: B đúng theo định nghĩa chuẩn tại Slide 10; A và D là định nghĩa của Availability (Tính sẵn sàng); C là khả năng phục hồi (Recovery).

**3. Sự khác biệt chính giữa "Fault Detection" (Phát hiện lỗi) và "Fault Tolerance" (Chịu lỗi) là gì (Slide 6)?**
A. Fault Detection xảy ra trước khi triển khai hệ thống, Fault Tolerance xảy ra khi hệ thống đang chạy.
B. Fault Detection là kỹ thuật phần cứng, Fault Tolerance là kỹ thuật phần mềm.
C. Fault Detection giúp hệ thống chạy tiếp khi có lỗi, Fault Tolerance tìm lỗi để sửa.
D. Hai thuật ngữ này là đồng nghĩa.
đáp án: A
Giải thích: A đúng vì Slide 6 phân loại Fault Detection dùng Verification & Validation để tìm lỗi trước khi giao khách, còn Fault Tolerance là thiết kế để hệ thống không sập khi lỗi xảy ra lúc vận hành (run-time); B, C, D hiểu sai bản chất.

**4. Chỉ số POFOD (Probability of Failure on Demand) có ý nghĩa là gì (Slide 20)?**
A. Số lượng lỗi xảy ra trong 1000 giờ hoạt động.
B. Thời gian trung bình giữa hai lần lỗi liên tiếp.
C. Xác suất hệ thống bị thất bại khi có một yêu cầu dịch vụ được gửi đến.
D. Tỷ lệ thời gian hệ thống ngừng hoạt động trong một năm.
đáp án: C
Giải thích: C đúng theo định nghĩa Slide 20; A là mô tả của ROCOF; B là MTTF; D liên quan đến Availability.

**5. Hệ thống bảo vệ (Protection Systems) hoạt động theo cơ chế nào (Slide 36)?**
A. Giám sát hệ thống chính và sửa lỗi code trực tiếp.
B. Giám sát hệ thống chính và đưa ra cảnh báo cho người dùng xử lý.
C. Giám sát độc lập hệ thống và môi trường, tự động kích hoạt hành động khẩn cấp nếu phát hiện sự cố.
D. Chạy song song với hệ thống chính và so sánh kết quả (Voting).
đáp án: C
Giải thích: C đúng vì Slide 36 mô tả Protection system độc lập giám sát và "issues commands to take emergency action" để ngăn thảm họa; A sai vì nó không sửa code; D là cơ chế của N-version programming.

**6. "Triple-modular redundancy" (TMR) trong phần cứng hoạt động dựa trên nguyên tắc nào (Slide 45)?**
A. Hai thành phần chạy, một thành phần nghỉ chờ.
B. Ba thành phần giống hệt nhau cùng xử lý, kết quả được so sánh và chọn theo đa số.
C. Ba thành phần khác nhau hoàn toàn chạy độc lập.
D. Một thành phần chính và hai thành phần sao lưu dữ liệu.
đáp án: B
Giải thích: B đúng theo Slide 45, TMR dùng 3 thành phần replicated identical (giống hệt nhau) và so sánh output; A, C, D sai mô tả.

**7. Mục đích chính của việc sử dụng "Timeouts" trong lập trình tin cậy là gì (Slide 68)?**
A. Để đo lường hiệu năng hệ thống.
B. Để đảm bảo hệ thống không bị treo vĩnh viễn khi gọi thành phần bên ngoài bị lỗi không phản hồi.
C. Để ngắt kết nối người dùng khi họ không hoạt động quá lâu.
D. Để đồng bộ hóa đồng hồ giữa các máy chủ.
đáp án: B
Giải thích: B đúng vì Slide 68 nêu rõ Timeouts giúp tránh việc chờ đợi vô hạn khi có "silent failure" của máy tính từ xa; A, C, D không phải mục đích chính trong ngữ cảnh độ tin cậy.

**8. Theo Slide 15 và 76, "Operational Profile" (Hồ sơ vận hành) là gì?**
A. Tài liệu hướng dẫn sử dụng cho người vận hành hệ thống.
B. Danh sách các lỗi đã từng xảy ra trong quá khứ.
C. Tập hợp dữ liệu kiểm thử có tần suất khớp với tần suất sử dụng thực tế của người dùng.
D. Hồ sơ năng lực của đội ngũ phát triển phần mềm.
đáp án: C
Giải thích: C đúng theo định nghĩa Slide 76, nó phản ánh "input classes" và xác suất xuất hiện trong thực tế; A, B, D sai hoàn toàn.

**9. Khái niệm "Diversity" (Sự đa dạng) trong kiến trúc chịu lỗi nhằm mục đích tránh loại lỗi nào (Slide 35, 41)?**
A. Human Error.
B. Common Mode Failure (Lỗi điểm chung).
C. Syntax Error.
D. Transient Failure.
đáp án: B
Giải thích: B đúng vì nếu các kênh giống hệt nhau, một lỗi thiết kế hoặc phần cứng sẽ khiến tất cả cùng hỏng (Slide 41), Diversity giúp các kênh thất bại theo cách khác nhau; A, C, D là các loại lỗi cụ thể, không phải đích nhắm của kiến trúc.

**10. Trong 8 nguyên tắc lập trình tin cậy (Slide 55), nguyên tắc nào giúp ngăn chặn việc các thành phần khác vô tình làm hỏng trạng thái chương trình?**
A. Check all inputs for validity.
B. Limit the visibility of information.
C. Provide a handler for all exceptions.
D. Name all constants.
đáp án: B
Giải thích: B đúng vì Slide 56 giải thích việc giới hạn tầm nhìn (Information Hiding/Encapsulation) ngăn chặn "accidental corruption of parts of the program state"; A, C, D phục vụ mục đích khác.

---

### **PHẦN 2: MỨC ĐỘ PHÂN TÍCH & ĐÁNH ĐỔI (ANALYSIS & TRADE-OFF) - 15 CÂU**
*Mục tiêu: Hiểu lý do, so sánh và đánh giá giải pháp.*

**11. Tại sao Slide 16 khẳng định "Loại bỏ 50% lỗi chưa chắc tăng độ tin cậy thêm 50%"?**
A. Vì lỗi phần mềm luôn tự sinh ra thêm.
B. Vì người dùng có thể thay đổi cách sử dụng sau khi lỗi được sửa.
C. Vì nếu 50% lỗi đó nằm ở phần chức năng người dùng hiếm khi dùng, trải nghiệm về độ tin cậy của họ sẽ không đổi.
D. Vì công cụ đo lường độ tin cậy không chính xác.
đáp án: C
Giải thích: C đúng vì Reliability là "perceived reliability" (độ tin cậy cảm nhận), lỗi ở vùng ít dùng (rarely executed code) không ảnh hưởng đến cảm nhận người dùng (Slide 16); A, B, D không phải lý do cốt lõi.

**12. Trong trường hợp hệ thống Bơm Insulin (Slide 30), tại sao POFOD lại là chỉ số quan trọng hơn Availability?**
A. Vì máy bơm chạy pin nên cần tiết kiệm điện.
B. Vì người dùng không quan tâm máy có chạy hay không, chỉ quan tâm máy có đẹp không.
C. Vì hậu quả của một lần bơm sai (Failure on demand) là nguy hiểm tính mạng, quan trọng hơn việc máy thỉnh thoảng ngừng hoạt động để bảo trì.
D. Vì máy bơm Insulin xử lý hàng nghìn giao dịch mỗi giây.
đáp án: C
Giải thích: C đúng vì Slide 30 nhấn mạnh đây là Safety-critical system, POFOD đo xác suất thất bại khi có yêu cầu (demand) là quan trọng nhất; D sai vì nhu cầu bơm thuốc không dồn dập như server; A, B không liên quan.

**13. Điểm yếu chí mạng ("Achilles heel") của phương pháp N-version programming được mô tả trong Slide 51 là gì?**
A. Chi phí phần cứng quá cao.
B. Specification Dependency (Phụ thuộc vào đặc tả).
C. Tốc độ xử lý chậm do phải chờ bỏ phiếu.
D. Khó tìm được 3 đội lập trình giỏi.
đáp án: B
Giải thích: B đúng vì nếu bản đặc tả (Specification) ban đầu sai hoặc gây hiểu nhầm, cả N phiên bản dù code độc lập vẫn sẽ làm sai giống hệt nhau, khiến cơ chế Voting vô dụng (Slide 51); A, C, D là nhược điểm nhưng không phải điểm yếu chí mạng về mặt lý thuyết độ tin cậy.

**14. Tại sao Slide 38 khuyên hệ thống bảo vệ (Protection Systems) nên "đơn giản" (simpler) hơn hệ thống điều khiển?**
A. Để giảm chi phí sản xuất.
B. Để dễ dàng kiểm chứng (validation) và đảm bảo độ tin cậy cao.
C. Để chạy nhanh hơn hệ thống chính.
D. Để không chiếm dụng tài nguyên CPU của hệ thống chính.
đáp án: B
Giải thích: B đúng vì Slide 38 nêu "less effort can be expended in validation and dependability assurance", sự đơn giản giúp giảm khả năng ẩn nấp của lỗi; A, C, D không phải lý do chính.

**15. Tại sao Slide 69 khuyên nên đặt tên cho các hằng số (Name all constants)?**
A. Để trình biên dịch tối ưu hóa bộ nhớ tốt hơn.
B. Để tránh lỗi nhập sai giá trị số (Human error) và dễ dàng bảo trì khi giá trị thực tế thay đổi.
C. Để mã nguồn trông chuyên nghiệp hơn.
D. Để giấu giá trị thực tế khỏi hacker.
đáp án: B
Giải thích: B đúng vì Slide 69 giải thích việc dùng tên giúp giảm lỗi gõ sai (typo) và chỉ cần sửa 1 chỗ khi giá trị thay đổi ("make the change in one place"); A, C, D không phải lý do về độ tin cậy.

**16. Xét về chi phí (Slide 8), tại sao hầu hết các dự án phần mềm thương mại (Non-critical) chấp nhận phát hành sản phẩm khi vẫn còn lỗi?**
A. Vì họ lười sửa lỗi.
B. Vì chi phí để tìm và sửa những lỗi cuối cùng tăng vọt theo hàm mũ, vượt quá lợi ích mang lại.
C. Vì khách hàng thích tìm lỗi giúp nhà sản xuất.
D. Vì không có công cụ nào phát hiện được hết lỗi.
đáp án: B
Giải thích: B đúng theo biểu đồ Slide 8, "The increasing costs of residual fault removal" cho thấy việc đạt độ tin cậy tuyệt đối là không khả thi về mặt kinh tế; A, C, D sai.

**17. Đối với hệ thống ATM (Slide 28), tại sao Database Service lại yêu cầu Availability cao hơn nhiều so với phần mềm trên từng máy ATM riêng lẻ?**
A. Vì Database chứa tiền.
B. Vì Database đắt tiền hơn máy ATM.
C. Vì nếu Database sập, toàn bộ mạng lưới ATM đều ngừng hoạt động (Critical dependency), còn 1 máy ATM hỏng chỉ ảnh hưởng ít người.
D. Vì Database chạy trên mainframe còn ATM chạy trên PC.
đáp án: C
Giải thích: C đúng vì Slide 28 phân tích sự phụ thuộc: "failure of this service means that all of the ATMs in the network are out of action"; A, B, D không giải thích bản chất kiến trúc.

**18. Điều gì khiến việc tạo "Hồ sơ vận hành" (Operational Profile) cho hệ thống mới (New systems) trở nên khó khăn (Slide 78)?**
A. Không có dữ liệu lịch sử và người dùng chưa hình thành thói quen sử dụng thực tế (Pattern of usage unknown).
B. Hệ thống mới thường có quá nhiều lỗi.
C. Người dùng từ chối cung cấp thông tin.
D. Công cụ test không hỗ trợ hệ thống mới.
đáp án: A
Giải thích: A đúng theo Slide 78 "Pattern of usage of new systems is unknown" và hồ sơ sẽ thay đổi khi người dùng quen dần; B, C, D không phải lý do chính.

**19. Trong kiến trúc Airbus (Slide 43), việc sử dụng chip (processors) từ các nhà sản xuất khác nhau cho kênh chính và kênh phụ là ví dụ của chiến lược nào?**
A. Hardware Redundancy.
B. Hardware Diversity.
C. Software Diversity.
D. N-version Programming.
đáp án: B
Giải thích: B đúng vì Slide 43 mô tả "Primary and secondary systems use chipsets from different manufacturers", đây là sự đa dạng về phần cứng; A chưa đủ (chỉ là dư thừa), C và D liên quan đến phần mềm.

**20. Slide 5 phân biệt "Fault" và "Error". Một đoạn mã sai (Fault) có thể KHÔNG dẫn đến Error trong trường hợp nào?**
A. Khi hệ thống có cơ chế Fault Tolerance.
B. Khi đoạn mã sai đó không bao giờ được thực thi (Never executed).
C. Khi lỗi đó là lỗi cú pháp.
D. Khi người dùng nhập dữ liệu đúng.
đáp án: B
Giải thích: B đúng theo Slide 5 "The faulty code may never be executed", lỗi nằm đó nhưng dòng lệnh không chạy thì trạng thái hệ thống không sai (Error); A liên quan đến Error -> Failure; C bị bắt lúc biên dịch.

**21. Tại sao dùng số thực dấu phẩy động (Floating-point numbers) lại được coi là "cấu trúc dễ gây lỗi" (Error-prone construct) trong Slide 63?**
A. Vì nó tốn bộ nhớ.
B. Vì nó vốn dĩ không chính xác (Inherently imprecise), dẫn đến các phép so sánh bằng có thể bị sai.
C. Vì nó không thể biểu diễn số âm.
D. Vì nó xử lý chậm hơn số nguyên.
đáp án: B
Giải thích: B đúng theo Slide 63 "The imprecision may lead to invalid comparisons"; A, C, D không phải lý do chính về độ tin cậy.

**22. Slide 62 cho rằng lỗi phần mềm thường do lập trình viên "mất dấu" (lose track) các mối quan hệ trong hệ thống. Điều này bị làm trầm trọng thêm bởi yếu tố nào?**
A. Màn hình máy tính quá nhỏ.
B. Ngôn ngữ lập trình phức tạp và thiếu tính năng kiểm tra lỗi tự động.
C. Lương lập trình viên thấp.
D. Thời gian làm việc quá dài.
đáp án: B
Giải thích: B đúng theo Slide 62 "exacerbated by error-prone constructs... inherently complex or that don't check for mistakes"; A, C, D là yếu tố ngoại cảnh.

**23. Sự khác biệt cốt lõi giữa "Reliability Testing" (Slide 72) và "Defect Testing" nằm ở đâu?**
A. Reliability Testing dùng dữ liệu "thông thường" (Operational Profile) để đo lường, Defect Testing dùng dữ liệu "bất thường" (Atypical) để tìm lỗi.
B. Reliability Testing do máy làm, Defect Testing do người làm.
C. Reliability Testing làm ở cuối dự án, Defect Testing làm ở đầu.
D. Reliability Testing rẻ hơn Defect Testing.
đáp án: A
Giải thích: A đúng vì Slide 72 nêu rõ sự khác biệt về dữ liệu đầu vào và mục đích; B, C, D không chính xác.

**24. Tại sao hệ thống tương tác (Interactive systems) lại gây khó khăn cho việc tạo Operational Profile tự động (Slide 78)?**
A. Vì giao diện đồ họa khó chụp ảnh.
B. Vì hành vi của con người khó dự đoán và mô phỏng tự động chính xác về mặt tần suất.
C. Vì hệ thống tương tác chạy chậm.
D. Vì hệ thống tương tác không có log file.
đáp án: B
Giải thích: B đúng theo ý "Automatic profile generation is difficult for interactive systems" trong Slide 78, ngụ ý sự tham gia của con người làm phức tạp việc tự động hóa; A, C, D sai.

**25. Việc "Kiểm tra biên mảng" (Check array bounds) trong Slide 67 chủ yếu nhằm ngăn chặn loại tấn công/lỗi nào?**
A. SQL Injection.
B. Buffer Overflow (Tràn bộ đệm).
C. Cross-site Scripting.
D. Denial of Service.
đáp án: B
Giải thích: B đúng vì Slide 67 đề cập trực tiếp đến "bounded buffer vulnerability" nơi kẻ tấn công viết code vào bộ nhớ bằng cách ghi vượt quá phần tử cuối của mảng; A, C, D là các loại lỗi khác.

---

### **PHẦN 3: MỨC ĐỘ ỨNG DỤNG (APPLICATION) - 15 CÂU**
*Mục tiêu: Tính toán, soi code, xử lý tình huống cụ thể.*

**26. Một hệ thống máy chủ ngân hàng xử lý trung bình 5000 giao dịch mỗi giờ. Để đo lường độ tin cậy, bạn nên chọn chỉ số nào (Slide 21)?**
A. POFOD.
B. ROCOF.
C. MTTF.
D. Probability of Success.
đáp án: B
Giải thích: B đúng vì Slide 21 đề xuất ROCOF cho hệ thống xử lý "large number of similar requests in a short time" như hệ thống thẻ tín dụng, ngân hàng; A dùng cho hệ thống ít yêu cầu; C dùng cho giao dịch dài.

**27. Một phần mềm xử lý ảnh vệ tinh mất trung bình 10 tiếng để render xong một bản đồ. Để đảm bảo quá trình này không bị đứt gánh giữa đường, bạn cần quan tâm đến chỉ số nào nhất (Slide 21)?**
A. Availability.
B. MTTF (Mean Time To Failure).
C. POFOD.
D. ROCOF.
đáp án: B
Giải thích: B đúng vì Slide 21 nêu MTTF phù hợp cho "systems with long transactions", MTTF phải lớn hơn thời gian xử lý (10 tiếng) thì mới hy vọng render xong.

**28. Dựa vào bảng Slide 23, nếu một hệ thống yêu cầu Availability là 0.99 (99%), thời gian ngừng hoạt động cho phép trong 24 giờ là bao nhiêu?**
A. 144 phút.
B. 14.4 phút.
C. 84 giây.
D. 1.44 phút.
đáp án: B
Giải thích: B đúng. Tra bảng Slide 23: 0.99 tương ứng với 14.4 phút/24h. (Tính toán: 24*60 * 0.01 = 14.4).

**29. Dựa vào bảng Slide 23, một hệ thống viễn thông yêu cầu Availability 0.9999 (4 số 9). Downtime cho phép mỗi ngày là?**
A. 84 giây.
B. 8.4 giây.
C. 0.84 giây.
D. 1 phút.
đáp án: B
Giải thích: B đúng. Tra bảng Slide 23: 0.9999 tương ứng với 8.4 giây/24h.

**30. Tình huống: Bạn review code và thấy dòng lệnh: `int* ptr = null; *ptr = 10;`. Đây là ví dụ của việc vi phạm nguyên tắc nào (Slide 63)?**
A. Floating-point numbers.
B. Unbounded arrays.
C. Pointers (referring to wrong memory areas).
D. Recursion.
đáp án: C
Giải thích: C đúng vì Slide 63 liệt kê Pointers là cấu trúc dễ lỗi, việc gán giá trị cho con trỏ null hoặc sai vùng nhớ sẽ gây crash; A, B, D không phải lỗi con trỏ.

**31. Tình huống: Một hàm đệ quy không có điều kiện dừng (`Base case`) hợp lý dẫn đến lỗi "Stack Overflow". Đây là minh họa cho rủi ro của cấu trúc nào (Slide 64)?**
A. Inheritance.
B. Interrupts.
C. Parallelism.
D. Recursion.
đáp án: D
Giải thích: D đúng vì Slide 64 nêu rõ "Errors in recursion can cause memory overflow as the program stack fills up"; A, B, C sai loại lỗi.

**32. Đoạn code sau: `char name[10]; gets(name);` (trong C, `gets` không kiểm tra độ dài nhập vào). Nếu người dùng nhập chuỗi 20 ký tự, hệ thống bị lỗi. Biện pháp phòng tránh phù hợp nhất theo Slide 67 là?**
A. Check array bounds / Size checks.
B. Restart capabilities.
C. Use timeouts.
D. Name all constants.
đáp án: A
Giải thích: A đúng vì Slide 67 (Check array bounds) và Slide 58 (Size checks) đều nhắm tới việc ngăn chặn dữ liệu nhập vượt quá kích thước bộ nhớ quy định; B, C, D không giải quyết lỗi này.

**33. Bạn đang viết yêu cầu cho hệ thống "Phanh khẩn cấp tàu hỏa". Hệ thống này 10 năm có thể không dùng, nhưng khi lái tàu ấn nút thì xác suất thất bại không được quá 1 phần vạn. Cách viết yêu cầu nào sau đây là chuẩn (Slide 18, 20)?**
A. "Hệ thống phanh phải có độ tin cậy rất cao."
B. "Hệ thống phanh phải có ROCOF = 0.0001."
C. "Hệ thống phanh phải có POFOD <= 0.0001."
D. "Hệ thống phanh phải có Availability = 99.99%."
đáp án: C
Giải thích: C đúng. Vì đây là hệ thống "on demand" (khi ấn nút), và cần định lượng cụ thể (Quantitatively - Slide 18). POFOD là metric chuẩn cho trường hợp này (Slide 20).

**34. Trong kiến trúc Self-monitoring (Slide 40), nếu Channel 1 ra kết quả "100", Channel 2 ra kết quả "101", bộ so sánh (Comparator) sẽ làm gì?**
A. Chọn 100 vì nó chẵn.
B. Chọn 101 vì nó lớn hơn.
C. Tính trung bình là 100.5.
D. Giả định có lỗi (Failure assumed) và báo ngoại lệ/ngắt hệ thống.
đáp án: D
Giải thích: D đúng theo nguyên lý Slide 39: "If the results are different, then a failure is assumed and a failure exception is raised".

**35. Một ứng dụng Web bán hàng online bị "treo" khi Database server bị quá tải. Lập trình viên đã quên áp dụng nguyên tắc nào để xử lý việc chờ đợi này (Slide 68)?**
A. Include timeouts when calling external components.
B. Check array bounds.
C. Limit visibility.
D. Use floating-point numbers.
đáp án: A
Giải thích: A đúng vì Slide 68 giải quyết vấn đề chờ đợi phản hồi từ thành phần bên ngoài (external components/remote computer) bằng Timeouts; B, C, D không liên quan đến việc treo do chờ đợi.

**36. Đối với hệ thống Bơm Insulin (Slide 30), lỗi "Transient failure" (tạm thời) có mức chấp nhận POFOD cao hơn lỗi "Permanent failure" (vĩnh viễn) vì lý do gì?**
A. Lỗi tạm thời có thể sửa được bằng hành động của người dùng (reset/recalibration).
B. Lỗi tạm thời ít tốn pin hơn.
C. Lỗi vĩnh viễn không được bảo hành.
D. Lỗi tạm thời khó phát hiện hơn.
đáp án: A
Giải thích: A đúng theo Slide 30: "Transient failures that can be repaired by user actions... A relatively low value of POFOD is acceptable".

**37. Trong mô hình N-version programming (Slide 44), cần tối thiểu bao nhiêu máy tính/phiên bản để cơ chế Voting (bỏ phiếu đa số) hoạt động hiệu quả khi có 1 máy bị sai?**
A. 2 (Chẵn).
B. 3 (Lẻ).
C. 1.
D. 4.
đáp án: B
Giải thích: B đúng vì Slide 44 ghi rõ "There should be an odd number... typically 3". Với 3 máy, nếu 1 sai, 2 máy kia sẽ thắng (2 vs 1). Nếu dùng 2 máy mà kết quả khác nhau thì không biết ai đúng ai sai.

**38. Một hệ thống kế toán sử dụng biến `float total_price` để tính tổng tiền. Khi số tiền quá lớn, các số lẻ thập phân bị sai lệch. Đây là ví dụ của nguyên tắc nào cần tránh (Slide 63)?**
A. Avoid Unconditional branch (goto).
B. Minimize Floating-point numbers usage.
C. Check Inputs.
D. Provide Restart capabilities.
đáp án: B
Giải thích: B đúng vì Slide 63 cảnh báo về "Imprecision" của số thực (floating-point), đặc biệt trong các phép tính tiền tệ cần chính xác tuyệt đối; A, C, D sai ngữ cảnh.

**39. Khi thiết kế một ứng dụng Word Processor (soạn thảo văn bản), tính năng nào sau đây đáp ứng nguyên tắc "Provide restart capabilities" (Slide 66)?**
A. Kiểm tra chính tả tự động.
B. Tự động lưu (Auto-save) định kỳ để khôi phục khi máy treo.
C. Đếm số từ trong văn bản.
D. Đổi màu font chữ.
đáp án: B
Giải thích: B đúng vì Slide 66 gợi ý "Save state periodically and restart from the saved state" để người dùng không phải làm lại từ đầu; A, C, D là tính năng chức năng thông thường.

**40. Bạn đang kiểm thử độ tin cậy cho một phần mềm. Bạn tạo ra một bộ dữ liệu test trong đó 99% là các ca lỗi (error cases) để xem hệ thống xử lý thế nào. Cách làm này có đúng với phương pháp "Statistical Testing" (Slide 72, 76) không?**
A. Đúng, vì phải test lỗi mới biết độ tin cậy.
B. Sai, vì dữ liệu test độ tin cậy phải theo "Operational Profile" (phản ánh tần suất dùng thực tế), không được thiên lệch về ca lỗi hiếm gặp.
C. Đúng, vì đây là cách test của Airbus.
D. Sai, vì 99% là quá ít, phải là 100%.
đáp án: B
Giải thích: B đúng. Slide 72 nói rõ dữ liệu reliability testing phải "replicates the pattern of inputs to be processed by the system". Nếu thực tế người dùng nhập đúng 99% mà bạn test sai 99% thì kết quả đo lường độ tin cậy sẽ sai lệch hoàn toàn so với thực tế.