Chào bạn, đây là bộ câu hỏi trắc nghiệm chuyên sâu để ôn tập Chương 5 (Kiểm soát truy cập mạng và Bảo mật điện toán đám mây) dựa trên tài liệu "C5.pdf", bao gồm các dạng câu hỏi bạn yêu cầu.

### Dạng 1: Hiểu & Áp dụng

**1. Trong kiến trúc Kiểm soát truy cập mạng (NAC), thành phần nào đóng vai trò là điểm kiểm soát truy cập cho người dùng từ xa kết nối vào mạng doanh nghiệp, còn được gọi là cổng đa phương tiện?**
A. Access Requester (AR)
B. Policy Server
C. Network Access Server (NAS)
D. Cloud Broker
đáp án: C
Giải thích: C đúng vì tài liệu mô tả NAS hoạt động như một điểm kiểm soát truy cập cho người dùng ở các địa điểm từ xa và còn được gọi là cổng đa phương tiện hoặc máy chủ truy cập từ xa; A sai vì AR là thiết bị khách (node) đang cố truy cập mạng; B sai vì Policy Server xác định quyền truy cập dựa trên chính sách chứ không phải là điểm kết nối vật lý/logic trực tiếp; D sai vì Cloud Broker là thuật ngữ của điện toán đám mây.

**2. Một công ty muốn kết hợp nhiều dịch vụ đám mây từ các nhà cung cấp khác nhau để tạo thành một dịch vụ mới tối ưu hơn cho người dùng. Theo kiến trúc tham chiếu NIST, vai trò nào sẽ thực hiện chức năng "Tổng hợp dịch vụ" này?**
A. Cloud Carrier
B. Cloud Auditor
C. Cloud Broker
D. Cloud Provider
đáp án: C
Giải thích: C đúng vì tài liệu định nghĩa Cloud Broker cung cấp dịch vụ tổng hợp (aggregation), kết hợp nhiều dịch vụ đám mây để đáp ứng nhu cầu người dùng; A sai vì Cloud Carrier chỉ cung cấp kết nối và vận chuyển; B sai vì Cloud Auditor là bên kiểm toán độc lập; D sai vì Cloud Provider là người cung cấp dịch vụ gốc.

**3. Trong chuẩn IEEE 802.1X, trạng thái của "cổng không được kiểm soát" (uncontrolled port) cho phép loại dữ liệu nào đi qua dù thiết bị chưa được xác thực?**
A. Tất cả dữ liệu TCP/IP.
B. Chỉ các gói tin ARP.
C. Các đơn vị dữ liệu giao thức (PDU) giữa thiết bị đầu cuối và máy chủ xác thực (AS).
D. Không cho phép bất kỳ dữ liệu nào đi qua.
đáp án: C
Giải thích: C đúng vì tài liệu nêu rõ một cổng không được kiểm soát cho phép trao đổi các PDU giữa thiết bị đầu cuối và AS bất kể trạng thái xác thực, cụ thể là khung EAPOL,; A sai vì dữ liệu mạng thông thường bị chặn; B sai vì ARP không được đề cập là ngoại lệ chính trong ngữ cảnh 802.1X EAPOL; D sai vì nó phải cho phép luồng xác thực đi qua.

### Dạng 2: Tổng hợp & Liên kết

**4. Mối quan hệ giữa EAP, EAPOL và IEEE 802.1X được mô tả chính xác nhất như thế nào?**
A. IEEE 802.1X sử dụng EAPOL để đóng gói các gói tin EAP truyền tải qua mạng LAN nhằm thực hiện xác thực.
B. EAP là giao thức thay thế cho IEEE 802.1X trong môi trường không dây.
C. EAPOL là một phần của RADIUS server dùng để mã hóa dữ liệu EAP.
D. IEEE 802.1X định nghĩa EAP, còn EAPOL là chuẩn phần cứng cho các cổng mạng.
đáp án: A
Giải thích: A đúng vì tài liệu nói thành phần thiết yếu trong 802.1X là giao thức EAPOL (EAP over LAN), cho phép đóng gói dữ liệu EAP trong các khung Ethernet để thiết bị giao tiếp với bộ xác thực,; B sai vì chúng hoạt động cùng nhau chứ không thay thế; C sai vì EAPOL hoạt động ở lớp liên kết mạng LAN giữa client và switch/AP chứ không phải trên RADIUS; D sai vì EAP là chuẩn riêng (RFC 3748) được 802.1X sử dụng.

