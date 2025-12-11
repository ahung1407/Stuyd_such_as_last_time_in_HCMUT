Chào bạn, đây là bộ **40 câu hỏi trắc nghiệm** được thiết kế chi tiết theo lộ trình Master (Hiểu - Phân tích - Ứng dụng) để bạn ôn thi môn Kỹ nghệ An ninh, bám sát nội dung slide bạn cung cấp.

---

### **PHẦN 1: MỨC ĐỘ HIỂU (COMPREHENSION) - 10 CÂU**
*Mục tiêu: Nắm vững định nghĩa, thuật ngữ và các khái niệm cơ bản.*

**1. Theo định nghĩa về Kỹ nghệ an ninh (Security Engineering) trong Slide 3, mục tiêu chính của lĩnh vực này là phát triển các hệ thống có khả năng gì?**
A. Ngăn chặn 100% các lỗi phần mềm (software bugs).
B. Chống lại các cuộc tấn công ác ý (resist malicious attacks).
C. Tối ưu hóa hiệu năng hệ thống mạng.
D. Đảm bảo hệ thống không bao giờ bị tắt nguồn (power failure).
đáp án: B
Giải thích: B đúng vì theo Slide 3, Kỹ nghệ an ninh tập trung vào các công cụ và phương pháp để phát triển hệ thống có khả năng chống lại các "malicious attacks" (tấn công có chủ đích xấu); A sai vì lỗi phần mềm nói chung thuộc về Reliability; C sai vì hiệu năng không phải mục tiêu chính của bảo mật; D sai vì đó là vấn đề hạ tầng điện/Reliability.

**2. Ba chiều kích cốt lõi của an ninh thông tin (CIA) được trình bày trong Slide 4 bao gồm những yếu tố nào?**
A. Confidentiality, Integrity, Availability.
B. Cost, Insurance, Assets.
C. Control, Inspection, Authentication.
D. Confidentiality, Immunity, Authorization.
đáp án: A
Giải thích: A đúng vì theo Slide 4, ba chiều kích an ninh là Confidentiality (Bí mật), Integrity (Toàn vẹn), và Availability (Sẵn sàng); B, C, D đều chứa các thuật ngữ sai lệch so với mô hình CIA chuẩn.

**3. Theo Slide 7, sự khác biệt chính giữa Application Security và Infrastructure Security là gì?**
A. Application Security là vấn đề cấu hình (configured), Infrastructure Security là vấn đề thiết kế (designed).
B. Application Security là vấn đề thiết kế (designed), Infrastructure Security là vấn đề cấu hình (configured).
C. Application Security do quản trị mạng làm, Infrastructure Security do lập trình viên làm.
D. Infrastructure Security quan trọng hơn Application Security.
đáp án: B
Giải thích: B đúng vì theo Slide 7, Application Security là vấn đề Kỹ nghệ phần mềm nơi hệ thống được thiết kế để chống tấn công, còn Infrastructure Security là vấn đề quản trị hệ thống nơi hạ tầng được cấu hình để bảo vệ; A bị ngược; C sai về phân công trách nhiệm; D sai vì cả hai đều quan trọng như nhau.

**4. Loại mối đe dọa (Threat) nào được mô tả là "cho phép kẻ tấn công chèn thông tin sai lệch vào hệ thống" (Slide 16)?**
A. Interception.
B. Interruption.
C. Modification.
D. Fabrication.
đáp án: D
Giải thích: D đúng vì theo Slide 16, Fabrication (Bịa đặt) là hành vi chèn thông tin giả vào hệ thống (insert false information); A là đánh cắp thông tin; B là làm gián đoạn; C là sửa đổi thông tin có sẵn.

**5. Thuật ngữ "Vulnerability" (Lỗ hổng) trong bảng thuật ngữ an ninh (Slide 13) được định nghĩa là gì?**
A. Một điểm yếu trong hệ thống máy tính có thể bị khai thác để gây hại.
B. Một hành động khai thác điểm yếu của hệ thống.
C. Những hoàn cảnh có tiềm năng gây hại.
D. Sự mất mát hoặc tổn hại xảy ra sau cuộc tấn công.
đáp án: A
Giải thích: A đúng vì theo Slide 13, Vulnerability là "A weakness in a computer-based system"; B là định nghĩa của Attack; C là định nghĩa của Threat; D là định nghĩa của Exposure.

