Chào bạn, đây là bộ 35 câu hỏi trắc nghiệm được thiết kế chặt chẽ theo **Plan ôn tập Master** (Hiểu - Phân tích - Ứng dụng) mà chúng ta đã thống nhất. Các câu hỏi bao phủ toàn bộ các slide quan trọng và tập trung vào tư duy logic của Safety Engineering.

---

### PHẦN 1: MỨC ĐỘ HIỂU (COMPREHENSION) - 10 CÂU
*Mục tiêu: Nắm vững định nghĩa, không nhầm lẫn thuật ngữ.*

**1. Theo định nghĩa về "Safety" trong kỹ nghệ phần mềm, hệ thống được coi là an toàn khi nào?**
A. Khi hệ thống hoạt động chính xác 100% theo đặc tả kỹ thuật mà không gặp lỗi.
B. Khi hệ thống có khả năng hoạt động (bình thường hoặc bất thường) mà không gây thương vong cho người hoặc thiệt hại môi trường.
C. Khi hệ thống được bảo vệ hoàn toàn khỏi các cuộc tấn công mạng từ hacker.
D. Khi hệ thống có cơ chế sao lưu dữ liệu tự động hàng giờ.
đáp án: B
Giải thích: B đúng vì Safety tập trung vào việc không gây hại (Slide 3); A sai vì đó là Reliability; C sai vì đó là Security; D sai vì đó là Data availability.

**2. Phần mềm trong các hệ thống an toàn trọng yếu (safety-critical) thường đóng hai vai trò chính nào?**
A. Lưu trữ dữ liệu và Giao tiếp mạng.
B. Điều khiển hành vi hệ thống và Giám sát các thành phần khác.
C. Mã hóa dữ liệu và Tối ưu hóa hiệu năng.
D. Thiết kế giao diện người dùng và Quản lý bộ nhớ.
đáp án: B
Giải thích: B đúng vì phần mềm hoặc trực tiếp điều khiển (control) hoặc giám sát (monitor) lỗi phần cứng (Slide 4); các ý còn lại là chức năng phụ.

**3. Mối quan hệ giữa "Reliability" (Độ tin cậy) và "Safety" (An toàn) được mô tả chính xác nhất là gì?**
A. Reliability và Safety là hai khái niệm đồng nghĩa, có thể thay thế cho nhau.
B. Một hệ thống Reliable chắc chắn sẽ Safe.
C. Reliability là điều kiện cần nhưng chưa đủ cho Safety; hệ thống Reliable vẫn có thể Unsafe.
D. Safety quan trọng hơn nên không cần quan tâm đến Reliability.
đáp án: C
Giải thích: C đúng vì nếu đặc tả sai, hệ thống Reliable (làm đúng đặc tả) vẫn gây hại (Slide 5); B sai vì ví dụ trên; A sai vì chúng khác nhau về bản chất; D sai vì hệ thống lỗi liên tục thì khó mà an toàn.

**4. Hệ thống nào sau đây được phân loại là "Secondary safety-critical system"?**
A. Phần mềm điều khiển bơm Insulin.
B. Phần mềm chống bó cứng phanh (ABS) trên ô tô.
C. Hệ thống Y bạ điện tử (Electronic Health Record) dùng để kê đơn thuốc.
D. Hệ thống điều khiển cánh tay robot trong dây chuyền lắp ráp.
đáp án: C
Giải thích: C đúng vì lỗi của nó tạo ra thông tin sai, gây hại gián tiếp qua hành động của bác sĩ (Slide 8); A, B, D là Primary vì lỗi gây hại vật lý trực tiếp.

**5. Sự khác biệt cơ bản giữa "Hazard" (Mối nguy) và "Accident" (Tai nạn) là gì?**
A. Hazard là sự kiện đã xảy ra, Accident là tiềm năng.
B. Hazard là tình trạng có tiềm năng gây ra tai nạn, còn Accident là sự kiện không mong muốn gây thiệt hại thực tế.
C. Hazard chỉ gây thiệt hại tài sản, Accident gây chết người.
D. Hazard là do phần mềm, Accident là do phần cứng.
đáp án: B
Giải thích: B đúng theo định nghĩa chuẩn (Slide 9, 11); A sai vì ngược; C sai vì Hazard bao gồm cả nguy cơ chết người; D sai vì cả hai đều có thể do phần mềm hoặc phần cứng.

