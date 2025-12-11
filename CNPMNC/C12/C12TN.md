Chào bạn, đây là bộ câu hỏi trắc nghiệm tập trung vào **tư duy và hiểu bản chất** (thay vì học vẹt), rất phù hợp với hình thức thi được mang tài liệu. Các câu hỏi bao phủ toàn bộ các concepts quan trọng từ Slide 1 đến Slide 56.

---

**1. Một hệ thống phần mềm điều khiển lò phản ứng hạt nhân hoạt động chính xác 100% theo đặc tả kỹ thuật (Specification) được giao. Tuy nhiên, đặc tả này lại quên tính đến trường hợp áp suất tăng đột ngột do động đất, dẫn đến nổ lò khi động đất xảy ra. Nhận định nào sau đây là đúng nhất về hệ thống này?**
A. Hệ thống này không có độ tin cậy (Reliability) và không an toàn (Safety).
B. Hệ thống này có độ tin cậy (Reliability) nhưng không an toàn (Safety).
C. Hệ thống này an toàn (Safety) nhưng không có độ tin cậy (Reliability).
D. Hệ thống này vừa an toàn vừa có độ tin cậy cao.
đáp án: B
Giải thích: B đúng vì Reliability là tuân thủ đúng đặc tả (hệ thống đã làm đúng 100%), còn Safety là không gây hại (hệ thống đã gây nổ); A, C, D sai vì nhầm lẫn định nghĩa giữa Reliability và Safety (Slide 5).

**2. Trong bối cảnh y tế, phần mềm quản lý hồ sơ bệnh án (Electronic Health Record) ghi nhầm thông tin dị ứng thuốc của bệnh nhân, dẫn đến bác sĩ kê đơn sai và bệnh nhân bị sốc phản vệ. Phần mềm này thuộc loại hệ thống nào?**
A. Primary safety-critical system.
B. Secondary safety-critical system.
C. Non-critical system.
D. Infrastructure control system.
đáp án: B
Giải thích: B đúng vì lỗi phần mềm tạo ra dữ liệu sai dẫn đến hành động sai của con người (bác sĩ) gây hại gián tiếp; A sai vì Primary gây hại trực tiếp qua phần cứng; C sai vì nó có gây hại tính mạng; D sai vì đây không phải hệ thống hạ tầng (Slide 8).

**3. Để đảm bảo an toàn cho một máy cắt công nghiệp, kỹ sư thiết kế nút bấm khởi động sao cho công nhân bắt buộc phải dùng cả hai tay để nhấn cùng lúc hai nút ở hai bên máy thì máy mới chạy (giúp tay không bị kẹt vào máy). Đây là ví dụ của chiến lược nào?**
A. Hazard detection and removal (Phát hiện và loại bỏ mối nguy).
B. Damage limitation (Giới hạn thiệt hại).
C. Hazard avoidance (Tránh mối nguy).
D. Fault-tree analysis (Phân tích cây lỗi).
đáp án: C
Giải thích: C đúng vì hệ thống được thiết kế để mối nguy (kẹt tay) không thể xảy ra ngay từ đầu; A sai vì A là xử lý khi mối nguy đã xuất hiện; B sai vì B là giảm hậu quả khi tai nạn đã xảy ra; D sai vì D là phương pháp phân tích, không phải chiến lược thiết kế (Slide 10).

**4. Khi phân tích rủi ro theo nguyên tắc ALARP (As Low As Reasonably Practical), một rủi ro nằm trong vùng ALARP sẽ được chấp nhận khi nào?**
A. Khi chi phí để giảm thiểu rủi ro đó lớn hơn rất nhiều so với lợi ích an toàn mang lại.
B. Khi rủi ro đó có xác suất xảy ra bằng 0.
C. Khi rủi ro đó nằm trong vùng "Intolerable" (Không thể chấp nhận).
D. Khi rủi ro đó chỉ gây thiệt hại về tài sản chứ không gây chết người.
đáp án: A
Giải thích: A đúng vì bản chất ALARP là cân đối giữa chi phí và lợi ích thực tế; B sai vì không thể đạt xác suất 0 trong thực tế; C sai vì vùng Intolerable bắt buộc phải giảm thiểu, không được chấp nhận; D sai vì ALARP áp dụng cho cả rủi ro con người (Slide 18, 19).

