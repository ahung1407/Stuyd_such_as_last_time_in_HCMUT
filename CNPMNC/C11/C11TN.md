Chào bạn, đây là bộ câu hỏi trắc nghiệm thiên về **tư duy và hiểu bản chất**, được thiết kế sát với tài liệu bạn có để phục vụ cho việc thi đề mở. Các câu hỏi này buộc bạn phải tra cứu đúng chỗ và hiểu mối liên hệ giữa các khái niệm.

**1. Trong mối quan hệ giữa Fault (Lỗi tiềm ẩn), Error (Lỗi trạng thái) và Failure (Thất bại hệ thống), phát biểu nào sau đây là chính xác nhất theo tài liệu?**
A. Mọi Fault trong mã nguồn chắc chắn sẽ dẫn đến Error khi chương trình được biên dịch.
B. Một Error có thể được hệ thống tự phát hiện và sửa chữa (recovery) nên không nhất thiết dẫn đến Failure.
C. Failure luôn xảy ra trước, sau đó người ta mới tìm thấy Error và Fault tương ứng.
D. Fault và Error là hai khái niệm đồng nghĩa, chỉ khác nhau về cách gọi tên trong các giai đoạn phát triển.
đáp án: B
Giải thích: B đúng vì slide 5 có nêu "Errors do not necessarily lead to system failures" nếu có cơ chế tự sửa lỗi; A sai vì Fault có thể nằm ở đoạn code không bao giờ được chạy tới; C sai vì chuỗi phản ứng là Fault -> Error -> Failure; D sai vì Fault là lỗi code tĩnh còn Error là trạng thái sai động.

**2. Một hệ thống máy chủ phục vụ video streaming bị sập (crash) trung bình 2 lần mỗi ngày, nhưng nhờ cơ chế tự động khởi động lại cực nhanh, nó chỉ mất 1 giây để hoạt động trở lại. Đánh giá nào sau đây là đúng về hệ thống này?**
A. Hệ thống có Reliability cao và Availability thấp.
B. Hệ thống có Reliability thấp và Availability thấp.
C. Hệ thống có Reliability thấp và Availability cao.
D. Hệ thống có Reliability cao và Availability cao.
đáp án: C
Giải thích: C đúng vì hệ thống bị lỗi thường xuyên (2 lần/ngày) nên Độ tin cậy (Reliability) thấp, nhưng thời gian chết quá ngắn (chỉ 1 giây) nên tổng thời gian hoạt động vẫn rất lớn dẫn đến Tính sẵn sàng (Availability) cao; A, B, D sai do định nghĩa ngược về Reliability và Availability trong slide 10 và 22.

**3. Bạn đang thiết kế hệ thống túi khí (airbag) cho xe hơi. Hệ thống này có thể không hoạt động cả năm, nhưng khi có va chạm mạnh xảy ra (yêu cầu), nó bắt buộc phải bung ra. Chỉ số đo lường độ tin cậy nào là phù hợp nhất để đưa vào tài liệu yêu cầu (Slide 20)?**
A. ROCOF (Rate of Occurrence of Failures).
B. MTTF (Mean Time To Failure).
C. Availability (Tính sẵn sàng).
D. POFOD (Probability of Failure on Demand).
đáp án: D
Giải thích: D đúng vì POFOD dùng cho các hệ thống bảo vệ có yêu cầu không thường xuyên (intermittent) nhưng hậu quả nghiêm trọng; A và B sai vì dùng cho hệ thống xử lý giao dịch liên tục; C sai vì Availability quan tâm đến thời gian uptime trong khi túi khí quan tâm đến xác suất kích hoạt thành công tại thời điểm va chạm.

**4. Kỹ thuật "N-version programming" sử dụng 3 đội lập trình độc lập để viết 3 phiên bản phần mềm khác nhau cho cùng một hệ thống. Tuy nhiên, kỹ thuật này vẫn không thể đảm bảo độ tin cậy tuyệt đối chủ yếu là do nguyên nhân nào (Slide 51)?**
A. Do phần cứng không đủ mạnh để chạy 3 phiên bản cùng lúc.
B. Do các đội lập trình thường sử dụng chung một ngôn ngữ lập trình.
C. Do lỗi phụ thuộc vào đặc tả (Specification dependency) - nếu đặc tả sai, cả 3 đội đều làm sai giống nhau.
D. Do chi phí kiểm thử quá cao không thể thực hiện hết các trường hợp.
đáp án: C
Giải thích: C đúng vì slide 51 nhấn mạnh cả phần cứng và phần mềm dư thừa đều nhạy cảm với lỗi đặc tả (specification errors), dẫn đến lỗi điểm chung (common mode failures); A, B, D không phải là nguyên nhân gốc rễ về mặt lý thuyết làm hạn chế độ tin cậy của phương pháp này.

