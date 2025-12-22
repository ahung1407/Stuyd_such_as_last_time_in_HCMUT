Để "master" hoàn toàn chương này, dựa trên độ dài và độ phức tạp của 74 slide, bạn cần khoảng **25-30 câu hỏi** chất lượng cao. Số lượng này đủ để bao phủ mọi khía cạnh: từ định nghĩa cơ bản (CIA), mô hình chuẩn (OSI), phân loại tấn công, cho đến các chiến lược phòng thủ và cạm bẫy từ ngữ.

Dưới đây là bộ 30 câu hỏi được thiết kế riêng cho mục đích này.

---

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (Kiểm tra kiến thức nền tảng và tình huống thực tế)

**1. Một hacker thực hiện tấn công làm tràn bộ đệm khiến máy chủ web của công ty bị treo và khách hàng không thể truy cập được. Hành động này vi phạm nguyên tắc nào trong tam giác bảo mật CIA?**
A. Tính Bí mật (Confidentiality)
B. Tính Toàn vẹn (Integrity)
C. Tính Sẵn sàng (Availability)
D. Tính Xác thực (Authentication)
đáp án: C
Giải thích: C đúng vì tính Sẵn sàng đảm bảo hệ thống hoạt động khi người dùng cần, tấn công làm treo máy chủ (DoS) vi phạm trực tiếp tính chất này; A sai vì hacker không đánh cắp dữ liệu; B sai vì hacker không sửa đổi dữ liệu; D sai vì đây không phải là vấn đề giả mạo danh tính.

**2. Công ty A quy định: "Tất cả nhân viên Kế toán chỉ được xem bảng lương của mình, nhưng Trưởng phòng Kế toán được xem bảng lương của toàn công ty". Đây là ví dụ về khái niệm nào?**
A. Xác thực (Authentication)
B. Cấp quyền (Authorization)
C. Chống thoái thác (Non-repudiation)
D. Kế toán (Accounting)
đáp án: B
Giải thích: B đúng vì Cấp quyền là quá trình xác định người dùng được phép làm gì/truy cập tài nguyên nào sau khi đã đăng nhập; A sai vì Xác thực chỉ là bước chứng minh danh tính (đăng nhập); C sai vì Chống thoái thác liên quan đến bằng chứng giao dịch; D sai vì Accounting liên quan đến ghi nhật ký hoạt động.

**3. Khi bạn gửi một email quan trọng, bạn muốn đảm bảo rằng người nhận biết chắc chắn email đó do chính bạn gửi chứ không phải ai khác giả mạo. Dịch vụ an ninh nào giải quyết vấn đề này?**
A. Bí mật dữ liệu
B. Toàn vẹn dữ liệu
C. Chống thoái thác về nguồn gốc
D. Kiểm soát truy cập
đáp án: C
Giải thích: C đúng vì Chống thoái thác về nguồn gốc chứng minh danh tính người gửi, khiến họ không thể phủ nhận việc đã gửi tin; A sai vì nó chỉ giấu nội dung; B sai vì nó chỉ đảm bảo tin không bị sửa; D sai vì nó là việc chặn/cho phép truy cập tài nguyên.

**4. Kỹ thuật "Traffic Padding" (Chèn lưu lượng giả) được sử dụng chủ yếu để đối phó với loại tấn công nào?**
A. Tấn công từ chối dịch vụ (DoS)
B. Phân tích lưu lượng (Traffic Analysis)
C. Nghe lén nội dung (Release of message contents)
D. Giả mạo (Masquerade)
đáp án: B
Giải thích: B đúng vì Phân tích lưu lượng dựa vào việc quan sát tần suất và kích thước gói tin, chèn dữ liệu giả làm nhiễu loạn quy luật này; A sai vì chèn thêm traffic có thể làm mạng chậm hơn chứ không chống DoS; C sai vì chống nghe lén nội dung cần dùng mã hóa; D sai vì chống giả mạo cần xác thực.