**6. Chiến lược "Hazard avoidance" (Tránh mối nguy) hoạt động theo nguyên lý nào?**
A. Thiết kế hệ thống sao cho mối nguy không thể xuất hiện ngay từ đầu.
B. Chấp nhận mối nguy xảy ra nhưng phát hiện và xử lý nó trước khi thành tai nạn.
C. Giảm thiểu thiệt hại sau khi tai nạn đã xảy ra.
D. Sử dụng bảo hiểm để đền bù thiệt hại.
đáp án: A
Giải thích: A đúng vì Avoidance là triệt tiêu nguyên nhân (Slide 10); B là Detection/Removal; C là Damage Limitation.

**7. Trong đánh giá rủi ro, khái niệm ALARP (As Low As Reasonably Practical) ám chỉ điều gì?**
A. Rủi ro phải được loại bỏ hoàn toàn (0%).
B. Rủi ro phải được giảm thiểu đến mức thấp nhất có thể trong giới hạn hợp lý về chi phí và thời gian.
C. Rủi ro nằm ở mức không thể chấp nhận được (Intolerable).
D. Rủi ro không đáng kể, không cần quan tâm.
đáp án: B
Giải thích: B đúng vì ALARP cân đối giữa an toàn và chi phí thực tiễn (Slide 18); A là không tưởng; C là vùng trên ALARP; D là vùng dưới ALARP.

**8. Phương pháp phân tích mối nguy "Fault-tree analysis" (Cây lỗi) thuộc loại kỹ thuật nào?**
A. Inductive (Quy nạp), Bottom-up.
B. Deductive (Diễn dịch), Top-down.
C. Testing (Kiểm thử thực nghiệm).
D. Security auditing (Kiểm toán bảo mật).
đáp án: B
Giải thích: B đúng vì FTA đi từ sự kiện đỉnh (Hazard) truy ngược xuống nguyên nhân (Slide 22, 23); A là kỹ thuật như FMEA.

**9. Trong phân tích cây lỗi, cổng logic nào thể hiện rủi ro cao hơn (dễ xảy ra tai nạn hơn) nếu các sự kiện đầu vào có xác suất như nhau?**
A. Cổng AND.
B. Cổng OR.
C. Cổng XOR.
D. Cổng NOT.
đáp án: B
Giải thích: B đúng vì cổng OR chỉ cần 1 nguyên nhân xảy ra là tai nạn xảy ra (Slide 23); Cổng AND cần tất cả nguyên nhân cùng xảy ra.

**10. Mục đích chính của kỹ thuật "Static program analysis" (Phân tích tĩnh) là gì?**
A. Chạy chương trình với dữ liệu biên để tìm lỗi crash.
B. Quét mã nguồn để tìm các mẫu lỗi tiềm ẩn (như biến chưa khởi tạo) mà không cần thực thi chương trình.
C. Kiểm tra giao diện người dùng có thân thiện không.
D. Chứng minh toán học độ đúng đắn của thuật toán.
đáp án: B
Giải thích: B đúng vì Static là không chạy code, chỉ phân tích văn bản code (Slide 37); A là Dynamic testing; D là Formal verification.

---

### PHẦN 2: MỨC ĐỘ PHÂN TÍCH & ĐÁNH ĐỔI (ANALYSIS & TRADE-OFF) - 15 CÂU
*Mục tiêu: Hiểu lý do tại sao, phân tích tình huống, đánh đổi chi phí/lợi ích.*