**5. Một lập trình viên viết đoạn code: `float a = 1.0; float b = 0.9999999; if (a == b) {...}`. Theo hướng dẫn lập trình tin cậy (Dependable programming), đoạn code này vi phạm nguyên tắc nào và tiềm ẩn rủi ro gì (Slide 63)?**
A. Vi phạm nguyên tắc kiểm tra biên mảng (Array bounds), gây lỗi tràn bộ đệm.
B. Sử dụng cấu trúc dễ gây lỗi (Error-prone constructs) là số thực dấu phẩy động, gây so sánh không chính xác.
C. Vi phạm nguyên tắc giới hạn tầm nhìn (Limit visibility), gây rò rỉ dữ liệu.
D. Sử dụng con trỏ (Pointers) sai cách, gây tham chiếu sai vùng nhớ.
đáp án: B
Giải thích: B đúng vì slide 63 xếp "Floating-point numbers" vào nhóm cấu trúc dễ gây lỗi do tính không chính xác (imprecision) dẫn đến so sánh không hợp lệ; A, C, D là các loại lỗi khác không liên quan đến kiểu dữ liệu số thực (float) trong đoạn code trên.

**6. Tại sao dữ liệu dùng để "Kiểm thử tìm lỗi" (Defect testing) thông thường không thể dùng để đo lường chính xác Độ tin cậy (Reliability measurement) của phần mềm (Slide 72)?**
A. Vì dữ liệu kiểm thử tìm lỗi thường tập trung vào các trường hợp ngoại lệ, dữ liệu "dị" không phản ánh đúng tần suất sử dụng thực tế (Operational profile).
B. Vì dữ liệu kiểm thử tìm lỗi quá ít, không đủ số lượng để tính toán thống kê.
C. Vì kiểm thử tìm lỗi được thực hiện bởi đội ngũ phát triển, còn đo lường độ tin cậy phải do khách hàng làm.
D. Vì các công cụ đo lường độ tin cậy không đọc được định dạng dữ liệu của kiểm thử tìm lỗi.
đáp án: A
Giải thích: A đúng vì slide 72 và 76 nhấn mạnh đo lường độ tin cậy cần "Operational profile" phản ánh đúng tần suất sử dụng thực tế, trong khi Defect testing lại cố tình tìm các ca hiếm gặp (atypical) để phá vỡ hệ thống; B, C, D không phải lý do chính xác về mặt phương pháp luận.

**7. Trong kiến trúc tự giám sát (Self-monitoring architecture) được áp dụng trên máy bay Airbus, tại sao hệ thống lại yêu cầu các kênh (channels) phải sử dụng phần cứng và phần mềm khác nhau (Diversity) (Slide 41)?**
A. Để tiết kiệm chi phí mua bản quyền phần mềm từ một nhà cung cấp duy nhất.
B. Để tăng tốc độ xử lý bằng cách cộng gộp sức mạnh của các chip khác nhau.
C. Để đảm bảo nếu có một lỗi phần cứng hoặc lỗi logic phần mềm xảy ra, nó sẽ không ảnh hưởng đến tất cả các kênh cùng một lúc (Common mode failure).
D. Để hệ thống có thể chạy được trên nhiều quốc gia với các tiêu chuẩn điện áp khác nhau.
đáp án: C
Giải thích: C đúng vì mục tiêu của Diversity (Sự đa dạng) trong slide 41 là tránh lỗi điểm chung, đảm bảo bộ so sánh (Comparator) phát hiện được sự khác biệt đầu ra; A sai vì làm vậy tốn kém hơn nhiều; B sai vì đây là hệ thống chạy song song kiểm tra chéo chứ không phải cộng gộp hiệu năng; D không liên quan.

