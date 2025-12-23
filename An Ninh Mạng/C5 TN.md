Chào bạn, để "master" hoàn toàn chương này, bạn không cần làm hàng trăm câu hỏi lặp lại, mà cần khoảng **25-30 câu hỏi chất lượng cao** bao phủ đủ các khía cạnh: Định nghĩa, Cơ chế hoạt động, So sánh và Các tình huống thực tế.

Dưới đây là bộ **25 câu hỏi tuyển chọn** được thiết kế theo các dạng bạn yêu cầu (Hiểu, Tổng hợp, Tìm lỗi sai, Bẫy từ ngữ) để quét sạch mọi góc khuất của Slide bài giảng.

---

### PHẦN 1: KIỂM SOÁT TRUY CẬP MẠNG (NAC) & 802.1X

**1. Trong kiến trúc NAC, thành phần nào chịu trách nhiệm thực thi trực tiếp việc chặn hoặc cho phép gói tin tại điểm kết nối mạng?**
A. Access Requester (AR)
B. Policy Server
C. Network Access Server (NAS)
D. Antivirus Agent
đáp án: C
Giải thích: C đúng vì NAS (như Switch, Wireless AP) hoạt động như một cổng kiểm soát/người gác cổng để thực thi quyết định; A sai vì AR là thiết bị muốn truy cập; B sai vì Policy Server chỉ ra quyết định chứ không trực tiếp chặn tại cổng vật lý; D sai vì đây chỉ là phần mềm trên máy khách.

**2. Giao thức EAP (Extensible Authentication Protocol) được mô tả tốt nhất là gì?**
A. Một thuật toán mã hóa khóa công khai để bảo vệ mật khẩu.
B. Một phương thức xác thực cụ thể dựa trên mật khẩu một lần (OTP).
C. Một khung (framework) vận chuyển hỗ trợ nhiều phương thức xác thực khác nhau.
D. Một giao thức định tuyến giúp tìm đường đi ngắn nhất đến máy chủ xác thực.
đáp án: C
Giải thích: C đúng vì EAP là một giao thức "phong bì" (container) có thể chứa nhiều loại xác thực bên trong (TLS, Smartcard, Password...); A sai vì EAP không phải là thuật toán mã hóa; B sai vì OTP chỉ là một phương thức có thể nằm trong EAP; D sai vì EAP hoạt động ở lớp liên kết dữ liệu/xác thực, không phải định tuyến.

**3. Trong mô hình IEEE 802.1X, khi trạng thái xác thực chưa thành công (Unauthorized), "Cổng không được kiểm soát" (Uncontrolled Port) cho phép loại dữ liệu nào đi qua?**
A. Không cho phép bất kỳ dữ liệu nào.
B. Chỉ cho phép các gói tin EAPOL.
C. Cho phép lưu lượng DHCP và DNS để máy khách lấy IP.
D. Cho phép truy cập vào VLAN khách (Guest VLAN).
đáp án: B
Giải thích: B đúng vì theo chuẩn 802.1X, cổng không kiểm soát luôn mở nhưng chỉ lọc và cho phép duy nhất giao thức EAPOL để thực hiện xác thực; A sai vì nó không chặn EAPOL; C và D sai vì DHCP/DNS hay dữ liệu vào VLAN khách đều bị chặn hoặc điều hướng bởi cổng kiểm soát (Controlled Port) hoặc cơ chế khác sau khi xác thực thất bại.

**4. Thiết bị chuyển mạch (Switch) đóng vai trò là Authenticator trong 802.1X hoạt động ở chế độ "Pass-through" nghĩa là gì?**
A. Nó tự động giải mã thông tin đăng nhập của người dùng để kiểm tra.
B. Nó chuyển tiếp các gói EAP từ Supplicant đến Authentication Server mà không đọc nội dung xác thực bên trong.
C. Nó cho phép mọi lưu lượng đi qua mà không cần xác thực (Pass-through mode).
D. Nó chuyển đổi giao thức từ IPv4 sang IPv6.
đáp án: B
Giải thích: B đúng vì Authenticator chỉ đóng gói lại gói EAP từ EAPOL sang RADIUS (và ngược lại) chứ không can thiệp vào quy trình mã hóa/xác thực bên trong; A sai vì Switch thường không đủ khả năng hoặc thẩm quyền giải mã; C sai vì đây là hiểu nhầm về từ "Pass-through" trong ngữ cảnh bảo mật; D sai vì không liên quan đến chức năng này.

