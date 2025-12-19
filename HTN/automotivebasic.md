Dựa trên tài liệu "BGSV Embedded Academy (BEA) - T1: Automotive Basics", dưới đây là bản tổng hợp những kiến thức **cốt lõi và trọng tâm nhất** bạn cần nắm. Đây là tài liệu đào tạo nhập môn cho kỹ sư nhúng tại Bosch, nên trọng tâm là hiểu về **hệ thống** và **nguyên lý hoạt động**.

Tài liệu được chia thành 6 mảng chính:

### 1. Tổng quan về Xe 2 bánh (2WP - Two-Wheeler & Powersports)

- **Danh mục sản phẩm:** Bosch không chỉ làm cho ô tô mà còn làm cho xe máy (xe nhỏ, xe phân khối lớn) và xe địa hình.
- **Hệ thống chính:**
  - **Động cơ:** ECU, cảm biến (tốc độ, oxy, nhiệt độ), kim phun nhiên liệu.
  - **An toàn:** ABS (chống bó cứng phanh), MSC (ổn định thân xe cho xe máy - tương tự ESP trên ô tô).
  - **Kết nối:** Màn hình hiển thị, kết nối smartphone (mySPIN).

### 2. Kiến thức cơ bản về Ô tô (Automotive Basics)

- **Phân loại xe:** Xe du lịch (PC), Xe thương mại (CV), Xe chuyên dụng (OHW).
- **Hệ thống Mechatronics (Cơ điện tử):** Đây là tư duy quan trọng nhất của kỹ sư nhúng.
  - **Open loop (Vòng hở):** Input -> Controller -> Output (Không có phản hồi).
  - **Closed loop (Vòng kín):** Có cảm biến đo lường (Measuring element) phản hồi lại Controller để điều chỉnh sai số.

### 3. Hệ thống truyền động (Power Train)

Đây là hệ thống sinh công và truyền lực để xe chạy.

- **Động cơ (Engine):**
  - **Nguyên lý 4 kỳ:** Nạp - Nén - Nổ - Xả.
  - **Phun nhiên liệu:** Phun gián tiếp (PFI) vs Phun trực tiếp (Direct Injection - GDI/Diesel).
- **Hệ thống truyền lực (Drive Train):**
  - **Ly hợp (Clutch) / Biến mô (Torque Converter):** Ngắt/nối truyền động từ động cơ xuống hộp số.
  - **Hộp số (Gearbox):** Số sàn (MT), Tự động (AT), Vô cấp (CVT).
  - **Vi sai (Differential):** Giúp 2 bánh xe quay với tốc độ khác nhau khi vào cua.

### 4. Hệ thống Khung gầm & Thân vỏ (Chassis & Body)

- **Hệ thống lái (Steering):** Từ Trợ lực dầu (Hydraulic) chuyển sang **Trợ lực điện (EPS)** - _EPS rất quan trọng vì nó cho phép các tính năng tự lái can thiệp vào vô lăng._
- **Hệ thống phanh (Braking):**
  - Cấu tạo: Phanh đĩa vs Phanh tang trống.
  - Trợ lực: Bầu trợ lực chân không (Vacuum Booster) hoặc **iBooster** (trợ lực điện cơ - quan trọng cho xe điện và xe tự lái).
- **Hệ thống treo:** Giảm xóc, nhíp lá.

### 5. Hệ thống An toàn (Safety System) - _Trọng tâm kỹ thuật cao_

Phân biệt rõ hai khái niệm:

- **An toàn thụ động (Passive Safety):** Bảo vệ khi tai nạn _đã xảy ra_ (Túi khí, dây đai an toàn).
- **An toàn chủ động (Active Safety - ESP/ABS):** Ngăn chặn tai nạn _trước khi_ xảy ra.
  - **ABS (Anti-lock Braking System):** Giúp bánh xe không bị bó cứng khi phanh gấp -> Vẫn đánh lái được.
  - **TCS (Traction Control):** Chống trượt khi tăng tốc.
  - **ESP (Electronic Stability Program):** Hệ thống cân bằng điện tử. Chống thừa lái (Oversteering) và thiếu lái (Understeering) bằng cách phanh độc lập từng bánh xe. **ESP là nền tảng của hầu hết các tính năng an toàn hiện đại.**

### 6. Đa phương tiện (Car Multimedia)

- **Phần cứng:** Cluster (Đồng hồ taplo điện tử), IVI (Màn hình giải trí trung tâm), HUD (Hiển thị trên kính lái).
- **Tính năng:** Navigation (Dẫn đường), Kết nối điện thoại (CarPlay/Android Auto), Nhận diện giọng nói (Speech Dialog System).
- **Quy trình phát triển HMI:** Sử dụng mô hình MVC (Model - View - Controller).
  - Tool: CGI Studio (làm giao diện), IAR Visual State (làm logic trạng thái).

### 7. Hệ thống hỗ trợ lái nâng cao (ADAS) - _Công nghệ tương lai_

- **Cảm biến:** Radar (đo khoảng cách/tốc độ), Camera (nhận diện hình ảnh/làn đường), Ultrasonic (cảm biến siêu âm cho đỗ xe).
- **Các cấp độ tự lái (SAE Levels):** Từ Level 0 (không có gì) đến Level 5 (tự lái hoàn toàn). Hiện tại phổ biến ở Level 1-2.
- **Các tính năng chính:**
  - **ACC (Adaptive Cruise Control):** Tự động bám theo xe phía trước (tăng/giảm tốc).
  - **LKS (Lane Keeping Support):** Giữ làn đường.
  - **TJA (Traffic Jam Assist):** Hỗ trợ lái khi tắc đường (kết hợp ACC + LKS ở tốc độ thấp).
  - **Parking Aid:** Hỗ trợ đỗ xe tự động (APA) hoặc điều khiển đỗ xe từ xa (RPA).

### Tóm lại, với vai trò Kỹ sư nhúng (Embedded Engineer), bạn cần nhớ kỹ:

1.  **Sơ đồ khối:** Hiểu Input (Sensors) -> Processing (ECU/Algorithms) -> Output (Actuators: Motor, Valve, Pump).
2.  **Safety First:** Hiểu vai trò của ABS/ESP vì nó liên quan trực tiếp đến tính mạng con người.
3.  **Xu hướng:** Chuyển dịch từ Cơ khí -> Điện tử (X-by-Wire), từ lái xe thủ công -> ADAS (Hỗ trợ lái).
