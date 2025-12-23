Để "master" (nắm vững hoàn toàn) chương này, với độ dài khoảng 31 slide và lượng kiến thức tập trung vào lý thuyết phân loại và so sánh, bạn cần khoảng **20 đến 25 câu hỏi chất lượng cao**. Số lượng này đủ để bao phủ mọi khía cạnh: từ định nghĩa, so sánh HIDS/NIDS, quy trình tấn công cho đến các vấn đề quản lý và triển khai IPS.

Dưới đây là bộ 20 câu hỏi được thiết kế riêng để bao quát toàn bộ các "góc khuất" của chương, tuân thủ đúng định dạng bạn yêu cầu.

---

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (7 câu)

**1. Một nhân viên kế toán truy cập vào cơ sở dữ liệu lương thưởng của ban giám đốc mặc dù không có quyền hạn này. Theo phân loại của Stallings, đây là loại thâm nhập nào?**
A. Masquerader (Kẻ giả mạo)
B. Misfeasor (Kẻ làm sai/lạm quyền)
C. Clandestine user (Kẻ sử dụng lén lút)
D. External Attacker (Kẻ tấn công bên ngoài)
đáp án: B
giải thích: A sai vì Masquerader là kẻ bên ngoài không có tài khoản; B đúng vì Misfeasor là người dùng hợp pháp truy cập tài nguyên không được cấp quyền (Slide 4); C sai vì Clandestine user thường là người có quyền quản trị/giám sát dùng quyền để xóa dấu vết; D sai vì đây là tấn công nội bộ.

**2. Quản trị viên muốn phát hiện một cuộc tấn công "Zero-day" (lỗ hổng chưa từng được công bố). Phương pháp phát hiện nào là phù hợp nhất?**
A. Phát hiện dựa trên quy tắc (Rule-based)
B. Phát hiện dựa trên chữ ký (Signature-based)
C. Phát hiện dựa trên thống kê/hành vi (Statistical/Anomaly)
D. Quét cổng (Port scanning)
đáp án: C
giải thích: A và B sai vì chúng dựa vào database các mẫu tấn công đã biết, không bắt được cái mới; C đúng vì phương pháp này so sánh với hành vi bình thường, nếu thấy lạ (dù chưa biết là gì) nó vẫn báo (Slide 11); D sai vì đây là kỹ thuật tấn công/thăm dò chứ không phải phát hiện.

**3. Trong quy trình tấn công (Kill Chain), hành động sử dụng lệnh "Ping" đến một dải mạng nhằm mục đích gì?**
A. Quét cổng (Port scan) để tìm dịch vụ mở
B. Quét địa chỉ IP để tìm các máy đang hoạt động (Slide 5)
C. Đánh giá dịch vụ (Fingerprinting) để tìm hệ điều hành
D. Khai thác lỗ hổng (Exploit)
đáp án: B
giải thích: A sai vì quét cổng thường dùng kỹ thuật khác (TCP connect...); B đúng vì Ping dùng để xác định máy nào đang "sống" trong dải IP (Slide 5); C sai vì phải biết máy sống và cổng mở mới đánh giá dịch vụ được; D sai vì đây là bước thăm dò đầu tiên.

**4. Một công ty sử dụng hệ thống mạng chuyển mạch (Switch) hoàn toàn và muốn triển khai NIDS. Để NIDS có thể hoạt động hiệu quả, kỹ thuật nào bắt buộc phải được áp dụng trên Switch?**
A. Cấu hình VLAN
B. Cấu hình Port Mirroring (SPAN Port)
C. Tắt tính năng tường lửa
D. Mã hóa luồng dữ liệu
đáp án: B
giải thích: A sai vì VLAN chia tách mạng chứ không giúp NIDS thấy traffic; B đúng vì Switch chỉ gửi gói tin đến đích cụ thể, NIDS cần Port Mirroring để sao chép toàn bộ traffic về cổng của nó (Slide 20); C sai vì không liên quan; D sai vì mã hóa làm NIDS bị mù.

