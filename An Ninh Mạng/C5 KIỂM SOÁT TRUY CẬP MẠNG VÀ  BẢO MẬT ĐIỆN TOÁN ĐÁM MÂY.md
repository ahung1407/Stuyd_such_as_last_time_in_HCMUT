### CÁC THÀNH PHẦN NAC (Theo Slide 5)

Đây là kiến thức tổng quát về NAC (trước khi đi sâu vào 802.1X). Đề thi dùng các thuật ngữ này rất nhiều.

| Thành phần                  | Tên gọi khác                         | Vai trò cốt lõi (Từ khóa thi)                                                                 | Ví dụ thực tế                                            |
| --------------------------- | ------------------------------------ | --------------------------------------------------------------------------------------------- | -------------------------------------------------------- |
| AR (Access Requester)       | Supplicant, Client, Nút (Node)       | Người xin vào. Thiết bị đang cố gắng kết nối.                                                 | Laptop, PC, Camera, Máy in.                              |
| NAS (Network Access Server) | Authenticator, Gateway, Access Point | Người thực thi / Điểm kiểm soát. Chặn hoặc cho phép gói tin đi qua. Là điểm kết nối đầu tiên. | Switch, Router, Wireless Access Point (AP), VPN Gateway. |
| Policy Server               | Authentication Server (AS)           | Người ra quyết định. Xác định quyền hạn (VLAN nào, ACL nào). Kiểm tra sức khỏe.               | Cisco ISE, Aruba ClearPass, FreeRADIUS.                  |

### GIẢI THÍCH MỐI LIÊN HỆ ĐỂ TRÁNH BẪY:

- **NAS chính là Authenticator:**

  - Trong lý thuyết tổng quát gọi là **NAS**.
  - Trong chuẩn 802.1X gọi là **Authenticator**.
  - Trong thực tế nó là cái **Switch**.
  - Chức năng chung: **Thực thi** (Enforce). Nếu Policy Server bảo "Chặn", NAS sẽ là thằng trực tiếp chặn gói tin.

# MODULE 1: KIỂM SOÁT TRUY CẬP MẠNG (NAC) & 802.1X

### 1. Bảng so sánh các phương pháp thực thi NAC (Enforcement Methods)

_Dùng để trả lời câu hỏi: "Phương pháp nào phù hợp nhất cho...?"_

| Phương pháp     | Đặc điểm cốt lõi                                                        | Ưu điểm                                                        | Nhược điểm                                                        | Khi nào dùng?                                                               |
| :-------------- | :---------------------------------------------------------------------- | :------------------------------------------------------------- | :---------------------------------------------------------------- | :-------------------------------------------------------------------------- |
| **IEEE 802.1X** | Chặn ngay tại cổng vật lý (Switch/AP) hoặc cổng ảo (Wifi). Sử dụng EAP. | **Bảo mật cao nhất**. Xác thực mạnh, mã hóa đường truyền.      | Cấu hình phức tạp. Cần thiết bị hỗ trợ (Switch xịn).              | Mạng doanh nghiệp cần bảo mật cao, Wi-Fi Enterprise (WPA2/3-Enterprise).    |
| **VLANs**       | Cô lập thiết bị vào các mạng LAN ảo dựa trên vai trò.                   | Phân tách lưu lượng tốt (Khách không nhìn thấy Server nội bộ). | Không ngăn được thiết bị cắm vào mạng (chỉ đổi mạng cho nó thôi). | Dùng để phân loại: Mạng Khách (Guest), Mạng IoT, Mạng Cách ly (Quarantine). |
| **Firewall**    | Lọc gói tin dựa trên IP, Port, Ứng dụng.                                | Kiểm soát chi tiết truy cập đến Server cụ thể.                 | Khó quản lý với người dùng di động (IP thay đổi liên tục).        | Dùng kết hợp để giới hạn quyền truy cập sâu vào Server sau khi đã vào mạng. |
| **DHCP**        | Quản lý cấp phát IP (Cấp IP "rác" hoặc không cấp Gateway).              | Dễ triển khai, không cần thay đổi hạ tầng nhiều.               | **Dễ bị qua mặt** (User tự đặt IP tĩnh). Bảo mật yếu.             | Dùng cho mạng đơn giản hoặc làm lớp bảo vệ phụ trợ.                         |

