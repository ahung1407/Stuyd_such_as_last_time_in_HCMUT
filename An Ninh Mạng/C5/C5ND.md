Chương 5 trong tài liệu của bạn, có tiêu đề **KIỂM SOÁT TRUY CẬP MẠNG VÀ BẢO MẬT ĐIỆN TOÁN ĐÁM MÂY**, bao gồm hai chủ đề chính là Kiểm soát Truy cập Mạng (NAC) và Điện toán Đám mây (Cloud Computing).

Dưới đây là các nội dung chính bạn cần nắm vững:

### I. Kiểm soát Truy cập Mạng (Network Access Control - NAC)

Kiểm soát Truy cập Mạng (NAC) là một thuật ngữ chung được sử dụng để quản lý quyền truy cập vào mạng.

#### 1. Khái niệm và Mục tiêu
NAC là quá trình xác thực người dùng/thực thể khi họ đăng nhập vào mạng, xác định dữ liệu họ có thể truy cập và hành động họ có thể thực hiện. Đồng thời, NAC còn thực hiện việc **kiểm tra tình trạng (sức khỏe)** của máy tính hoặc thiết bị di động của người dùng.

#### 2. Các thành phần của hệ thống NAC
Hệ thống kiểm soát truy cập mạng bao gồm ba thành phần thiết yếu:
*   **Access Requester (AR):** Nút đang cố gắng truy cập mạng, còn được gọi là *supplicant* hay *client* (máy trạm, máy chủ, máy in, v.v.).
*   **Policy Server:** Xác định quyền truy cập nào sẽ được cấp cho AR. Máy chủ này thường dựa vào các hệ thống phụ trợ để giúp xác định tình trạng/sức khỏe của AR.
*   **Network Access Server (NAS):** Chức năng như một **điểm kiểm soát truy cập** cho người dùng ở các địa điểm từ xa. NAS còn được gọi là cổng đa phương tiện hoặc máy chủ chính sách.

#### 3. Phương pháp Thực thi Quyền Truy cập Mạng
Các hành động được áp dụng cho AR để điều chỉnh quyền truy cập vào mạng doanh nghiệp (NAC enforcement methods) bao gồm:
*   **IEEE 802.1X**.
*   **Virtual local area networks (VLANs)**.
*   **Firewall**.
*   **DHCP management**.

#### 4. Giao thức Xác thực Mở rộng (EAP)
*   **Khái niệm:** EAP (RFC 3748) cung cấp dịch vụ vận chuyển tổng quát để trao đổi thông tin xác thực giữa hệ thống máy khách và máy chủ xác thực.
*   **Tính mở rộng:** EAP có thể gói gọn nhiều phương thức xác thực khác nhau và hoạt động trên nhiều loại mạng và liên kết.
*   **Các phương thức EAP phổ biến** bao gồm EAP Transport Layer Security, EAP Tunneled TLS, EAP Generalized Pre-Shared Key, và EAP-IKEv2.
*   **Trình xác thực chuyển tiếp:** Khi hoạt động với tư cách là "trình xác thực chuyển tiếp", trình xác thực sẽ chuyển tiếp các gói EAP giữa thiết bị ngang hàng và máy chủ xác thực phía sau sau khi kiểm tra các trường Code, Identifier, Length.

#### 5. Kiểm soát Truy cập Mạng dựa trên Cổng IEEE 802.1X
*   **Tiêu chuẩn:** IEEE 802.1X là một tiêu chuẩn dành cho Kiểm soát Truy cập Mạng dựa trên Cổng (PNAC). Nó cung cấp cơ chế xác thực cho các thiết bị muốn kết nối với LAN hoặc WLAN.
*   **Hoạt động:** Cho đến khi máy chủ xác thực (AS) xác thực người yêu cầu (supplicant), trình xác thực (authenticator) chỉ chuyển các thông báo điều khiển và xác thực; kênh dữ liệu 802.1X bị chặn. Sau khi xác thực, kênh dữ liệu sẽ được bỏ chặn.
*   **Giao thức EAPOL (EAP over LAN)** là thành phần thiết yếu, hoạt động ở cấp độ liên kết (Ethernet hoặc Wi-Fi) và cho phép người yêu cầu giao tiếp với người xác thực.
*   **Đóng gói:** Dữ liệu EAP trước tiên được đóng gói trong các khung EAPOL giữa thiết bị đầu cuối và trình xác thực, sau đó được đóng gói lại bằng RADIUS giữa trình xác thực và máy chủ xác thực.

