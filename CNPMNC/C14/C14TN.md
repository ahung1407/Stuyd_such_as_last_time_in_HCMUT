Xin lỗi bạn vì phần trình bày trước đó chưa hoàn toàn sát với định dạng "Giải thích không xuống dòng" mà bạn yêu cầu.

Dưới đây là bộ **40 câu hỏi trắc nghiệm** đã được điều chỉnh **chính xác 100% theo định dạng** bạn mong muốn: phần giải thích nằm trên một dòng duy nhất để thuận tiện cho việc in ấn và tra cứu nhanh.

---

**1. Resilience (Khả năng phục hồi) của một hệ thống được định nghĩa chính xác nhất là gì?**
A. Một chỉ số đo lường chính xác khả năng chịu lỗi của hệ thống
B. Một sự đánh giá (judgment) về khả năng duy trì các dịch vụ quan trọng khi đối mặt với sự cố gián đoạn
C. Khả năng ngăn chặn tuyệt đối mọi cuộc tấn công mạng
D. Khả năng tự động sửa chữa mã nguồn khi có lỗi xảy ra
đáp án: B
Giải thích: B đúng vì slide định nghĩa Resilience là một "judgment" về việc duy trì "critical services" khi có "disruptive events"; A sai vì Resilience không có metric đo lường chính xác; C sai vì Resilience giả định không thể ngăn chặn tuyệt đối; D sai vì Resilience tập trung vào vận hành và phục hồi dịch vụ chứ không phải tự viết lại code.

**2. Trong mô hình 4 R’s, hoạt động nào tập trung vào việc phát hiện sớm các dấu hiệu của sự cố hoặc tấn công?**
A. Resistance
B. Recovery
C. Recognition
D. Reinstatement
đáp án: C
Giải thích: C đúng vì Recognition là hoạt động nhận diện sớm các chỉ báo (indications) của lỗi hệ thống hoặc tấn công; A sai vì Resistance là kháng cự/đỡ đòn; B sai vì Recovery là hồi phục sau khi bị đánh; D sai vì Reinstatement là khôi phục hoàn toàn sau sự cố.

**3. Theo giả định của Resilience Engineering, mối quan hệ giữa nó và Reliability Engineering là gì?**
A. Resilience thay thế hoàn toàn Reliability
B. Resilience tập trung vào lỗi phần cứng, Reliability tập trung vào phần mềm
C. Resilience giả định rằng các thực hành Reliability tốt đã được áp dụng để giảm lỗi kỹ thuật nội tại
D. Reliability quan trọng hơn Resilience
đáp án: C
Giải thích: C đúng vì slide nêu rõ Resilience Engineering giả định "good reliability engineering practices have been used"; A sai vì chúng bổ trợ nhau; B sai vì cả hai đều quan tâm tổng thể; D sai vì không so sánh hơn kém mà là các tầng bảo vệ khác nhau.

**4. Trong bảo mật thông tin (Cybersecurity), tam giác CIA đại diện cho 3 thuộc tính nào cần bảo vệ?**
A. Control, Integrity, Availability
B. Confidentiality, Intelligence, Availability
C. Confidentiality, Integrity, Availability
D. Control, Intelligence, Authentication
đáp án: C
Giải thích: C đúng vì đó là 3 trụ cột: Bí mật (Confidentiality), Toàn vẹn (Integrity), Sẵn sàng (Availability); các phương án còn lại A, B, D đều sai tên gọi chuẩn của CIA triad.

**5. Mô hình "Phô mai Thụy Sĩ" (Swiss Cheese Model) giải thích nguyên nhân gây ra thảm họa hệ thống là do đâu?**
A. Do một lỗi duy nhất cực kỳ nghiêm trọng
B. Do hacker quá giỏi
C. Do các lỗ hổng (holes) trên tất cả các lớp phòng thủ xếp thẳng hàng với nhau
D. Do hệ thống không có lớp phòng thủ nào
đáp án: C
Giải thích: C đúng vì tai nạn xảy ra khi "the holes line up and all of the defenses fail"; A sai vì mô hình này nhấn mạnh sự thất bại của nhiều lớp; B và D sai vì không phản ánh bản chất cấu trúc lớp và sự thẳng hàng của các lỗ hổng trong mô hình.