**5. Trong mô hình khối lập phương McCumber về an toàn thông tin, ba trạng thái của thông tin cần được bảo vệ là gì?**
A. Phần cứng, Phần mềm, Dữ liệu
B. Con người, Chính sách, Công nghệ
C. Lưu trữ, Truyền tải, Xử lý
D. Bí mật, Toàn vẹn, Sẵn sàng
đáp án: C
Giải thích: C đúng vì theo slide 15, ba trạng thái thông tin là Lưu trữ (Storage), Truyền tải (Transmission) và Xử lý (Processing); A là các thành phần hệ thống; B là các biện pháp đối phó; D là các thuộc tính an toàn (CIA).

**6. Một nhân viên y tế vô tình nhập sai nhóm máu của bệnh nhân vào hồ sơ điện tử. Mặc dù không cố ý, hành động này đã vi phạm thuộc tính nào?**
A. Tính Bí mật
B. Tính Sẵn sàng
C. Tính Toàn vẹn
D. Tính Riêng tư
đáp án: C
Giải thích: C đúng vì tính Toàn vẹn bị vi phạm khi dữ liệu bị thay đổi sai lệch so với thực tế, bất kể là do cố ý hay vô tình; A sai vì dữ liệu không bị lộ ra ngoài; B sai vì dữ liệu vẫn truy cập được; D sai vì không liên quan đến lộ thông tin cá nhân ra công chúng.

**7. Hệ thống IDS (Phát hiện xâm nhập) loại nào có khả năng phát hiện các cuộc tấn công Zero-day (mã độc chưa từng biết đến) tốt nhất?**
A. IDS dựa trên chữ ký (Signature-based)
B. IDS dựa trên sự bất thường (Anomaly-based)
C. Tường lửa lọc gói tin (Packet filtering)
D. Phần mềm diệt virus truyền thống
đáp án: B
Giải thích: B đúng vì nó học hành vi bình thường của hệ thống và cảnh báo khi có hành vi lạ, do đó phát hiện được cái mới; A và D sai vì chúng dựa vào cơ sở dữ liệu mẫu đã biết nên "mù" với Zero-day; C sai vì tường lửa chỉ lọc dựa trên luật IP/Port chứ không phân tích hành vi sâu.

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (Kết nối kiến thức chuẩn X.800 và các mô hình)

**8. Theo bảng quan hệ giữa Cơ chế và Dịch vụ trong chuẩn X.800 (Slide 58), để đạt được dịch vụ "Bí mật dòng thông tin" (Traffic flow confidentiality), cơ chế nào sau đây là bắt buộc phải có?**
A. Chữ ký số
B. Điều khiển định tuyến
C. Mã hóa
D. Công chứng
đáp án: C
Giải thích: C đúng vì để giấu thông tin dòng lưu lượng thì việc mã hóa (Encipherment) là cơ chế nền tảng (cùng với Traffic Padding); A dùng cho xác thực/toàn vẹn; B dùng để chọn đường đi an toàn; D dùng cho chống thoái thác.

**9. Mối quan hệ giữa "Chính sách", "Tiêu chuẩn" và "Thủ tục" được mô tả đúng nhất như thế nào?**
A. Chính sách chi tiết nhất, Thủ tục tổng quát nhất.
B. Tiêu chuẩn là bắt buộc, Hướng dẫn là tự nguyện, Chính sách là tổng quát.
C. Thủ tục định nghĩa "cái gì", Chính sách định nghĩa "làm thế nào".
D. Chính sách không bắt buộc tuân thủ, Tiêu chuẩn bắt buộc tuân thủ.
đáp án: B
Giải thích: B đúng vì Chính sách là tuyên bố cấp cao, Tiêu chuẩn đưa ra thông số bắt buộc, Hướng dẫn là gợi ý; A sai vì ngược lại; C sai vì Chính sách là "cái gì/tại sao", Thủ tục là "làm thế nào"; D sai vì Chính sách luôn bắt buộc.