**5. Trong Phân tích cây lỗi (Fault-tree analysis), tại sao các kỹ sư an toàn luôn cố gắng chuyển đổi các cổng logic OR thành cổng AND trong thiết kế hệ thống?**
A. Vì cổng AND dễ lập trình hơn cổng OR.
B. Vì cổng OR đòi hỏi tất cả các nguyên nhân phải xảy ra cùng lúc mới dẫn đến tai nạn.
C. Vì cổng AND đại diện cho sự dư thừa (redundancy), tai nạn chỉ xảy ra khi tất cả các lớp bảo vệ đều hỏng cùng lúc.
D. Vì cổng OR giúp hệ thống chạy nhanh hơn.
đáp án: C
Giải thích: C đúng vì cổng AND yêu cầu mọi điều kiện đầu vào đều phải sai thì lỗi mới xảy ra (khó xảy ra hơn); B sai vì đó là định nghĩa của cổng AND, cổng OR chỉ cần 1 nguyên nhân là lỗi xảy ra (rất nguy hiểm); A, D sai vì không liên quan đến bản chất an toàn (Slide 23).

**6. Một yêu cầu an toàn (Safety requirement) cho hệ thống phanh xe tự lái được viết như sau: "Hệ thống phải kích hoạt phanh trong vòng 0.5 giây khi phát hiện vật cản". Cách viết này có điểm gì chưa tối ưu theo quan điểm Safety Specification?**
A. Yêu cầu quá chậm (0.5 giây là quá lâu).
B. Đây là yêu cầu chức năng (Functional), thiếu các yêu cầu dạng "Shall not" (Cấm kỵ).
C. Yêu cầu này không thể kiểm thử được.
D. Yêu cầu này thuộc loại Damage limitation.
đáp án: B
Giải thích: B đúng vì Safety requirements thường tập trung vào những gì hệ thống *không được làm* (shall not) hoặc trạng thái fail-safe, trong khi đây là yêu cầu hệ thống *phải làm gì*; A, C sai vì không đủ dữ kiện đánh giá; D sai vì đây là Hazard removal (Slide 14).

**7. Kỹ thuật Model Checking (Kiểm tra mô hình) có ưu điểm vượt trội gì so với kiểm thử phần mềm truyền thống (Testing) trong các hệ thống tương tranh (concurrent systems)?**
A. Nó chạy nhanh hơn và tốn ít tài nguyên máy tính hơn.
B. Nó có thể kiểm tra được giao diện người dùng (UI) đẹp hay xấu.
C. Nó vét cạn (exhaustive search) tất cả các trạng thái có thể có, giúp tìm ra các lỗi race condition hiếm gặp.
D. Nó tự động sửa lỗi code ngay khi tìm thấy.
đáp án: C
Giải thích: C đúng vì testing thông thường khó tái lập các kịch bản tương tranh phức tạp, còn Model checking duyệt mọi đường đi; A sai vì Model checking tốn rất nhiều tài nguyên; B sai vì nó kiểm tra logic trạng thái, không phải UI; D sai vì nó chỉ tìm lỗi, không tự sửa (Slide 35).

