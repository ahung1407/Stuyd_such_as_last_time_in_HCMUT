Chào bạn, đây là bộ câu hỏi trắc nghiệm được thiết kế chuyên biệt cho kỳ thi **được sử dụng tài liệu**. Các câu hỏi này không hỏi lại định nghĩa (vì bạn có thể tra cứu) mà tập trung vào **tình huống, sự hiểu biết bản chất và khả năng tư duy liên kết** giữa các slide, đúng như yêu cầu của bạn.

---

**1. Trong một dự án phần mềm y tế, đội ngũ kỹ thuật đang tranh luận về trách nhiệm bảo mật. Nhóm lập trình viên tập trung vào việc viết code để chống lại lỗi SQL Injection trên form nhập liệu, trong khi nhóm quản trị mạng (SysAdmin) tập trung cấu hình Firewall để chặn các IP lạ. Dựa trên sự phân chia "Security levels" và "Application/Infrastructure security", nhận định nào sau đây là chính xác nhất?**
A. Nhóm lập trình viên đang thực hiện Infrastructure security vì SQL Injection liên quan đến cơ sở dữ liệu hạ tầng.
B. Cả hai nhóm đều đang thực hiện Application security vì mục tiêu cuối cùng là bảo vệ ứng dụng y tế.
C. Nhóm lập trình viên thực hiện Application security (thiết kế chống tấn công), còn nhóm SysAdmin thực hiện Infrastructure security (cấu hình môi trường).
D. Nhóm SysAdmin chịu trách nhiệm chính về Security Engineering, còn nhóm lập trình viên chỉ chịu trách nhiệm về Reliability.
đáp án: C
Giải thích: C đúng vì theo Slide 5 và Slide 7, Application security là vấn đề kỹ nghệ phần mềm nơi hệ thống được "thiết kế" (designed) để chống lại tấn công (như code chống SQL Injection), còn Infrastructure security là vấn đề quản trị hệ thống nơi hạ tầng được "cấu hình" (configured) để bảo vệ (như Firewall); A sai vì SQL Injection là lỗ hổng tầng ứng dụng; B sai vì Firewall thuộc tầng hạ tầng mạng; D sai vì Security Engineering tập trung chính vào Application security (Slide 7).

**2. Một kẻ tấn công thực hiện gửi hàng triệu yêu cầu giả mạo đến máy chủ Database của hệ thống Mentcare, khiến các bác sĩ không thể truy cập được hồ sơ bệnh án để kê đơn thuốc. Hành động này tấn công vào khía cạnh nào của tam giác CIA và thuộc loại mối đe dọa (Threat type) nào?**
A. Confidentiality và Interception.
B. Availability và Interruption.
C. Integrity và Modification.
D. Integrity và Fabrication.
đáp án: B
Giải thích: B đúng vì theo Slide 4 và Slide 15, Availability (Tính sẵn sàng) bị ảnh hưởng khi hệ thống không thể truy cập được, và hành động làm ngưng trệ dịch vụ (như DoS) được phân loại là Interruption threat (Làm gián đoạn); A sai vì Interception là đánh cắp/xem trộm (Confidentiality); C và D sai vì dữ liệu không bị sửa đổi hay bịa đặt thêm mà chỉ là không truy cập được.

**3. Trong hệ thống an toàn (Safety-critical system), cơ chế "tự động tắt máy" (Shutdown) thường được kích hoạt khi phát hiện lỗi nguy hiểm để bảo vệ con người. Tuy nhiên, dưới góc độ Kỹ nghệ An ninh (Security Engineering), tại sao cơ chế này lại bị coi là một điểm yếu tiềm tàng?**
A. Vì tắt máy sẽ làm mất dữ liệu chưa kịp lưu, ảnh hưởng đến tính Integrity.
B. Vì kẻ tấn công có thể cố tình kích hoạt cơ chế này để thực hiện tấn công từ chối dịch vụ (DoS).
C. Vì việc tắt máy làm giảm hiệu năng hệ thống, vi phạm nguyên tắc cân bằng Usability.
D. Vì hệ thống tắt máy sẽ không thể ghi log hành vi của kẻ tấn công.
đáp án: B
Giải thích: B đúng vì theo Slide 30 (so sánh Security và Safety), một sự khác biệt lớn là trong Safety, shutdown là trạng thái an toàn, nhưng trong Security, việc ép hệ thống shutdown (làm mất tính Availability) có thể chính là mục đích của cuộc tấn công; A, C, D là các hệ quả phụ nhưng không phải là lý do cốt lõi về sự mâu thuẫn triết lý thiết kế giữa Safety và Security được đề cập trong bài.