**6. Theo Slide 5, cấp độ bảo mật nào liên quan đến việc đảm bảo con người không thực hiện các hành động gây hại cho hệ thống (ví dụ: chia sẻ mật khẩu)?**
A. Infrastructure security.
B. Application security.
C. Operational security.
D. Network security.
đáp án: C
Giải thích: C đúng vì theo Slide 5 và 9, Operational security quan tâm đến việc vận hành và sử dụng an toàn của con người (human and social issue); A và D liên quan đến phần cứng/mạng; B liên quan đến phần mềm.

**7. "Misuse cases" (Slide 39) được sử dụng để mô tả điều gì trong quy trình kỹ nghệ an ninh?**
A. Cách người dùng sử dụng hệ thống đúng đắn.
B. Các trường hợp hệ thống bị lỗi phần cứng.
C. Các kịch bản đe dọa hoặc tấn công vào hệ thống từ góc nhìn của kẻ tấn công.
D. Quy trình sao lưu dữ liệu.
đáp án: C
Giải thích: C đúng vì theo Slide 39, Misuse cases là "instances of threats to a system", mô tả cách kẻ tấn công tương tác với hệ thống (Interception, Interruption...); A là Use cases thông thường; B và D không phải là mục đích của Misuse cases.

**8. Theo Slide 61, nguyên tắc thiết kế "Fail securely" có nghĩa là gì?**
A. Hệ thống không bao giờ được phép thất bại hay bị lỗi.
B. Khi hệ thống lỗi, nó phải đảm bảo thông tin nhạy cảm không bị truy cập trái phép.
C. Khi hệ thống lỗi, nó phải tự động khởi động lại ngay lập tức.
D. Hệ thống phải có ít nhất hai máy chủ dự phòng.
đáp án: B
Giải thích: B đúng vì theo Slide 61, Fail securely nghĩa là "ensure that sensitive information cannot be accessed by unauthorized users even although normal security procedures are unavailable" (giữ trạng thái an toàn/khóa khi lỗi); A là không tưởng; C là Recoverability; D là Redundancy.

**9. Ngôn ngữ lập trình nào được Slide 65 nhắc đến là dễ gặp lỗi "Buffer Overflow" (Tràn bộ đệm) do thiếu kiểm tra biên mảng tự động?**
A. Java.
B. C/C++.
C. Python.
D. C#.
đáp án: B
Giải thích: B đúng vì theo Slide 65, C và C++ cho phép phát triển phần mềm hiệu năng cao nhưng không tự động check array bounds, dẫn đến vulnerabiliy; Java (A) có automatic array bound checking.

**10. "Penetration testing" (Kiểm thử xâm nhập) trong Slide 69 là phương pháp kiểm thử như thế nào?**
A. Sử dụng công cụ tự động để quét mã nguồn.
B. Dùng toán học để chứng minh độ an toàn.
C. Thiết lập một đội ngũ mô phỏng các cuộc tấn công thực tế vào hệ thống.
D. Kiểm tra danh sách các cấu hình mặc định.
đáp án: C
Giải thích: C đúng vì theo Slide 69, Penetration testing là "A team is established whose goal is to breach the security of the system by simulating attacks"; A là Tool-based; B là Formal verification; D là Checklist review.

---

### **PHẦN 2: MỨC ĐỘ PHÂN TÍCH & ĐÁNH ĐỔI (ANALYSIS & TRADE-OFF) - 15 CÂU**
*Mục tiêu: Phân tích tình huống, case study Mentcare, và các quyết định quản lý rủi ro.*