**8. Tại sao Static Analysis (Phân tích tĩnh) lại được coi là công cụ hiệu quả để phát hiện các lỗ hổng bảo mật (security vulnerabilities) như tràn bộ đệm (buffer overflow)?**
A. Vì nó thực thi mã nguồn với hàng triệu dữ liệu đầu vào ngẫu nhiên để làm sập hệ thống.
B. Vì nó rà soát mã nguồn để tìm các mẫu (patterns) code thiếu kiểm tra đầu vào mà không cần chạy chương trình.
C. Vì nó chứng minh toán học rằng thuật toán mã hóa là không thể phá vỡ.
D. Vì nó thay thế hoàn toàn được con người trong việc Review code.
đáp án: B
Giải thích: B đúng vì bản chất Static Analysis là quét source code để tìm các đoạn code không tuân thủ quy tắc an toàn (như không check input); A sai vì đó là Fuzz Testing; C sai vì đó là Formal Verification; D sai vì nó chỉ bổ trợ chứ không thay thế con người (Slide 37, 39).

**9. Trong cấu trúc lập luận an toàn (Safety Argument) cho máy bơm Insulin, tại sao việc chứng minh "Code xử lý đúng logic" (Correctness) là chưa đủ, mà cần phải chứng minh "Code không bao giờ vượt quá liều tối đa" (Safety)?**
A. Vì chứng minh Correctness tốn kém hơn chứng minh Safety.
B. Vì Correctness chỉ đảm bảo code làm đúng theo Spec, nhưng nếu Spec sai hoặc có tình huống bất ngờ, hệ thống cần chốt chặn cuối cùng để không gây hại.
C. Vì Safety Argument không quan tâm đến phần mềm, chỉ quan tâm phần cứng.
D. Vì máy bơm Insulin là hệ thống Secondary safety-critical.
đáp án: B
Giải thích: B đúng vì Safety argument tập trung vào việc ngăn chặn trạng thái nguy hiểm (Unsafe state) bất kể logic chính chạy thế nào (Slide 50, 52); A sai vì không phải lúc nào cũng đúng; C sai vì Safety argument bao gồm cả phần mềm; D sai vì Insulin pump là Primary (Slide 8).

**10. Khi xây dựng Hồ sơ an toàn (Safety Case), vai trò của "Hazard Log" (Nhật ký mối nguy) là gì?**
A. Là tài liệu chỉ dùng một lần lúc khởi động dự án để lên kế hoạch.
B. Là nơi chứa mã nguồn (Source code) của các tính năng an toàn.
C. Là tài liệu sống (live document) theo dõi trạng thái xử lý của tất cả các mối nguy từ khi phát hiện đến khi loại bỏ/giảm thiểu.
D. Là biên bản họp giữa khách hàng và lập trình viên.
đáp án: C
Giải thích: C đúng vì Hazard Log dùng để truy vết (trace) xem rủi ro đã được giải quyết chưa trong suốt vòng đời dự án; A sai vì nó phải được cập nhật liên tục; B sai vì nó chứa danh sách rủi ro, không phải code; D sai vì quá chung chung (Slide 30, 31).
Thực lòng mà nói, với việc bạn đã đọc kỹ phần giải thích chi tiết và làm qua 10 câu hỏi đầu tiên, bạn đã đạt mức **Hiểu (Understand)** và **Nhớ (Remember)** rất tốt (khoảng 70-80% kiến thức cơ bản).

Tuy nhiên, để gọi là **"Master" (Làm chủ/Thấu hiểu sâu sắc)** và tự tin đạt điểm tuyệt đối, bạn cần thử thách thêm ở mức độ **Phân tích (Analyze)** và **Đánh giá (Evaluate)**. Các câu hỏi trước chủ yếu kiểm tra định nghĩa và khái niệm. Để thực sự "master", bạn phải xử lý được các tình huống "nhập nhằng", hiểu mối liên hệ giữa các phần (ví dụ: Static Analysis liên quan gì đến Safety Case?) và nhận diện được điểm yếu của hệ thống.

Dưới đây là **10 câu hỏi nâng cao (Hard/Critical Thinking)**. Nếu bạn trả lời đúng >8 câu này và hiểu tại sao, bạn có thể tự tin là đã master chương này.

---