**10. Chiến lược "Phòng vệ theo chiều sâu" (Defense in Depth) khắc phục điểm yếu nào của chiến lược "Bảo vệ vòng ngoài" (Perimeter Defense)?**
A. Khắc phục việc tốn kém chi phí phần cứng.
B. Khắc phục nguy cơ từ tấn công nội bộ và việc tường lửa bị vượt qua.
C. Khắc phục tốc độ mạng bị chậm.
D. Khắc phục việc khó quản lý nhân sự.
đáp án: B
Giải thích: B đúng vì bảo vệ vòng ngoài chỉ cứng bên ngoài nhưng rỗng bên trong, nếu hacker vượt qua tường lửa hoặc là nhân viên nội bộ thì hệ thống vô phương cứu chữa, Defense in Depth bảo vệ từng lớp một; A, C, D không phải là mục tiêu kỹ thuật chính của chiến lược này.

**11. Tấn công "Replay" (Phát lại) vi phạm chủ yếu tính chất nào và có thể bị ngăn chặn bởi dịch vụ nào?**
A. Vi phạm Tính Bí mật - Ngăn chặn bằng Mã hóa.
B. Vi phạm Tính Sẵn sàng - Ngăn chặn bằng Tường lửa.
C. Vi phạm Tính Toàn vẹn/Xác thực - Ngăn chặn bằng Xác thực thực thể ngang hàng.
D. Vi phạm Tính Riêng tư - Ngăn chặn bằng Kiểm soát truy cập.
đáp án: C
Giải thích: C đúng vì Replay là việc gửi lại gói tin cũ để giả mạo phiên làm việc, vi phạm tính xác thực của phiên, cần dịch vụ Xác thực (Authentication exchange) với số thứ tự hoặc timestamp để chống lại; A sai vì Replay không cần đọc nội dung; B sai vì mục tiêu không phải là làm sập mạng; D không liên quan.

**12. Theo thống kê của FBI (trong slide), tỷ lệ các cuộc tấn công nội bộ chiếm khoảng bao nhiêu phần trăm và tại sao nó nguy hiểm?**
A. 20-40%, vì họ có kỹ năng cao.
B. 60-80%, vì họ đã có quyền truy cập hợp lệ.
C. 10-20%, vì họ ghét công ty.
D. 90-100%, vì tường lửa không chặn được.
đáp án: B
Giải thích: B đúng theo số liệu Slide 36 và lý do họ nguy hiểm là vì họ nằm trong vùng tin cậy (trusted), có quyền (authorization) sẵn có; các đáp án khác sai về số liệu hoặc lý do.

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (Loại trừ phương án không phù hợp)

**13. Đâu KHÔNG phải là một hình thức tấn công chủ động?**
A. Từ chối dịch vụ (DoS)
B. Phân tích lưu lượng (Traffic Analysis)
C. Giả mạo (Masquerade)
D. Thay đổi thông điệp (Modification)
đáp án: B
Giải thích: B đúng là đáp án cần chọn vì Phân tích lưu lượng là tấn công Thụ động (chỉ quan sát, không can thiệp); A, C, D đều tác động trực tiếp vào hệ thống hoặc dữ liệu nên là tấn công Chủ động.

**14. Cơ chế nào sau đây KHÔNG được liệt kê trong danh sách 8 cơ chế an ninh cụ thể của chuẩn X.800?**
A. Mã hóa (Encipherment)
B. Chữ ký số (Digital Signature)
C. Đào tạo nhận thức (Security Awareness Training)
D. Chèn thông tin đệm (Traffic Padding)
đáp án: C
Giải thích: C đúng là đáp án cần chọn vì Đào tạo nhận thức là biện pháp quản lý/con người, không phải là cơ chế kỹ thuật nằm trong định nghĩa của kiến trúc OSI X.800 (Slide 47-50); A, B, D đều là cơ chế chuẩn.

**15. Phát biểu nào sau đây về Tường lửa (Firewall) là SAI?**
A. Tường lửa có thể ngăn chặn hoàn toàn các cuộc tấn công từ bên trong mạng nội bộ.
B. Tường lửa giúp cách ly mạng nội bộ với mạng Internet không an toàn.
C. Tường lửa hoạt động dựa trên các luật (rules) để cho phép hoặc chặn gói tin.
D. UTM là thế hệ tường lửa tích hợp nhiều chức năng như diệt virus, VPN.
đáp án: A
Giải thích: A là phát biểu SAI vì tường lửa thường được đặt ở biên giới mạng (gateway), nó rất khó kiểm soát luồng dữ liệu đi ngang giữa các máy tính trong cùng một mạng nội bộ (LAN), và hacker nội bộ đã ở sẵn bên trong tường lửa rồi.