**11. Trong hệ thống Mentcare (Slide 37), tại sao giải pháp dùng sinh trắc học (biometric) cho tất cả người dùng lại bị đánh giá thấp về tính khả thi (Feasibility) dù nó có độ bảo mật cao?**
A. Vì công nghệ này chưa tồn tại.
B. Vì chi phí triển khai cao và có thể gặp sự phản kháng từ người dùng.
C. Vì sinh trắc học không ngăn chặn được việc đánh cắp dữ liệu.
D. Vì hệ thống Mentcare không hỗ trợ kết nối thiết bị ngoại vi.
đáp án: B
Giải thích: B đúng vì cột Feasibility trong Slide 37 ghi rõ "Technically feasible but high cost solution. Possible user resistance" (Khả thi kỹ thuật nhưng đắt và người dùng không thích); A sai vì công nghệ đã có; C và D không phải lý do chính được nêu.

**12. Khi đánh giá giá trị tài sản (Asset value assessment) trong Slide 36, tại sao "Cơ sở dữ liệu bệnh nhân" (Patient database) lại có giá trị và mức độ thiệt hại cao hơn "Hồ sơ bệnh nhân cá nhân" (Individual patient record)?**
A. Vì Database chứa nhiều dữ liệu hơn.
B. Vì Database cần thiết để hỗ trợ tất cả các ca khám bệnh (Safety-critical), mất nó là phòng khám tê liệt.
C. Vì Database khó sao lưu hơn.
D. Vì luật pháp quy định Database quan trọng hơn.
đáp án: B
Giải thích: B đúng vì theo Slide 36, Database "Required to support all clinical consultations", nếu mất thì "clinics may have to be canceled" (hủy khám), gây thiệt hại lớn về vận hành và an toàn; Bản ghi cá nhân (Individual record) mất thì thiệt hại thấp hơn ("Low direct losses").

**13. Theo Slide 46 và 52, việc lựa chọn kiến trúc client-server dựa trên trình duyệt web (Web browser) cho Mentcare mang lại sự tiện lợi nhưng đồng thời cũng tạo ra rủi ro bảo mật nào?**
A. Không thể mã hóa dữ liệu đường truyền.
B. Thông tin mật có thể bị lưu lại trong Cache hoặc History của trình duyệt.
C. Trình duyệt web không hỗ trợ xác thực người dùng.
D. Không thể triển khai trên diện rộng.
đáp án: B
Giải thích: B đúng vì theo Slide 52 (Vulnerabilities associated with technology choices), rủi ro của "Web browser" là "Confidential information may be left in browser cache"; A sai vì có HTTPS; C sai vì vẫn xác thực được; D sai vì Web dễ triển khai nhất.

**14. Một tổ chức quyết định KHÔNG đầu tư hệ thống tường lửa thế hệ mới trị giá 50.000 USD để bảo vệ một máy chủ lưu trữ dữ liệu công khai trị giá 5.000 USD. Quyết định này tuân theo nguyên tắc nào trong Slide 21?**
A. Risk Avoidance.
B. Cost-effectiveness (Hiệu quả chi phí).
C. Defense in Depth.
D. Operational Security.
đáp án: B
Giải thích: B đúng vì theo Slide 21, "There is no point in spending more than the value of an asset to keep that asset secure" (Không đáng chi nhiều hơn giá trị tài sản để bảo vệ nó); A, C, D không giải thích trực tiếp khía cạnh kinh tế này.

**15. Tại sao Slide 52 nhận định rằng việc sử dụng "Editable web forms" (Biểu mẫu web chỉnh sửa được) lại gây khó khăn cho việc truy vết (Logging) so với ứng dụng Desktop tùy chỉnh?**
A. Vì web form không hỗ trợ gửi dữ liệu về server.
B. Vì việc ghi log chi tiết (Fine-grain logging) các thao tác nhỏ của người dùng trên web là không khả thi hoặc rất khó.
C. Vì web server không có dung lượng để lưu log.
D. Vì web form chỉ nhận văn bản, không nhận hình ảnh.
đáp án: B
Giải thích: B đúng vì theo Slide 52, nhược điểm của Web forms là "Fine-grain logging of changes is impossible" (Khó ghi nhận chi tiết từng thay đổi nhỏ/hành vi người dùng như trên ứng dụng desktop chuyên biệt); A, C, D sai về mặt kỹ thuật.