**5. Đối với bảo mật dữ liệu trên đám mây, giải pháp nào được xem là lý tưởng nhất để bảo vệ "dữ liệu ở trạng thái nghỉ" (data at rest) nhằm đảm bảo nhà cung cấp dịch vụ (CP) không thể truy cập được dữ liệu của khách hàng?**
A. Sử dụng tường lửa mạnh mẽ của nhà cung cấp đám mây.
B. Khách hàng mã hóa cơ sở dữ liệu và giữ khóa, chỉ lưu trữ dữ liệu đã mã hóa trên đám mây.
C. Sử dụng giao thức HTTPS/TLS khi truyền tải dữ liệu lên đám mây.
D. Ký hợp đồng SLA cam kết bảo mật với nhà cung cấp.
đáp án: B
Giải thích: B đúng vì tài liệu nêu biện pháp bảo mật lý tưởng là khách hàng mã hóa cơ sở dữ liệu và chỉ lưu trữ dữ liệu được mã hóa trên đám mây, CP không có quyền truy cập vào khóa mã hóa,; A sai vì tường lửa chỉ ngăn truy cập mạng trái phép; C sai vì đây là bảo vệ dữ liệu đang truyền (in transit); D sai vì đây là biện pháp hành chính/pháp lý, không phải kỹ thuật ngăn chặn trực tiếp.

### Dạng 3: Tìm điểm sai/ngoại lệ

**6. Đâu KHÔNG phải là một trong các phương pháp thực thi (enforcement methods) phổ biến của Kiểm soát truy cập mạng (NAC) được liệt kê trong tài liệu?**
A. IEEE 802.1X
B. Virtual local area networks (VLANs)
C. Quản lý DHCP (DHCP management)
D. Xác thực sinh trắc học (Biometric authentication)
đáp án: D
Giải thích: D đúng là ngoại lệ vì tài liệu liệt kê 4 phương pháp thực thi NAC phổ biến là IEEE 802.1X, VLANs, Firewall và DHCP management, không đề cập đến sinh trắc học như một phương pháp thực thi mạng; A, B, C đều là các phương pháp đúng được liệt kê trong tài liệu.

**7. Khi nói về Kiến trúc tham chiếu điện toán đám mây của NIST (SP 500-292), nhận định nào sau đây là SAI?**
A. Nó tập trung vào yêu cầu "những gì" dịch vụ đám mây cung cấp.
B. Nó đưa ra giải pháp thiết kế chi tiết về "làm thế nào" để triển khai đám mây.
C. Nó là công cụ để mô tả và phát triển kiến trúc bằng cách dùng khung tham chiếu chung.
D. Nó không thể hiện kiến trúc hệ thống của một hệ thống cụ thể nào.
đáp án: B
Giải thích: B là nhận định sai vì tài liệu khẳng định kiến trúc tham chiếu NIST tập trung vào "những gì" chứ KHÔNG phải là giải pháp thiết kế và triển khai "làm thế nào"; A, C, D là các nhận định đúng về kiến trúc tham chiếu NIST được trích dẫn trong tài liệu.

### Dạng 4: Bẫy từ ngữ

**8. Trong mô hình hoạt động của 802.1X, vai trò của "Authenticator" (Người xác thực) khác với "Authentication Server" (Máy chủ xác thực) ở điểm nào?**
A. Authenticator chứa cơ sở dữ liệu người dùng và quyết định việc cấp quyền.
B. Authenticator chỉ đóng vai trò chuyển tiếp (pass-through), còn Authentication Server mới thực hiện xác thực thực tế.
C. Authenticator là phần mềm cài trên máy khách, còn Authentication Server là thiết bị mạng.
D. Authenticator xử lý EAP, còn Authentication Server xử lý EAPOL.
đáp án: B
Giải thích: B đúng vì tài liệu mô tả Authenticator hoạt động như "trình xác thực chuyển tiếp", nó chuyển tiếp các gói EAP từ thiết bị ngang hàng tới máy chủ xác thực (như RADIUS), và chỉ khi AS xác thực xong thì Authenticator mới mở cổng dữ liệu,; A sai vì đây là nhiệm vụ của AS; C sai vì phần mềm trên máy khách là Supplicant; D sai vì Authenticator xử lý đóng gói lại từ EAPOL sang RADIUS cho AS.

**9. "SecaaS" được định nghĩa là việc cung cấp các dịch vụ bảo mật. Theo Liên minh bảo mật đám mây (CSA), danh mục nào sau đây nằm trong SecaaS?**
A. Quản lý hiệu suất mạng (Network Performance Management).
B. Ngăn ngừa mất dữ liệu (Data Loss Prevention).
C. Cung cấp hạ tầng phần cứng (IaaS).
D. Lập trình ứng dụng (Application Development).
đáp án: B
Giải thích: B đúng vì "Ngăn ngừa mất dữ liệu" (DLP) là một trong các danh mục dịch vụ SecaaS được liệt kê bởi CSA; A sai vì quản lý hiệu suất thường thuộc về giám sát mạng chứ không phải bảo mật SecaaS; C sai vì IaaS là mô hình dịch vụ đám mây cơ bản, không phải SecaaS; D sai vì đây là hoạt động phát triển phần mềm (PaaS).