**4. Khi thiết kế kiến trúc cho hệ thống Mentcare, kiến trúc sư quyết định lưu trữ "Thông tin định danh bệnh nhân" (tên, tuổi) trên Server A và "Lịch sử điều trị" trên Server B. Hai server này chạy hai hệ điều hành khác nhau. Quyết định này tuân theo nguyên tắc thiết kế nào và nhằm mục đích chính là gì?**
A. Nguyên tắc "Fail securely" để đảm bảo server hỏng thì dữ liệu tự khóa.
B. Nguyên tắc "Compartmentalize" (Chia khoang) và "Diversity" (Đa dạng hóa) để giảm thiểu rủi ro mất toàn bộ dữ liệu nếu một server bị hack.
C. Nguyên tắc "Design for recoverability" để dễ dàng sao lưu dữ liệu từ server này sang server kia.
D. Nguyên tắc "Log user actions" để dễ dàng theo dõi truy cập chéo giữa hai server.
đáp án: B
Giải thích: B đúng vì theo Slide 57 (Distribution) và Slide 62-63 (Guidelines), việc phân tán tài sản (Distribution/Compartmentalize) giúp giới hạn thiệt hại (hacker vào Server A không thấy lịch sử bệnh ở Server B), và dùng hệ điều hành khác nhau (Diversity) giúp tránh việc một lỗ hổng chung (common vulnerability) làm sập cả hai máy; A sai vì đây không phải cơ chế fail secure; C sai vì phân tán làm backup phức tạp hơn; D sai vì không liên quan trực tiếp đến logging.

**5. Một công ty áp dụng chính sách bảo mật buộc nhân viên thay đổi mật khẩu 3 ngày một lần và mật khẩu phải dài 20 ký tự bao gồm ký tự đặc biệt. Sau một tuần, bộ phận IT phát hiện nhân viên dán giấy ghi mật khẩu lên màn hình máy tính. Tình huống này minh họa rõ nhất cho vấn đề nào trong Kỹ nghệ An ninh?**
A. Lỗ hổng về Infrastructure Security do không có công nghệ nhận diện giấy nhớ.
B. Sự xung đột giữa Security và Reliability (Độ tin cậy).
C. Sự đánh đổi (Trade-off) giữa Security và Usability/Operational security.
D. Thất bại trong việc thực hiện Risk Avoidance.
đáp án: C
Giải thích: C đúng vì theo Slide 9 (Operational security) và Slide 46 (Design compromises), bảo mật quá chặt chẽ làm giảm tính khả dụng (Usability), khiến người dùng tìm cách "lách luật" (viết pass ra giấy) để làm việc dễ hơn, vô tình tạo ra lỗ hổng lớn hơn; A sai vì đây là lỗi hành vi con người; B sai vì Reliability liên quan đến lỗi hệ thống; D sai vì đây là vấn đề quản lý vận hành.

**6. Trong biểu đồ Misuse Case của hệ thống Mentcare, kịch bản "Intercept transfer" (Đánh chặn đường truyền) đã dẫn đến yêu cầu kỹ thuật cụ thể nào cho hệ thống?**
A. Yêu cầu xác thực người dùng bằng sinh trắc học.
B. Yêu cầu sử dụng giao thức SSL/HTTPS cho mọi giao tiếp giữa Client và Server.
C. Yêu cầu lưu trữ log ở một máy chủ tách biệt.
D. Yêu cầu dữ liệu bệnh nhân phải được xóa khỏi máy Client sau khi upload.
đáp án: B
Giải thích: B đúng vì theo Slide 42 và Slide 43, phân tích Misuse case về việc kẻ tấn công nghe lén đường truyền (Interception) dẫn đến biện pháp giảm nhẹ (Mitigation) là mã hóa đường truyền, cụ thể là yêu cầu sử dụng Certificate-based communication (SSL/HTTPS); A là để chống giả mạo người dùng; C là để bảo vệ tính toàn vẹn của nhật ký; D là để bảo vệ dữ liệu cục bộ, không phải đường truyền.