**6. "Cybersecurity" (An ninh mạng) được coi là một vấn đề thuộc phạm vi nào?**
A. Kỹ thuật thuần túy (Technical only)
B. Xã hội - Kỹ thuật (Sociotechnical)
C. Quản lý nhân sự
D. Pháp lý
đáp án: B
Giải thích: B đúng vì slide khẳng định nó bao gồm bảo vệ công dân, doanh nghiệp, hạ tầng và liên quan đến cả hành vi con người chứ không chỉ máy móc; A sai vì quá hẹp; C và D sai vì chỉ là một phần nhỏ trong tổng thể vấn đề.

**7. Hoạt động "Reinstatement" (Khôi phục hoàn toàn) diễn ra khi nào?**
A. Ngay khi phát hiện tấn công
B. Song song với quá trình kháng cự
C. Sau khi hệ thống đã được sửa chữa và sẵn sàng quay lại hoạt động bình thường hoàn toàn
D. Trước khi sự cố xảy ra
đáp án: C
Giải thích: C đúng vì Reinstatement là bước cuối cùng trong 4 R's để đưa tất cả dịch vụ trở lại bình thường; A sai vì đó là Recognition; B sai vì đó là Resistance; D sai vì đó là giai đoạn chuẩn bị/Normal operation.

**8. Lỗ hổng (Vulnerabilities) trong các lớp phòng thủ có tính chất gì theo mô hình Swiss Cheese?**
A. Tĩnh (Static) - luôn nằm cố định một chỗ
B. Động (Dynamic) - thay đổi vị trí và kích thước tùy điều kiện vận hành
C. Vô hình - không thể phát hiện được
D. Không thể khắc phục
đáp án: B
Giải thích: B đúng vì slide mô tả các lỗ hổng trên miếng phô mai là "Dynamic", phụ thuộc vào điều kiện vận hành; A sai hoàn toàn với lý thuyết; C và D sai vì ta có thể phát hiện và vá lỗi thông qua giảm latent conditions.

**9. Hai chiến lược chính để xây dựng các lớp phòng thủ (Defensive layers) là gì?**
A. Detection và Prevention
B. Hardware và Software
C. Redundancy và Diversity
D. Coding và Testing
đáp án: C
Giải thích: C đúng vì slide nhấn mạnh dùng "Redundancy" (dư thừa) và "Diversity" (đa dạng) để tạo lớp phòng thủ; A, B, D sai vì là các thuật ngữ chung chung không phải chiến lược cốt lõi được nhắc đến trong bối cảnh thiết kế lớp phòng thủ của chương này.

**10. Mục tiêu của "Resistance" (Kháng cự) trong 4 R's là gì?**
A. Nhận diện lỗi sớm
B. Khôi phục dữ liệu từ backup
C. Giảm xác suất hệ thống bị lỗi khi đã phát hiện triệu chứng tấn công
D. Đưa hệ thống về trạng thái ban đầu
đáp án: C
Giải thích: C đúng vì nếu phát hiện sớm, chiến lược kháng cự được dùng để "reduce the probability that the system will fail"; A sai vì là Recognition; B sai vì là Recovery; D sai vì là Reinstatement.

**11. Tại sao bước đầu tiên của Resilience Engineering luôn là "Identify critical services/assets"?**
A. Để báo cáo với cấp trên cho đầy đủ quy trình
B. Vì nguồn lực hữu hạn, cần ưu tiên bảo vệ những thành phần giúp hệ thống đạt được mục đích chính
C. Để loại bỏ các dịch vụ không quan trọng khỏi hệ thống ngay lập tức
D. Để tính toán chi phí phần cứng
đáp án: B
Giải thích: B đúng vì Resilience là duy trì tính liên tục của cái quan trọng nhất trong điều kiện khó khăn; A sai vì đây là yêu cầu kỹ thuật thực tế chứ không phải thủ tục; C sai vì dịch vụ phụ vẫn cần thiết ở trạng thái bình thường; D sai vì không phải mục tiêu chính của bước này.

