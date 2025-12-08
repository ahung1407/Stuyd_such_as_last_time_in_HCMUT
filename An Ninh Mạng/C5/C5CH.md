Dưới đây là câu trả lời chi tiết cho các câu hỏi của bạn dựa trên nội dung Chương 5 (Kiểm soát Truy cập Mạng và Bảo mật Điện toán Đám mây) và các nguồn tài liệu liên quan khác:

### 1. Các thành phần của hệ thống kiểm soát truy cập mạng (Network Access Control - NAC)

Hệ thống Kiểm soát Truy cập Mạng (NAC) bao gồm ba thành phần thiết yếu:

1.  **Access Requester (AR):**
    *   Là nút đang cố gắng truy cập vào mạng.
    *   Có thể là bất kỳ thiết bị nào được hệ thống NAC quản lý, bao gồm máy trạm, máy chủ, máy in, máy ảnh và các thiết bị hỗ trợ IP khác.
    *   Còn được gọi là *supplicant* hay *client* (máy khách).

2.  **Policy Server (Máy chủ Chính sách):**
    *   Xác định quyền truy cập nào sẽ được cấp cho **AR**.
    *   Thường dựa vào các hệ thống phụ trợ (backend) để giúp xác định **tình trạng/sức khỏe** của **AR**.

3.  **Network Access Server (NAS):**
    *   Chức năng như một **điểm kiểm soát truy cập** cho người dùng ở các địa điểm từ xa kết nối với mạng nội bộ của doanh nghiệp.
    *   Còn được gọi là cổng đa phương tiện, máy chủ truy cập từ xa hoặc máy chủ chính sách.
    *   Có thể bao gồm các dịch vụ xác thực riêng hoặc dựa vào dịch vụ xác thực riêng từ máy chủ chính sách.

### 2. Liệt kê các phương pháp thực thi quyền truy cập mạng phổ biến

Các phương pháp thực thi phổ biến (Common NAC enforcement methods) là các hành động được áp dụng cho **AR** để điều chỉnh quyền truy cập vào mạng doanh nghiệp. Nhiều nhà cung cấp hỗ trợ đồng thời nhiều phương pháp thực thi, cho phép khách hàng điều chỉnh cấu hình bằng cách sử dụng một hoặc kết hợp các phương pháp này.

Các phương pháp bao gồm:

*   **IEEE 802.1X**
*   **Virtual local area networks (VLANs)**
*   **Firewall**
*   **DHCP management**

### 3. Cho biết các thành phần điện toán đám mây

Mô hình Điện toán Đám mây (Cloud Computing) được định nghĩa bởi NIST SP-800-145 bao gồm ba nhóm thành phần chính:

1.  **Năm Đặc điểm Thiết yếu (Five Essential Characteristics):**
    *   **Broad network access** (Truy cập mạng rộng rãi).
    *   **Rapid elasticity** (Đàn hồi nhanh chóng): khả năng mở rộng và giảm tài nguyên theo yêu cầu dịch vụ cụ thể.
    *   **Measured service** (Dịch vụ được đo lường): kiểm soát và tối ưu hóa việc sử dụng tài nguyên bằng cách tận dụng khả năng đo lường.
    *   **On-demand self-service** (Tự phục vụ theo yêu cầu): người dùng có thể tự động cấp phát khả năng tính toán mà không cần tương tác với nhà cung cấp dịch vụ.
    *   **Resource pooling** (Gộp tài nguyên): nhóm tài nguyên máy tính có thể định cấu hình chung, được chia sẻ giữa nhiều người dùng.

2.  **Ba Mô hình Dịch vụ (Three Service Models):**
    *   **Software as a Service (SaaS)**: Cung cấp phần mềm/ứng dụng chạy và có thể truy cập trên đám mây cho khách hàng.
    *   **Platform as a Service (PaaS)**: Cung cấp một nền tảng để các ứng dụng của khách hàng có thể chạy.
    *   **Infrastructure as a Service (IaaS)**: Cung cấp quyền truy cập vào tài nguyên cơ sở hạ tầng đám mây cơ bản (máy chủ ảo, lưu trữ, mạng, v.v.).