**7. Tại sao trong Kỹ nghệ An ninh, việc sử dụng ngôn ngữ lập trình C/C++ lại được coi là chứa đựng nhiều rủi ro hơn so với Java hay C#, mặc dù C/C++ cho hiệu năng cao hơn?**
A. Vì C/C++ là ngôn ngữ cũ nên không hỗ trợ các thư viện mã hóa hiện đại.
B. Vì C/C++ không có cơ chế tự động kiểm tra biên mảng (array bound checking), dễ dẫn đến lỗi Buffer Overflow.
C. Vì C/C++ là mã nguồn mở nên hacker dễ dàng đọc hiểu code và tìm lỗ hổng.
D. Vì các hệ thống viết bằng C/C++ không thể chạy trên môi trường Web.
đáp án: B
Giải thích: B đúng vì theo Slide 65, lỗ hổng thường phụ thuộc ngôn ngữ, C/C++ cho phép can thiệp sâu vào bộ nhớ và không tự check biên mảng, kẻ tấn công có thể khai thác Buffer Overflow để ghi đè mã lệnh và chiếm quyền; A sai vì C/C++ có đầy đủ thư viện; C sai vì ngôn ngữ nào cũng có thể bị đọc code nếu lộ hoặc dịch ngược; D sai vì C/C++ vẫn làm backend cho Web được.

**8. Một hệ thống quản lý tài chính được thiết kế theo nguyên tắc "Fail Securely". Khi tường lửa (Firewall) của hệ thống gặp sự cố phần cứng và ngừng hoạt động, hệ thống phải phản ứng như thế nào để tuân thủ nguyên tắc này?**
A. Tự động khởi động lại và trong thời gian chờ đợi, cho phép mọi kết nối đi qua để đảm bảo tính Availability.
B. Chặn tất cả các kết nối ra/vào (Block all traffic) cho đến khi tường lửa hoạt động trở lại.
C. Chuyển sang chế độ "Log only" (Chỉ ghi nhật ký) nhưng không chặn kết nối.
D. Gửi email cảnh báo cho quản trị viên và vẫn duy trì hoạt động bình thường.
đáp án: B
Giải thích: B đúng vì theo Slide 61 (Design guideline 3), "Fail securely" nghĩa là khi hệ thống thất bại, nó phải giữ trạng thái an toàn cho tài sản (ở đây là mạng nội bộ). Việc chặn tất cả (mất Availability) an toàn hơn là cho phép tất cả (mất Confidentiality/Integrity) khi lớp bảo vệ bị hỏng; A, C, D đều khiến hệ thống mở toang trước các cuộc tấn công khi lớp bảo vệ vắng mặt.

**9. Khi thực hiện kiểm thử an ninh (Security Testing), tại sao Tester rất khó để khẳng định "Hệ thống này đã an toàn 100%"?**
A. Vì thiếu công cụ kiểm thử tự động cho các lỗ hổng mới.
B. Vì các yêu cầu an ninh thường là yêu cầu dạng "Shall not" (Không được xảy ra), rất khó để chứng minh một điều gì đó *không bao giờ* xảy ra.
C. Vì chi phí kiểm thử an ninh (Pen-test) quá cao nên các công ty thường bỏ qua.
D. Vì mã nguồn hệ thống liên tục thay đổi nên các bài test cũ bị vô hiệu hóa ngay lập tức.
đáp án: B
Giải thích: B đúng vì theo Slide 68 và Slide 72, thách thức lớn nhất của kiểm thử an ninh là các yêu cầu thường quy định điều "không được phép xảy ra". Tester chỉ có thể chứng minh hệ thống có lỗi (khi tìm thấy), chứ không thể chứng minh hệ thống sạch bóng lỗi trước mọi kịch bản tấn công chưa biết của các hacker thông minh; A, C, D là các yếu tố phụ, không phải bản chất lý thuyết kiểm thử được nêu trong bài.