### 2. Chi tiết về Kiến trúc IEEE 802.1X

_Dùng để trả lời câu hỏi về thành phần và vai trò._

| Thành phần        | Tên gọi khác      | Chức năng chính                                                               | Ví dụ thực tế                             |
| :---------------- | :---------------- | :---------------------------------------------------------------------------- | :---------------------------------------- |
| **Supplicant**    | Client, AR, Peer  | Thiết bị **xin** vào mạng. Chạy phần mềm Agent hoặc dùng OS có sẵn.           | Laptop, Smartphone, Camera IP.            |
| **Authenticator** | NAS, Switch, AP   | **Người gác cổng**. Chuyển tiếp (Pass-through) gói tin EAP. Đóng/Mở cổng.     | Cisco Switch, Aruba Access Point.         |
| **Auth Server**   | Policy Server, AS | **Bộ não**. Kiểm tra User/Pass, Certificate. Quyết định cho phép hay từ chối. | RADIUS Server (Microsoft NPS, Cisco ISE). |

### 3. Cơ chế hoạt động của Cổng (Port Logic) trong 802.1X

_Cực kỳ quan trọng cho các câu hỏi "True/False" hoặc quy trình._

- **Trạng thái mặc định:** Cổng ở trạng thái **Unauthorized** (Chưa xác thực).
- **Mô hình cổng kép (Dual-port model):** Một cổng vật lý được tách thành 2 kênh logic:
  1.  **Uncontrolled Port (Cổng không kiểm soát):**
      - _Đặc điểm:_ Luôn mở (Open).
      - _Chức năng:_ **CHỈ** cho phép gói tin **EAPOL** đi qua.
      - _Mục đích:_ Để Client có thể "hét" lên server xin xác thực.
  2.  **Controlled Port (Cổng kiểm soát):**
      - _Đặc điểm:_ Mặc định đóng (Blocked).
      - _Chức năng:_ Cho phép dữ liệu người dùng (HTTP, FTP, IP...) đi qua.
      - _Kích hoạt:_ Chỉ mở khi Server gửi lệnh "Accept".

### 4. Giao thức EAP & EAPOL (Đóng gói)

_Dùng để trả lời câu hỏi về cấu trúc gói tin._

- **EAP (Extensible Authentication Protocol):** Là khung (framework). Hỗ trợ nhiều phương thức (MD5, TLS, SmartCard...).
  - _Đặc tính:_ Lock-step (Hỏi 1 câu - Đáp 1 câu -> Chậm, không dùng tải dữ liệu).
- **EAPOL (EAP over LAN):**
  - _Nơi chạy:_ Giữa **Client** <---> **Switch**.
  - _Các loại gói tin (Packet Types):_
    - `EAP-Packet` (0): Chứa dữ liệu xác thực.
    - `EAPOL-Start` (1): Client chủ động xin bắt đầu (khi vừa cắm dây).
    - `EAPOL-Logoff` (2): Client xin thoát -> Switch đóng cổng ngay.
    - `EAPOL-Key` (3): Trao đổi khóa mã hóa.
- **RADIUS:**
  - _Nơi chạy:_ Giữa **Switch** <---> **Server**.
  - _Tại sao dùng?_ Vì EAPOL không chạy qua Router được, phải bọc vào RADIUS (IP/UDP) để đi xa.

---

# MODULE 2: ĐIỆN TOÁN ĐÁM MÂY (CLOUD COMPUTING)

### 1. Bảng phân chia trách nhiệm (Service Models)

_Dùng để trả lời câu hỏi: "Ai quản lý cái gì?", "Mô hình nào phù hợp cho...?"_