### PHẦN TRẮC NGHIỆM NÂNG CAO (LEVEL: HARD)

**11. Trong quy trình phân tích mối nguy (Hazard Analysis), kỹ sư A quyết định sử dụng phương pháp "Inductive" (Quy nạp/Bottom-up). Tình huống nào sau đây phù hợp nhất để áp dụng phương pháp này?**
A. Máy bay vừa bị rơi, cần tìm nguyên nhân từ hộp đen.
B. Kỹ sư đang thiết kế một chip vi xử lý mới và muốn biết nếu một bóng bán dẫn (transistor) bị cháy thì toàn bộ hệ thống sẽ phản ứng ra sao.
C. Kỹ sư muốn chứng minh rằng hệ thống không bao giờ vượt quá nhiệt độ cho phép.
D. Kỹ sư bắt đầu từ sự kiện "Nổ bình gas" và truy ngược lại các nguyên nhân.
đáp án: B
Giải thích: B đúng vì Inductive (Bottom-up) đi từ lỗi thành phần nhỏ nhất (bóng bán dẫn) để suy ra hậu quả lớn (hệ thống); A và D là phương pháp Deductive (Top-down/FTA) vì đi từ hậu quả về nguyên nhân; C là mục tiêu của Safety Argument, không phải phương pháp phân tích mối nguy cụ thể (Slide 22).

**12. Tại sao Slide 34 khẳng định "Formal methods cannot guarantee safety" (Phương pháp hình thức không đảm bảo an toàn tuyệt đối) mặc dù nó sử dụng toán học chính xác để chứng minh?**
A. Vì máy tính không đủ mạnh để chạy các chứng minh toán học phức tạp.
B. Vì toán học chỉ chứng minh code khớp với đặc tả (Specification), nhưng nếu đặc tả sai hoặc thiếu sót so với thực tế thì hệ thống vẫn nguy hiểm.
C. Vì Formal methods chỉ áp dụng được cho phần cứng, không áp dụng được cho phần mềm.
D. Vì Formal methods không thể phát hiện lỗi cú pháp (syntax errors).
đáp án: B
Giải thích: B đúng vì đây là giới hạn lớn nhất: "garbage in, garbage out", chứng minh đúng trên giấy nhưng đề bài sai thì vẫn chết; A sai vì máy tính hiện nay đã đủ mạnh cho nhiều module; C sai vì nó dùng nhiều cho phần mềm; D sai vì Formal methods rất giỏi phát hiện lỗi logic sâu, lỗi cú pháp là quá dễ với nó (Slide 34).

**13. Xét một cây lỗi (Fault Tree) của hệ thống phanh: Sự kiện "Phanh không ăn" xảy ra khi (Cảm biến hỏng) OR (Phần mềm treo). Biết xác suất Cảm biến hỏng là 0.1 và Phần mềm treo là 0.1. Nếu ta thay cổng OR bằng cổng AND (nghĩa là Phanh chỉ hỏng khi CẢ 2 thứ cùng hỏng), xác suất rủi ro sẽ thay đổi thế nào (giả sử 2 sự kiện độc lập)?**
A. Tăng lên thành 0.2.
B. Giữ nguyên.
C. Giảm xuống còn 0.01.
D. Giảm xuống còn 0.05.
đáp án: C
Giải thích: C đúng vì với cổng OR xác suất $\approx P(A) + P(B) = 0.2$ (rất cao), còn với cổng AND xác suất $= P(A) \times P(B) = 0.1 \times 0.1 = 0.01$ (giảm đi 20 lần); Đây là lý do tại sao Slide 23 nhấn mạnh việc thiết kế hệ thống chịu lỗi (fault-tolerant) bằng cách dùng cổng AND (Slide 23).