**5. (Dạng bẫy từ ngữ) Giao thức nào được sử dụng để đóng gói EAP nhằm vận chuyển giữa Authenticator (Switch) và Authentication Server (AS)?**
A. EAPOL (EAP over LAN)
B. IEEE 802.11
C. RADIUS
D. TCP/IP thuần túy
đáp án: C
Giải thích: C đúng vì đoạn từ Switch đến Server thường đi qua mạng IP nên dùng RADIUS để bọc gói EAP; A sai vì EAPOL chỉ dùng cho đoạn từ Client đến Switch (Layer 2); B sai vì đây là chuẩn Wifi; D sai vì TCP/IP là giao thức nền, cần một giao thức ứng dụng như RADIUS để định dạng gói tin xác thực.

**6. Một trong những chức năng quan trọng của NAC hiện đại là "Health Check" (Kiểm tra sức khỏe). Điều này đề cập đến việc gì?**
A. Kiểm tra tốc độ đường truyền mạng có ổn định không.
B. Kiểm tra xem người dùng có bị ốm (sốt/ho) qua webcam không.
C. Đánh giá sự tuân thủ của thiết bị (bản vá OS, Antivirus) trước khi cho vào mạng.
D. Kiểm tra nhiệt độ CPU của máy chủ Policy Server.
đáp án: C
Giải thích: C đúng vì Health Check/Posture Assessment nhằm đảm bảo thiết bị không mang rủi ro bảo mật (như virus, lỗ hổng chưa vá) vào mạng; A, B, D sai vì hiểu sai ngữ cảnh từ "Health" trong NAC.

**7. (Tìm điểm sai) Đâu KHÔNG phải là một phương pháp thực thi (Enforcement method) phổ biến của NAC được liệt kê trong tài liệu?**
A. IEEE 802.1X
B. VLANs
C. BGP Routing
D. DHCP Management
đáp án: C
Giải thích: C đúng vì BGP là giao thức định tuyến liên mạng (WAN), không dùng để kiểm soát truy cập người dùng cuối trong LAN; A, B, D sai vì chúng đều là các phương pháp thực thi tiêu chuẩn của NAC (chặn cổng, cô lập VLAN, cấp IP hạn chế).

**8. Loại gói tin EAPOL nào được Supplicant gửi đi để chủ động bắt đầu quá trình xác thực khi vừa kết nối cáp?**
A. EAPOL-Key
B. EAPOL-Logoff
C. EAPOL-Start
D. EAP-Response/Identity
đáp án: C
Giải thích: C đúng vì EAPOL-Start là tín hiệu máy khách gửi để đánh thức Switch bắt đầu quy trình; A sai vì dùng trao đổi khóa; B sai vì dùng để đăng xuất; D sai vì đây là gói trả lời sau khi Switch đã hỏi.

---

### PHẦN 2: BẢO MẬT ĐIỆN TOÁN ĐÁM MÂY (CLOUD SECURITY)

**9. (Dạng tổng hợp) Theo NIST SP-800-145, đặc điểm nào cho phép tài nguyên điện toán được phân bổ và gán lại linh hoạt cho nhiều người tiêu dùng khác nhau theo mô hình "multi-tenant"?**
A. On-demand self-service (Tự phục vụ theo nhu cầu)
B. Resource Pooling (Gom nhóm tài nguyên)
C. Measured Service (Dịch vụ được đo lường)
D. Broad network access (Truy cập mạng rộng rãi)
đáp án: B
Giải thích: B đúng vì Resource Pooling mô tả việc nhà cung cấp gom tài nguyên vật lý lại để phục vụ nhiều khách hàng cùng lúc (multi-tenant); A sai vì nói về khả năng tự thao tác; C sai vì nói về tính cước phí; D sai vì nói về khả năng truy cập đa nền tảng.

**10. Trong mô hình dịch vụ PaaS (Platform as a Service), trách nhiệm bảo mật nào thuộc về Khách hàng (Consumer)?**
A. Bảo mật vật lý của trung tâm dữ liệu.
B. Cập nhật bản vá cho Hệ điều hành (OS).
C. Bảo mật Ứng dụng và Dữ liệu do họ phát triển.
D. Thay thế ổ cứng hỏng của máy chủ.
đáp án: C
Giải thích: C đúng vì trong PaaS, nhà cung cấp lo phần cứng và nền tảng (OS, Runtime), khách hàng chỉ quản lý Ứng dụng và Dữ liệu của mình; A, B, D sai vì đó là trách nhiệm của nhà cung cấp Cloud (CP) trong mô hình PaaS.