3.  **Bốn Mô hình Triển khai (Four Deployment Models):**
    *   **Public cloud** (Đám mây công cộng): Cơ sở hạ tầng được cung cấp cho công chúng hoặc một nhóm ngành lớn.
    *   **Private cloud** (Đám mây riêng): Được triển khai trong môi trường CNTT nội bộ của tổ chức.
    *   **Community cloud** (Đám mây cộng đồng): Tài nguyên đám mây được chia sẻ giữa một số tổ chức độc lập có các yêu cầu tương tự.
    *   **Hybrid cloud** (Đám mây lai): Kết hợp hai hoặc nhiều mô hình triển khai khác nhau (riêng, cộng đồng hoặc công cộng).

### 4. Mô tả kiến trúc tham chiếu điện toán đám mây của NIST

Kiến trúc tham chiếu điện toán đám mây **NIST SP 500-292** tập trung vào các yêu cầu về **"những gì"** dịch vụ đám mây cung cấp, chứ không phải giải pháp thiết kế **"làm thế nào"**. Nó là một công cụ để mô tả, thảo luận và phát triển kiến trúc dành riêng cho hệ thống bằng cách sử dụng một khung tham chiếu chung.

Kiến trúc này định nghĩa năm vai trò/thực thể chính:

1.  **Cloud Service Customer (CSC)** (Khách hàng Dịch vụ Đám mây):
    *   Cá nhân hoặc tổ chức duy trì mối quan hệ kinh doanh và sử dụng dịch vụ từ các nhà cung cấp đám mây.
2.  **Cloud Service Provider (CSP)** (Nhà cung cấp Dịch vụ Đám mây):
    *   Thực thể chịu trách nhiệm cung cấp dịch vụ cho các bên quan tâm.
3.  **Cloud Auditor** (Kiểm toán Đám mây):
    *   Thực thể độc lập có thể đảm bảo rằng **CP** tuân thủ một bộ tiêu chuẩn.
    *   Có thể tiến hành đánh giá độc lập về các dịch vụ đám mây, vận hành hệ thống thông tin, hiệu suất và bảo mật của việc triển khai đám mây.
4.  **Cloud Broker** (Nhà môi giới Đám mây):
    *   Quản lý việc sử dụng, hiệu suất và cung cấp các dịch vụ đám mây, đồng thời đàm phán mối quan hệ giữa các **CP** và người dùng đám mây.
    *   Ba lĩnh vực hỗ trợ bao gồm: **Trung gian dịch vụ** (Service Intermediation), **Tổng hợp dịch vụ** (Service Aggregation), và **Dịch vụ chênh lệch giá** (Service Arbitrage).
5.  **Cloud Carrier** (Nhà cung cấp mạng đám mây):
    *   Thực thể trung gian cung cấp khả năng kết nối và vận chuyển các dịch vụ đám mây từ **CP** đến người dùng đám mây.

### 5. Cho biết danh mục dịch vụ SecaaS (Cloud Security as a Service)

Liên minh Bảo mật Đám mây (Cloud Security Alliance) định nghĩa SecaaS là việc cung cấp các ứng dụng và dịch vụ bảo mật thông qua đám mây tới cơ sở hạ tầng và phần mềm dựa trên đám mây hoặc từ đám mây đến hệ thống tại chỗ của khách hàng.

Các danh mục dịch vụ SecaaS được xác định bao gồm:

1.  **Quản lý danh tính và quyền truy cập** (Identity and access management - IAM).
2.  **Ngăn ngừa mất dữ liệu** (Data loss prevention - DLP).
3.  **Bảo mật web** (Web security).
4.  **Bảo mật email** (Email security).
5.  **Đánh giá an ninh** (Security assessments).
6.  **Quản lý xâm nhập** (Intrusion management).
7.  **Bảo mật thông tin và quản lý sự kiện** (Security information and event management - SIEM).
8.  **Mã hóa** (Encryption).
9.  **Kinh doanh liên tục và khắc phục thảm họa** (Business continuity and disaster recovery).
10. **An ninh mạng** (Network security).