**14. Trong hồ sơ an toàn (Safety Case), mối quan hệ giữa "Safety Argument" (Lập luận an toàn) và "Hazard Log" (Nhật ký mối nguy) là gì?**
A. Hai tài liệu này độc lập và không liên quan đến nhau.
B. Hazard Log liệt kê các "kẻ thù" (rủi ro), còn Safety Argument là bản biện hộ chi tiết cách hệ thống đã đánh bại từng "kẻ thù" đó như thế nào.
C. Hazard Log là tập con nằm bên trong Safety Argument.
D. Safety Argument được viết trước, sau đó mới dùng Hazard Log để kiểm tra lại.
đáp án: B
Giải thích: B đúng vì Hazard Log là đầu vào (input) xác định vấn đề, Safety Argument là đầu ra (output) chứng minh vấn đề đã được giải quyết bằng evidence; C sai vì Hazard Log là một tài liệu riêng biệt (dù có thể đính kèm); D sai vì Hazard Log phải có từ đầu dự án (Slide 30, 42, 43).

**15. Một hệ thống máy thở sử dụng Static Analysis (Phân tích tĩnh) và báo cáo "Zero errors" (Không có lỗi). Tuy nhiên, khi vận hành, máy vẫn bị treo do hai luồng xử lý (threads) tranh chấp tài nguyên (deadlock) sau 10 ngày chạy liên tục. Tại sao Static Analysis lại bỏ sót lỗi này?**
A. Vì Static Analysis chỉ kiểm tra được lỗi cú pháp, không kiểm tra được logic.
B. Vì Deadlock là lỗi phụ thuộc vào thời gian thực thi (runtime/dynamic) và sự tương tranh (concurrency), điều mà Static Analysis (chỉ đọc code) rất khó phát hiện hết được.
C. Vì kỹ sư đã quên cấu hình Static Analysis Tool.
D. Vì Static Analysis chỉ dùng cho bảo mật, không dùng cho an toàn.
đáp án: B
Giải thích: B đúng vì Static Analysis phân tích mã nguồn "tĩnh", còn các lỗi về Timing, Concurrency, Race condition thường chỉ lộ diện khi chạy thực tế (Dynamic) hoặc phải dùng Model Checking mới quét hết được; A sai vì nó check được nhiều lỗi logic (như null pointer); D sai vì nó dùng cho cả Safety (Slide 35, 37).

**16. Trong kiến trúc "Defense in Depth" (Phòng thủ chiều sâu) của máy bơm Insulin (Slide 52), nếu lập trình viên viết sai hàm `computeInsulin()` khiến nó trả về giá trị liều tiêm là -50 (số âm). Dòng code bảo vệ nào sẽ xử lý tình huống này và xử lý ra sao?**
A. `if (currentDose > maxDose)` sẽ xử lý, gán về maxDose.
B. `if (previousDose == 0)` sẽ xử lý, gán về maxDose/2.
C. `if (currentDose < minimumDose)` sẽ xử lý, gán về 0.
D. Không dòng nào xử lý được, gây lỗi hệ thống.
đáp án: C
Giải thích: C đúng vì slide 52 có đoạn `if (currentDose < minimumDose) currentDose = 0;`, đây là chốt chặn cho các giá trị quá nhỏ hoặc âm (vô lý); A sai vì nó chặn cận trên; B sai vì nó xử lý logic liều đầu tiên; D sai vì hệ thống an toàn luôn phải có chốt chặn cho các giá trị biên (Slide 52, 54).

**17. Điểm khác biệt cốt lõi nhất giữa "Safety Engineering" và "Reliability Engineering" thể hiện qua tình huống nào sau đây?**
A. Hệ thống bị treo (crash) 5 lần/ngày.
B. Hệ thống hoạt động chậm hơn mong đợi.
C. Hệ thống thực hiện chính xác mệnh lệnh "Xóa toàn bộ dữ liệu" do người dùng vô tình bấm nhầm mà không hỏi xác nhận lại.
D. Hệ thống bị hacker tấn công lấy cắp dữ liệu.
đáp án: C
Giải thích: C đúng vì về mặt Reliability, hệ thống rất tốt (làm chính xác lệnh xóa), nhưng về mặt Safety/Usability safety, nó rất tệ (gây mất mát dữ liệu nghiêm trọng mà không có cơ chế bảo vệ); A và B là vấn đề của Reliability/Performance; D là vấn đề của Security (Slide 5).