**16. Trong kiến trúc bảo vệ phân lớp (Slide 56), tại sao cần phải có cả "Database authorization" (ở tầng App) khi đã có "System authentication" (ở tầng Platform)?**
A. Vì System authentication chỉ cho phép vào hệ thống, chưa kiểm soát được quyền truy cập dữ liệu cụ thể trong Database.
B. Vì Database authorization dùng để sao lưu dữ liệu.
C. Để tăng hiệu năng hệ thống.
D. Để thay thế cho việc mã hóa dữ liệu.
đáp án: A
Giải thích: A đúng vì theo mô hình lớp (Slide 55-56), bảo vệ phải theo chiều sâu. Tầng Platform chỉ đảm bảo người dùng đăng nhập vào máy chủ/hệ thống, còn tầng App (Database authorization) đảm bảo người đó chỉ được làm những gì được phép với dữ liệu; B, C, D không phải mục đích của phân quyền.

**17. Mâu thuẫn (Conflict) chính giữa "Protection" và "Distribution" trong thiết kế kiến trúc an ninh (Slide 54) là gì?**
A. Protection làm giảm Performance, còn Distribution làm tăng Performance.
B. Distribution (Phân tán) giúp giảm thiệt hại khi bị tấn công nhưng lại tốn kém hơn để bảo vệ từng thành phần rời rạc.
C. Protection yêu cầu phần cứng mạnh, Distribution yêu cầu mạng nhanh.
D. Distribution làm hệ thống dễ sử dụng hơn Protection.
đáp án: B
Giải thích: B đúng vì theo Slide 54, "If assets are distributed, then they are more expensive to protect" (Phân tán thì tốn tiền bảo vệ nhiều nơi) nhưng lại giúp "effects of a successful attack are minimized" (giảm thiệt hại tập trung); A, C, D không phản ánh đúng bản chất mâu thuẫn cốt lõi này.

**18. Tại sao Slide 30 khẳng định "Safety-related events are not generated from an intelligent adversary" là một sự khác biệt lớn so với Security?**
A. Vì Safety chỉ lo các lỗi ngẫu nhiên, còn Security phải đối mặt với kẻ tấn công chủ động tìm kẽ hở (Probe defenses).
B. Vì Safety không quan trọng bằng Security.
C. Vì kẻ tấn công không bao giờ nhắm vào các hệ thống an toàn (Safety systems).
D. Vì Safety requirements dễ viết hơn.
đáp án: A
Giải thích: A đúng vì theo Slide 30, vấn đề Safety là "accidental" (ngẫu nhiên/tai nạn), còn Security phải giả định "attackers have knowledge of system weaknesses" và chủ động thăm dò (probe); C sai vì hệ thống Safety vẫn bị hack; B và D là nhận định chủ quan.

**19. Trong trường hợp cần ưu tiên tính "Availability" (Sẵn sàng) để chống lại tấn công DoS, chiến lược thiết kế nào trong Slide 57 là hiệu quả nhất?**
A. Centralization (Tập trung hóa).
B. Encryption (Mã hóa).
C. Distribution (Phân tán).
D. Authentication (Xác thực).
đáp án: C
Giải thích: C đúng vì theo Slide 57, "Distribution is particularly important if the risk of denial of service attacks is high" (Phân tán giúp hệ thống không bị chết hoàn toàn nếu một thành phần bị tấn công); A làm tăng rủi ro DoS; B và D là để bảo vệ Confidentiality/Integrity.

**20. Theo Slide 62, "Log user actions" (Ghi lại hành động người dùng) không chỉ giúp truy vết sau sự cố mà còn có tác dụng tâm lý gì?**
A. Làm người dùng cảm thấy được bảo vệ.
B. Giúp người dùng nhớ mật khẩu.
C. Khiến người dùng ít có khả năng hành động vô trách nhiệm hơn vì biết mình bị theo dõi.
D. Làm người dùng làm việc nhanh hơn.
đáp án: C
Giải thích: C đúng vì theo Slide 62, "If users know about such a log, they are less likely to behave in an irresponsible way" (Tác dụng răn đe); A, B, D không phải tác dụng chính được nêu.