**16. Trong các biện pháp đối phó, biện pháp nào KHÔNG thuộc nhóm "Phòng ngừa" (Prevention)?**
A. Cài đặt tường lửa.
B. Mã hóa dữ liệu.
C. Sao lưu (Backup) và phục hồi dữ liệu.
D. Đào tạo nhận thức an ninh cho nhân viên.
đáp án: C
Giải thích: C đúng là đáp án cần chọn vì Sao lưu và phục hồi thuộc nhóm "Phục hồi" (Recovery) - xử lý sau khi sự cố đã xảy ra; A, B, D là các biện pháp làm trước để sự cố không xảy ra (Phòng ngừa).

**17. Yếu tố nào sau đây KHÔNG phải là một phần của Tam giác CIA?**
A. Confidentiality (Bí mật)
B. Authenticity (Tính xác thực)
C. Integrity (Toàn vẹn)
D. Availability (Sẵn sàng)
đáp án: B
Giải thích: B đúng là đáp án cần chọn vì mặc dù Authenticity rất quan trọng, nhưng nó là nguyên tắc bổ sung, không nằm trong bộ 3 chữ cái C-I-A gốc; A, C, D chính là 3 đỉnh của tam giác.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (Kiểm tra độ tinh ý và hiểu sâu)

**18. Sự khác biệt chính giữa "Lỗ hổng" (Vulnerability) và "Mối đe dọa" (Threat) là gì?**
A. Lỗ hổng là từ bên ngoài, Mối đe dọa là từ bên trong.
B. Lỗ hổng là điểm yếu của hệ thống, Mối đe dọa là tác nhân khai thác điểm yếu đó.
C. Lỗ hổng là do con người, Mối đe dọa là do máy móc.
D. Hai thuật ngữ này là đồng nghĩa.
đáp án: B
Giải thích: B đúng vì Lỗ hổng (Vulnerability) là tính chất nội tại (ví dụ: quên khóa cửa), còn Mối đe dọa (Threat) là yếu tố ngoại lai có khả năng gây hại (ví dụ: tên trộm); A sai vì lỗ hổng nằm ở bên trong hệ thống; C sai vì cả hai đều có thể do người hoặc máy.

**19. Tại sao nói việc đối phó với "Tấn công thụ động" chủ yếu dựa vào "Phòng ngừa" thay vì "Phát hiện"?**
A. Vì tấn công thụ động gây thiệt hại quá lớn không thể phục hồi.
B. Vì tấn công thụ động không để lại dấu vết thay đổi dữ liệu nên rất khó phát hiện.
C. Vì phần mềm phát hiện quá đắt tiền.
D. Vì tấn công thụ động chỉ xảy ra trên mạng không dây.
đáp án: B
Giải thích: B đúng vì bản chất của thụ động là nghe lén, dữ liệu vẫn đi đến đích bình thường, hệ thống không báo lỗi, nên gần như không thể phát hiện. Do đó phải phòng ngừa trước bằng mã hóa; A sai vì tấn công chủ động mới gây thiệt hại trực tiếp; D sai vì mạng có dây vẫn bị nghe lén.

**20. Một mật khẩu như "P@ssw0rd123" tuân thủ quy tắc về độ phức tạp (ký tự đặc biệt, số, chữ hoa), nhưng vẫn bị coi là yếu. Tại sao?**
A. Vì nó quá dài.
B. Vì nó sử dụng các thay thế ký tự dễ đoán (Predictable substitutions) và từ điển phổ biến.
C. Vì nó không chứa dấu cách.
D. Vì nó không được mã hóa.
đáp án: B
Giải thích: B đúng vì theo ví dụ ở Slide 24 ("Up&atm@7!"), mật khẩu mạnh không chỉ là thay thế ký tự đơn giản (@ thay a, 0 thay o) từ một từ có nghĩa, mà cần sự ngẫu nhiên hoặc biến đổi phức tạp hơn để tránh tấn công từ điển; A sai vì dài thường tốt hơn; C, D không liên quan đến độ mạnh nội tại của chuỗi mật khẩu.