**11. Một phần mềm điều khiển lò vi sóng tuân thủ chính xác đặc tả: "Nếu cửa mở, ngừng phát sóng". Tuy nhiên, đặc tả quên trường hợp "Chốt cửa bị gãy nhưng cảm biến vẫn báo đóng". Kết quả lò vẫn phát sóng khi cửa hở. Hệ thống này:**
A. Unreliable và Unsafe.
B. Reliable và Safe.
C. Reliable nhưng Unsafe.
D. Unreliable nhưng Safe.
đáp án: C
Giải thích: C đúng vì nó làm đúng đặc tả (Reliable) nhưng gây hại do đặc tả thiếu sót (Unsafe) (Slide 5).

**12. Tại sao chúng ta không thể áp dụng Formal Verification (Kiểm chứng hình thức) cho toàn bộ hệ thống phần mềm lớn?**
A. Vì nó không phát hiện được lỗi cú pháp.
B. Vì chi phí tính toán và độ phức tạp quá lớn, đồng thời đặc tả đầu vào có thể vẫn sai so với thực tế.
C. Vì nó chỉ áp dụng được cho phần cứng.
D. Vì các lập trình viên không biết toán học.
đáp án: B
Giải thích: B đúng vì Formal Verification rất tốn kém và vẫn chịu rủi ro "Garbage In Garbage Out" từ đặc tả (Slide 34, 35); các ý còn lại không phải lý do chính.

**13. Trong thiết kế an toàn cho ô tô, việc trang bị "Túi khí" (Airbag) là áp dụng chiến lược nào và tại sao nó lại nằm ở lớp cuối cùng?**
A. Hazard Avoidance; vì nó tránh tai nạn.
B. Hazard Detection; vì nó phát hiện va chạm.
C. Damage Limitation; vì nó chỉ hoạt động khi tai nạn đã xảy ra nhằm giảm thương vong.
D. Safe Recovery; vì nó giúp xe hồi phục sau tai nạn.
đáp án: C
Giải thích: C đúng vì túi khí không ngăn xe đâm nhau, chỉ giảm chấn thương khi đã đâm (Slide 10); A và B sai bản chất.

**14. Khi xem xét Risk Triangle, nếu một rủi ro rơi vào vùng "Intolerable" (Không thể chấp nhận), hành động bắt buộc là gì?**
A. Chấp nhận rủi ro và mua bảo hiểm.
B. Áp dụng nguyên tắc ALARP để giảm chi phí.
C. Phải thiết kế lại hệ thống để giảm rủi ro xuống vùng thấp hơn, bất kể chi phí.
D. Ghi vào Hazard Log và để đó theo dõi.
đáp án: C
Giải thích: C đúng vì vùng Intolerable là vùng cấm, hệ thống không được phép vận hành (Slide 19); B chỉ áp dụng cho vùng giữa.

**15. Trong cây lỗi phần mềm, nếu ta thay một cổng OR kết nối "Lỗi cảm biến" và "Lỗi tính toán" bằng một cổng AND. Điều này có ý nghĩa gì về mặt thiết kế an toàn?**
A. Hệ thống trở nên nguy hiểm hơn.
B. Hệ thống an toàn hơn vì cần cả hai lỗi cùng xảy ra mới gây tai nạn (cơ chế Redundancy).
C. Hệ thống sẽ chạy chậm hơn.
D. Không thay đổi gì về độ an toàn.
đáp án: B
Giải thích: B đúng vì cổng AND giảm xác suất xảy ra sự kiện đỉnh (P_A * P_B nhỏ hơn P_A + P_B) (Slide 23).

**16. Dựa trên bảng phân loại rủi ro (Risk classification) của máy bơm Insulin (Slide 21), tại sao "Power failure" (Mất nguồn) có xác suất cao (High) nhưng lại được đánh giá là Acceptable?**
A. Vì nó hiếm khi xảy ra.
B. Vì người dùng có thể thay pin dễ dàng.
C. Vì mức độ nghiêm trọng (Severity) thấp (Low), máy có cảnh báo và không gây hại trực tiếp tính mạng.
D. Vì chi phí sửa chữa quá cao.
đáp án: C
Giải thích: C đúng, Risk = Probability * Severity, ở đây Severity thấp kéo Risk xuống mức chấp nhận được (Slide 21).

