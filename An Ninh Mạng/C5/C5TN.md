### II. Câu hỏi trắc nghiệm

**1. ___ là một thuật ngữ chung để quản lý quyền truy cập vào mạng.**
a. NAS
b. ARC
c. **NAC**
d. RAS

**Đáp án: c. NAC**
NAC (Network Access Control) là một thuật ngữ chung để quản lý quyền truy cập vào mạng. NAC là quá trình xác thực người dùng/thực thể khi họ đăng nhập vào mạng, xác định dữ liệu họ có thể truy cập và hành động họ có thể thực hiện. Đồng thời, NAC còn kiểm tra tình trạng (sức khỏe) của máy tính hoặc thiết bị di động của người dùng.

**2. ___ xác định quyền truy cập nào sẽ được cấp.**
a. Máy chủ xác thực
b. **Máy chủ chính sách**
c. Khách hàng
d. Người yêu cầu truy cập

**Đáp án: b. Máy chủ chính sách**
**Policy server** (Máy chủ chính sách) xác định quyền truy cập nào sẽ được cấp cho Access Requester (AR). Máy chủ này thường dựa vào các hệ thống phụ trợ (backend) để giúp xác định tình trạng/sức khỏe của AR.

**3. ___ là một máy khách đang cố truy cập mạng.**
a. **EAP peer**
b. PSK
c. NAC
d. RAS

**Đáp án: a. EAP peer**
Mặc dù câu hỏi này có thể có nhiều câu trả lời khác nhau tùy thuộc vào ngữ cảnh, trong bối cảnh chung của Kiểm soát Truy cập Mạng (NAC) và các thành phần liên quan:
*   **Access Requester (AR)** (còn được gọi là *supplicant* hay *client*) là nút đang cố gắng truy cập mạng.
*   **EAP peer** (thiết bị ngang hàng) là thực thể trao đổi các gói EAP (Giao thức Xác thực Mở rộng) với trình xác thực. Trong mô hình 802.1X, *supplicant* là **EAP peer** đang tìm kiếm quyền truy cập.

(Lưu ý: DHCP, EAP, và IEEE 802.1X là các phương pháp/giao thức liên quan đến việc cấp phát truy cập. DHCP management là một phương pháp thực thi quyền truy cập mạng. Trong các lựa chọn được đưa ra, *EAP peer* là thuật ngữ gần nhất chỉ một thực thể đang cố gắng truy cập mạng.)

**4. ___ là một giao thức Internet cấp phát động địa chỉ IP cho các máy tính.**
a. VLAN
b. IEEE 802.1X
c. EAP
d. **DHCP**

**Đáp án: d. DHCP**
**DHCP management** (Quản lý DHCP) là một trong bốn phương pháp thực thi quyền truy cập mạng phổ biến. DHCP (Dynamic Host Configuration Protocol) là một giao thức được sử dụng để cấp phát động địa chỉ IP và các thông tin cấu hình mạng khác cho các thiết bị.

**5. Loại dịch vụ đám mây nào cung cấp một máy chủ ảo hóa và cho phép khách hàng sử dụng hệ điều hành của riêng họ ?**
a. SaaS
b. PaaS
c. **IaaS**
d. SecaaS

**Đáp án: c. IaaS**
**Infrastructure as a Service (IaaS)** cung cấp quyền truy cập vào tài nguyên cơ sở hạ tầng đám mây cơ bản. Với IaaS, khách hàng có quyền kiểm soát **hệ điều hành**, các ứng dụng được triển khai, và có thể kiểm soát hạn chế các thành phần mạng được chọn (ví dụ: tường lửa máy chủ). IaaS cung cấp **máy ảo (VMs)** và phần cứng ảo hóa khác.


### II. Câu hỏi trắc nghiệm (True/False)

**6. (True/False) Kiểm soát truy cập mạng xác thực người dùng đăng nhập vào mạng và xác định dữ liệu nào họ có thể truy cập cũng như các hành động họ có thể thực hiện.**

*   **Đáp án: Đúng**
*   **Giải thích:** NAC (Network Access Control) là quá trình xác thực người dùng/thực thể khi họ đăng nhập vào mạng và xác định dữ liệu nào họ có thể truy cập cũng như những hành động họ có thể thực hiện.

**7. (True/False) Điện toán đám mây cung cấp cho bạn khả năng mở rộng và giảm thiểu tài nguyên theo yêu cầu dịch vụ cụ thể của bạn.**

*   **Đáp án: Đúng**
*   **Giải thích:** Một trong năm đặc điểm thiết yếu của điện toán đám mây là **Rapid elasticity** (Đàn hồi nhanh chóng). Đặc điểm này đề cập đến khả năng mở rộng (cấp phát) và giảm (giảm thiểu) tài nguyên theo yêu cầu dịch vụ cụ thể của người dùng.

**8. (True/False) Mối đe dọa xâm phạm dữ liệu giảm trên đám mây.**

*   **Đáp án: Sai**
*   **Giải thích:** Tài liệu nêu rõ rằng **mối đe dọa xâm phạm dữ liệu gia tăng** trên đám mây.

**9. (True/False) Đơn vị môi giới đám mây rất hữu ích khi dịch vụ đám mây quá phức tạp để người tiêu dùng đám mây có thể dễ dàng quản lý.**

*   **Đáp án: Đúng**
*   **Giải thích:** **Cloud broker** (Nhà môi giới đám mây) hữu ích khi các dịch vụ đám mây quá phức tạp khiến người dùng đám mây không thể dễ dàng quản lý [445, Mục II. 3. trong câu trả lời trước].

**10. (True/False) Khi sử dụng cơ sở hạ tầng đám mây, khách hàng nhất thiết phải nhường quyền kiểm soát cho CP đối với một số vấn đề có thể ảnh hưởng đến bảo mật.**

*   **Đáp án: Đúng**
*   **Giải thích:** Việc sử dụng các mô hình dịch vụ đám mây (như IaaS, PaaS, SaaS) đòi hỏi sự chia sẻ trách nhiệm giữa khách hàng và Nhà cung cấp dịch vụ đám mây (CP) [Dựa trên các kiến thức về mô hình dịch vụ đám mây trong Chương 5]. Cụ thể, IaaS cung cấp máy chủ ảo hóa và cho phép khách hàng sử dụng hệ điều hành của riêng họ [Mục II. 5. trong câu trả lời trước], nhưng khách hàng vẫn phải nhường quyền kiểm soát một số vấn đề bảo mật cơ bản cho CP, chẳng hạn như bảo mật vật lý của trung tâm dữ liệu. Việc cung cấp IaaS, PaaS, SaaS sẽ chuyển trách nhiệm kiểm soát một số lớp kiến trúc cho CP [Dựa trên các nội dung về kiến trúc đám mây]. Khách hàng phải cân nhắc cẩn thận hồ sơ rủi ro không xác định, bao gồm việc phải tiết lộ nhật ký và dữ liệu hiện hành cho CP.