**5. Tại sao HIDS lại có ưu thế hơn NIDS trong việc giám sát các hành vi tấn công vào hệ thống tập tin (file system)?**
A. Vì HIDS nằm trên đường truyền mạng
B. Vì HIDS có khả năng hoạt động ở chế độ Promiscuous
C. Vì HIDS có thể kiểm tra tính toàn vẹn (integrity) và checksum của file trực tiếp trên ổ cứng
D. Vì HIDS không tiêu tốn tài nguyên hệ thống
đáp án: C
giải thích: A sai vì đó là NIDS; B sai vì đó là đặc tính của NIDS; C đúng vì HIDS cài agent trên máy nên đọc được file và hash của file (Slide 14); D sai vì HIDS tốn tài nguyên máy chủ.

**6. Khi triển khai hệ thống Ngăn chặn xâm nhập (IPS), vị trí lắp đặt thiết bị nào là bắt buộc để nó có thể thực hiện chức năng "ngăn chặn"?**
A. Nằm song song với đường truyền mạng (Passive/Tap mode)
B. Nằm tại một nhánh mạng riêng biệt (Management VLAN)
C. Nằm chắn ngang dòng dữ liệu (Inline) giữa Firewall và mạng nội bộ
D. Cài đặt trên máy chủ DNS
đáp án: C
giải thích: A sai vì nằm song song chỉ quan sát được chứ không chặn được gói tin đang chạy; B sai vì không thấy traffic; C đúng vì muốn chặn (block) thì phải đứng giữa đường đi của gói tin (Slide 28, 29); D sai vì quá cụ thể và không bao quát.

**7. Hệ thống báo động khi người dùng nhập sai mật khẩu 3 lần liên tiếp. Đây là ví dụ của phương pháp phát hiện nào?**
A. Dựa trên profile người dùng
B. Dựa trên ngưỡng (Threshold)
C. Dựa trên chữ ký (Signature)
D. Dựa trên mạng nơ-ron
đáp án: B
giải thích: A sai vì profile phức tạp hơn (giờ giấc, thói quen); B đúng vì "3 lần" là một con số ngưỡng cụ thể trong phương pháp thống kê (Slide 11); C sai vì không so khớp mẫu mã độc; D sai vì quá cao siêu so với ví dụ.

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (5 câu)

**8. Phát biểu nào sau đây thể hiện mối quan hệ chính xác giữa IDS và Firewall?**
A. IDS thay thế hoàn toàn Firewall vì nó thông minh hơn
B. Firewall là chốt chặn kiểm soát truy cập, IDS là camera giám sát phát hiện kẻ vượt rào
C. IDS chỉ hoạt động được khi không có Firewall
D. Firewall phát hiện tấn công nội bộ tốt hơn IDS
đáp án: B
giải thích: A sai vì chức năng khác nhau; B đúng vì Firewall chặn theo luật tĩnh (port/ip), IDS phân tích hành vi xâm nhập sâu hơn (Slide 13); C sai vì chúng bổ trợ nhau; D sai vì Firewall thường chỉ chặn traffic ra/vào biên mạng.

**9. Một tổ chức lo ngại về việc hacker sử dụng các kênh kết nối mã hóa (SSL/TLS) để tấn công web server. Giải pháp nào là tối ưu nhất để phát hiện tấn công trong nội dung mã hóa đó?**
A. Sử dụng NIDS đặt trước Firewall
B. Sử dụng NIDS đặt sau Firewall
C. Sử dụng HIDS cài trên Web Server
D. Tăng băng thông mạng
đáp án: C
giải thích: A và B sai vì NIDS bị "mù" trước dữ liệu mã hóa (Slide 20); C đúng vì tại Web Server, dữ liệu SSL được giải mã (decrypt) để xử lý, HIDS tại đó có thể đọc được nội dung gốc (Slide 15); D sai không liên quan.