**17. Theo phân tích cây lỗi phần mềm (Slide 25), nguyên nhân gốc rễ (Root cause) dẫn đến việc tính sai liều Insulin thường là do đâu?**
A. Lỗi phần cứng máy tính.
B. Lỗi thuật toán (Algorithm error) và Lỗi số học (Arithmetic error).
C. Lỗi người dùng nhập sai.
D. Lỗi đường truyền mạng.
đáp án: B
Giải thích: B đúng theo Slide 25, cây lỗi chỉ ra 2 nguyên nhân phần mềm cụ thể này.

**18. Tại sao trong các hệ thống Critical, người ta thường dùng "Mix of strategies" (Phối hợp nhiều chiến lược) thay vì chỉ chọn một?**
A. Vì ngân sách dự án dư dả.
B. Để tạo ra sự phòng thủ chiều sâu (Defense in Depth), nếu lớp này thất bại thì còn lớp khác bảo vệ.
C. Vì khách hàng yêu cầu càng nhiều tính năng càng tốt.
D. Vì không biết chiến lược nào hiệu quả nhất.
đáp án: B
Giải thích: B đúng, Slide 27 minh họa việc dùng cả Avoidance, Detection và Limitation trong cùng một hệ thống để tăng độ an toàn.

**19. Model Checking có ưu thế vượt trội so với Testing truyền thống ở điểm nào khi kiểm tra các hệ thống tương tranh (Concurrent systems)?**
A. Nó kiểm tra nhanh hơn.
B. Nó có thể kiểm tra giao diện người dùng.
C. Nó vét cạn (exhaustive search) mọi trạng thái có thể, giúp tìm ra các lỗi race condition/deadlock hiếm gặp mà testing hay bỏ sót.
D. Nó không cần mã nguồn.
đáp án: C
Giải thích: C đúng vì đặc tính "explore all possible paths" của Model Checking (Slide 35).

**20. Static Analysis (Phân tích tĩnh) đóng vai trò gì trong việc bảo mật (Security) của hệ thống an toàn?**
A. Chặn hacker tấn công DDoS.
B. Phát hiện các lỗ hổng code như tràn bộ đệm (buffer overflow) hay không kiểm tra input đầu vào.
C. Mã hóa dữ liệu người dùng.
D. Xác thực vân tay người dùng.
đáp án: B
Giải thích: B đúng vì Static Analysis giỏi phát hiện các vulnerability trong cấu trúc code (Slide 39).

**21. Trong Safety Case, tại sao cần phải trình bày cả "Argument" (Lập luận) chứ không chỉ đưa ra "Evidence" (Bằng chứng)?**
A. Để làm tài liệu dài hơn.
B. Vì Bằng chứng tự nó vô nghĩa nếu không có Lập luận logic kết nối nó với Khẳng định an toàn (Claim).
C. Vì cơ quan quản lý chỉ đọc Argument, không đọc Evidence.
D. Argument dùng để thay thế cho Evidence bị thiếu.
đáp án: B
Giải thích: B đúng, Argument giải thích *tại sao* bằng chứng này lại chứng minh được hệ thống an toàn (Slide 45, 46).

**22. Mục "Team competences" (Năng lực đội ngũ) trong Safety Case (Slide 44) giải quyết vấn đề gì?**
A. Quảng cáo cho công ty.
B. Chứng minh rằng hệ thống được xây dựng bởi những người có đủ trình độ, giảm thiểu rủi ro do lỗi con người (human error) trong quá trình phát triển.
C. Để xin tăng ngân sách lương.
D. Liệt kê danh sách nhân viên để chấm công.
đáp án: B
Giải thích: B đúng, năng lực con người là một phần của bằng chứng an toàn (Slide 44).

**23. Kỹ thuật "Proof by contradiction" (Chứng minh phản chứng) trong an toàn phần mềm bắt đầu bằng bước nào?**
A. Giả sử hệ thống hoạt động đúng.
B. Giả sử hệ thống rơi vào trạng thái không an toàn (Unsafe state).
C. Viết lại toàn bộ mã nguồn.
D. Chạy thử chương trình.
đáp án: B
Giải thích: B đúng, phương pháp này giả định điều ngược lại (unsafe) rồi tìm mâu thuẫn (Slide 50, 51).