| Mô hình  | Tên gọi  | Bạn (Khách hàng) quản lý                               | Provider (Nhà cung cấp) quản lý             | Ví dụ điển hình                                   | Khi nào dùng?                                                            |
| :------- | :------- | :----------------------------------------------------- | :------------------------------------------ | :------------------------------------------------ | :----------------------------------------------------------------------- |
| **IaaS** | Hạ tầng  | **Hệ điều hành (OS)**, Middleware, Runtime, Data, App. | Phần cứng (Server, Storage), Mạng, Ảo hóa.  | VPS, AWS EC2, Google Compute Engine.              | Cần cài phần mềm đặc thù, cần kiểm soát sâu hệ điều hành.                |
| **PaaS** | Nền tảng | **Dữ liệu (Data), Ứng dụng (App)**.                    | OS, Runtime, Middleware + Hạ tầng bên dưới. | Google App Engine, Heroku, AWS Elastic Beanstalk. | Dev muốn tập trung viết code, không muốn lo cài Win/Linux hay vá lỗi OS. |
| **SaaS** | Phần mềm | **Không gì cả** (chỉ cấu hình User/Policy).            | **Tất cả (A-Z)**.                           | Gmail, Dropbox, Office 365, Salesforce.           | Người dùng cuối, doanh nghiệp cần phần mềm dùng ngay (email, CRM).       |

### 2. So sánh 4 mô hình triển khai (Deployment Models)

| Mô hình             | Đặc điểm                                                                             | Ưu điểm                                                              | Nhược điểm                                              |
| :------------------ | :----------------------------------------------------------------------------------- | :------------------------------------------------------------------- | :------------------------------------------------------ |
| **Public Cloud**    | Hạ tầng dùng chung cho toàn xã hội (đa thuê bao).                                    | Rẻ nhất, Co giãn (Elasticity) tốt nhất.                              | Bảo mật thấp hơn, ít quyền kiểm soát vị trí dữ liệu.    |
| **Private Cloud**   | Hạ tầng dành riêng cho 1 tổ chức duy nhất.                                           | Bảo mật cao nhất, kiểm soát tuyệt đối.                               | Đắt nhất (tự mua/thuê server riêng), khó co giãn nhanh. |
| **Community Cloud** | Dùng chung cho một nhóm tổ chức có cùng mối quan tâm (VD: Các ngân hàng, Chính phủ). | Chia sẻ chi phí, tuân thủ quy định ngành chung.                      | Vẫn tốn kém hơn Public.                                 |
| **Hybrid Cloud**    | Kết hợp 2 loại trên (Thường là Public + Private).                                    | **Linh hoạt nhất**: Dữ liệu mật để Private, Web công cộng để Public. | Phức tạp nhất để quản lý và kết nối.                    |

### 3. Các Actors (Diễn viên) đặc biệt

_Cẩn thận nhầm lẫn giữa Broker và Carrier._

- **Cloud Broker (Nhà môi giới):**
  - _Vai trò:_ Trung gian, tư vấn, gộp dịch vụ.
  - _Chức năng:_ Tích hợp (Service Intermediation), Gộp (Aggregation), Kinh doanh chênh lệch giá (Arbitrage).
  - _Từ khóa:_ "Quản lý phức tạp", "Nhiều cloud", "Tối ưu chi phí".
- **Cloud Carrier (Nhà vận chuyển):**
  - _Vai trò:_ Cung cấp dây cáp, đường truyền.
  - _Từ khóa:_ "ISP", "Viettel/VNPT", "Kết nối mạng", "Vận chuyển".
    **3\. Rủi ro lớn nhất - Shared Technology Issues (Vấn đề công nghệ chia sẻ / Multi-tenancy):**

* **Khái niệm:** Các thành phần phần cứng/phần mềm nền tảng (CPU, GPU, **Hypervisor**) được dùng chung.
* **Nguy cơ:** Kẻ tấn công nằm cùng máy chủ vật lý có thể khai thác lỗ hổng của **Hypervisor** để tấn công máy ảo khác (**VM Escape**) hoặc nghe lén (**Side-channel attack**).

---

# MODULE 3: BẢO MẬT ĐÁM MÂY (CLOUD SECURITY)

### 1. So sánh mô hình Cơ sở dữ liệu (Database Deployment)

