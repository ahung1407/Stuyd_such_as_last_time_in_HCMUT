Dựa trên tài liệu "Chương XII: Bức tường lửa" của ThS. Nguyễn Cao Đạt (Trường ĐH Bách Khoa Tp.HCM), đây là những nội dung cốt lõi và trọng tâm nhất bạn cần nắm vững:

### 1. Khái niệm và Mục tiêu của Firewall (Bức tường lửa)

- **Định nghĩa:** Là hệ thống kiểm soát truy cập mạng, thường nằm giữa hai mạng (ví dụ: mạng nội bộ và Internet) để từ chối các truy cập trái phép.

- **Nguyên tắc thiết kế (3 điều kiện bắt buộc):**

1. Tất cả lưu lượng (trong ra ngoài và ngược lại) phải đi qua nó.

2. Chỉ lưu lượng hợp lệ (theo chính sách an ninh) mới được đi qua.

3. Bản thân hệ thống firewall phải miễn dịch với các tấn công.

- **Chức năng:** Kiểm soát dịch vụ, kiểm soát hướng, kiểm soát người dùng và hành vi.

### 2. Phân loại Firewall (3 loại chính)

Đây là phần rất quan trọng để phân biệt cách hoạt động:

- **Bộ lọc gói (Packet Filtering Router):**
- Quyết định chuyển tiếp hoặc loại bỏ gói tin dựa trên địa chỉ IP (nguồn/đích), cổng (port), và giao thức.

- Có 2 dạng: **Stateless** (không kiểm tra trạng thái) và **Stateful** (có kiểm tra trạng thái kết nối, an toàn hơn).

- _Hạn chế:_ Dễ bị tấn công giả mạo IP, khó cấu hình luật phức tạp.

- **Cổng mức ứng dụng (Application-level Gateway / Proxy):**
- Đóng vai trò trung gian (Proxy). Người dùng kết nối đến Proxy, Proxy kết nối đến đích.

- Kiểm tra kỹ lưỡng nội dung gói tin ở tầng ứng dụng. An toàn cao nhưng tốn tài nguyên xử lý.

- **Cổng mức mạch (Circuit-level Gateway):**
- Tạo hai kết nối TCP riêng biệt (trong-ngoài) và chuyển tiếp dữ liệu mà không kiểm tra nội dung gói tin.

- Thường dùng cho người dùng nội bộ tin cậy.

### 3. Các kiến trúc triển khai Firewall

Bạn cần nắm được sơ đồ và ưu điểm của từng loại:

- **Bastion Host:** Máy chủ an toàn, tiếp xúc trực tiếp với Internet, chạy các dịch vụ thiết yếu và được bảo vệ kỹ lưỡng.

- **Screened Host (Single-homed):** Gồm 1 Packet filtering router và 1 Bastion host. Router ép buộc mọi lưu lượng phải qua Bastion host.

- **Screened Host (Dual-homed):** Bastion host có 2 card mạng (1 nối Internet, 1 nối mạng nội bộ), ngăn chặn lưu lượng đi thẳng từ ngoài vào trong.

- **Screened Subnet (DMZ - Quan trọng nhất):**
- Sử dụng 2 router/firewall để tạo ra một vùng đệm (DMZ) chứa các server công cộng (Web, Mail).

- Mạng nội bộ được cô lập hoàn toàn phía sau, an toàn nhất (3 lớp bảo vệ).

### 4. Hạn chế của Firewall

Firewall không phải là "vạn năng", nó **không thể** chống lại:

- Các tấn công không đi qua nó (ví dụ: kết nối dial-in lén lút).

- Các tấn công từ **bên trong** mạng nội bộ.

- Virus/mã độc nằm trong các tập tin được chuyển qua các kênh hợp lệ.

### 5. Xây dựng tập quy tắc (Rule Set)

- Thứ tự các quy tắc rất quan trọng (thường quy tắc cụ thể đặt trước, quy tắc tổng quát đặt sau).

- Ví dụ về nguyên tắc: Thường có quy tắc cuối cùng là "Block All" (Loại bỏ tất cả những gì không được cho phép cụ thể).

---

**Bước tiếp theo:**
Bạn có muốn tôi giải thích chi tiết hơn về cách viết **bảng quy tắc lọc gói (Rule table)** cho mô hình **Screened Subnet (DMZ)** (phần Kiến trúc 3 trong slide) không? Đây thường là dạng bài tập hay gặp trong môn này.
Dựa trên nội dung file bài giảng **"Slide 1.pdf"** (Chương XII: Bức tường lửa) mà bạn đã cung cấp trước đó, kết hợp với các câu hỏi trong file **"ChuongXII.pdf"**, dưới đây là lời giải chi tiết và chính xác nhất cho bài tập này.

