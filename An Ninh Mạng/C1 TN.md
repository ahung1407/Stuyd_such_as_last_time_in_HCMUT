Chào bạn, đây là bộ câu hỏi trắc nghiệm được biên soạn chi tiết dựa trên nội dung Chương 1 từ tài liệu "C1.pdf" bạn cung cấp, bao gồm các dạng câu hỏi bạn yêu cầu để nắm vững kiến thức.

### Dạng 1: Hiểu & Áp dụng

**1. Một quản trị viên hệ thống thiết lập hệ thống sao lưu (backup) dữ liệu định kỳ hàng ngày để đảm bảo rằng nếu hệ thống bị tấn công xóa dữ liệu, họ có thể khôi phục lại được. Hành động này thuộc về loại biện pháp đối phó nào?**
A. Phòng ngừa (Prevention)
B. Phát hiện (Detection)
C. Phục hồi (Recovery)
D. Tấn công (Attack)
đáp án: C
Giải thích: C đúng vì theo tài liệu, Phục hồi tập trung vào việc khôi phục hệ thống sau tấn công, ví dụ như giải pháp sao lưu và phục hồi dữ liệu; A sai vì Phòng ngừa tập trung vào ngăn chặn vi phạm (ví dụ tường lửa); B sai vì Phát hiện tập trung vào tìm ra vi phạm càng nhanh càng tốt (ví dụ IDS); D sai vì Tấn công là hành động vi phạm chứ không phải biện pháp đối phó.

**2. Tin tặc bắt được gói tin chuyển tiền từ A sang B, thay đổi số tiền từ 10$ thành 1000$ rồi gửi tiếp cho ngân hàng. Đây là loại tấn công nào và vi phạm nguyên tắc gì?**
A. Tấn công thụ động - Vi phạm tính Bí mật
B. Tấn công chủ động - Vi phạm tính Toàn vẹn
C. Tấn công thụ động - Vi phạm tính Sẵn sàng
D. Tấn công chủ động - Vi phạm tính Bí mật
đáp án: B
Giải thích: B đúng vì đây là hành động thay đổi nội dung thông điệp thuộc tấn công chủ động và vi phạm tính Toàn vẹn (bảo vệ thông tin khỏi sự sửa đổi trái phép); A sai vì tấn công thụ động chỉ nghe lén hoặc phân tích lưu lượng chứ không sửa đổi dữ liệu; C sai vì tính Sẵn sàng liên quan đến khả năng truy cập dịch vụ; D sai vì mặc dù có thể vi phạm bí mật nhưng tính chất chính của việc "sửa đổi" là vi phạm tính Toàn vẹn.

**3. Theo mô hình phát hiện xâm nhập (IDS), nếu hệ thống so sánh lưu lượng mạng hiện tại với một hồ sơ lưu lượng chuẩn (baseline) đã được thiết lập trước đó để tìm sự thay đổi đột ngột, thì đây là kỹ thuật gì?**
A. Phát hiện dựa trên mẫu (Signature-based)
B. Kiểm tra gói tin sâu (Deep Packet Inspection)
C. Phát hiện dựa trên bất thường (Anomaly-based)
D. Tường lửa UTM (Unified Threat Management)
đáp án: C
Giải thích: C đúng vì phát hiện dựa trên bất thường tạo một hồ sơ lưu lượng chuẩn và tìm ra sự bất thường khi lưu lượng thay đổi đột ngột; A sai vì phát hiện dựa trên mẫu so sánh gói tin với cơ sở dữ liệu các mẫu tấn công đã biết; B sai vì kiểm tra gói tin sâu là xem xét nội dung cụ thể trong gói tin; D sai vì UTM là giải pháp tường lửa hợp nhất nhiều chức năng chứ không phải tên riêng của kỹ thuật này.

### Dạng 2: Tổng hợp & Liên kết

**4. Dữ liệu của một công ty bị mã độc tống tiền (Ransomware) mã hóa khiến nhân viên không thể mở được file để làm việc. Theo phần thảo luận và định nghĩa, nguyên tắc an toàn thông tin nào đã bị vi phạm nghiêm trọng nhất trong tình huống này?**
A. Tính Bí mật (Confidentiality)
B. Tính Toàn vẹn (Integrity)
C. Tính Sẵn sàng (Availability)
D. Tính Chống thoái thác (Non-repudiation)
đáp án: C
Giải thích: C đúng vì mục tiêu của tính Sẵn sàng là đảm bảo dữ liệu có thể truy cập được bởi người dùng có quyền khi cần, Ransomware ngăn chặn việc truy cập này,; A sai vì Ransomware thường không nhất thiết tiết lộ thông tin ra ngoài (dù có thể đi kèm); B sai vì mặc dù dữ liệu bị thay đổi (mã hóa) nhưng mục đích chính là ngăn cản truy cập (Availability); D sai vì Chống thoái thác liên quan đến việc phủ nhận giao dịch.