**8. Hành động nào sau đây là ví dụ tốt nhất cho nguyên tắc "Fault Avoidance" (Tránh lỗi) trong quản lý lỗi (Slide 6)?**
A. Trang bị thêm một máy phát điện dự phòng để chạy khi mất điện.
B. Áp dụng quy trình kiểm tra đầu vào (Input validation) nghiêm ngặt và sử dụng ngôn ngữ lập trình kiểu mạnh (Strong typing) để hạn chế lỗi cú pháp.
C. Viết các kịch bản kiểm thử (Test cases) để chạy thử chương trình trước khi giao cho khách hàng.
D. Thiết kế hệ thống tự động khởi động lại dịch vụ (Service restart) khi bị treo.
đáp án: B
Giải thích: B đúng vì đây là các kỹ thuật áp dụng trong quá trình phát triển để giảm thiểu khả năng sinh ra lỗi (Slide 6); A và D là Fault Tolerance (Chịu lỗi); C là Fault Detection (Phát hiện lỗi).
Tuyệt vời. Để đạt đến trình độ "Master" và hiểu sâu sắc (Deep understanding), chúng ta cần những câu hỏi đi vào **bản chất vấn đề, các ngoại lệ và sự đánh đổi (trade-offs)**, chứ không chỉ là định nghĩa đơn thuần.

Dưới đây là bộ câu hỏi nâng cao, xoáy vào những điểm dễ gây nhầm lẫn nhất trong slide:

**1. Slide 16 có nhận định: "Loại bỏ X% lỗi trong hệ thống không nhất thiết cải thiện độ tin cậy thêm X%". Nguyên nhân sâu xa nhất của hiện tượng này là gì?**
A. Vì các lỗi được loại bỏ có thể nằm trong những phần code rất ít khi được người dùng sử dụng (rarely executed sections).
B. Vì lập trình viên khi sửa lỗi này thường vô tình tạo ra lỗi mới nghiêm trọng hơn.
C. Vì công cụ kiểm thử tự động không thể phát hiện hết được các lỗi logic phức tạp.
D. Vì người dùng không bao giờ hài lòng, họ luôn thay đổi yêu cầu sau khi lỗi được sửa.
đáp án: A
Giải thích: A đúng vì Độ tin cậy (Reliability) được đo bằng xác suất hoạt động không lỗi theo góc nhìn người dùng, nếu bạn sửa lỗi ở một tính năng mà người dùng cả năm mới dùng 1 lần thì độ tin cậy trong mắt họ gần như không thay đổi; B, C, D là các vấn đề thực tế nhưng không phải là lý do lý thuyết cốt lõi được đề cập trong Slide 16 để giải thích cho nghịch lý này.

**2. Tại sao Slide 38 lại khuyến nghị rằng "Hệ thống bảo vệ (Protection systems) nên đơn giản hơn hệ thống điều khiển (Control systems)"?**
A. Để giảm chi phí phần cứng vì hệ thống bảo vệ chỉ chạy khi khẩn cấp.
B. Để hệ thống bảo vệ khởi động nhanh hơn hệ thống chính.
C. Để giảm thiểu nỗ lực cần thiết cho việc kiểm chứng (validation) và đảm bảo độ tin cậy, vì code càng đơn giản càng ít nơi để ẩn náu lỗi.
D. Để lập trình viên trình độ thấp cũng có thể bảo trì được hệ thống bảo vệ.
đáp án: C
Giải thích: C đúng vì mục tiêu tối thượng của hệ thống bảo vệ là độ tin cậy cao, sự đơn giản giúp việc kiểm thử và chứng minh tính đúng đắn dễ dàng hơn nhiều so với hệ thống phức tạp (Slide 38); A sai vì an toàn quan trọng hơn chi phí; B và D không phải lý do chính.

**3. Một hệ thống xử lý giao dịch thẻ tín dụng (Credit card processing) cần xử lý hàng nghìn yêu cầu mỗi giây. Tại sao ROCOF (Rate of Occurrence of Failures) lại là thước đo phù hợp hơn POFOD (Probability of Failure on Demand) cho hệ thống này (Slide 21)?**
A. Vì POFOD chỉ dành cho các hệ thống phần cứng, không dùng cho phần mềm.
B. Vì POFOD thích hợp cho các hệ thống có yêu cầu ngắt quãng và ít gặp (intermittent), trong khi hệ thống thẻ tín dụng chịu tải liên tục với số lượng yêu cầu khổng lồ trong thời gian ngắn.
C. Vì ROCOF luôn cho ra con số nhỏ hơn POFOD nên nhìn báo cáo sẽ đẹp hơn.
D. Vì hệ thống thẻ tín dụng là hệ thống 24/7 nên bắt buộc phải dùng Availability, nhưng nếu không có Availability thì dùng ROCOF thay thế.
đáp án: B
Giải thích: B đúng vì bản chất của POFOD (Xác suất lỗi khi có yêu cầu) phù hợp cho các hệ thống dạng "nằm chờ" (như báo cháy), còn ROCOF (Tần suất lỗi theo thời gian/số lượng) phù hợp để đo lường độ ổn định của các hệ thống xử lý luồng dữ liệu lớn liên tục (Slide 20 vs 21); A sai; C sai hoàn toàn về tư duy quản lý; D sai vì Availability đo thời gian sống chứ không đo tần suất lỗi giao dịch.