**12. Trong hệ thống Mentcare, việc duy trì "Local copies" (Bản sao cục bộ) trên máy bác sĩ giải quyết rủi ro nào và tạo ra rủi ro nào?**
A. Giải quyết rủi ro mất dữ liệu, tạo ra rủi ro server quá tải
B. Giải quyết rủi ro server chết (Availability), tạo ra rủi ro lộ dữ liệu (Confidentiality)
C. Giải quyết rủi ro malware, tạo ra rủi ro mất điện
D. Giải quyết rủi ro nhập liệu sai, tạo ra rủi ro xung đột dữ liệu
đáp án: B
Giải thích: B đúng vì Local copies giúp bác sĩ làm việc khi server chết (tăng Availability/Resilience) nhưng dữ liệu nằm rải rác trên laptop dễ bị mất cắp (giảm Confidentiality); A sai vì nó giảm tải server chứ không tăng; C và D sai vì không liên quan trực tiếp đến bản chất chiến lược này.

**13. "Diversity" (Sự đa dạng) giúp khắc phục điểm yếu nào của "Redundancy" (Sự dư thừa)?**
A. Redundancy quá tốn kém
B. Redundancy làm chậm hệ thống
C. Redundancy dễ bị "Common mode failure" (Lỗi chung) - nghĩa là cùng một loại tấn công có thể hạ gục tất cả các bản sao giống hệt nhau
D. Redundancy khó cài đặt
đáp án: C
Giải thích: C đúng vì nếu bạn có 2 server chạy cùng một OS giống hệt nhau (Redundancy), một con virus tấn công lỗ hổng OS đó sẽ hạ gục cả hai, Diversity (dùng OS khác nhau) sẽ ngăn chặn điều này; A, B, D sai vì không phải lý do chính về mặt kỹ thuật Resilience.

**14. Watchdog timer là một ví dụ điển hình của việc kết hợp hai hoạt động nào trong 4 R's một cách tự động?**
A. Recognition và Resistance
B. Recognition và Recovery
C. Resistance và Reinstatement
D. Recovery và Reinstatement
đáp án: B
Giải thích: B đúng vì Watchdog nhận diện (Recognition) lỗi treo máy thông qua việc hết giờ (timeout) và thực hiện hồi phục (Recovery) bằng cách khởi động lại hệ thống; A sai vì nó không kháng cự cuộc tấn công; C và D sai vì Reinstatement là quá trình rộng hơn.

**15. Tại sao việc "Tự động hóa quy trình" (Process automation) đôi khi lại được coi là trở ngại cho Resilience?**
A. Vì máy móc chạy chậm hơn con người
B. Vì tự động hóa tốn điện năng
C. Vì nó làm giảm tính linh hoạt (flexibility) và khả năng thích ứng của con người khi đối mặt với tình huống bất ngờ chưa được lập trình
D. Vì tự động hóa luôn gây ra lỗi phần mềm
đáp án: C
Giải thích: C đúng vì slide Key points nhấn mạnh quy trình cần linh hoạt để con người đối phó sự cố, tự động hóa cứng nhắc khiến con người khó can thiệp thủ công; A, B, D sai vì không phản ánh đúng bản chất vấn đề quản lý sự cố trong Resilience.

**16. Trong phân tích hệ thống sống sót, "Softspot" (Điểm mềm) được xác định là thành phần:**
A. Quan trọng nhưng rất an toàn
B. Không quan trọng và dễ bị tấn công
C. Quan trọng (Essential) và dễ bị tổn thương (Compromisable)
D. Chứa nhiều dữ liệu rác
đáp án: C
Giải thích: C đúng vì đây là định nghĩa của Softspot - nơi cần tập trung nguồn lực bảo vệ nhất; A sai vì nếu an toàn thì không phải điểm yếu; B sai vì không quan trọng thì không cần ưu tiên bảo vệ; D sai hoàn toàn.

**17. Biện pháp "Secure delete" (Xóa an toàn) dữ liệu trên máy Client vào cuối ngày làm việc nhằm mục đích gì?**
A. Giải phóng dung lượng ổ cứng
B. Tăng tốc độ máy tính cho ngày hôm sau
C. Giảm thiểu rủi ro Confidentiality (Bảo mật) nếu máy tính bị mất cắp sau giờ làm
D. Xóa dấu vết truy cập web của bác sĩ
đáp án: C
Giải thích: C đúng vì đây là biện pháp giảm nhẹ rủi ro đi kèm với chiến lược "Local copies"; A và B sai vì chỉ là lợi ích phụ không đáng kể; D sai vì không liên quan đến mục tiêu hệ thống Mentcare.