**11. (Dạng hiểu & áp dụng) Một công ty muốn chuyển lên mây nhưng lo ngại việc tự quản lý nhiều nhà cung cấp (AWS, Azure) cùng lúc quá phức tạp. Thành phần nào trong kiến trúc NIST hỗ trợ giải quyết vấn đề này?**
A. Cloud Carrier
B. Cloud Auditor
C. Cloud Broker
D. Cloud Provider
đáp án: C
Giải thích: C đúng vì Cloud Broker đóng vai trò trung gian, giúp tổng hợp (aggregation), kinh doanh chênh lệch giá (arbitrage) và làm trung gian dịch vụ để đơn giản hóa việc quản lý cho khách hàng; A sai vì Carrier chỉ cung cấp đường truyền; B sai vì Auditor chỉ kiểm toán; D sai vì Provider là người bán dịch vụ gốc.

**12. Rủi ro bảo mật "Shared technology issues" trong đám mây chủ yếu liên quan đến vấn đề gì?**
A. Hacker tấn công vào đường truyền Internet dùng chung.
B. Các lỗ hổng trong siêu giám sát (Hypervisor) cho phép tấn công thoát ly máy ảo (VM escape) trong môi trường đa thuê bao.
C. Việc chia sẻ mật khẩu giữa các nhân viên trong công ty.
D. Chia sẻ mã nguồn ứng dụng công khai trên GitHub.
đáp án: B
Giải thích: B đúng vì đây là rủi ro đặc thù của Multi-tenancy khi nhiều khách hàng dùng chung phần cứng/nền tảng ảo hóa; A sai vì đó là rủi ro mạng chung; C và D sai vì không liên quan đến công nghệ nền tảng của Cloud.

**13. (Bẫy từ ngữ) Sự khác biệt chính giữa "Multi-instance model" và "Multi-tenant model" khi triển khai cơ sở dữ liệu trên Cloud là gì?**
A. Multi-instance rẻ hơn Multi-tenant.
B. Multi-instance cung cấp môi trường DBMS riêng biệt (máy ảo riêng) cho mỗi khách hàng, trong khi Multi-tenant chia sẻ chung một môi trường DBMS.
C. Multi-tenant an toàn hơn Multi-instance.
D. Multi-tenant không hỗ trợ gắn thẻ (tagging) dữ liệu.
đáp án: B
Giải thích: B đúng vì Multi-instance là mỗi người một "nhà" (instance riêng), còn Multi-tenant là ở chung "phòng" (chung instance DB, chỉ khác ID); A sai vì Multi-instance thường đắt hơn do tốn tài nguyên hơn; C sai vì Multi-tenant rủi ro hơn về rò rỉ dữ liệu; D sai vì Multi-tenant dựa hoàn toàn vào tagging để phân biệt dữ liệu.

**14. Để bảo vệ dữ liệu ở trạng thái nghỉ (Data at Rest) trên Cloud mà vẫn đảm bảo Cloud Provider KHÔNG THỂ đọc được dữ liệu, giải pháp tối ưu nhất là gì?**
A. Sử dụng tường lửa ứng dụng web (WAF).
B. Mã hóa dữ liệu trước khi tải lên và khách hàng tự giữ khóa giải mã.
C. Sử dụng giao thức HTTPS khi truyền tải.
D. Tin tưởng vào cam kết bảo mật trong hợp đồng SLA của Provider.
đáp án: B
Giải thích: B đúng vì nếu khách hàng giữ khóa, Provider chỉ lưu trữ các khối dữ liệu vô nghĩa và không thể giải mã; A sai vì WAF bảo vệ tấn công web; C sai vì HTTPS chỉ bảo vệ dữ liệu đang truyền (Data in Transit); D sai vì đây là biện pháp hành chính, không phải kỹ thuật.