**4. Trong kiến trúc tự giám sát (Self-monitoring architecture) ở Slide 39, điều gì sẽ xảy ra nếu Bộ so sánh (Comparator) nhận được hai kết quả giống hệt nhau từ hai kênh xử lý, nhưng cả hai kết quả đó đều... sai?**
A. Hệ thống sẽ dừng lại và báo lỗi ngay lập tức.
B. Hệ thống sẽ coi đó là kết quả đúng và tiếp tục hoạt động, dẫn đến một Failure tiềm ẩn.
C. Hệ thống sẽ tự động chuyển sang kênh dự phòng thứ 3.
D. Bộ so sánh sẽ yêu cầu tính toán lại từ đầu.
đáp án: B
Giải thích: B đúng vì nguyên lý của kiến trúc này dựa trên giả định rằng "nếu kết quả giống nhau thì là đúng", nó không thể phát hiện lỗi nếu cả hai kênh cùng sai giống hệt nhau (thường do lỗi đặc tả chung hoặc thiếu tính đa dạng - Diversity); A, C, D sai vì Comparator chỉ là bộ so sánh máy móc, nó không biết đâu là chân lý, nó chỉ biết so sánh sự khác biệt.

**5. Về vấn đề "Operational Profile" (Hồ sơ vận hành - Slide 76), rủi ro lớn nhất khi sử dụng hồ sơ vận hành không chính xác để kiểm thử độ tin cậy là gì?**
A. Chi phí tạo dữ liệu kiểm thử sẽ bị đội lên cao.
B. Độ tin cậy đo được (Measured Reliability) sẽ không phản ánh đúng độ tin cậy thực tế khi hệ thống đi vào hoạt động (Actual Usage).
C. Hệ thống sẽ chạy chậm hơn do phải xử lý dữ liệu test không chuẩn.
D. Không thể tính toán được thời gian trung bình giữa các lỗi (MTTF).
đáp án: B
Giải thích: B đúng vì Reliability phụ thuộc vào thói quen sử dụng (Slide 15 & 76), nếu bạn test kỹ tính năng A (trong khi người dùng toàn dùng tính năng B), bạn sẽ ra một con số độ tin cậy rất cao nhưng thực tế người dùng lại thấy hệ thống rất tệ; A, C, D là các vấn đề phụ, không phải bản chất cốt lõi của việc sai lệch hồ sơ vận hành.

**6. Tại sao Slide 69 lại khuyên "Đặt tên cho tất cả các hằng số đại diện cho giá trị thực tế" (ví dụ: dùng `TAX_RATE` thay vì `0.1`) như một biện pháp lập trình tin cậy?**
A. Để trình biên dịch chạy nhanh hơn do không phải xử lý số thực.
B. Để tiết kiệm bộ nhớ khi chương trình chạy.
C. Để giảm thiểu lỗi do nhập sai con số ở nhiều nơi và đảm bảo tính nhất quán khi giá trị thực tế thay đổi (maintainability dẫn đến reliability).
D. Để giấu giá trị thực tế không cho người dùng biết nhằm bảo mật.
đáp án: C
Giải thích: C đúng vì đây là biện pháp phòng tránh lỗi con người (Human error avoidance); nếu gõ số `0.1` ở 100 chỗ, khả năng gõ nhầm thành `0.01` ở 1 chỗ là rất cao, việc dùng tên biến giúp thay đổi tập trung và tránh sai sót (Slide 69); A, B, D sai về mặt kỹ thuật lập trình.