**24. Trong đoạn code mẫu của bơm Insulin (Slide 52), tại sao lại cần dòng `if (currentDose > maxDose) currentDose = maxDose;` ở cuối cùng, dù trước đó đã có các tính toán phức tạp?**
A. Để làm code đẹp hơn.
B. Đây là chốt chặn cuối cùng (Safety guard) để đảm bảo dù thuật toán bên trên tính sai thế nào, liều lượng cũng không bao giờ vượt ngưỡng an toàn.
C. Để tăng tốc độ tính toán.
D. Để tiết kiệm pin.
đáp án: B
Giải thích: B đúng, đây là nguyên lý Defensive Programming/Fail-safe (Slide 52).

**25. "Normal Accidents" (Tai nạn bình thường) theo lý thuyết ở Slide 12 hàm ý điều gì về các hệ thống phức tạp?**
A. Tai nạn là do sự tắc trách của một cá nhân.
B. Tai nạn là không thể tránh khỏi (inevitable) do sự kết hợp không lường trước của nhiều lỗi nhỏ trong hệ thống phức tạp.
C. Tai nạn là chuyện bình thường, không cần quan tâm.
D. Chỉ có hệ thống phần cứng mới gây tai nạn.
đáp án: B
Giải thích: B đúng, Slide 12 khẳng định "Anticipating all problem combinations is impossible... Accidents are inevitable".

---

### PHẦN 3: MỨC ĐỘ ỨNG DỤNG (APPLICATION) - 10 CÂU
*Mục tiêu: Áp dụng kiến thức để giải quyết vấn đề mới, viết yêu cầu, xác định lỗi.*

**26. Bạn đang thiết kế một máy lọc máu (Dialysis machine). Rủi ro "Máu bị nhiễm khuẩn do đường ống không sạch" thuộc loại Hazard nào?**
A. Physical Hazard.
B. Electrical Hazard.
C. Biological Hazard.
D. Service Failure Hazard.
đáp án: C
Giải thích: C đúng vì liên quan đến vi khuẩn/nhiễm trùng (tương tự ví dụ Slide 16, 17).

**27. Yêu cầu nào sau đây được viết đúng chuẩn "Safety Requirement" cho một lò phản ứng hạt nhân?**
A. "Hệ thống phải duy trì nhiệt độ ở mức 500 độ C."
B. "Hệ thống phải có giao diện người dùng màu xanh lá cây."
C. "Hệ thống KHÔNG ĐƯỢC PHÉP mở van xả khi mức phóng xạ bên ngoài vượt quá ngưỡng X."
D. "Hệ thống nên hoạt động ổn định 24/7."
đáp án: C
Giải thích: C đúng vì dùng cấu trúc "Shall not" (Không được phép) để định nghĩa tình huống cấm (Slide 14).

**28. Để thiết kế tính năng "Xóa dữ liệu" an toàn (tránh xóa nhầm) theo chiến lược Hazard Avoidance, bạn sẽ làm gì?**
A. Cho phép xóa ngay khi bấm nút.
B. Thiết kế nút Xóa ẩn đi hoặc yêu cầu bấm tổ hợp phím/xác nhận 2 lần (confirmation) để người dùng không thể vô tình bấm trúng.
C. Tự động sao lưu dữ liệu sau khi xóa (Damage Limitation).
D. Hiện thông báo "Đã xóa thành công" (Detection).
đáp án: B
Giải thích: B đúng vì Avoidance là làm cho lỗi (xóa nhầm) khó/không thể xảy ra (Slide 10).

**29. Khi rà soát một Safety Argument, bạn thấy Claim: "Hệ thống phanh an toàn". Evidence: "Đã test 10 lần trên đường phẳng". Bạn đánh giá lập luận này thế nào?**
A. Hợp lệ và đủ thuyết phục.
B. Chưa đủ thuyết phục, vì Evidence quá ít (mới 10 lần) và thiếu các trường hợp đường trơn/dốc (coverage thấp).
C. Sai hoàn toàn vì không có Code.
D. Rất tốt vì đã có test thực tế.
đáp án: B
Giải thích: B đúng vì Evidence phải đủ độ tin cậy và bao phủ (Slide 46, 47).

