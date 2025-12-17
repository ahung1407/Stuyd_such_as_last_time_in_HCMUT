Chào bạn, đây là bản **tổng hợp "xương sống"** (Cheat Sheet) của Chương 5. Đây là những kiến thức cốt lõi nhất bạn cần nắm để thi qua môn hoặc trả lời phỏng vấn, đã được lọc bỏ các chi tiết rườm rà.

Chương này chia làm 2 phần lớn: **NAC** và **Cloud**.

---

### PHẦN 1: KIỂM SOÁT TRUY CẬP MẠNG (NAC) & 802.1X

**1. Tư duy cốt lõi của NAC:**

- Không chỉ hỏi _"Bạn là ai?"_ (Authentication).
- Mà quan trọng nhất là hỏi _"Bạn có khỏe không?"_ (**Health Check/Posture Assessment**).
- _Ví dụ:_ Máy tính phải cài Antivirus, update Windows mới được vào mạng. Nếu không -> Bị đẩy vào VLAN cách ly (Quarantine).

**2. Bộ ba quyền lực (Kiến trúc 802.1X):**
Cần nhớ vị trí và vai trò của 3 thành phần:

1.  **Supplicant (Client/AR):** Máy tính/Điện thoại muốn vào mạng.
2.  **Authenticator (NAS/Switch/AP):** "Bảo vệ gác cổng".
    - Chế độ hoạt động: **Pass-through** (Chuyển tiếp). Nó không giải mã mật khẩu, chỉ chuyển gói tin từ Client sang Server.
3.  **Authentication Server (AS):** "Bộ não". Thường là RADIUS Server. Quyết định cho vào hay không.

**3. Giao thức (Cần phân biệt rõ):**

- **IEEE 802.1X:** Là tiêu chuẩn chung (Luật chơi).
- **EAP (Extensible Authentication Protocol):** Là cái **Phong bì/Khung**. Chứa phương thức xác thực bên trong (Vân tay, Thẻ từ, Password...).
- **EAPOL (EAP over LAN):** Là xe vận chuyển EAP chạy giữa **Client và Switch**.
- **RADIUS:** Là xe vận chuyển EAP chạy giữa **Switch và Server**.

**4. Cơ chế Cổng (Logic Port):**

- **Uncontrolled Port (Cổng không kiểm soát):** Luôn mở, nhưng chỉ cho phép duy nhất gói tin EAPOL đi qua để xin phép.
- **Controlled Port (Cổng kiểm soát):** Mặc định ĐÓNG (Blocked). Chỉ mở khi Server báo "OK". Lúc này dữ liệu (Web, Mail) mới được đi qua.

---

### PHẦN 2: BẢO MẬT ĐIỆN TOÁN ĐÁM MÂY (CLOUD)

**1. Công thức NIST "5 - 3 - 4" (Bắt buộc thuộc):**

- **5 Đặc điểm:** Tự phục vụ (On-demand), Truy cập rộng rãi, Gom tài nguyên, Co giãn nhanh (Elasticity), Đo đếm dịch vụ.
- **3 Mô hình dịch vụ (Ai quản lý cái gì? - Cực quan trọng):**
  - **IaaS (Hạ tầng):** Provider lo phần cứng. Bạn lo OS, App, Data. (Ví dụ: Thuê VPS).
  - **PaaS (Nền tảng):** Provider lo phần cứng + OS + DB. Bạn chỉ lo Code/Data. (Ví dụ: Google App Engine).
  - **SaaS (Phần mềm):** Provider lo tất cả (A-Z). Bạn chỉ dùng. (Ví dụ: Gmail, Google Docs).
- **4 Mô hình triển khai:** Public, Private, Community, Hybrid.

**2. Các "Diễn viên" trong Cloud:**

- **Cloud Provider:** Người bán (AWS).
- **Cloud Consumer:** Người mua (Chúng ta).
- **Cloud Broker:** **Môi giới** (Giúp kết hợp nhiều cloud, quản lý hộ, tìm giá rẻ).
- **Cloud Auditor:** **Kiểm toán** (Bên thứ 3 độc lập kiểm tra cam kết bảo mật).

**3. Rủi ro lớn nhất - Multi-tenancy (Đa thuê bao):**

- **Khái niệm:** Nhiều khách hàng khác nhau dùng chung một phần cứng vật lý.
- **Nguy cơ:** Tấn công kênh bên (Side-channel attack), thoát ly máy ảo (VM Escape).
- **Giải pháp DB:**
  - _Multi-instance:_ Mỗi người 1 nhà riêng (An toàn, Đắt).
  - _Multi-tenant:_ Ở chung phòng (Share DB), phân biệt bằng nhãn dán (Tagging) -> Rẻ, Rủi ro lộ dữ liệu cao hơn.