---

### PHẦN I: CÂU HỎI TỰ LUẬN

#### Câu 1: Cho biết ba mục tiêu thiết kế của bức tường lửa.

Theo Slide 6, có 3 mục tiêu thiết kế cốt lõi:

1.  **Tất cả thông tin liên lạc** từ bên trong ra ngoài và ngược lại đều phải đi qua nó.

2.  **Chỉ những lưu thông mạng có quyền** (hợp lệ) mới được phép đi qua (dựa trên chính sách an ninh).

3.  **Bản thân bức tường lửa phải miễn dịch** (không bị xâm nhập hay tấn công).

#### Câu 2: Các thông tin nào được sử dụng cho một bộ lọc gói?

Theo Slide 12, bộ lọc gói (Packet Filter) áp dụng quy tắc dựa trên các thông tin chứa trong gói tin gồm:

- Địa chỉ IP nguồn và địa chỉ IP đích.

- Địa chỉ tầng vận chuyển (Port) nguồn và đích.

- Các trường trong phần đầu (Header) của gói tin.

- Giao diện mạng (Interface) mà gói tin đi vào/ra.

#### Câu 3: Phân biệt bộ lọc gói không trạng thái và bộ lọc gói có trạng thái.

- **Bộ lọc gói không trạng thái (Stateless):** Xử lý từng gói tin một cách độc lập. Nó áp dụng quy tắc cho gói tin vào/ra để chuyển tiếp hoặc loại bỏ mà không quan tâm đến các gói tin trước đó hay ngữ cảnh kết nối.

- **Bộ lọc gói có trạng thái (Stateful):**
- Kiểm tra mỗi gói tin trong **ngữ cảnh** của một kết nối (lưu vết kết nối client-server).

- Có bảng quản lý trạng thái kết nối (Connection State) để xác định xem gói tin có thuộc về một kết nối hợp lệ đã được thiết lập hay không.

#### Câu 4: Điểm yếu của bộ lọc gói là gì?

Dựa trên Slide 14, bộ lọc gói có các điểm yếu khiến nó dễ bị tấn công bởi:

- **Giả mạo địa chỉ IP (IP Spoofing):** Kẻ tấn công giả danh địa chỉ tin cậy.

- **Tấn công định tuyến từ nguồn (Source Routing Attacks):** Kẻ tấn công chỉ định đường đi khác mặc định để né tránh kiểm soát.

- **Tấn công phân mảnh nhỏ (Tiny Fragment Attacks):** Chia nhỏ header để qua mặt quy tắc lọc.

- _Ngoài ra:_ Khó cấu hình các quy tắc phức tạp và khả năng ghi nhật ký hạn chế (so với Application Gateway).

#### Câu 5: Trình bày điểm khác biệt giữa ba cấu hình bức tường lửa.

Dựa trên các slide từ 24 đến 30:

1. **Screened Host (Single-homed Bastion):** Chỉ gồm 1 Router lọc gói và 1 Bastion Host. Bastion Host chỉ có 1 card mạng nối vào mạng nội bộ. Router buộc lưu lượng phải qua Bastion. Độ an toàn thấp hơn vì nếu Router hỏng, Bastion nằm chung vùng mạng.

2. **Screened Host (Dual-homed Bastion):** Bastion Host có **2 giao tiếp mạng** (1 nối ra Router/Internet, 1 nối vào trong). Nó ngắt kết nối vật lý trực tiếp giữa trong và ngoài. Nếu Router lọc gói bị thỏa hiệp, lưu lượng vẫn không thể đi thẳng vào trong được.

3. **Screened Subnet (DMZ):** Sử dụng **2 Router** (trong và ngoài) để tạo ra một vùng đệm (DMZ) chứa Bastion Host và các Server công cộng. Đây là mô hình an toàn nhất với 3 lớp bảo vệ, mạng nội bộ hoàn toàn vô hình với Internet.

---

### PHẦN II: CÂU HỎI TRẮC NGHIỆM (Giải thích chi tiết)

#### Câu 1: Cho biết mục tiêu nào sau đây là mục tiêu thiết kế một bức tường lửa?