**21. Trong đánh giá rủi ro (Slide 33), bước "Control identification" (Xác định biện pháp kiểm soát) phải được thực hiện sau bước nào để đảm bảo tính logic?**
A. Sau Feasibility assessment.
B. Sau Security requirements definition.
C. Sau Attack assessment.
D. Trước Asset identification.
đáp án: C
Giải thích: C đúng vì theo sơ đồ Slide 33 và 50, ta phải hiểu cách tấn công (Attack assessment) thì mới đề ra được biện pháp chặn (Control identification); A và B là các bước sau đó; D là bước đầu tiên.

**22. Tại sao Slide 9 nói rằng có một sự đánh đổi (trade-off) giữa "Operational security" và "System effectiveness"?**
A. Vì phần mềm bảo mật luôn đắt tiền.
B. Vì các biện pháp bảo mật chặt chẽ thường gây phiền toái, khiến người dùng tìm cách "lách luật" để làm việc nhanh hơn.
C. Vì máy tính bảo mật cao thường chạy chậm.
D. Vì quản trị viên hệ thống thường lười biếng.
đáp án: B
Giải thích: B đúng vì Slide 9 nêu rõ "Users sometimes take insecure actions to make it easier for them to do their jobs" (Người dùng làm tắt để tiện việc), dẫn đến mâu thuẫn giữa an ninh và hiệu quả công việc; A và C liên quan đến Cost/Performance hơn là Effectiveness/Usability.

**23. Slide 49 đề xuất "Maintaining copies of records on a local client" (Lưu bản sao cục bộ). Biện pháp này nhằm đối phó với rủi ro gì?**
A. Rủi ro bị đánh cắp dữ liệu trên đường truyền.
B. Rủi ro tấn công từ chối dịch vụ (DoS) trên máy chủ.
C. Rủi ro người dùng quên mật khẩu.
D. Rủi ro máy trạm bị nhiễm virus.
đáp án: B
Giải thích: B đúng vì Slide 49 giải thích việc lưu bản sao cục bộ giúp "protects against denial of service attacks on the server" (Server chết thì Client vẫn làm việc được offline); A cần mã hóa đường truyền; C và D không liên quan.

**24. Khi sử dụng phần mềm thương mại có sẵn (COTS), tại sao Slide 51-52 lại coi việc "User authenticated using a name/password combination" là một thiết kế tiềm ẩn rủi ro?**
A. Vì mật khẩu không thể mã hóa.
B. Vì người dùng có thể đặt mật khẩu dễ đoán hoặc để lộ mật khẩu.
C. Vì hệ thống COTS thường không hỗ trợ mật khẩu.
D. Vì mật khẩu làm chậm quá trình đăng nhập.
đáp án: B
Giải thích: B đúng vì Slide 52 chỉ ra vulnerability của "Login/password authentication" là "Users set guessable passwords" hoặc "Authorized users reveal their passwords" (Đặt pass yếu hoặc lộ pass); A, C, D sai về mặt kỹ thuật.

**25. Nguyên tắc "Avoid a single point of failure" (Tránh điểm chết duy nhất) trong Slide 61 được minh họa bằng ví dụ nào?**
A. Sử dụng mật khẩu cực mạnh.
B. Sử dụng xác thực nhiều lớp (Password và câu hỏi bảo mật).
C. Chỉ sử dụng một máy chủ duy nhất để dễ bảo vệ.
D. Ghi log tất cả mọi thứ.
đáp án: B
Giải thích: B đúng vì Slide 61 gợi ý "have password and question-based authentication" để nếu hacker có pass cũng chưa vào được (cần phá 2 lớp); C là vi phạm nguyên tắc này; A và D không giải quyết vấn đề single point of failure.

---

### **PHẦN 3: MỨC ĐỘ ỨNG DỤNG (APPLICATION) - 15 CÂU**
*Mục tiêu: Áp dụng kiến thức vào tình huống mới, sơ đồ, và các nguyên tắc thiết kế.*