**4. Vấn đề Mã hóa dữ liệu:**

- Nếu mã hóa toàn bộ DB trước khi đẩy lên Cloud -> Cloud bị mù, **không tìm kiếm (Search/Query)** được.
- **Giải pháp:** Dùng kiến trúc **Proxy/Middleman** ở giữa để mã hóa câu lệnh truy vấn và giải mã kết quả trả về.

---

### TỪ KHÓA ĐỂ LÀM TRẮC NGHIỆM:

- Thấy **"Health Check"** hoặc **"Posture"** $\rightarrow$ chọn **NAC**.
- Thấy **"Port-based"** $\rightarrow$ chọn **802.1X**.
- Thấy **"Pass-through"** $\rightarrow$ chọn vai trò của **Authenticator (Switch)**.
- Thấy **"Elasticity"** (Co giãn) $\rightarrow$ chọn đặc điểm **Cloud**.
- Thấy **"Runtime/Middleware/OS management by Provider"** $\rightarrow$ chọn **PaaS**.
- Thấy **"Side-channel attack"** hoặc **"Shared resources"** $\rightarrow$ chọn rủi ro **Multi-tenancy**.
  Chào bạn, dưới đây là **lời giải chi tiết** cho bài tập Chương V: Kiểm soát truy cập mạng & Bảo mật điện toán đám mây trong hình ảnh bạn cung cấp.

Đáp án này được xây dựng dựa trên kiến thức chuẩn của môn học và nội dung các slide bài giảng mà bạn đã gửi trước đó.

---

### **PHẦN I: CÂU HỎI TỰ LUẬN**

**Câu 1: Cho biết các thành phần của hệ thống kiểm soát truy cập mạng (NAC)**
Dựa trên kiến trúc NAC, có 3 thành phần chính:

1.  **Access Requester (AR) / Supplicant:** Là thiết bị của người dùng (như Laptop, PC, Smartphone...) đang cố gắng truy cập vào mạng. Còn được gọi là _EAP Peer_.
2.  **Policy Server (Máy chủ chính sách):** Là "bộ não" của hệ thống. Nó xác định quyền truy cập nào sẽ được cấp cho AR. Nó thường dựa vào các hệ thống phụ trợ để kiểm tra danh tính và "sức khỏe" thiết bị trước khi ra quyết định.
3.  **Network Access Server (NAS) / Authenticator:** Là điểm kiểm soát truy cập (thường là Switch hoặc Wifi Access Point). Nó đóng vai trò như "người gác cổng", chặn kết nối của AR cho đến khi nhận được lệnh cho phép từ Policy Server.

**Câu 2: Liệt kê các phương pháp thực thi quyền truy cập mạng phổ biến**
Các phương pháp để hệ thống NAC áp dụng (thực thi) luật lên thiết bị:

1.  **IEEE 802.1X:** Kiểm soát dựa trên cổng (mạnh nhất và phổ biến nhất).
2.  **VLANs (Virtual LANs):** Cô lập thiết bị vào các mạng ảo khác nhau (ví dụ: VLAN khách, VLAN nhân viên).
3.  **Firewall (Tường lửa):** Chặn lọc gói tin.
4.  **DHCP Management:** Quản lý việc cấp phát IP (ví dụ: không cấp Gateway cho thiết bị lạ).

**Câu 3: Cho biết các thành phần điện toán đám mây**
Theo mô hình tham chiếu của NIST, có 5 thành phần (diễn viên) chính:

1.  **Cloud Consumer (Người tiêu dùng):** Người/tổ chức sử dụng dịch vụ.
2.  **Cloud Provider (Nhà cung cấp - CP):** Đơn vị cung cấp dịch vụ (AWS, Google, Azure...).
3.  **Cloud Auditor (Kiểm toán viên):** Bên thứ 3 độc lập đánh giá, kiểm tra tính bảo mật và tuân thủ của CP.
4.  **Cloud Broker (Môi giới):** Bên trung gian giúp quản lý, tích hợp hoặc tối ưu hóa việc sử dụng nhiều dịch vụ đám mây.
5.  **Cloud Carrier (Nhà vận chuyển):** Đơn vị cung cấp đường truyền mạng kết nối Consumer và Provider (nhà mạng ISP).

**Câu 4: Mô tả kiến trúc tham chiếu điện toán đám mây của NIST**
Kiến trúc tham chiếu NIST (NIST SP 500-292) là một công cụ mô hình hóa để mô tả, thảo luận và phát triển hệ thống đám mây. Đặc điểm chính:

- Nó tập trung vào **"Cái gì"** (What) - các dịch vụ và vai trò, chứ không phải **"Làm thế nào"** (How) - giải pháp kỹ thuật cụ thể.
- Nó xác định rõ vai trò và trách nhiệm của 5 tác nhân chính (Consumer, Provider, Auditor, Broker, Carrier).
- Nó bao gồm các mô hình dịch vụ (SaaS, PaaS, IaaS) và mô hình triển khai (Public, Private, Hybrid, Community).

**Câu 5: Cho biết danh mục dịch vụ SecaaS (Cloud Security as a Service)**
Theo Liên minh bảo mật đám mây (Cloud Security Alliance), các dịch vụ SecaaS bao gồm:

1.  Quản lý danh tính và quyền truy cập (IAM).
2.  Ngăn ngừa mất dữ liệu (DLP).
3.  Bảo mật Web (Web Security).
4.  Bảo mật Email (Email Security).
5.  Đánh giá an ninh (Security Assessments).
6.  Quản lý xâm nhập (Intrusion Management).
7.  Bảo mật thông tin và quản lý sự kiện (SIEM).
8.  Mã hóa (Encryption).
9.  Kinh doanh liên tục và khắc phục thảm họa (BCDR).
10. An ninh mạng (Network Security).

---

### **PHẦN II: CÂU HỎI TRẮC NGHIỆM**

**Câu 1:** **c. NAC**

- **Giải thích:** NAC (Network Access Control) là thuật ngữ chung chỉ việc quản lý kiểm soát ai được vào mạng và làm gì trong đó.
- _(NAS là thiết bị phần cứng, ARC/RAS là thuật ngữ khác)._

**Câu 2:** **b. Máy chủ chính sách**

- **Giải thích:** Trong mô hình NAC, **Policy Server** (Máy chủ chính sách) là nơi chứa các quy tắc và đưa ra quyết định cuối cùng về việc cấp quyền (Authorization).
- _(Máy chủ xác thực chỉ trả lời câu hỏi "Bạn là ai", còn quyền hạn do Policy Server quyết định)._

**Câu 3:** **a. EAP peer**

- **Giải thích:** Trong giao thức EAP/802.1X, máy khách (Client/Supplicant) được gọi kỹ thuật là **EAP peer** (đối tác ngang hàng trong giao thức EAP).

**Câu 4:** **d. DHCP**

- **Giải thích:** DHCP (Dynamic Host Configuration Protocol) là giao thức tự động cấp phát địa chỉ IP. VLAN là mạng ảo, 802.1X là xác thực, EAP là giao thức đóng gói xác thực.

**Câu 5:** **c. IaaS**

- **Giải thích:**
  - **IaaS (Infrastructure as a Service):** Cung cấp hạ tầng (máy ảo, ổ cứng...). Khách hàng tự cài và quản lý Hệ điều hành (OS).
  - _PaaS:_ Nhà cung cấp quản lý OS.
  - _SaaS:_ Nhà cung cấp quản lý cả Ứng dụng.

**Câu 6:** **True (Đúng)**

- **Giải thích:** Đây chính là định nghĩa đầy đủ của NAC: Xác thực (Authentication), xác định dữ liệu/quyền hạn (Authorization) và kiểm soát hành động (Health check/Compliance).

**Câu 7:** **True (Đúng)**

- **Giải thích:** Đây là tính chất **Rapid Elasticity** (Khả năng co giãn nhanh) - một trong 5 đặc điểm cốt lõi của điện toán đám mây theo NIST.

**Câu 8:** **False (Sai)**

- **Giải thích:** Theo lý thuyết (Slide 40), mối đe dọa xâm phạm dữ liệu **gia tăng** (tăng lên) trên đám mây do môi trường chia sẻ (multi-tenancy), mất quyền kiểm soát vật lý và bề mặt tấn công rộng hơn qua Internet.

**Câu 9:** **True (Đúng)**

- **Giải thích:** Đây là vai trò chính của **Cloud Broker** (Nhà môi giới). Họ giúp tổng hợp, tích hợp và đơn giản hóa việc quản lý khi khách hàng dùng nhiều dịch vụ đám mây phức tạp.

**Câu 10:** **True (Đúng)**

- **Giải thích:** Khi dùng Cloud (đặc biệt là Public Cloud), khách hàng bắt buộc phải nhường quyền kiểm soát vật lý, hạ tầng mạng lõi, và các lớp ảo hóa (tùy mô hình IaaS/PaaS/SaaS) cho nhà cung cấp (Cloud Provider). Khách hàng không thể tự mình bảo vệ server vật lý đặt tại data center của Google hay AWS được.