**5. Mối quan hệ giữa "Tấn công thụ động" và các biện pháp ứng phó được mô tả như thế nào là chính xác nhất theo tài liệu?**
A. Dễ phát hiện nhưng khó ngăn chặn, cần tập trung vào phục hồi.
B. Rất khó phát hiện, cần tập trung vào biện pháp ngăn chặn.
C. Dễ phát hiện và dễ ngăn chặn bằng tường lửa.
D. Không thể ngăn chặn, chỉ có thể chấp nhận rủi ro.
đáp án: B
Giải thích: B đúng vì tấn công thụ động rất khó phát hiện do không thay đổi dữ liệu, nên biện pháp chính là ngăn chặn (ví dụ mã hóa),; A sai vì mô tả này phù hợp với tấn công chủ động (khó ngăn chặn tuyệt đối, cần phát hiện và phục hồi); C sai vì tấn công thụ động (như nghe lén) rất khó phát hiện; D sai vì có thể ngăn chặn bằng an ninh truyền thông.

**6. Để đảm bảo nguyên tắc "Chống thoái thác" (Non-repudiation) trong giao dịch điện tử, cơ chế an ninh cụ thể nào thường được sử dụng nhất?**
A. Mã hóa (Encryption)
B. Chữ ký số (Digital Signature)
C. Kiểm soát truy cập (Access Control)
D. Đệm dòng dữ liệu (Traffic Padding)
đáp án: B
Giải thích: B đúng vì chữ ký số cho phép người nhận chứng minh nguồn gốc và tính toàn vẹn, hỗ trợ dịch vụ chống thoái thác,; A sai vì mã hóa chủ yếu đảm bảo tính bí mật; C sai vì kiểm soát truy cập quản lý quyền hạn; D sai vì chèn thông tin (Padding) dùng để chống phân tích lưu lượng.

### Dạng 3: Tìm điểm sai/ngoại lệ

**7. Khi nói về "Bảo vệ vòng ngoài" (Perimeter Defense), nhận định nào sau đây là SAI?**
A. Nó giống như một pháo đài được bao quanh bởi hào, ví dụ như sử dụng tường lửa.
B. Nó bảo vệ hiệu quả chống lại tất cả các cuộc tấn công từ bên trong (Insider attacks).
C. Nếu lớp vỏ bọc bên ngoài bị phá vỡ, các hệ thống bên trong sẽ hoàn toàn mở trước các cuộc tấn công.
D. Nó là cách tiếp cận không hoàn toàn đầy đủ và nên kết hợp với phòng vệ theo chiều sâu.
đáp án: B
Giải thích: B đúng là điểm sai vì tài liệu khẳng định mô hình này không thực hiện biện pháp nào để bảo vệ các hệ thống bên trong đối với các tấn công nội bộ; A sai vì đây là mô tả đúng về bảo vệ vòng ngoài; C sai vì đây là điểm yếu đã được nêu của mô hình này; D sai vì tài liệu khuyến nghị cần có cái nhìn tổng quát hơn (như phòng vệ chiều sâu),.

**8. Trong ví dụ về tiêu chuẩn mật khẩu được đề cập trong tài liệu, yêu cầu nào sau đây KHÔNG có trong danh sách?**
A. Chiều dài tối thiểu là 8 ký tự.
B. Phải bao gồm cả ký tự thường và ký tự hoa.
C. Không được chứa tên đăng nhập của người dùng.
D. Lịch sử mật khẩu của 4 lần sử dụng trước đó phải được lưu lại.
đáp án: C
Giải thích: C đúng là ngoại lệ vì trong ví dụ về tiêu chuẩn mật khẩu tại mục không đề cập đến việc cấm chứa tên đăng nhập; A sai vì đây là yêu cầu đúng trong tài liệu; B sai vì đây là yêu cầu đúng trong tài liệu; D sai vì đây là yêu cầu đúng để tránh tái sử dụng mật khẩu.

**9. Đối tượng nào sau đây thường KHÔNG được coi là nguồn gốc của các cuộc tấn công "Phi cấu trúc" (Unstructured threats)?**
A. Các cá nhân thiếu kinh nghiệm.
B. Người sử dụng các công cụ tấn công dễ dàng có sẵn.
C. Tin tặc có động lực tài chính và kỹ năng kỹ thuật tinh vi phát triển mã độc riêng.
D. Người thực hiện tấn công với mục đích thử nghiệm kỹ năng.
đáp án: C
Giải thích: C đúng là ngoại lệ vì tin tặc có kỹ năng tinh vi, tự phát triển kỹ thuật để thâm nhập mà không bị nghi ngờ thuộc nhóm tấn công "Có cấu trúc"; A sai vì cá nhân thiếu kinh nghiệm thuộc nhóm phi cấu trúc; B sai vì sử dụng công cụ có sẵn (script kiddies) thuộc nhóm phi cấu trúc; D sai vì mục đích thử nghiệm/thách thức thường gắn với nhóm phi cấu trúc.