### II. Điện toán Đám mây (Cloud Computing)

#### 1. Định nghĩa và Đặc điểm
*   **Định nghĩa (NIST SP-800-145):** Điện toán đám mây là một mô hình cho phép truy cập mạng theo yêu cầu, thuận tiện, ở mọi nơi vào nhóm tài nguyên máy tính có thể định cấu hình chung (mạng, máy chủ, bộ lưu trữ, ứng dụng, dịch vụ).
*   **Mô hình đám mây** bao gồm năm đặc điểm thiết yếu, ba mô hình dịch vụ và bốn mô hình triển khai.

#### 2. Kiến trúc Tham chiếu Điện toán Đám mây
*   **Kiến trúc Tham chiếu NIST SP 500-292** tập trung vào các yêu cầu về **"những gì"** dịch vụ đám mây cung cấp, chứ không phải giải pháp thiết kế **"làm thế nào"**. Nó nhằm tạo điều kiện thuận lợi cho sự hiểu biết về các hoạt động phức tạp trong điện toán đám mây.

#### 3. Vai trò và Trách nhiệm trong Đám mây
*   **Cloud Carrier (Nhà cung cấp mạng đám mây):** Cung cấp khả năng kết nối và vận chuyển các dịch vụ đám mây.
*   **Cloud Broker (Nhà môi giới đám mây):** Hữu ích khi các dịch vụ đám mây quá phức tạp để người dùng quản lý dễ dàng. Ba lĩnh vực hỗ trợ bao gồm Trung gian dịch vụ, Tổng hợp dịch vụ, và Dịch vụ chênh lệch giá (lựa chọn linh hoạt dịch vụ từ nhiều đại lý).
*   **Cloud Auditor (Kiểm toán đám mây):** Một thực thể độc lập có thể đảm bảo rằng nhà cung cấp dịch vụ đám mây (CP) tuân thủ một bộ tiêu chuẩn.

#### 4. Rủi ro Bảo mật Đám mây và Biện pháp Đối phó
Liên minh bảo mật đám mây (CSA) liệt kê các mối đe dọa hàng đầu:
*   **Abuse and nefarious use of cloud computing**.
*   **Malicious insiders** (nội bộ độc hại).
*   **Chiếm đoạt tài khoản hoặc dịch vụ**. Biện pháp đối phó bao gồm cấm chia sẻ thông tin xác thực, tận dụng xác thực hai yếu tố, và giám sát chủ động.
*   **Hồ sơ rủi ro không xác định**.

#### 5. Bảo vệ Dữ liệu trên Đám mây
*   Dữ liệu phải được bảo mật khi **ở trạng thái nghỉ**, **khi truyền** và **đang sử dụng**.
*   Biện pháp bảo mật lý tưởng là khách hàng **mã hóa cơ sở dữ liệu** và chỉ lưu trữ dữ liệu được mã hóa trên đám mây, trong khi **CP không có quyền truy cập vào khóa mã hóa**.

#### 6. Bảo mật Đám mây dưới dạng Dịch vụ (SecaaS)
*   SecaaS là việc cung cấp các ứng dụng và dịch vụ bảo mật thông qua đám mây.
*   Các danh mục dịch vụ SecaaS bao gồm: Quản lý danh tính và quyền truy cập, Ngăn ngừa mất dữ liệu, Bảo mật web, Bảo mật email, Đánh giá an ninh, Quản lý xâm nhập, Bảo mật thông tin và quản lý sự kiện, Mã hóa, Kinh doanh liên tục và khắc phục thảm họa, và An ninh mạng.