**18. Cơ chế "Pre-fetching" (Tải trước) thông tin bệnh nhân có lịch hẹn trong ngày thể hiện tư duy thiết kế nào?**
A. Tối ưu hóa trải nghiệm người dùng
B. Dự phòng cho sự cố mất kết nối (Resilience) bằng cách chuẩn bị dữ liệu cần thiết nhất (Critical data) trước khi sự cố xảy ra
C. Kiểm soát quyền truy cập của bác sĩ
D. Tiết kiệm băng thông mạng vào giờ cao điểm
đáp án: B
Giải thích: B đúng vì đây là chiến lược duy trì dịch vụ (Maintenance of critical service) phòng khi server sập giữa chừng; A, C, D sai vì không phải mục đích chính trong bối cảnh Resilience.

**19. Trong Mentcare, tại sao mạng "Ad-hoc" giữa các máy Client lại hữu ích?**
A. Để các bác sĩ chat với nhau cho vui
B. Để chia sẻ dữ liệu bệnh nhân tóm tắt trực tiếp khi Server trung tâm bị ngắt kết nối
C. Để thay thế hoàn toàn mạng Internet
D. Để tăng tốc độ download từ Server
đáp án: B
Giải thích: B đúng vì slide mô tả kiến trúc Resilience cho phép các máy client giao tiếp ngang hàng (P2P) để trao đổi thông tin khi mất kết nối về trung tâm; A sai mục đích; C sai vì chỉ là giải pháp tình thế; D sai vì không liên quan tốc độ download từ server.

**20. Việc sử dụng "Cryptographic checksums" (Hàm băm mật mã) trên Database giúp giải quyết vấn đề gì?**
A. Ngăn chặn hacker truy cập database
B. Nhận diện (Recognition) sự cố toàn vẹn dữ liệu (Data corruption) hoặc bị sửa đổi trái phép
C. Khôi phục dữ liệu bị mất
D. Mã hóa dữ liệu để không ai đọc được
đáp án: B
Giải thích: B đúng vì Checksum dùng để kiểm tra xem dữ liệu có bị thay đổi so với ban đầu hay không (Integrity check); A sai vì Checksum không chặn truy cập; C sai vì nó chỉ phát hiện chứ không sửa (phải dùng log để sửa); D sai vì Checksum không phải là Encryption (mã hóa).

**21. Trong mô hình Swiss Cheese, "Latent conditions" (Điều kiện tiềm ẩn) tương ứng với điều gì trong thực tế?**
A. Các cuộc tấn công của hacker
B. Các lỗi kỹ thuật hoặc quy trình chưa được phát hiện/khắc phục nằm sẵn trong hệ thống (như lỗ hổng phần mềm, quy trình lỏng lẻo)
C. Sự may mắn của người vận hành
D. Các thảm họa thiên nhiên
đáp án: B
Giải thích: B đúng vì Latent conditions là các "lỗ hổng" trên miếng phô mai, chúng tồn tại ở đó chờ đợi sự kiện kích hoạt; A và D sai vì là tác nhân bên ngoài (mũi tên); C sai vì không liên quan.

**22. Chiến lược "Over-provisioning" (Cấp phát dư tài nguyên server) là một biện pháp thuộc nhóm nào trong 4 R's?**
A. Recognition
B. Resistance
C. Recovery
D. Reinstatement
đáp án: B
Giải thích: B đúng vì việc có server mạnh hơn mức cần thiết giúp hệ thống "chống chịu" (resist) được các cuộc tấn công DoS quy mô nhỏ mà không bị sập, giảm xác suất thất bại; A, C, D sai vì không phù hợp với chức năng của over-provisioning.

**23. Tại sao "Warning service" (Dịch vụ cảnh báo) trong Mentcare lại được xếp vào nhóm Critical Services?**
A. Vì nó xử lý nhiều dữ liệu nhất
B. Vì nó liên quan trực tiếp đến sự an toàn tính mạng của nhân viên y tế và bệnh nhân
C. Vì nó khó lập trình nhất
D. Vì bác sĩ yêu cầu như vậy
đáp án: B
Giải thích: B đúng vì định nghĩa Critical services là dịch vụ mà nếu thất bại sẽ gây hậu quả nghiêm trọng về con người/kinh tế/xã hội, ở đây là an toàn tính mạng; A, C, D sai vì không phải tiêu chí xác định tính Critical.