**10. Trong báo cáo đánh giá rủi ro sơ bộ (Preliminary risk assessment) của Mentcare, tài sản "Cơ sở dữ liệu bệnh nhân" (Patient Database) được đánh giá có mức độ thiệt hại (Exposure) cao hơn nhiều so với "Hồ sơ bệnh nhân cá nhân" (Individual patient record). Lý do kinh tế/kỹ thuật chính cho sự phân loại này là gì?**
A. Vì hồ sơ cá nhân đã được mã hóa còn Database thì không.
B. Vì mất Database làm gián đoạn hoạt động của toàn bộ phòng khám (mất Availability diện rộng), trong khi mất 1 hồ sơ chỉ ảnh hưởng cục bộ.
C. Vì Database có dung lượng lớn hơn nên tốn tiền mua ổ cứng backup hơn.
D. Vì Hacker thường chỉ thích tấn công Database chứ không thích tấn công hồ sơ lẻ.
đáp án: B
Giải thích: B đúng vì theo Slide 36, Database hỗ trợ tất cả các ca khám bệnh lâm sàng, việc mất nó khiến phòng khám phải hủy lịch, gây thiệt hại tài chính lớn và có thể gây hại cho nhiều bệnh nhân (Safety critical). Trong khi đó, rủi ro của một bản ghi lẻ thường chỉ là mất uy tín hoặc thiệt hại pháp lý nhỏ hơn; A sai vì Slide 38 yêu cầu cả Client (hồ sơ lẻ) cũng phải mã hóa; C và D không phải là lý do chính được nêu trong phương pháp đánh giá Asset Value.
Để trả lời câu hỏi liệu bạn đã "master" (thành thạo) chương này chưa, tôi đánh giá như sau:
*   **Mức độ hiểu:** Nếu bạn đã đọc kỹ phần phân tích Slide và trả lời đúng 8/10 câu hỏi ở phần trước, bạn đã nắm được **80% - Mức độ Khá**. Bạn hiểu các khái niệm cốt lõi (CIA, Safety vs Security, Layers).
*   **Mức độ Master (Xuất sắc):** Để đạt 100%, bạn cần nắm vững các **chi tiết nhỏ**, các **bước quy trình** cụ thể và các **lý do kỹ thuật** đằng sau các quyết định thiết kế (Tại sao dùng Web form lại khó log? Tại sao COTS lại rủi ro?...).

Để giúp bạn đạt mức "Master" và tự tin tuyệt đối khi mang tài liệu vào phòng thi, tôi đã soạn thêm **10 câu hỏi nâng cao**. Các câu này đi sâu vào chi tiết quy trình và các tình huống dễ gây nhầm lẫn hơn.

---

**11. Trong quy trình đánh giá rủi ro an ninh (Security Risk Assessment), bước "Attack assessment" (Đánh giá tấn công) diễn ra ngay sau bước nào và mục đích chính của nó là gì?**
A. Sau bước "Control identification"; mục đích là để kiểm tra xem biện pháp kiểm soát có chặn được tấn công không.
B. Sau bước "Threat identification"; mục đích là phân rã các mối đe dọa (threats) thành các kịch bản tấn công cụ thể để hiểu cách chúng xảy ra.
C. Sau bước "Asset value assessment"; mục đích là xác định kẻ tấn công muốn tài sản nào.
D. Sau bước "Feasibility assessment"; mục đích là tính toán chi phí của cuộc tấn công.
đáp án: B
Giải thích: B đúng vì theo sơ đồ Slide 33 và chi tiết Slide 35, sau khi xác định được mối đe dọa (Threat identification), ta cần thực hiện "Attack assessment" để phân rã threat đó thành các bước tấn công cụ thể (Decompose threats into possible attacks) trước khi đề xuất biện pháp kiểm soát (Control identification); A sai vì Control nằm sau Attack; C sai vì Asset value nằm ở giai đoạn đầu; D sai vì Feasibility là bước cuối trước khi ra yêu cầu.

**12. Hệ thống Mentcare sử dụng các biểu mẫu web (Web forms) để nhập liệu lâm sàng. Theo Slide 52, nhược điểm cụ thể về mặt bảo mật của lựa chọn công nghệ này so với ứng dụng Desktop chuyên biệt là gì?**
A. Web forms không hỗ trợ mã hóa SSL.
B. Web forms dễ bị người dùng nhập sai dữ liệu hơn.
C. Khả năng ghi log chi tiết (Fine-grain logging) các thay đổi của người dùng là bất khả thi hoặc rất khó thực hiện.
D. Web forms bắt buộc người dùng phải lưu mật khẩu trên trình duyệt.
đáp án: C
Giải thích: C đúng vì theo Slide 52, một lỗ hổng/hạn chế cụ thể của việc dùng "editable web forms" là "Fine-grain logging of changes is impossible" (Khó ghi log chi tiết từng thao tác nhỏ như con trỏ chuột, gõ phím, so với ứng dụng desktop); A sai vì Web form chạy trên HTTPS được; B và D không phải là nhược điểm kỹ thuật đặc thù được nhắc đến trong bài học về công nghệ này.