_Đây là phần khó và hay bẫy về bảo vệ dữ liệu._

| Đặc điểm          | **Multi-instance (Đa phiên bản)**                 | **Multi-tenant (Đa thuê bao)**                     |
| :---------------- | :------------------------------------------------ | :------------------------------------------------- |
| **Cấu trúc**      | Mỗi khách hàng có 1 máy ảo/DBMS riêng biệt.       | Nhiều khách hàng dùng chung 1 DBMS/Ứng dụng.       |
| **Cách ly**       | Cách ly vật lý/ảo hóa mạnh.                       | Cách ly logic bằng **Tagging (Gắn thẻ)** ID.       |
| **Độ an toàn**    | **Cao**. Hacker khó nhảy từ khách A sang khách B. | **Thấp hơn**. Rủi ro lỗi phần mềm lộ dữ liệu chéo. |
| **Chi phí**       | Đắt (Tốn tài nguyên).                             | Rẻ (Tối ưu tài nguyên).                            |
| **Khi nào dùng?** | Dữ liệu nhạy cảm, Ngân hàng, Y tế.                | Ứng dụng phổ thông, Startup cần rẻ.                |

### 2. Chiến lược Mã hóa & Tìm kiếm trên Cloud

_Vấn đề:_ Mã hóa xong thì Cloud không hiểu -> Không tìm kiếm (Search) được.

- **Giải pháp 1: Tải về hết (Tồi)**
  - _Cách làm:_ Tải toàn bộ DB về -> Giải mã -> Tìm.
  - _Đánh giá:_ Không khả thi với dữ liệu lớn.
- **Giải pháp 2: Kiến trúc Proxy (Tốt)**
  - _Cách làm:_ Dùng **Query Processor** (tại Client).
  - _Quy trình:_
    1.  Client gửi SQL: `SELECT * FROM User WHERE Name='Dat'`
    2.  Proxy mã hóa lệnh: `SELECT * FROM Encry_Tab WHERE Encry_Col='Xy7#b'`
    3.  Cloud tìm chính xác chuỗi `Xy7#b` và trả về.
    4.  Proxy giải mã kết quả cho Client.
  - _Ưu điểm:_ Cloud không bao giờ thấy dữ liệu gốc, vẫn tìm kiếm được.

### 3. SecaaS (Security as a Service)

- **Khái niệm:** Thuê dịch vụ bảo mật thay vì tự làm.
- **Các dịch vụ chính:**
  - **IAM:** Quản lý User/Pass.
  - **DLP (Data Loss Prevention):** Chặn gửi tài liệu mật ra ngoài.
  - **SIEM:** Phân tích Log/Sự kiện bảo mật.
  - **BCDR:** Khôi phục sau thảm họa (Backup).

---

# MODULE 4: "THẦN CHÚ" TRA CỨU NHANH (KEYWORD MAPPING)

_Gặp từ khóa này trong đề thi -> Nghĩ ngay đến đáp án tương ứng._

1.  **"Health Check" / "Posture" / "Compliance"** $\rightarrow$ **NAC**.
2.  **"Pass-through"** $\rightarrow$ Chế độ của **Switch/Authenticator**.
3.  **"Port-based"** $\rightarrow$ **IEEE 802.1X**.
4.  **"EAPOL-Start"** $\rightarrow$ Client **chủ động** muốn xác thực.
5.  **"Elasticity" (Co giãn)** $\rightarrow$ Đặc điểm **Cloud** (Tự tăng/giảm).
6.  **"Runtime" / "Middleware" / "OS" do Provider quản lý** $\rightarrow$ **PaaS**.
7.  **"Consumer quản lý OS"** $\rightarrow$ **IaaS**.
8.  **"Side-channel attack" / "VM Escape"** $\rightarrow$ Rủi ro của **Multi-tenancy**.
9.  **"Tagging"** $\rightarrow$ Cơ chế bảo vệ của **Multi-tenant**.
10. **"Arbitrage" (Chênh lệch giá) / "Aggregation"** $\rightarrow$ Vai trò của **Cloud Broker**.