**15. Thách thức lớn nhất khi mã hóa toàn bộ cơ sở dữ liệu trước khi đẩy lên đám mây là gì?**
A. Tốn dung lượng lưu trữ hơn.
B. Mất khả năng thực hiện các truy vấn tìm kiếm hoặc tính toán trên dữ liệu đó tại Cloud.
C. Không thể sao lưu (backup) dữ liệu.
D. Tin tặc dễ dàng tấn công Brute-force hơn.
đáp án: B
Giải thích: B đúng vì Cloud Server không hiểu dữ liệu đã mã hóa nên không thể Index, Sort hay Query (SELECT \* WHERE...) được; A sai vì dung lượng không tăng đáng kể; C sai vì vẫn backup file được bình thường; D sai vì mã hóa không làm tăng nguy cơ brute-force.

**16. SecaaS (Security as a Service) được định nghĩa là gì?**
A. Phần mềm diệt virus miễn phí tích hợp sẵn trong Windows.
B. Việc cung cấp các dịch vụ bảo mật thông qua đám mây tới cơ sở hạ tầng hoặc hệ thống tại chỗ của khách hàng.
C. Một chứng chỉ bảo mật dành cho chuyên gia IT.
D. Quy trình bảo vệ an ninh vật lý cho các tòa nhà chọc trời.
đáp án: B
Giải thích: B đúng theo định nghĩa của Cloud Security Alliance; A sai vì đó là phần mềm on-premise; C và D sai hoàn toàn về ngữ cảnh.

**17. Đâu KHÔNG phải là một danh mục dịch vụ của SecaaS theo Liên minh bảo mật đám mây?**
A. Quản lý danh tính và quyền truy cập (IAM)
B. Ngăn ngừa mất dữ liệu (DLP)
C. Quản lý chuỗi cung ứng phần cứng (Hardware Supply Chain Management)
D. Kinh doanh liên tục và khắc phục thảm họa (BCDR)
đáp án: C
Giải thích: C đúng vì SecaaS tập trung vào dịch vụ phần mềm/giải pháp số qua mạng, không bao gồm việc quản lý vận chuyển phần cứng vật lý; A, B, D đều là các dịch vụ SecaaS tiêu biểu.

**18. (Dạng suy luận) Trong kiến trúc Proxy để xử lý dữ liệu mã hóa trên Cloud, vai trò của "Query Processor" tại phía khách hàng là gì?**
A. Lưu trữ toàn bộ dữ liệu gốc để không cần dùng Cloud.
B. Chuyển đổi câu truy vấn SQL trên dữ liệu gốc thành câu truy vấn trên dữ liệu đã mã hóa trước khi gửi lên Cloud.
C. Tăng tốc độ đường truyền Internet.
D. Đóng vai trò như một máy chủ DNS.
đáp án: B
Giải thích: B đúng vì để Cloud hiểu được lệnh tìm kiếm mà không cần giải mã dữ liệu, Query Processor phải "dịch" câu lệnh SQL sang dạng tương thích với dữ liệu mã hóa; A sai vì nếu lưu hết thì không cần Cloud nữa; C và D sai chức năng.

**19. Theo khuyến nghị của NIST về bảo vệ dữ liệu (Data protection), các tổ chức cần đánh giá giải pháp của nhà cung cấp Cloud đối với các hoạt động nào của dữ liệu?**
A. Chỉ quan tâm đến dữ liệu khi đang sử dụng.
B. Dữ liệu ở trạng thái nghỉ (rest), đang truyền (transit), đang sử dụng (use) và quá trình tiêu hủy (sanitize).
C. Chỉ quan tâm đến việc sao lưu dữ liệu hàng ngày.
D. Chỉ quan tâm đến dữ liệu liên quan đến tài chính.
đáp án: B
Giải thích: B đúng vì bảo mật toàn diện phải bao phủ trọn vẹn vòng đời của dữ liệu từ lúc tạo ra, lưu trữ, di chuyển đến khi xóa bỏ hoàn toàn; A, C, D sai vì thiếu sót các trạng thái quan trọng khác.