**13. Một trong những hướng dẫn lập trình tin cậy (Dependable programming guidelines - Slide 66) là "Limit the visibility of information" (Hạn chế tầm nhìn thông tin). Trong lập trình hướng đối tượng, điều này tương ứng với hành động nào?**
A. Sử dụng các biến toàn cục (Global variables) để dễ kiểm soát.
B. Không sử dụng các cấu trúc dễ gây lỗi như con trỏ (pointers).
C. Sử dụng `private` hoặc `protected` cho các thuộc tính thay vì `public` để thực hiện che giấu thông tin (Information Hiding).
D. Luôn kiểm tra biên mảng (Array bounds) trước khi truy cập.
đáp án: C
Giải thích: C đúng vì "Limit visibility" nghĩa là ẩn các chi tiết hiện thực bên trong và chỉ lộ ra giao diện cần thiết, trong code tương ứng với việc dùng access modifiers (private/protected) để thành phần bên ngoài không thể truy cập trái phép dữ liệu nội bộ; A sai vì biến toàn cục làm tăng visibility (ngược lại); B và D là các nguyên tắc khác (Minimize error-prone constructs và Check array bounds).

**14. Phân biệt giữa "Vulnerability" (Lỗ hổng) và "Exposure" (Phơi nhiễm/Thiệt hại) dựa trên định nghĩa tại Slide 13. Tình huống nào sau đây mô tả đúng về Exposure?**
A. Hệ thống sử dụng mật khẩu mặc định "admin/admin".
B. Hacker đoán được mật khẩu của bác sĩ trưởng khoa.
C. Bệnh viện bị kiện và mất uy tín nghiêm trọng sau khi dữ liệu bệnh nhân bị rò rỉ lên mạng.
D. Hệ thống không có phần mềm diệt virus.
đáp án: C
Giải thích: C đúng vì Exposure được định nghĩa là "Possible loss or harm" (Mất mát hoặc tổn hại) xảy ra *sau khi* cuộc tấn công thành công (Loss of reputation, financial loss); A và D là Vulnerability (Điểm yếu); B là một phần của quá trình Attack (Tấn công) hoặc Threat (Mối đe dọa) thành hiện thực, chưa phải là hậu quả cuối cùng.

**15. Tại sao Slide 69 nhận định rằng "Formal verification" (Kiểm chứng hình thức) không phải là phương pháp phổ biến áp dụng cho mọi hệ thống, mặc dù nó rất chính xác?**
A. Vì nó không thể phát hiện được lỗi logic.
B. Vì nó yêu cầu một đặc tả an ninh hình thức (formal security specification) và thường tốn kém, phức tạp, chỉ dành cho các hệ thống cực kỳ quan trọng.
C. Vì hacker có thể dễ dàng vượt qua các chứng minh toán học.
D. Vì nó chỉ áp dụng được cho phần cứng, không áp dụng được cho phần mềm.
đáp án: B
Giải thích: B đúng vì Formal verification dựa trên toán học để chứng minh hệ thống tuân thủ đặc tả, quy trình này rất tốn công sức và tiền bạc (resource-intensive), nên chỉ dùng cho các hệ thống lõi/an toàn cao; A sai vì nó rất giỏi phát hiện lỗi logic; C sai vì toán học là tuyệt đối; D sai vì nó áp dụng tốt cho cả phần mềm.

**16. Trong mô hình bảo vệ phân lớp (Layered protection architecture - Slide 56), chức năng "Transaction management" (Quản lý giao dịch) nằm ở tầng bảo vệ nào?**
A. Platform level protection.
B. Application level protection.
C. Record level protection.
D. Network level protection.
đáp án: B
Giải thích: B đúng vì theo sơ đồ Slide 56, "Transaction management" cùng với "Database login/authorization" nằm ở tầng giữa là **Application level protection** (Bảo vệ mức ứng dụng); A là System authentication; C là Record encryption; D không có trong sơ đồ này.

**17. Khi đề cập đến "Operational Security" (An ninh vận hành) ở Slide 9, giảng viên nhấn mạnh một "Trade-off" (Sự đánh đổi) quan trọng. Đó là sự đánh đổi giữa hai yếu tố nào?**
A. System Security (An ninh hệ thống) và System Effectiveness/Usability (Hiệu quả/Tiện dụng).
B. Cost (Chi phí) và Performance (Hiệu năng).
C. Confidentiality (Bảo mật) và Integrity (Toàn vẹn).
D. Hardware security (An ninh phần cứng) và Software security (An ninh phần mềm).
đáp án: A
Giải thích: A đúng vì theo Slide 9, "Users sometimes take insecure actions to make it easier for them to do their jobs" (Người dùng làm tắt để dễ việc), dẫn đến mâu thuẫn giữa việc giữ hệ thống an toàn và việc giúp hệ thống dễ dùng/hiệu quả cho công việc; B, C, D là các đánh đổi khác nhưng không phải trọng tâm của slide về Operational Security.