**21. Trong bối cảnh chữ ký số, "Chống thoái thác" (Non-repudiation) bảo vệ ai?**
A. Bảo vệ người gửi khỏi bị người nhận giả mạo.
B. Bảo vệ người nhận khỏi việc người gửi chối bỏ trách nhiệm.
C. Bảo vệ hacker khỏi bị phát hiện.
D. Bảo vệ dữ liệu khỏi bị virus.
đáp án: B
Giải thích: B đúng vì Chống thoái thác về nguồn gốc đảm bảo rằng khi A gửi tin cho B, A không thể cãi là "tôi không gửi". Điều này bảo vệ quyền lợi của B (người nhận) khi dùng tin nhắn đó làm bằng chứng; A sai bản chất; C, D sai hoàn toàn.

**22. "Giải pháp an toàn thông tin đơn lẻ" (như chỉ dùng Firewall) được đánh giá như thế nào trong slide?**
A. Là giải pháp tốt nhất và tiết kiệm nhất.
B. Là cách tiếp cận không hoàn toàn đúng và không đủ an toàn.
C. Là tiêu chuẩn bắt buộc của ISO.
D. Là đủ để chống lại 99% các cuộc tấn công.
đáp án: B
Giải thích: B đúng theo Slide 10, tài liệu khẳng định giải pháp đơn lẻ không thể cung cấp đủ sự an toàn mà cần cái nhìn tổng quát (Defense in Depth, kết hợp Chính sách, Con người); A, C, D là các nhận định sai lệch với nội dung slide.

**23. Điểm yếu lớn nhất của hệ thống phát hiện xâm nhập dựa trên sự bất thường (Anomaly-based IDS) là gì?**
A. Không phát hiện được tấn công Zero-day.
B. Tỷ lệ cảnh báo giả (False Positive) cao.
C. Chi phí thấp.
D. Chỉ hoạt động trên Windows.
đáp án: B
Giải thích: B đúng vì để phát hiện cái "bất thường", hệ thống phải định nghĩa thế nào là "bình thường". Khi hành vi người dùng thay đổi hợp lệ (ví dụ: làm việc khuya đột xuất), hệ thống vẫn coi là bất thường và báo động nhầm, gây phiền toái cho quản trị viên; A sai vì đây là điểm mạnh của nó.

**24. Thuật ngữ "Masquerade" (Giả mạo) trong tấn công chủ động khác với "Phishing" (Lừa đảo) ở điểm cốt lõi nào trong ngữ cảnh mạng?**
A. Masquerade là giả mạo một thực thể có đặc quyền để chiếm quyền, Phishing thường là lừa lấy thông tin.
B. Masquerade là thụ động, Phishing là chủ động.
C. Masquerade chỉ xảy ra offline.
D. Hai từ này hoàn toàn giống nhau.
đáp án: A
Giải thích: A đúng vì Masquerade (Slide 42) nhấn mạnh việc "Mạo danh một thực thể có đặc quyền" để vượt qua kiểm soát truy cập hệ thống; Phishing (tuy không định nghĩa sâu trong slide này nhưng là kiến thức liên hệ) thiên về kỹ nghệ xã hội để lừa người dùng; B sai vì cả 2 đều chủ động; C sai.

**25. Tại sao Slide 5 nói máy tính là "vũ khí hủy diệt hàng loạt"?**
A. Vì nó có thể phát nổ.
B. Vì các hành động khủng bố mạng có thể gây hậu quả thảm khốc diện rộng chỉ bằng vài cái gõ phím.
C. Vì máy tính rất nặng.
D. Vì máy tính chứa nhiều virus sinh học.
đáp án: B
Giải thích: B đúng theo trích dẫn của Barack Obama, ám chỉ sức công phá của tấn công mạng đối với cơ sở hạ tầng trọng yếu (điện, nước, tài chính) có tác động ngang ngửa vũ khí truyền thống; A, C, D là nghĩa đen sai lệch.

