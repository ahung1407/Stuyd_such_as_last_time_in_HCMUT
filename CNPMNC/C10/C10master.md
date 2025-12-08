Đây là 5 câu hỏi trắc nghiệm bổ sung, tập trung vào các điểm tư duy và phân tích chuyên sâu mà tôi đã khuyến nghị, giúp bạn hoàn toàn làm chủ (Master) Chương 10.

---

### **Các Câu Hỏi Bổ Sung (Dạng Master)**

**11. Hiểu rõ chiều lan truyền lỗi trong STS Stack: Giả sử một quy trình kinh doanh (Business Process) của một ngân hàng có lỗi trong đó việc phê duyệt khoản vay yêu cầu hai người ký cùng lúc nhưng hệ thống ứng dụng (Application System) lại chỉ triển khai yêu cầu một người ký. Lỗi này (tại lớp Business Process) cuối cùng sẽ ảnh hưởng trực tiếp và nghiêm trọng nhất đến thuộc tính Dependability nào của hệ thống ngân hàng?**
A. Safety (An toàn)
B. Reliability (Độ tin cậy)
C. Availability (Khả dụng)
D. Resilience (Khả năng phục hồi)
Đáp án: B
Giải thích: A sai vì Safety liên quan đến thiệt hại thảm khốc cho con người/môi trường, không phải lỗi nghiệp vụ; B đúng vì Độ tin cậy (Reliability) là khả năng hệ thống cung cấp dịch vụ *như đã được đặc tả* và *như người dùng mong đợi*; một khoản vay được phê duyệt sai quy trình nghiệp vụ (do lỗi Business Process lan truyền xuống Application System) là một sự không đúng đắn nghiêm trọng trong việc cung cấp dịch vụ, làm giảm Reliability; C sai vì hệ thống vẫn đang hoạt động và cung cấp dịch vụ (Khả dụng); D sai vì đây không phải là một sự kiện gây rối bên ngoài

**12. Phân biệt rõ ràng giữa 3 loại "Lỗi" (Failure): Trong quá trình vận hành một hệ thống điều khiển giao thông, một kỹ thuật viên nhập sai giá trị cấu hình cho thời gian đèn vàng, dẫn đến tai nạn giao thông nghiêm trọng. Loại nguyên nhân hỏng hóc (Cause of failure - Slide 5) nào là nguyên nhân gốc rễ?**
A. Hardware failure
B. Software failure
C. Operational failure
D. Redundancy failure
Đáp án: C
Giải thích: A sai vì phần cứng không hỏng; B sai vì phần mềm không có lỗi thiết kế/code mà chỉ thực thi sai đầu vào; C đúng vì đây là lỗi do **người vận hành (Human operators)** thực hiện một **hành động sai (mistake)** khi cấu hình hệ thống, đây là định nghĩa của Operational failure; D sai vì đây không phải là một loại lỗi được liệt kê

**13. Lợi ích và Hạn chế của Formal Methods: Theo Slide 45, một trong những lý do chính khiến các phương pháp hình thức (Formal methods - FM) có tác động hạn chế trong phát triển phần mềm thực tế là gì?**
A. FM không thể được áp dụng cho các hệ thống an toàn (safety-critical systems).
B. FM làm tăng chi phí kiểm thử chương trình.
C. FM vẫn khó mở rộng (scale up) cho các hệ thống lớn và quản lý thường không muốn đầu tư vì khó đánh giá lợi ích.
D. FM hoàn toàn không tương thích với bất kỳ quy trình phát triển nào.
Đáp án: C
Giải thích: A sai vì FM rất thích hợp cho safety-critical systems; B sai vì FM có thể *giảm* chi phí kiểm thử (Slide 44); C đúng vì Slide 45 nêu rõ: FM khó scale up, và *khó đánh giá lợi ích* khiến quản lý e ngại đầu tư; D sai vì FM vẫn có thể được tích hợp trong các quy trình đáng tin cậy đã được sửa đổi

**14. Kịch bản phụ thuộc giữa thuộc tính Dependability: Nếu một hệ thống bị nhiễm virus do lỗ hổng bảo mật (Security), và sau đó virus này làm hỏng dữ liệu hệ thống (Data corruption), thuộc tính Dependability nào bị ảnh hưởng trực tiếp nhất bởi việc hỏng dữ liệu? (Slide 11)**
A. Availability
B. Resilience
C. Reliability
D. Safety
Đáp án: C
Giải thích: A sai vì hệ thống có thể vẫn chạy được; B sai vì Resilience là khả năng phục hồi, không phải kết quả trực tiếp của hỏng dữ liệu; C đúng vì Độ tin cậy (Reliability) là khả năng cung cấp dịch vụ *chính xác* như mong đợi; dữ liệu bị hỏng (corrupted) làm cho kết quả của hệ thống **không đáng tin cậy (unreliable)**, đây là mối liên hệ được nêu rõ trên Slide 11; D có thể bị ảnh hưởng nếu dữ liệu đó là dữ liệu an toàn, nhưng **Reliability** bị ảnh hưởng tổng quát hơn và trực tiếp hơn

**15. Tổng hợp Dependable Processes và Agile: Theo quan điểm của Dependable systems engineering (Slide 37, 38), điều gì là cần thiết để một nhóm sử dụng cách tiếp cận Agile trên một dự án hệ thống quan trọng có thể được chấp nhận?**
A. Bắt buộc phải loại bỏ hoàn toàn iterative development và user involvement.
B. Chỉ tập trung vào việc giảm thiểu tài liệu ở mức tối đa để tiết kiệm chi phí.
C. Sử dụng một quy trình Agile có sửa đổi, nhưng quan trọng là phải tạo ra "tài liệu quy trình và sản phẩm" VÀ thực hiện "phân tích yêu cầu từ đầu" đầy đủ.
D. Hệ thống quan trọng không bao giờ được phép sử dụng bất kỳ kỹ thuật nào của Agile.
Đáp án: C
Giải thích: A sai vì iterative development và user involvement là kỹ thuật tốt (Slide 38); B sai vì việc tối thiểu hóa tài liệu xung đột với nhu cầu chứng nhận (Slide 37); C đúng vì Slide 37 và 38 khẳng định *chứng nhận* yêu cầu tài liệu, và *phân tích yêu cầu từ đầu* là thiết yếu, do đó "pure agile" là không thực tế, phải sử dụng agile có *thêm tài liệu và kế hoạch*

---