### Dạng 4: Bẫy từ ngữ

**10. "Xác thực" (Authentication) và "Cấp quyền" (Authorization) là hai khái niệm khác nhau. Theo tài liệu, định nghĩa nào sau đây mô tả chính xác về "Cấp quyền"?**
A. Xác nhận rằng các bên liên quan trong giao dịch đúng là thực thể họ tuyên bố.
B. Các quyền được trao cho một cá nhân/tiến trình cho phép truy cập vào tài nguyên.
C. Đảm bảo thông tin không bị tiết lộ cho người không có phận sự.
D. Đảm bảo hệ thống hoạt động liên tục cho người dùng hợp lệ.
đáp án: B
Giải thích: B đúng vì tài liệu định nghĩa Cấp quyền là các quyền cho phép truy cập vào tài nguyên; A sai vì đây là định nghĩa của Xác thực (Authentication); C sai vì đây là định nghĩa của tính Bí mật (Confidentiality); D sai vì đây là định nghĩa của tính Sẵn sàng (Availability).

**11. Trong ngữ cảnh các hình thức tấn công, hành động "Giả mạo" (Masquerade) được xếp vào loại tấn công nào?**
A. Tấn công thụ động vì nó chỉ nghe lén thông tin xác thực.
B. Tấn công chủ động vì một thực thể mạo danh một thực thể có đặc quyền.
C. Tấn công thụ động vì kẻ tấn công không làm hỏng phần cứng.
D. Tấn công chủ động nhưng chỉ khi nó gây ra Từ chối dịch vụ.
đáp án: B
Giải thích: B đúng vì tài liệu phân loại "Giả mạo" (Masquerade) nằm dưới mục Tấn công chủ động,; A sai vì Tấn công thụ động chỉ là nghe lén hoặc phân tích lưu lượng, còn giả mạo tạo ra luồng dữ liệu sai lệch hoặc đóng vai người khác; C sai vì định nghĩa thụ động/chủ động dựa trên việc can thiệp dữ liệu chứ không phải hỏng phần cứng; D sai vì Giả mạo là một loại riêng, không nhất thiết phải gây ra Từ chối dịch vụ mới là chủ động,.

### Dạng 5: Vị trí thông tin & Định nghĩa

**12. Theo Kiến trúc an ninh OSI (X.800), thành phần nào được định nghĩa là "Một quá trình (hoặc thiết bị) được thiết kế để phát hiện, ngăn chặn hoặc phục hồi hệ thống khi có tấn công"?**
A. Dịch vụ an ninh (Security Service)
B. Tấn công an ninh (Security Attack)
C. Cơ chế an ninh (Security Mechanism)
D. Chính sách an ninh (Security Policy)
đáp án: C
Giải thích: C đúng vì tài liệu định nghĩa Cơ chế an ninh chính xác là quá trình/thiết bị để phát hiện, ngăn chặn, phục hồi; A sai vì Dịch vụ an ninh là dịch vụ truyền thông để bảo vệ tài nguyên; B sai vì Tấn công an ninh là hành động vi phạm nguyên tắc an ninh; D sai vì Chính sách an ninh là khuôn khổ công việc và quy định.

**13. Ba mục tiêu chính cần đạt được của một "Chính sách an toàn thông tin" được nêu trong tài liệu bao gồm những gì?**
A. Bí mật, Toàn vẹn, Sẵn sàng.
B. Làm rõ cái gì cần bảo vệ, Ai chịu trách nhiệm, Căn cứ giải quyết tranh chấp.
C. Phòng ngừa, Phát hiện, Phục hồi.
D. Tường lửa, IDS, VPN.
đáp án: B
Giải thích: B đúng vì đây là 3 mục tiêu cụ thể của Chính sách ATTT được liệt kê tại; A sai vì đây là các mục tiêu/thuộc tính của An toàn thông tin nói chung (CIA); C sai vì đây là các biện pháp đối phó; D sai vì đây là các công nghệ/giải pháp cụ thể.

**14. Theo số liệu trích dẫn từ FBI trong tài liệu, tỷ lệ các sự cố an ninh do "tấn công nội bộ" (insider attacks) chiếm khoảng bao nhiêu phần trăm?**
A. 20% đến 40%
B. 40% đến 60%
C. 60% đến 80%
D. Dưới 20%
đáp án: C
Giải thích: C đúng vì tài liệu trích dẫn FBI cho biết tấn công nội bộ lạm dụng chiếm 60% đến 80% các sự cố được báo cáo; A sai vì con số này thấp hơn thực tế báo cáo; B sai vì chưa đủ mức báo cáo; D sai vì tấn công nội bộ chiếm tỷ lệ rất cao.