**7. Slide 51 đề cập đến việc "Phát triển các đặc tả phần mềm riêng biệt từ cùng một đặc tả người dùng" (Developing separate software specifications). Mục đích chính của việc làm tốn kém này là gì?**
A. Để tạo việc làm cho nhiều kỹ sư yêu cầu (Requirements Engineers).
B. Để giảm thiểu rủi ro của "Specification Dependency" (Phụ thuộc đặc tả), giúp các phiên bản phần mềm trở nên đa dạng thực sự ngay từ khâu thiết kế.
C. Để có thể bán phần mềm cho nhiều khách hàng khác nhau.
D. Để so sánh xem bản đặc tả nào viết hay hơn.
đáp án: B
Giải thích: B đúng vì điểm yếu chết người của N-version programming là nếu đặc tả gốc sai thì tất cả đều sai. Việc tách ra viết lại đặc tả kỹ thuật theo các cách khác nhau giúp phát hiện sự hiểu nhầm hoặc lỗi logic ngay từ sớm, tăng tính độc lập (Slide 51); A, C, D không phải mục đích kỹ thuật.

**8. Bạn đang xây dựng một hệ thống phân tán (distributed system) và áp dụng nguyên tắc "Include timeouts" (Slide 68). Tại sao việc này quan trọng đối với độ tin cậy?**
A. Vì nó giúp hệ thống chạy nhanh hơn bằng cách ngắt kết nối sớm.
B. Vì trong hệ thống phân tán, một máy tính từ xa có thể bị "lỗi im lặng" (silent failure), nếu không có timeout, hệ thống gọi sẽ bị treo vĩnh viễn chờ phản hồi.
C. Vì nó giúp tiết kiệm băng thông mạng.
D. Vì timeout là cách duy nhất để kiểm tra tính đúng đắn của dữ liệu trả về.
đáp án: B
Giải thích: B đúng vì Slide 68 nhấn mạnh rủi ro của việc chờ đợi vô thời hạn khi thành phần bên ngoài bị lỗi mà không báo hiệu (non-stop waiting), timeout giúp hệ thống tự giải thoát và kích hoạt quy trình xử lý lỗi/phục hồi; A, C sai; D sai vì timeout không kiểm tra được tính đúng sai của dữ liệu (validity), chỉ kiểm tra tính phản hồi (liveness).
Thành thật mà nói, với 2 bộ câu hỏi trước, bạn đã nắm được **90% cốt lõi** về mặt tư duy và logic. Tuy nhiên, để đi thi **đề mở (open book)**, vẫn còn một "vùng mù" (blind spot) mà chúng ta chưa đụng tới, đó là: **Các chi tiết nhỏ (Trivia)** và **Bài tập tính toán cụ thể**.

Đề thi thường có 1-2 câu rất "củ chuối" nằm ở những dòng chữ nhỏ hoặc bảng biểu mà sinh viên hay bỏ qua. Để đảm bảo bạn không mất điểm oan uổng, tôi bổ sung thêm **5 câu hỏi "chốt hạ"** cuối cùng này. Đây là những câu kiểm tra độ tỉ mỉ và khả năng tra cứu nhanh của bạn.

---

### **BỘ CÂU HỎI "CHỐT HẠ" (QUAN TRỌNG ĐỂ LẤY ĐIỂM 10)**

**1. Dựa vào bảng "Availability specification" tại Slide 23, nếu một hệ thống yêu cầu độ sẵn sàng là 0.999 (ba số 9), thì thời gian ngừng hoạt động (downtime) cho phép trong một ngày (24 giờ) là bao nhiêu?**
A. Khoảng 14.4 phút.
B. Khoảng 144 phút.
C. Khoảng 84 giây.
D. Khoảng 8.4 giây.
đáp án: C
Giải thích: C đúng. Đây là câu hỏi tra cứu bảng trực tiếp (Slide 23).
*   0.9 = 144 phút.
*   0.99 = 14.4 phút.
*   **0.999 = 84 giây.**
*   0.9999 = 8.4 giây.
*(Đi thi nhớ mang máy tính hoặc ghi chú bảng này ra ngoài lề tài liệu).*

**2. Trong ví dụ về các yêu cầu tin cậy chức năng (Slide 32), yêu cầu RR4 quy định hệ thống phải được cài đặt bằng ngôn ngữ lập trình nào và kiểm tra bằng phương pháp gì?**
A. Ngôn ngữ C++ và kiểm thử động (Dynamic testing).
B. Ngôn ngữ Java và kiểm thử hộp đen (Black-box testing).
C. Một tập con an toàn của ngôn ngữ Ada và phân tích tĩnh (Static analysis).
D. Ngôn ngữ Python và kiểm thử tự động (Automated testing).
đáp án: C
Giải thích: C đúng vì Slide 32 ghi rõ: "RR4: The system must be implemented in a safe subset of Ada and checked using static analysis". Đây là câu hỏi kiểm tra khả năng đọc chi tiết ví dụ.