**18. Khi đàm phán về Hồ sơ an toàn (Safety Case) với cơ quan quản lý (Regulator), tại sao việc định nghĩa "Team competences" (Năng lực đội ngũ) trong hồ sơ lại quan trọng (Slide 44)?**
A. Để tính lương cho nhân viên cao hơn.
B. Để chứng minh rằng các sai sót (nếu có) là do tai nạn chứ không phải do sự thiếu hiểu biết hay tắc trách của con người.
C. Để làm đẹp hồ sơ năng lực công ty nhằm đấu thầu dự án khác.
D. Để thay thế cho việc kiểm thử phần mềm (nếu team giỏi thì không cần test kỹ).
đáp án: B
Giải thích: B đúng vì trong Safety Engineering, yếu tố con người là rủi ro lớn. Chứng minh đội ngũ có chứng chỉ/kinh nghiệm là bằng chứng pháp lý cho thấy quy trình phát triển là chuyên nghiệp và đáng tin cậy; D sai vì team giỏi vẫn phải test; A, C không phải mục đích chính của Safety Case (Slide 44).

**19. Lập luận phản chứng (Proof by contradiction) trong Safety Argument hoạt động theo nguyên lý nào?**
A. Chứng minh trực tiếp rằng Chương trình P luôn thỏa mãn Điều kiện an toàn S.
B. Giả sử Chương trình P vi phạm Điều kiện an toàn S, sau đó chỉ ra rằng logic của P làm cho giả thiết này trở nên vô lý.
C. Chạy thử chương trình P một tỷ lần, nếu không thấy lỗi thì kết luận P an toàn.
D. So sánh Chương trình P với một chương trình mẫu đã biết là an toàn.
đáp án: B
Giải thích: B đúng vì đây là định nghĩa của phương pháp phản chứng được dùng trong Slide 50, 51; A là chứng minh quy nạp (khó hơn nhiều); C là Testing (không bao giờ chứng minh được tuyệt đối); D là so sánh (Slide 50, 51).

**20. Câu nào sau đây tóm tắt đúng nhất mối quan hệ giữa Primary và Secondary safety-critical systems?**
A. Primary nguy hiểm hơn Secondary vì nó gây chết người ngay lập tức, còn Secondary chỉ gây phiền toái.
B. Primary gây hại thông qua hư hỏng phần cứng trực tiếp, còn Secondary gây hại thông qua việc cung cấp thông tin sai lệch dẫn đến hành động sai.
C. Primary là hệ thống phần cứng, Secondary là hệ thống phần mềm.
D. Primary cần Safety Case, còn Secondary thì không cần.
đáp án: B
Giải thích: B đúng vì đây là bản chất sự khác biệt: Primary (như bơm insulin) hỏng là tác động vật lý ngay; Secondary (như y bạ điện tử) hỏng là đưa tin sai, bác sĩ tin theo mới gây hại; A sai vì Secondary vẫn có thể gây chết người hàng loạt (ví dụ sai liều thuốc cho cả bệnh viện); C sai vì cả 2 đều có phần mềm; D sai vì cả 2 đều cần Safety Case (Slide 8).

---

### Lời khuyên cuối cùng:
Nếu bạn trả lời đúng và giải thích được trôi chảy **trên 15/20 câu** (cả phần trước và phần này), đặc biệt là các câu hỏi tình huống (như câu 13, 15, 16), thì bạn đã **Master** chương này. Bạn không chỉ nhớ slide mà đã hiểu bản chất logic đằng sau nó. Chúc bạn thi tốt!