**26. Trong chu trình PDCA (Plan-Do-Check-Act) được ẩn dụ trong Slide 19 về chính sách, bước "Theo dõi, kiểm tra, quản lý" tương ứng với gì?**
A. Viết chính sách một lần rồi cất vào tủ.
B. Chính sách phải được cải tiến liên tục và giám sát thực thi.
C. Mua phần mềm đắt tiền nhất.
D. Tuyển dụng nhiều nhân viên bảo vệ.
đáp án: B
Giải thích: B đúng vì Slide 19 nhấn mạnh chính sách phải được "theo dõi, kiểm tra, quản lý và cải tiến liên tục" (vòng tròn khép kín), chứ không phải tài liệu tĩnh; A sai quy trình; C, D không liên quan trực tiếp đến vòng đời chính sách.

**27. Một cuộc tấn công làm thay đổi thứ tự các gói tin trong một luồng dữ liệu được xếp vào loại nào?**
A. Nghe lén.
B. Thay đổi thông điệp (Modification of messages).
C. Từ chối dịch vụ.
D. Phân tích lưu lượng.
đáp án: B
Giải thích: B đúng theo Slide 44, "Thay đổi nội dung thông điệp" bao gồm cả việc nội dung bị thay đổi, trì hoãn hoặc "sắp xếp lại" (reordered) để tạo hiệu ứng trái phép; A, D là thụ động; C là làm nghẽn.

**28. Code Red, được nhắc đến trong bài tập cuối chương, là ví dụ của loại mã độc nào và cơ chế lây lan của nó?**
A. Virus - lây qua USB.
B. Worm - tự nhân bản qua mạng khai thác lỗ hổng.
C. Trojan - ẩn trong phần mềm hợp lệ.
D. Spyware - theo dõi bàn phím.
đáp án: B
Giải thích: B đúng (dựa trên kiến thức thực tế được gợi ý ở phần bài tập slide 73, mục câu hỏi trắc nghiệm số 5), Worm khác Virus ở chỗ nó không cần vật chủ (file) để bám vào mà tự tìm lỗ hổng mạng để nhảy từ máy này sang máy khác.

**29. Dịch vụ "Toàn vẹn không hướng kết nối" (Connectionless Integrity) khác gì với "Toàn vẹn có hướng kết nối"?**
A. Nó bảo vệ từng gói tin riêng lẻ nhưng không phát hiện được việc mất gói hoặc gói bị đảo thứ tự.
B. Nó bảo vệ cả luồng dữ liệu liên tục.
C. Nó phát hiện được việc phát lại (replay).
D. Nó yêu cầu phải có kết nối Internet.
đáp án: A
Giải thích: A đúng theo Slide 56, Toàn vẹn không hướng kết nối chỉ xem xét từng thông điệp cụ thể xem có bị sửa không, còn Toàn vẹn có hướng kết nối (Connection-oriented) mới kiểm soát được cả dòng thông điệp (mất, trùng, sai thứ tự); B, C là đặc điểm của có hướng kết nối.

**30. Mục đích chính của việc "Phân loại thông tin" (ví dụ: Tuyệt mật, Mật, Nội bộ) trong Chính sách an toàn thông tin là gì?**
A. Để làm khó nhân viên.
B. Để xác định giá trị tài sản và áp dụng mức độ bảo vệ phù hợp (tránh lãng phí hoặc bảo vệ không đủ).
C. Để công khai lên website.
D. Để bán dữ liệu lấy tiền.
đáp án: B
Giải thích: B đúng vì Slide 20 nói về mục tiêu chính sách là "Làm rõ cái gì đang được bảo vệ và vì sao". Phân loại giúp biết cái nào quan trọng (Tuyệt mật) cần đầu tư bảo mật nhiều, cái nào ít quan trọng (Công khai) thì không cần tốn kém; A, C, D sai mục đích.