**10. "False Positive" (Cảnh báo giả) cao trong hệ thống IDS gây ra hậu quả gì nghiêm trọng nhất về mặt quản trị?**
A. Làm hỏng phần cứng thiết bị
B. Gây ra tình trạng "Alert Fatigue" (mệt mỏi vì cảnh báo), khiến quản trị viên bỏ qua các cảnh báo thật
C. Tạo ra lỗ hổng bảo mật mới
D. Làm chậm tốc độ mạng
đáp án: B
giải thích: A sai; B đúng vì nếu chuông báo trộm kêu liên tục mà không có trộm, người bảo vệ sẽ tắt chuông hoặc lờ đi, dẫn đến bỏ lọt kẻ trộm thật (Liên hệ thực tế slide 11); C sai; D sai (với IDS thụ động).

**11. Sự khác biệt cốt lõi về "tác động lên hệ thống đích" giữa NIDS và HIDS là gì?**
A. NIDS làm chậm máy chủ đích, HIDS thì không
B. HIDS làm chậm máy chủ đích do tốn tài nguyên, NIDS hoàn toàn trong suốt với máy chủ
C. Cả hai đều không ảnh hưởng đến máy chủ đích
D. Cả hai đều làm chậm đường truyền mạng
đáp án: B
giải thích: A sai vì ngược lại; B đúng vì HIDS chạy agent trên OS nên ăn CPU/RAM/Disk, còn NIDS là thiết bị rời nghe lén dây mạng nên server không biết sự tồn tại của nó (Slide 16 vs 19); C và D sai.

**12. Tại sao Clandestine User (Kẻ lạm quyền kiểm soát) lại được coi là mối đe dọa khó phát hiện nhất đối với IDS?**
A. Vì họ có kỹ năng kỹ thuật thấp
B. Vì họ truy cập từ bên ngoài internet
C. Vì họ có quyền quản trị (Supervisory) để tắt IDS hoặc xóa nhật ký (logs) kiểm toán
D. Vì IDS không được thiết kế để theo dõi người dùng nội bộ
đáp án: C
giải thích: A sai; B sai (đó là Masquerader); C đúng theo định nghĩa slide 4, họ dùng quyền để né tránh kiểm soát và xóa dấu vết; D sai vì IDS có theo dõi nội bộ nhưng bị kẻ này vô hiệu hóa.

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (4 câu)

**13. Đâu KHÔNG phải là nhược điểm của hệ thống NIDS?**
A. Không thể kiểm tra thông tin nếu thông tin được mã hóa
B. Bỏ qua gói tin nếu băng thông mạng quá cao
C. Chi phí triển khai và bảo trì cao trên từng máy trạm
D. Cần cấu hình đặc biệt (Port Mirroring) trong mạng chuyển mạch
đáp án: C
giải thích: A, B, D đều là nhược điểm của NIDS (Slide 20); C đúng là đáp án cần chọn vì đây là nhược điểm của HIDS, NIDS triển khai tập trung nên chi phí quản lý thấp hơn HIDS.

**14. Khi nói về lợi ích của IDS, điều nào sau đây là KHÔNG chính xác?**
A. IDS có thể đóng vai trò răn đe kẻ tấn công
B. IDS tự động vá mọi lỗ hổng phần mềm ngay khi phát hiện
C. IDS giúp thu thập thông tin để cải thiện an ninh tương lai
D. IDS giúp phát hiện sớm để giảm thiểu thiệt hại
đáp án: B
giải thích: A, C, D đều đúng theo Slide 9; B sai vì IDS chỉ phát hiện và cảnh báo (hoặc chặn nếu là IPS), việc vá lỗ hổng (patching) là quy trình quản lý bản vá riêng biệt, IDS không tự sửa code phần mềm.