- **Đáp án: d. Các câu (a) và (c) đều đúng.**
- **Giải thích:**
- (a) Đúng: "Tất cả thông tin từ bên trong ra bên ngoài và ngược lại phải đi qua bức tường lửa".

- (b) Sai: Thông tin _bên trong_ mạng cục bộ (LAN) thường trao đổi trực tiếp qua Switch, không cần qua Firewall.
- (c) Đúng: "Chỉ các loại thông tin được cấp quyền... mới được phép đi qua".

#### Câu 2: Chọn phát biểu sai khi nói về bộ lọc gói (packet filter):

- **Đáp án: c. Nó có khả năng phát hiện các tấn công dạng giả mạo địa chỉ ở tầng mạng**
- **Giải thích:**
- (a) Đúng: Bộ lọc gói hoạt động ở tầng mạng và vận chuyển (IP/TCP headers), không xem xét tầng ứng dụng.

- (b) Đúng: Vì không hiểu tầng ứng dụng nên không chặn được lỗi logic của ứng dụng.
- (c) **Sai (trong ngữ cảnh so sánh):** Mặc dù có thể _ngăn chặn_ bằng cách thêm luật (Slide 14 ), nhưng bản thân bộ lọc gói cơ bản hoạt động dựa trên so sánh địa chỉ IP đơn thuần. Nó không có tính năng "phát hiện" (detect) thông minh như IDS để biết đó là tấn công giả mạo nếu kẻ tấn công làm giả IP hợp lệ. Hơn nữa, Slide 14 liệt kê "Giả mạo địa chỉ IP" là một loại **tấn công trên bộ lọc gói**, ngụ ý rằng nó là điểm yếu (vulnerable) chứ không phải là khả năng mạnh mẽ của nó.

- (d) Đúng: Khả năng log của nó hạn chế hơn Proxy.

#### Câu 3: Chọn phát biểu sai trong các phát biểu sau khi nói về các loại bức tường lửa.

- **Đáp án: b. Circuit-level gateway cho phép thiết lập một kết nối TCP end to end.**
- **Giải thích:**
- Đây là phát biểu **SAI**. Theo Slide 20, Cổng mức mạch (Circuit-level gateway) tạo ra **hai kết nối TCP** riêng biệt: một giữa nó với bên trong, và một giữa nó với bên ngoài. Nó đóng vai trò trung gian chuyển tiếp (relay), không phải là một kết nối "end-to-end" (thông suốt từ đầu cuối đến đầu cuối) thực sự về mặt TCP handshake.

#### Câu 4: Cho biết cấu hình bức tường lửa nào sau đây có khả năng ngăn chặn các vi phạm an ninh mạng khi bộ lọc gói trên bộ định tuyến kết nối với Internet bị thương tổn hay đã thỏa hiệp.

- **Đáp án: d. Câu (b) và (c) đều đúng**
- **Giải thích:**
- **Single-homed (a):** Nếu router hỏng, kẻ tấn công có thể định tuyến gói tin trực tiếp đến các máy khác trong mạng (vì cùng subnet).
- **Dual-homed (b):** Slide 28 khẳng định: "Khi bộ lọc gói bị thỏa hiệp, lưu thông mạng từ Internet không thể trực tiếp đi vào mạng riêng bên trong" (do Bastion ngắt kết nối định tuyến).

- **Screened subnet (c):** Slide 30 khẳng định mô hình này có "ba cấp độ bảo vệ" và mạng nội bộ "vô hình". Nếu router ngoài (nối Internet) bị hỏng, kẻ tấn công vẫn bị chặn bởi Bastion Host và Router trong.

- Do đó, cả (b) và (c) đều có khả năng này.

#### Câu 5: Cách thức để hạn chế tấn công SYN-Flooding trên bức tường lửa là:

- **Đáp án: d. Tất cả đều đúng.**
- **Giải thích:** Tấn công SYN-Flooding làm tràn bảng kết nối của Firewall/Server. Các biện pháp khắc phục phổ biến bao gồm:
- (a) Giới hạn tốc độ gói SYN (Rate limiting).
- (b) Chặn IP kết nối lỗi nhiều lần (Block listing).
- (c) Chỉ cho phép SYN trên các port dịch vụ công khai (giảm bề mặt tấn công).
- Đây là kiến thức an ninh mạng tổng quát (dù không ghi chi tiết từng dòng trong Slide, nhưng Slide 38 có nhắc đến UTM quản lý các mối đe dọa, và các biện pháp này là chuẩn mực để bảo vệ trạng thái kết nối được nhắc ở Slide 15).