**20. (Liên kết kiến thức) Mối quan hệ giữa 802.1X và EAP là gì?**
A. 802.1X là phương thức xác thực, EAP là phương thức vận chuyển.
B. 802.1X xác định cách đóng gói EAP trên mạng LAN (EAPOL) để thực hiện kiểm soát truy cập dựa trên cổng.
C. EAP thay thế hoàn toàn cho 802.1X trong các mạng hiện đại.
D. Chúng là hai giao thức cạnh tranh nhau, không thể dùng chung.
đáp án: B
Giải thích: B đúng vì 802.1X sử dụng EAP làm "nhân" để xác thực, và 802.1X cung cấp cơ chế "vỏ bọc" (EAPOL) và kiểm soát cổng vật lý; A sai vì ngược lại (EAP là khung vận chuyển/xác thực, 802.1X là cơ chế kiểm soát cổng); C và D sai vì chúng bổ trợ cho nhau.

**21. Trong bối cảnh SecaaS, dịch vụ "SIEM" (Security Information and Event Management) đảm nhận vai trò gì?**
A. Quản lý việc cấp phát IP động.
B. Tổng hợp và phân tích nhật ký (log/event) từ nhiều nguồn để phát hiện sự cố bảo mật.
C. Mã hóa ổ cứng máy chủ.
D. Chặn thư rác (Spam).
đáp án: B
Giải thích: B đúng vì SIEM là hệ thống quản lý thông tin và sự kiện bảo mật, chuyên phân tích log tập trung; A là DHCP; C là Encryption; D là Email Security.

**22. Thuật ngữ "Elasticity" (Tính co giãn) trong Cloud khác gì với "Scalability" (Tính mở rộng) truyền thống?**
A. Elasticity chỉ khả năng tự động tăng/giảm tài nguyên nhanh chóng theo nhu cầu thực tế (có thể thu nhỏ lại).
B. Elasticity nghĩa là hệ thống không bao giờ sập.
C. Scalability là khả năng thu nhỏ tài nguyên, còn Elasticity chỉ là mở rộng.
D. Hai thuật ngữ này hoàn toàn giống nhau.
đáp án: A
Giải thích: A đúng vì Elasticity nhấn mạnh tính "đàn hồi" (như dây chun) - tự động phình ra khi tải cao và co lại khi tải thấp để tiết kiệm chi phí; Scalability truyền thống thường chỉ nói về khả năng mở rộng lên (Scale up/out) theo kế hoạch dài hạn.

**23. "Cloud Carrier" khác "Cloud Provider" ở điểm nào?**
A. Carrier cung cấp dịch vụ phần mềm, Provider cung cấp phần cứng.
B. Carrier là đơn vị trung gian vận chuyển kết nối mạng (ISP), Provider là đơn vị cung cấp dịch vụ đám mây (Computing/Storage).
C. Carrier là người mua, Provider là người bán.
D. Carrier kiểm toán hệ thống của Provider.
đáp án: B
Giải thích: B đúng theo kiến trúc NIST; A sai về bản chất dịch vụ; C sai vì người mua là Consumer; D sai vì người kiểm toán là Auditor.

**24. Biện pháp nào sau đây giúp giảm thiểu rủi ro "Account Hijacking" (Chiếm đoạt tài khoản) trên đám mây?**
A. Sử dụng xác thực đa yếu tố (MFA) và cấm chia sẻ tài khoản.
B. Tắt tường lửa.
C. Sử dụng giao thức HTTP thay vì HTTPS.
D. Cho phép mọi IP truy cập vào trang quản trị.
đáp án: A
Giải thích: A đúng vì MFA làm khó hacker ngay cả khi lộ mật khẩu, và cấm chia sẻ giúp định danh chính xác; B, C, D đều là các hành động làm tăng rủi ro bảo mật.

**25. Tại sao giao thức EAP lại được thiết kế theo kiểu "Lock-step" (Bước khóa)?**
A. Để tăng tốc độ truyền tải dữ liệu lớn.
B. Để đảm bảo tính trật tự: Phải nhận được phản hồi cho yêu cầu trước đó rồi mới gửi yêu cầu tiếp theo, phù hợp cho xác thực nhưng không phù hợp truyền dữ liệu lớn.
C. Để mã hóa dữ liệu mạnh hơn.
D. Để cho phép nhiều người dùng xác thực cùng lúc trên một kênh truyền.
đáp án: B
Giải thích: B đúng vì RFC 3748 quy định EAP không hỗ trợ gửi và nhận lộn xộn (out of order), giúp quy trình xác thực chặt chẽ, đơn giản hóa việc xử lý trên thiết bị phần cứng hạn chế (như Switch); A sai vì lock-step làm chậm tốc độ; C sai vì không liên quan mã hóa; D sai.