**26. Một ngân hàng phát hiện hacker đang cố gắng chèn các giao dịch chuyển tiền giả mạo vào hệ thống. Dựa trên Slide 16, đây là loại Threat nào và thuộc nhóm vi phạm CIA nào?**
A. Interception - Confidentiality.
B. Modification - Availability.
C. Fabrication - Integrity.
D. Interruption - Integrity.
đáp án: C
Giải thích: C đúng vì "chèn thông tin giả" (insert false transactions) là định nghĩa của Fabrication threat, và nó làm sai lệch dữ liệu nên vi phạm tính Integrity (Slide 16); A là xem trộm; B là sửa đổi; D là làm gián đoạn.

**27. Kỹ sư hệ thống đang thiết kế một ứng dụng IoT điều khiển lò phản ứng hạt nhân. Anh ta quyết định rằng nếu cảm biến nhiệt độ bị hỏng hoặc mất kết nối, hệ thống phải tự động hạ thanh điều khiển xuống để tắt lò phản ứng. Quyết định này là ví dụ của nguyên tắc thiết kế nào (Slide 61)?**
A. Design for deployment.
B. Fail securely.
C. Balance security and usability.
D. Log user actions.
đáp án: B
Giải thích: B đúng vì "Fail securely" (Slide 61) yêu cầu khi hệ thống thất bại (hỏng cảm biến), nó phải chuyển về trạng thái an toàn nhất (tắt lò) thay vì tiếp tục chạy ở trạng thái không xác định nguy hiểm; A, C, D không liên quan.

**28. Một công ty thương mại điện tử muốn ngăn chặn việc nhân viên CSKH truy cập vào dữ liệu lương thưởng của nhân viên Kỹ thuật, mặc dù cả hai đều dùng chung một hệ thống nội bộ. Nguyên tắc thiết kế nào trong Slide 63 cần được áp dụng?**
A. Specify the format of all system inputs.
B. Design for recoverability.
C. Compartmentalize your assets.
D. Use redundancy.
đáp án: C
Giải thích: C đúng vì "Compartmentalize your assets" (Slide 63) khuyên nên tổ chức hệ thống thành các khu vực riêng biệt (separate areas) để người dùng chỉ truy cập thông tin họ cần (need-to-know), hạn chế truy cập chéo; A là check input; B là phục hồi; D là dự phòng.

**29. Để bảo vệ hệ thống khỏi các cuộc tấn công SQL Injection (nơi kẻ tấn công nhập mã độc vào ô tìm kiếm), biện pháp nào dưới đây là ứng dụng trực tiếp của nguyên tắc "Dependable programming guidelines" số 2 (Slide 66)?**
A. Check all inputs for validity.
B. Provide restart capabilities.
C. Name all constants.
D. Include timeouts.
đáp án: A
Giải thích: A đúng vì SQL Injection khai thác việc thiếu kiểm tra đầu vào. Nguyên tắc "Check all inputs for validity" (Slide 66) yêu cầu kiểm tra mọi dữ liệu đầu vào xem có đúng định dạng/phạm vi không trước khi xử lý, giúp chặn mã độc; B, C, D không chống SQLi trực tiếp.

**30. Trong sơ đồ Misuse Case (Slide 40), hành động "Impersonate receptionist" (Giả mạo lễ tân) của Attacker có mối quan hệ như thế nào với Use Case "View patient info" (Xem thông tin bệnh nhân)?**
A. Attacker giúp Receptionist xem thông tin.
B. Attacker đe dọa (threatens) Use Case đó.
C. Attacker là một phần mở rộng (extends) của Use Case.
D. Attacker kế thừa (inherits) từ Receptionist.
đáp án: B
Giải thích: B đúng vì bản chất của Misuse Case là mô tả các mối đe dọa đối với các Use Case bình thường (Slide 39-40). Hành động giả mạo đe dọa tính bảo mật của việc xem thông tin; A, C, D sai về ngữ nghĩa UML trong context bảo mật.