**30. Phân tích đoạn code sau: `if (speed > 100) brake();`. Về mặt an toàn (Safe coding), đoạn code này thiếu sót điều gì nghiêm trọng nhất?**
A. Thiếu comment giải thích.
B. Thiếu nhánh `else` để xử lý trường hợp ngược lại hoặc trường hợp lỗi (Fail-safe state), ví dụ nếu speed < 0 (lỗi cảm biến) thì sao?
C. Tên hàm chưa rõ ràng.
D. Cấu trúc if đơn giản quá.
đáp án: B
Giải thích: B đúng vì trong Safety, phải xử lý mọi đường đi (path) của chương trình, bao gồm cả else và các giá trị biên/lỗi (Slide 54).

**31. Trong máy bơm Insulin, để xử lý rủi ro "Arithmetic error" (ví dụ biến `dose` bị tràn số thành số âm hoặc số cực lớn), giải pháp lập trình phòng thủ tốt nhất là gì?**
A. Dùng biến kiểu `double` thay vì `int`.
B. Sử dụng Exception Handler (trình xử lý ngoại lệ) để bắt lỗi tính toán và đưa hệ thống về trạng thái an toàn.
C. Không làm gì cả vì máy tính không bao giờ tính sai.
D. Chỉ dùng phép cộng, không dùng phép nhân.
đáp án: B
Giải thích: B đúng theo gợi ý của Slide 28.

**32. Khi nào bạn cần cập nhật "Hazard Log" (Nhật ký mối nguy)?**
A. Chỉ cập nhật một lần khi bắt đầu dự án.
B. Chỉ cập nhật khi dự án kết thúc để nộp báo cáo.
C. Cập nhật liên tục trong suốt vòng đời dự án (khi phát hiện hazard mới, khi đã xử lý xong hazard, khi thay đổi thiết kế).
D. Khi khách hàng yêu cầu mới làm.
đáp án: C
Giải thích: C đúng vì Hazard Log là tài liệu sống (track hazards throughout the process) (Slide 30).

**33. Hệ thống báo cháy của tòa nhà chỉ có 1 cảm biến khói duy nhất nối với chuông. Đây là ví dụ của lỗi thiết kế gì cần tránh trong Safety Engineering?**
A. Single Point of Failure (Điểm hỏng hóc đơn lẻ).
B. Redundancy (Dư thừa).
C. Diversity (Đa dạng).
D. ALARP.
đáp án: A
Giải thích: A đúng, Slide 12 nói hệ thống an toàn phải "resilient to a single point of failure" (chịu được lỗi đơn lẻ), thiết kế này hỏng cảm biến là hỏng hết.

**34. Ai là người chịu trách nhiệm chính trong việc thực hiện "Safety Reviews" (Slide 32)?**
A. Chỉ một mình lập trình viên viết code đó.
B. Một nhóm review (review team) bao gồm nhiều bên liên quan để có cái nhìn khách quan và toàn diện.
C. Khách hàng.
D. Giám đốc công ty.
đáp án: B
Giải thích: B đúng, Slide 32 nói "the review team should assess...", cần trí tuệ tập thể (consensus).

**35. Yêu cầu SR6 trong Slide 29: "In the event of an alarm, insulin delivery shall be suspended..." thể hiện nguyên tắc gì?**
A. Fail-operational (Hỏng vẫn chạy tiếp).
B. Fail-safe (Hỏng thì chuyển về trạng thái an toàn nhất - ở đây là ngừng bơm).
C. Fault masking (Che giấu lỗi).
D. Hazard avoidance.
đáp án: B
Giải thích: B đúng, Fail-safe nghĩa là khi có sự cố, hệ thống chọn cách hành xử ít nguy hiểm nhất (ngừng bơm để tránh quá liều).