**24. Mâu thuẫn giữa Usability (Tiện dụng) và Security (Bảo mật) thường dẫn đến kết quả tiêu cực nào nếu thiết kế kém?**
A. Hệ thống chạy nhanh hơn
B. Người dùng tuân thủ tuyệt đối quy định
C. Người dùng tìm cách "lách luật" (workarounds) để làm việc dễ dàng hơn, vô tình tạo ra lỗ hổng bảo mật
D. Hacker không thể tấn công được
đáp án: C
Giải thích: C đúng vì slide đề cập "Inappropriate trade-offs" dẫn đến hành vi không an toàn của con người (human carelessness/workarounds); A, B, D sai vì trái với thực tế tâm lý người dùng.

**25. Vai trò của Transaction Log (Nhật ký giao dịch) trong kiến trúc Resilience của Mentcare là gì?**
A. Để giám sát hiệu suất nhân viên
B. Hỗ trợ "Replayable" (Phát lại) các giao dịch để khôi phục Database về trạng thái mới nhất sau khi load bản backup
C. Để chặn virus
D. Để gửi báo cáo cho Bộ Y tế
đáp án: B
Giải thích: B đúng vì khi Database hỏng, ta load bản Backup (cũ) rồi chạy lại Transaction Log (mới) để lấp đầy khoảng trống dữ liệu, phục vụ Recovery/Reinstatement; A, C, D sai vì sai mục đích kỹ thuật.

**26. Bạn đang thiết kế một hệ thống bán vé tàu hỏa. Khi Database chính bị sập, hệ thống chuyển sang chế độ: "Cho phép bán vé nhưng không cho phép chọn chỗ ngồi cụ thể (hệ thống tự gán sau)". Đây là ví dụ của:**
A. System Failure
B. Critical Service Delivery (Duy trì dịch vụ cốt lõi ở mức hạn chế)
C. Full Reinstatement
D. Security Breach
đáp án: B
Giải thích: B đúng vì dịch vụ cốt lõi là "bán được vé" vẫn hoạt động, còn tính năng phụ "chọn chỗ" bị cắt giảm để duy trì hệ thống; A sai vì hệ thống vẫn đang phục vụ (Resilient); C sai vì chưa khôi phục hoàn toàn; D sai vì chưa chắc đã là lỗi bảo mật.

**27. Một công ty áp dụng quy định: "Mọi nhân viên phải xác thực bằng mật khẩu VÀ mã OTP gửi về điện thoại". Đây là ứng dụng của nguyên tắc nào?**
A. Redundancy (Dư thừa)
B. Diversity (Đa dạng)
C. Recognition (Nhận diện)
D. Recovery (Hồi phục)
đáp án: B
Giải thích: B đúng vì dùng 2 phương thức khác nhau (Mật khẩu - cái bạn biết + Điện thoại - cái bạn có) là Diversity; A sai vì Redundancy là 2 mật khẩu giống nhau; C và D sai giai đoạn.

**28. Để bảo vệ một hệ thống điều khiển lò phản ứng hạt nhân (Safety-critical), bạn nên áp dụng giả định nào đầu tiên?**
A. Hệ thống sẽ không bao giờ bị lỗi vì đã được kiểm tra kỹ
B. Con người vận hành sẽ không bao giờ buồn ngủ hay mắc sai lầm
C. Sự cố chắc chắn sẽ xảy ra (do lỗi người hoặc máy), nên cần thiết kế nhiều lớp rào chắn (barriers) tự động
D. Chỉ cần tường lửa mạnh là đủ
đáp án: C
Giải thích: C đúng theo tư duy Resilience Engineering và Systems Approach; A, B sai vì là những giả định sai lầm chết người (Organizational ignorance); D sai vì tường lửa không chặn được lỗi vận hành nội bộ.