**31. Khi phân tích rủi ro cho một ứng dụng Mobile Banking, nhóm phát triển xác định rằng rủi ro "Mất điện thoại" có thể dẫn đến lộ thông tin. Họ quyết định yêu cầu ứng dụng "Không lưu mật khẩu đăng nhập" trên máy. Đây là loại yêu cầu bảo mật nào theo phân loại ở Slide 32?**
A. Risk mitigation.
B. Risk detection.
C. Risk avoidance.
D. Risk acceptance.
đáp án: C
Giải thích: C đúng vì bằng cách không lưu mật khẩu, họ thiết kế hệ thống để rủi ro (lộ pass khi mất máy) "simply cannot arise" (không thể xảy ra) - đúng định nghĩa Risk avoidance (Slide 32); A là giảm nhẹ hậu quả; B là phát hiện.

**32. Nếu bạn được yêu cầu xây dựng "Security Checklist" (Slide 70) cho giai đoạn triển khai (Deployment), câu hỏi nào sau đây là phù hợp nhất để kiểm tra về cấu hình mặc định?**
A. "Mã nguồn có được viết bằng Java không?"
B. "Hệ thống có tự động thay đổi mật khẩu mặc định của nhà sản xuất (như admin/admin) chưa?"
C. "Người dùng có thấy hệ thống dễ sử dụng không?"
D. "Hệ thống có tính năng sao lưu tự động không?"
đáp án: B
Giải thích: B đúng vì một trong những lỗ hổng lớn nhất khi triển khai (Deployment) là giữ nguyên cấu hình/mật khẩu mặc định (Slide 8, 70). Checklist cần đảm bảo các vulnerability này được loại bỏ; A, C, D thuộc về Coding/Usability/Recovery.

**33. Một hệ thống sử dụng 3 server chạy 3 hệ điều hành khác nhau (Windows, Linux, Unix) để xử lý cùng một tác vụ và so sánh kết quả. Đây là ví dụ của việc áp dụng nguyên tắc nào trong Slide 62?**
A. Log user actions.
B. Balance security and usability.
C. Use redundancy and diversity to reduce risk.
D. Fail securely.
đáp án: C
Giải thích: C đúng vì "Diversity" (Đa dạng hóa) trong Slide 62 đề cập đến việc dùng "diverse infrastructure" (hạ tầng đa dạng) để đảm bảo một lỗ hổng đặc thù (ví dụ chỉ virus trên Windows) không thể đánh sập toàn bộ hệ thống (single point of failure); A, B, D không liên quan.

**34. Trong quy trình phát triển phần mềm, tại sao việc áp dụng "Experience-based testing" (Slide 69) lại hữu ích trong việc phát hiện lỗi bảo mật mà các công cụ tự động có thể bỏ sót?**
A. Vì nó nhanh hơn công cụ.
B. Vì nó dựa trên kiến thức của chuyên gia về các loại tấn công đã biết mà máy móc có thể chưa cập nhật hoặc không hiểu ngữ cảnh.
C. Vì nó rẻ tiền hơn.
D. Vì nó không cần truy cập vào mã nguồn.
đáp án: B
Giải thích: B đúng vì Slide 69 mô tả "The system is reviewed and analysed against the types of attack that are known to the validation team". Kinh nghiệm con người giúp phát hiện các lỗi logic phức tạp mà tool (Slide 69 - Tool-based) thường chỉ bắt được lỗi cú pháp hoặc lỗ hổng phổ biến; A và C thường sai (thuê chuyên gia đắt và lâu hơn chạy tool).

**35. Khi thiết kế một hệ thống yêu cầu tính riêng tư cao (Privacy), kỹ sư quyết định áp dụng nguyên tắc "Limit the visibility of information" (Slide 66). Trong Java, từ khóa nào nên được sử dụng cho các biến thành viên của lớp để tuân thủ nguyên tắc này?**
A. public.
B. private.
C. static.
D. final.
đáp án: B
Giải thích: B đúng vì `private` hạn chế quyền truy cập chỉ trong nội bộ lớp, thực hiện nguyên lý Information Hiding/Limit visibility (Slide 66), ngăn chặn các thành phần bên ngoài truy cập hoặc sửa đổi trái phép dữ liệu nhạy cảm; A (`public`) làm lộ thông tin; C và D không liên quan trực tiếp đến visibility scope.