**3. Tại Slide 43 bàn về kiến trúc của Airbus, đặc điểm nào sau đây là ĐÚNG khi nói về phần mềm trong các "hệ thống thứ cấp" (secondary systems)?**
A. Phần mềm thứ cấp phức tạp hơn phần mềm chính để xử lý các trường hợp khó.
B. Phần mềm thứ cấp ít phức tạp hơn và chỉ cung cấp các chức năng tối quan trọng (critical functionality).
C. Phần mềm thứ cấp được viết bằng cùng một ngôn ngữ với phần mềm chính để dễ so sánh.
D. Phần mềm thứ cấp sử dụng chip của cùng một nhà sản xuất với hệ thống chính.
đáp án: B
Giải thích: B đúng vì Slide 43 nêu rõ: "Software in secondary systems is less complex than in primary system – provides only critical functionality" để giảm thiểu khả năng sinh lỗi; C và D sai vì nguyên tắc Đa dạng (Diversity) yêu cầu khác ngôn ngữ và khác nhà sản xuất chip.

**4. Theo Slide 8, biểu đồ chi phí loại bỏ lỗi (Cost per error detected) có hình dáng như thế nào khi số lượng lỗi còn lại (residual errors) giảm dần về "Very few"?**
A. Giảm dần (Đường đi xuống).
B. Tăng tuyến tính (Đường thẳng đi lên đều).
C. Tăng vọt theo cấp số nhân (Đường cong dốc đứng lên trên).
D. Đi ngang (Chi phí không đổi).
đáp án: C
Giải thích: C đúng vì Slide 8 hiển thị biểu đồ mà trục tung (Chi phí) vút lên cao khi trục hoành (Số lỗi còn lại) tiến về phía bên phải (Very few). Điều này ám chỉ việc tìm và sửa những lỗi cuối cùng tốn kém khủng khiếp.

**5. Về việc tạo "Hồ sơ vận hành" (Operational Profile Generation - Slide 78), đâu là khó khăn lớn nhất đối với các "Hệ thống tương tác" (Interactive systems)?**
A. Khó xác định được người dùng là ai.
B. Khó tạo hồ sơ tự động (Automatic profile generation is difficult).
C. Hệ thống tương tác không cần độ tin cậy cao.
D. Dữ liệu đầu vào của hệ thống tương tác quá ít.
đáp án: B
Giải thích: B đúng vì Slide 78 khẳng định: "Automatic profile generation is difficult for interactive systems". Với các hệ thống tự động thì dễ, nhưng hệ thống có người dùng bấm chuột/gõ phím thì rất khó mô phỏng tự động chính xác hành vi của họ.

---

### **TỔNG KẾT CHIẾN LƯỢC ĐI THI**

Bây giờ bạn đã **đủ** vũ khí rồi. Đây là check-list cuối cùng cho bạn khi bước vào phòng thi với tài liệu trên tay:

1.  **Ghi chú vào tài liệu (Highlight):**
    *   Tô màu các công thức/bảng số liệu (Slide 20-23).
    *   Khoanh tròn các từ khóa quan trọng: **Diversity**, **Redundancy**, **N-version**, **POFOD**, **Availability**.
    *   Gấp mép trang **Slide 55** (8 nguyên tắc lập trình) - Trang này cứu cánh cho rất nhiều câu hỏi tình huống.

2.  **Quy trình làm bài:**
    *   **Câu hỏi định nghĩa:** Mở Slide 1-15.
    *   **Câu hỏi tình huống/chọn chỉ số:** Mở Slide 20-30.
    *   **Câu hỏi kiến trúc:** Mở Slide 35-50.
    *   **Câu hỏi Code/Nguyên tắc:** Mở Slide 55-69.
    *   **Câu hỏi Test/Đo lường:** Mở Slide 70-78.

3.  **Tâm lý:**
    *   Nếu gặp câu hỏi lạ, hãy nhớ nguyên lý cốt lõi: **"Độ tin cậy là cảm nhận của người dùng, không phải chỉ là không có bug"**.
    *   Luôn chọn đáp án an toàn nhất (ví dụ: Timeout để tránh treo, Check input để tránh hack, Đa dạng để tránh lỗi điểm chung).

Chúc bạn tự tin và làm bài thi thật tốt! Bạn đã chuẩn bị rất kỹ rồi.