**29. Khi phân tích một hệ thống thương mại điện tử, bạn xác định "Chức năng thanh toán" là Softspot. Chiến lược Resilience phù hợp nhất cho nó là gì?**
A. Loại bỏ chức năng thanh toán
B. Thiết kế dư thừa (Redundancy) với nhiều cổng thanh toán khác nhau và server dự phòng
C. Chỉ cần cài phần mềm diệt virus
D. Không cần làm gì vì bên cung cấp dịch vụ thanh toán lo hết
đáp án: B
Giải thích: B đúng vì Softspot cần được bảo vệ kỹ bằng các lớp phòng thủ (Redundancy/Diversity); A sai vì mất chức năng này là mất tiền; C sai vì quá yếu; D sai vì là sự thờ ơ (Ignorance).

**30. Tình huống: Hacker tấn công SQL Injection vào trang web. Hệ thống phát hiện chuỗi ký tự lạ và tự động chặn IP đó. Đây là hoạt động:**
A. Recognition và Recovery
B. Recognition và Resistance
C. Resistance và Reinstatement
D. Recovery và Reinstatement
đáp án: B
Giải thích: B đúng vì phát hiện chuỗi lạ là Recognition, và chặn IP để ngăn tấn công tiếp diễn là Resistance; A sai vì chưa có thiệt hại xảy ra để cần Recovery; C và D sai giai đoạn.

**31. Nếu bạn muốn áp dụng mô hình Resilience cho quy trình quản lý nhân sự, đâu là ví dụ của "Recovery"?**
A. Tuyển dụng nhân sự dự phòng cho các vị trí chủ chốt
B. Đào tạo nhân viên đa năng (cross-training) để khi một người ốm, người khác có thể làm thay ngay lập tức các việc quan trọng
C. Mua bảo hiểm tai nạn cho nhân viên
D. Sa thải nhân viên làm sai
đáp án: B
Giải thích: B đúng vì đây là khả năng hồi phục dịch vụ (công việc) khi có sự cố (nhân viên ốm) bằng nguồn lực thay thế; A sai vì là Redundancy (chuẩn bị); C sai vì là tài chính; D sai vì là trừng phạt.

**32. Một hệ thống Smart Home bị mất kết nối Internet. Đèn thông minh vẫn có thể bật tắt bằng công tắc vật lý. Thiết kế này thể hiện:**
A. Sự lạc hậu về công nghệ
B. Resilience thông qua cơ chế dự phòng thủ công (Manual redundancy/fallback) cho dịch vụ cốt lõi
C. Lỗi thiết kế hệ thống
D. Vi phạm nguyên tắc bảo mật
đáp án: B
Giải thích: B đúng vì "bật tắt đèn" là dịch vụ cốt lõi, công tắc vật lý đảm bảo nó vẫn chạy khi hệ thống cao cấp (Internet) sập; A, C, D sai.

**33. Trong sơ đồ quy trình Resilience (Slide 28), nếu kết quả "Testing" (Kiểm thử) cho thấy kế hoạch phục hồi quá chậm, bạn cần làm gì?**
A. Giữ nguyên kế hoạch
B. Quay lại các bước lập kế hoạch (Plan recovery/reinstatement) để điều chỉnh và tối ưu hóa
C. Bỏ qua bước Testing lần sau
D. Đổ lỗi cho nhân viên thực hiện
đáp án: B
Giải thích: B đúng vì Testing là để tìm ra điểm yếu và cải tiến quy trình (vòng lặp phản hồi); A, C, D sai vì là tư duy quản lý sai lầm.

**34. Để giảm thiểu "Organizational ignorance" (Sự thờ ơ của tổ chức) về an ninh mạng, biện pháp nào hiệu quả nhất?**
A. Mua phần mềm đắt tiền nhất
B. Tổ chức các buổi diễn tập sự cố (drills) và báo cáo rõ ràng về các rủi ro cho lãnh đạo
C. Giấu nhẹm các sự cố nhỏ
D. Chỉ tuyển nhân viên IT giỏi
đáp án: B
Giải thích: B đúng vì Ignorance đến từ việc thiếu hiểu biết thực tế, diễn tập giúp tổ chức "tỉnh ngộ" về mức độ nghiêm trọng; A và D sai vì chỉ là giải pháp kỹ thuật/nhân sự cục bộ; C sai vì làm tăng Ignorance.

