Dựa trên tài liệu bạn cung cấp, đây là tổng hợp những nội dung cốt lõi và trọng tâm nhất về tấn công Từ chối Dịch vụ (DoS) và Từ chối Dịch vụ Phân tán (DDoS), bao gồm cơ chế, phân loại và các biện pháp phòng thủ.

### 1. Tổng quan về DoS và DDoS

- **Định nghĩa:** Tấn công DoS là mối đe dọa lớn đối với mạng máy tính, nhằm mục đích làm kiệt quệ tài nguyên của mục tiêu (băng thông, bộ nhớ, CPU) để ngăn cản người dùng hợp lệ truy cập dịch vụ.

- **DDoS (Distributed DoS):** Do khó có thể đánh sập mục tiêu chỉ với một máy tính, kẻ tấn công sử dụng một lượng lớn các máy tính bị xâm nhập (gọi là zombies hoặc bots) để tấn công đồng loạt.

- **Mạng lưới tấn công (BotNet):** Kẻ tấn công xây dựng mạng lưới này bằng cách phát tán mã độc (virus, worm) để kiểm soát các máy tính dễ bị tổn thương, sau đó điều khiển chúng tấn công nạn nhân.

### 2. Các kỹ thuật tấn công chính trên Internet

Tài liệu chia làm hai loại kỹ thuật chính dựa trên mục tiêu:

**A. Tấn công dựa trên mạng (Network Based Attacks)**

- **TCP SYN Flooding:** Lợi dụng giao thức TCP để tạo ra vô số kết nối "bán mở" (half-open), làm đầy bộ nhớ của nạn nhân khiến họ không thể chấp nhận kết nối mới.

- **ICMP Smurf Flooding:** Kẻ tấn công giả mạo địa chỉ IP của nạn nhân và gửi gói tin ICMP echo request đến địa chỉ broadcast của một mạng khác; tất cả máy tính trong mạng đó sẽ phản hồi lại nạn nhân, gây tắc nghẽn.

- **UDP Flooding:** Gửi lượng lớn gói tin UDP để làm kiệt quệ băng thông của nạn nhân.

- **Intermittent Flooding (Low-rate):** Tấn công theo đợt ngắt quãng để gây tắc nghẽn nhưng giữ tốc độ trung bình thấp nhằm tránh bị phát hiện.

**B. Tấn công dựa trên máy chủ (Host Based Attacks)**

- Khai thác lỗ hổng hoặc sự thiếu hụt trong thuật toán của ứng dụng hoặc hệ điều hành.

- Ví dụ: Tấn công vào giao thức SSL/TLS bằng cách bắt máy chủ thực hiện các phép giải mã RSA tốn kém tài nguyên , hoặc tấn công vào cấu trúc dữ liệu bảng băm (hash table) để gây ra tình huống xử lý tồi tệ nhất.

### 3. Phân loại tấn công (Taxonomy)

Các cuộc tấn công được phân loại dựa trên 4 đặc điểm:

1.  **Cách quét (Scanning):** Cách bot tìm kiếm máy nạn nhân (Quét ngẫu nhiên, Hitlist, Signpost, hoặc Permutation).

2.  **Giả mạo (Spoofing):** Cách kẻ tấn công che giấu địa chỉ IP nguồn:

- _Random spoofing:_ Sinh số ngẫu nhiên 32-bit.

- _Subnet spoofing:_ Giả mạo IP trong cùng dải mạng con để tránh bị lọc.

- _Fixed spoofing:_ Giả mạo chính địa chỉ của mục tiêu (như trong tấn công Smurf).

3.  **Mục tiêu (Target):** Có thể là ứng dụng máy chủ, truy cập mạng, hoặc cơ sở hạ tầng mạng.

4.  **Tác động (Impact):**

- _Disruptive:_ Làm sập hoàn toàn dịch vụ.

- _Degrading:_ Làm giảm hiệu suất dịch vụ khiến khách hàng không hài lòng.

### 4. Các biện pháp phòng thủ DDoS trên Internet

Các giải pháp được triển khai tại các vị trí khác nhau:

- **Tại nơi triển khai (Deployment):** Sử dụng Tường lửa (Firewall) và Hệ thống phát hiện xâm nhập (IDS) để lọc gói tin và giám sát lưu lượng.

- **Phía kẻ tấn công (Attacker Side):** Sử dụng kỹ thuật _Ingress filtering_ để ngăn chặn các gói tin có địa chỉ nguồn giả mạo rời khỏi mạng cục bộ.

- **Phía nạn nhân (Victim Side):** Sử dụng _Hop-count filtering_ (lọc dựa trên số bước nhảy) để phát hiện gói tin giả mạo dựa trên giá trị TTL (Time-To-Live) không khớp.

- **Mạng trung chuyển (Transit Networks):**
- _Puzzles:_ Yêu cầu client giải một bài toán đố trước khi được phục vụ.

- _Pushback:_ Yêu cầu các router phía thượng nguồn giảm tốc độ gửi gói tin (rate-limit) khi phát hiện tắc nghẽn.

- _IP Traceback:_ Truy vết nguồn gốc thực sự của kẻ tấn công.

- _Capability Filtering:_ Chỉ cho phép gửi gói tin khi có sự cho phép (token) từ người nhận.

- **Mạng lớp phủ (Overlay Networks):** Sử dụng mạng ngang hàng để phân tán tải và lọc lưu lượng tấn công trước khi đến đích (ví dụ: DefCOM, SOS).

### 5. Tấn công và phòng thủ trong mạng không dây (Wireless)

Mạng không dây có các đặc thù riêng và bị tấn công ở 3 lớp:

- **Lớp Vật lý (Physical):** Tấn công gây nhiễu (Jamming) để ngăn chặn truyền dẫn.

- **Lớp MAC:** Giả mạo các gói tin điều khiển (như RTS/CTS) để chiếm dụng kênh truyền hoặc làm kiệt quệ băng thông.

- **Lớp Mạng (Network):** Tấn công vào giao thức định tuyến (như AODV, DSR) để phá vỡ kết nối hoặc thay đổi lộ trình gói tin. Giải pháp là sử dụng các giao thức định tuyến an toàn có xác thực.

---

**Bạn có muốn tôi giải thích sâu hơn về một kỹ thuật tấn công cụ thể nào (ví dụ: TCP SYN Flooding) hoặc đi vào chi tiết một giải pháp phòng thủ như "Hop-count filtering" không?**