**36. Đối với một hệ thống quan trọng, tại sao việc "Design for recoverability" (Slide 63) lại cần thiết ngay cả khi đã có các biện pháp phòng thủ (Protection) rất mạnh?**
A. Vì phục hồi rẻ hơn phòng thủ.
B. Vì không có hệ thống nào an toàn tuyệt đối, nên phải giả định tấn công sẽ thành công và cần có cách khôi phục lại trạng thái bình thường.
C. Vì khách hàng thích tính năng phục hồi.
D. Vì luật pháp yêu cầu.
đáp án: B
Giải thích: B đúng vì tư duy hiện đại (Resilience - Slide 19) và nguyên tắc thiết kế (Slide 63) đều thừa nhận rằng phòng thủ có thể thất bại. Do đó, phải thiết kế sao cho hệ thống có thể "simplify recoverability after a successful attack"; A sai (phục hồi tốn kém); C và D là yếu tố phụ.

**37. Trong tình huống hệ thống bị tấn công DoS, việc hệ thống tự động chuyển sang một máy chủ dự phòng (Failover) là ví dụ của loại yêu cầu nào (Slide 32)?**
A. Risk avoidance.
B. Risk detection.
C. Risk mitigation.
D. Risk elimination.
đáp án: C
Giải thích: C đúng vì chuyển sang máy dự phòng là hành động "recover from and restore system assets" (khôi phục tài sản/dịch vụ) sau khi sự cố đã xảy ra, thuộc nhóm Mitigation (Giảm nhẹ/Hồi phục); A là tránh từ đầu; B là phát hiện; D không tồn tại trong phân loại này.

**38. Nếu bạn là một System Architect, bạn sẽ đặt "Firewall" (Tường lửa) vào lớp nào trong mô hình Layered Protection (Slide 56) để bảo vệ hệ thống hiệu quả nhất ngay từ cửa ngõ?**
A. Record level.
B. Application level.
C. Platform level (hoặc Infrastructure level bên dưới Platform).
D. Transaction level.
đáp án: C
Giải thích: C đúng vì Firewall là thiết bị mạng/hạ tầng, nó bảo vệ "top-level controls on the platform" (Slide 55). Nó chặn tấn công từ mạng trước khi chạm tới ứng dụng; A, B, D là các lớp bên trong, nếu đặt Firewall ở đó thì quá muộn.

**39. Một công ty yêu cầu nhân viên IT không được phép dùng tài khoản "Administrator" để duyệt web hoặc đọc email hàng ngày. Đây là việc áp dụng biện pháp bảo mật ở cấp độ nào (Slide 5)?**
A. Application security.
B. Infrastructure security.
C. Operational security.
D. Physical security.
đáp án: C
Giải thích: C đúng vì đây là quy định về hành vi sử dụng của con người (không dùng quyền cao cho việc thường), thuộc về "Operational security" (Secure operation and use of organization's systems); A và B là về phần mềm/cấu hình máy; D là khóa cửa/bảo vệ vật lý.

**40. Khi phân tích Misuse Case "Intercept transfer" (Slide 43), yêu cầu kỹ thuật đưa ra là "Certificate-based client-server communication". Điều này đảm bảo thuộc tính nào của an ninh?**
A. Availability (chống DoS).
B. Confidentiality (chống nghe lén) và Integrity (chống sửa đổi).
C. Usability (dễ sử dụng).
D. Privacy (quyền riêng tư người dùng).
đáp án: B
Giải thích: B đúng vì Certificate (SSL/HTTPS) giúp mã hóa dữ liệu (Confidentiality - kẻ nghe lén không hiểu) và đảm bảo đích đến là server thật (Integrity/Authentication - chống giả mạo); A sai vì SSL không chống DoS; C sai vì SSL làm chậm hệ thống; D là hệ quả của B.