**35. Một tấn công Ransomware đã mã hóa toàn bộ dữ liệu bệnh viện. Hệ thống Backup cũng bị mã hóa do kết nối trực tiếp với mạng chính. Lỗi nằm ở đâu trong thiết kế Resilience?**
A. Thiếu Diversity trong thiết kế Backup (lẽ ra nên có backup offline/cold backup)
B. Hacker quá giỏi không thể đỡ được
C. Do không dùng phần mềm diệt virus
D. Do bệnh viện quá nhiều dữ liệu
đáp án: A
Giải thích: A đúng vì nếu Backup cũng nằm trên cùng một hạ tầng mạng (thiếu sự đa dạng/cách ly), nó sẽ chết chung với hệ thống chính (Common mode failure), cần backup offline.

**36. Khi áp dụng Resilience cho "Internet of Things" (IoT), việc thiết bị không thể cập nhật bản vá bảo mật từ xa (OTA update) là ví dụ của:**
A. Threat Identification
B. Latent condition (Điều kiện tiềm ẩn)
C. Active failure
D. Resistance strategy
đáp án: B
Giải thích: B đúng vì việc không thể update là một lỗ hổng nằm sẵn đó (Latent), chờ đợi hacker khai thác, nó làm cho lỗ hổng trên miếng phô mai không thể được vá lại.

**37. Trong Mentcare, nếu thay vì dùng "Local copies", ta bắt buộc bác sĩ phải dùng 4G cá nhân để kết nối về Server khi mạng bệnh viện hỏng. Đây là chiến lược:**
A. Resistance bằng Diversity (Đa dạng kênh truyền)
B. Recovery bằng Redundancy
C. Reinstatement
D. Recognition
đáp án: A
Giải thích: A đúng vì ta dùng một kênh truyền khác loại (4G vs Cáp quang/Wifi bệnh viện) để duy trì kết nối, đây là sự đa dạng (Diversity) để kháng cự lại sự cố đứt mạng chính.

**38. Một hệ thống phát hiện xâm nhập (IDS) gửi cảnh báo giả (False alarm) quá nhiều khiến admin tắt thông báo. Sau đó hệ thống bị hack thật. Đây là thất bại ở khâu nào?**
A. Do admin lười biếng
B. Thất bại trong khâu Recognition (Nhận diện) do thiết kế kém gây ra "Alert fatigue" (Mệt mỏi vì cảnh báo)
C. Thất bại ở Recovery
D. Thất bại ở Reinstatement
đáp án: B
Giải thích: B đúng vì Recognition không hiệu quả (quá nhiều noise) dẫn đến việc con người bỏ qua cảnh báo thật, đây là vấn đề thiết kế hệ thống Resilience kém.

**39. Nếu bạn là kỹ sư hệ thống, bạn sẽ đề xuất gì để giảm "Human carelessness" (Sự bất cẩn con người) khi đặt mật khẩu?**
A. Phạt tiền ai đặt mật khẩu yếu
B. Thiết kế hệ thống ép buộc mật khẩu mạnh nhưng hỗ trợ xác thực sinh trắc học (vân tay/FaceID) để tiện dụng (Usability)
C. Bắt nhân viên đổi mật khẩu hàng ngày
D. Loại bỏ hoàn toàn mật khẩu
đáp án: B
Giải thích: B đúng vì nó giải quyết bài toán Trade-off: Đảm bảo Security (mật khẩu mạnh) nhưng tăng Usability (sinh trắc học) để người dùng không cảm thấy phiền phức và tìm cách lách luật.

**40. Câu nói nào tóm tắt đúng nhất tinh thần của Chương 5 này?**
A. "Phòng bệnh hơn chữa bệnh" (Chỉ tập trung ngăn chặn)
B. "Mất bò mới lo làm chuồng" (Chỉ lo hồi phục)
C. "Chuẩn bị cho điều tồi tệ nhất và hy vọng vào điều tốt đẹp nhất" (Sẵn sàng cho sự cố không thể tránh khỏi)
D. "Không có gì là không thể phá vỡ" (Chấp nhận thất bại nhưng không làm gì cả)
đáp án: C
Giải thích: C phản ánh đúng nhất tư duy Resilience là biết rằng sự cố sẽ xảy ra (Assumption of failure) và chuẩn bị kỹ lưỡng (Planning/4 R's) để sống sót qua nó.