**18. Slide 23 đề cập đến việc "Phân loại mức độ bảo vệ" (Level of protection). Tại sao chúng ta không bảo vệ tất cả tài sản ở mức độ cao nhất (Stringent security procedures)?**
A. Vì công nghệ hiện tại chưa cho phép bảo vệ mọi thứ.
B. Vì như vậy sẽ làm chậm hệ thống đến mức không dùng được.
C. Vì lý do "Cost-effective" (Hiệu quả chi phí) - không đáng để chi quá nhiều tiền bảo vệ những tài sản không quan trọng hoặc có thể công khai.
D. Vì bảo vệ quá kỹ sẽ khiến hacker càng tò mò và tấn công mạnh hơn.
đáp án: C
Giải thích: C đúng vì theo Slide 21 và 23, nguyên tắc kinh doanh là "No point in spending more than the value of an asset" (Không chi nhiều hơn giá trị tài sản). Nhiều thông tin có thể "freely available" nên không cần bảo vệ gắt gao gây lãng phí; B là một lý do phụ (Performance) nhưng lý do kinh tế (Cost) mới là yếu tố quyết định trong quản lý doanh nghiệp.

**19. Trong bảng phân tích rủi ro sơ bộ của Mentcare (Slide 37), một mối đe dọa là "Unauthorized user gains access... and accesses confidential information" (Người dùng trái phép truy cập dữ liệu mật). Biện pháp kiểm soát (Control) được đề xuất là "Require biometric mechanism" (Dùng sinh trắc học). Tuy nhiên, phần đánh giá tính khả thi (Feasibility) đã cảnh báo điều gì về giải pháp này?**
A. Giải pháp này không an toàn về mặt kỹ thuật.
B. Giải pháp này rẻ tiền nhưng khó cài đặt.
C. Giải pháp khả thi kỹ thuật nhưng chi phí cao (High cost) và có thể gặp sự phản kháng của người dùng (User resistance).
D. Giải pháp này làm chậm hệ thống đáng kể.
đáp án: C
Giải thích: C đúng vì theo cột Feasibility ở Slide 37, việc dùng sinh trắc học (vân tay, mống mắt) cho tất cả user được đánh giá là "Technically feasible but high cost solution. Possible user resistance" (Khả thi nhưng đắt và người dùng có thể không thích/phản đối); A sai vì nó an toàn; B sai vì nó không rẻ.

**20. "Interception threats" (Mối đe dọa đánh chặn) tấn công vào thuộc tính nào của an ninh và "Fabrication threats" (Mối đe dọa bịa đặt) tấn công vào thuộc tính nào? (Dựa trên Slide 15-16)**
A. Interception -> Integrity; Fabrication -> Confidentiality.
B. Interception -> Availability; Fabrication -> Integrity.
C. Interception -> Confidentiality; Fabrication -> Integrity.
D. Interception -> Confidentiality; Fabrication -> Availability.
đáp án: C
Giải thích: C đúng vì Interception là hành vi xem trộm/lấy cắp thông tin (vi phạm tính Bí mật - Confidentiality); Fabrication là hành vi chèn thông tin giả vào hệ thống (vi phạm tính Toàn vẹn/Đúng đắn - Integrity); A ngược; B sai vì Availability liên quan đến Interruption; D sai vì Fabrication không làm sập hệ thống.

---
**Lời khuyên cuối cùng:**
Nếu bạn trả lời đúng 18-20/20 câu (tính cả 10 câu trước), bạn đã thực sự **Master** chương này. Khi đi thi:
1.  Đọc keyword trong câu hỏi (ví dụ: "Safety" vs "Security", "Platform layer" vs "App layer").
2.  Mở mục lục (Slide 2) để định vị nhanh vùng kiến thức.
3.  Tra cứu bảng thuật ngữ (Slide 13) và sơ đồ (Slide 33, 56) để xác nhận đáp án.

Chúc bạn thi tốt!