**15. Chọn phát biểu SAI về chế độ hoạt động "Promiscuous" của NIDS?**
A. Nó cho phép card mạng đọc tất cả các gói tin đi qua dây cáp
B. Nó yêu cầu card mạng phải có địa chỉ IP công khai để hoạt động
C. Nó giúp NIDS hoạt động ẩn danh (stealthy) trên mạng
D. Nó là cơ chế hoạt động chính để thu thập dữ liệu của NIDS
đáp án: B
giải thích: A, C, D đúng (Slide 17, 19); B sai vì slide 18 minh họa "Stealthy NIC" thường không cần gán IP để tránh bị tấn công ngược lại, nó chỉ cần "nghe" thôi.

**16. Trong các bước khởi tạo IDS (Slide 21), bước nào sau đây KHÔNG được liệt kê?**
A. Xác định mục tiêu
B. Tấn công thử nghiệm vào hệ thống thật để kiểm tra độ bền
C. Chọn thành phần, hệ thống để theo dõi
D. Xét các ngưỡng và hiện thực chính sách
đáp án: B
giải thích: A, C, D đều có trong quy trình ở Slide 21; B sai vì quy trình khởi tạo tiêu chuẩn là "thử nghiệm" (test) trong môi trường lab/testbed chứ không phải tấn công phá hoại hệ thống thật ngay khi khởi tạo.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (4 câu)

**17. "Port Scanning" (Quét cổng) và "IP Scanning" (Quét IP) khác nhau ở điểm nào?**
A. Quét IP tìm lỗ hổng, Quét cổng tìm máy chủ
B. Quét IP tìm các máy đang hoạt động, Quét cổng tìm các dịch vụ đang chạy trên máy đó
C. Quét IP là tấn công, Quét cổng là phòng thủ
D. Hai thuật ngữ này là một
đáp án: B
giải thích: A sai vì ngược; B đúng theo Slide 5 (Quét IP -> tìm máy chủ, Quét Port -> tìm dịch vụ như 80, 21...); C sai vì cả 2 đều là kỹ thuật thăm dò; D sai.

**18. Điều gì xảy ra nếu IPS (Hệ thống ngăn chặn) gặp sự cố "False Positive" (Dương tính giả)?**
A. Hệ thống bị hacker xâm nhập mà không ai biết
B. Một giao dịch hợp pháp của người dùng bị chặn lại (Từ chối dịch vụ)
C. Hệ thống hoạt động tốt hơn mong đợi
D. Kẻ tấn công bị bắt giữ
đáp án: B
giải thích: Đây là bẫy về định nghĩa. False Positive = Báo nhầm người tốt là xấu. Với IDS (chỉ báo) -> Gây phiền. Với IPS (chặn) -> Chặn nhầm người tốt -> Gây gián đoạn dịch vụ (DoS) (Slide 30). A là False Negative.

**19. Thuật ngữ "Fingerprinting" (Đánh giá dịch vụ) trong pha thăm dò thường bao gồm hành động nào?**
A. Lấy trộm dấu vân tay của admin
B. Xác định phiên bản Hệ điều hành và phiên bản phần mềm dịch vụ
C. Sao chép dữ liệu từ máy chủ ra ngoài
D. Xóa log hệ thống
đáp án: B
giải thích: A sai (bẫy nghĩa đen); B đúng (Slide 5: Đánh giá dịch vụ -> Xác định OS, phần mềm...); C và D là hành động sau khi đã xâm nhập thành công.

**20. Sự khác biệt giữa "Passive IDS" (IDS thụ động) và "Active IDS" (thường gọi là IPS) nằm ở động từ nào?**
A. Passive: "Ngăn chặn" - Active: "Phát hiện"
B. Passive: "Ghi log" - Active: "Phân tích"
C. Passive: "Cảnh báo" - Active: "Dừng/Chặn"
D. Passive: "Tấn công" - Active: "Phòng thủ"
đáp án: C
giải thích: A sai vì ngược; B sai vì cả 2 đều làm việc này; C đúng vì IDS truyền thống (Slide 28) chỉ cảnh báo, còn IPS/Active IDS sẽ "dừng lại" (stop) cuộc tấn công ngay lập tức; D sai.
