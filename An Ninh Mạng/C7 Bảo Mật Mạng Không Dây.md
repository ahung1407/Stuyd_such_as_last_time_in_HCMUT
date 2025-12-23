# TÀI LIỆU ÔN THI: BẢO MẬT MẠNG KHÔNG DÂY (WLAN)

## I. TỔNG QUAN & KHÁI NIỆM CƠ BẢN

### 1. Bản chất & Rủi ro

- **Môi trường:** Chia sẻ (Shared Medium), không biên giới vật lý $\rightarrow$ Dễ bị nghe lén (Sniffing) và gây nhiễu (Jamming).
- **Tam giác CIA:**
  - **Confidentiality (Bí mật):** Chống nghe lén (Mã hóa).
  - **Integrity (Toàn vẹn):** Chống sửa đổi dữ liệu (MIC/CBC-MAC).
  - **Availability (Sẵn sàng):** Chống DoS/Nhiễu.
- **Các yếu tố rủi ro:** Kênh truyền hở, người dùng di động, tài nguyên thiết bị hạn chế (Pin/CPU).

* SSID (Service Set Identifier): Tên mạng, luôn gửi broadcast (Beacon) dạng bản rõ.

### 2. Các thông số chuẩn IEEE 802.11 (Tra cứu nhanh)

| Chuẩn        | Năm  | Tần số    | Tốc độ Max | Đặc điểm                                           |
| :----------- | :--- | :-------- | :--------- | :------------------------------------------------- |
| **802.11a**  | 1999 | 5 GHz     | 54 Mbps    | Ít nhiễu, xuyên tường kém.                         |
| **802.11b**  | 1999 | 2.4 GHz   | 11 Mbps    | Cũ, chậm, xuyên tường tốt.                         |
| **802.11g**  | 2003 | 2.4 GHz   | 54 Mbps    | Phổ biến thời xưa.                                 |
| **802.11n**  | 2009 | 2.4/5 GHz | 600 Mbps   | **MIMO**, phủ sóng rộng.                           |
| **802.11ac** | 2013 | 5 GHz     | 1.3 Gbps+  | (WiFi 5) Phổ biến hiện nay.                        |
| **802.11i**  | 2004 | -         | -          | **Chuẩn Bảo Mật (WPA2)** Bảo mật (WPA2): RSN, AES. |
| **802.11e**  | -    | -         | -          | **QoS (WMM)** - Ưu tiên Voice/Video.               |

---

## II. CÁC MỐI ĐE DỌA (THREATS)

1.  **Rogue AP (Access Point giả mạo):** AP lạ được gắn vào mạng nội bộ (do nhân viên hoặc hacker) $\rightarrow$ Tạo Backdoor né Firewall.
2.  **Evil Twin:** Hacker dựng AP giả có **cùng SSID** với mạng thật $\rightarrow$ Lừa người dùng kết nối (Man-in-the-Middle).
3.  **War Driving:** Lái xe dùng laptop/anten dò tìm mạng Wifi yếu/mở để vẽ bản đồ hoặc tấn công.
4.  **Ad-hoc Network:** Kết nối ngang hàng (P2P) không qua AP $\rightarrow$ Dễ lây virus, thiếu kiểm soát.
5.  **MAC Spoofing:** Giả mạo địa chỉ MAC để vượt qua bộ lọc MAC.
6.  **DoS:** Gây nhiễu sóng hoặc làm tràn ngập gói tin (Flood).

### BỔ SUNG: CƠ CHẾ DÒ TÌM MẠNG (SCANNING)

(Dùng cho War Driving hoặc khi điện thoại kết nối Wifi)

| Loại               | Hành động của Client (Máy dò)     | Từ khóa (Gói tin)                                      | Đặc điểm                                                          |
| ------------------ | --------------------------------- | ------------------------------------------------------ | ----------------------------------------------------------------- |
| Passive (Thụ động) | Im lặng, chỉ mở tai nghe.         | Nghe gói Beacon (do AP tự phát ra quảng bá).           | Bí mật, khó bị phát hiện, nhưng chậm hơn.                         |
| Active (Chủ động)  | Chủ động hỏi "Có ai ở đó không?". | Gửi gói Probe Request. AP trả lời bằng Probe Response. | Nhanh, tìm được cả mạng ẩn SSID, nhưng "ồn ào" (dễ bị phát hiện). |

---

## III. LỊCH SỬ & CHI TIẾT CÁC GIAO THỨC (TRỌNG TÂM)

### 1. WEP (Wired Equivalent Privacy) - _ĐÃ CHẾT_

- **Mục tiêu:** Bảo mật "tương đương mạng dây" (Thất bại).
- **Mã hóa:** **RC4** (Stream Cipher).
- **Vector khởi tạo (IV):** **24-bit**.
  - _Lỗi:_ Quá ngắn $\rightarrow$ Trùng lặp (Collision) sau vài giờ $\rightarrow$ Lộ khóa.
  - _Lỗi:_ IV gửi dạng **Bản rõ (Cleartext)**.
- **Toàn vẹn:** **CRC-32** (Linear). _Lỗi:_ Dễ bị tấn công sửa bit (Bit-flipping).
- **Xác thực:**
  - _Open System:_ Không xác thực.
  - _Shared Key:_ Challenge-Response. _Lỗi:_ Lộ cả bản rõ và bản mã $\rightarrow$ Hacker XOR ra dòng khóa (Keystream).
- **Công cụ hack:** `wepcrack`, `aircrack-ng` (Tấn công **FMS** - Fluhrer, Mantin, Shamir).

### 2. WPA (Wi-Fi Protected Access) - _BẢN VÁ_

- **Bối cảnh:** Là tập con của 802.11i. Ra đời để chạy trên **phần cứng cũ** của WEP (Firmware update).
- **Cải tiến cốt lõi (TKIP - Temporal Key Integrity Protocol):**
  - **Mã hóa:** Vẫn dùng **RC4** nhưng bọc thêm TKIP.
  - **Per-packet Key:** Mỗi gói tin có khóa riêng (trộn Key + MAC + Serial Number).
  - **IV:** Tăng lên **48-bit** (Chống trùng lặp).
  - **Toàn vẹn:** **MIC (Michael)** - 64-bit. Chống giả mạo.
  - **Countermeasures:** Nếu phát hiện tấn công (2 lỗi MIC/60s) $\rightarrow$ Ngắt mạng 60s.

### 3. WPA2 (IEEE 802.11i) - _TIÊU CHUẨN_

- **Yêu cầu:** **Phần cứng mới** (Chip xử lý AES chuyên dụng).
- **Cốt lõi:**
  - **Mã hóa:** **AES** (Block Cipher 128-bit).
  - **Giao thức:** **CCMP** (Counter Mode with CBC-MAC Protocol).
    - _AES-CTR:_ Để mã hóa (Bí mật).
    - _CBC-MAC:_ Để xác thực toàn vẹn (Integrity).
- **Lỗ hổng:** Tấn công từ điển (Dictionary Attack) vào quá trình **Bắt tay 4 bước (4-Way Handshake)**.

### 4. WPA3 - _HIỆN ĐẠI_

- **Thay thế:** PSK bằng **SAE** (Simultaneous Authentication of Equals).
- **Giao thức:** Dragonfly Key Exchange.
- **Ưu điểm:** Chống tấn công từ điển Offline (Dù mật khẩu yếu cũng không dò được khi mang về nhà).
- **Mã hóa (Enterprise):** GCMP-256 (192-bit security).

---

## IV. BẢNG SO SÁNH TỔNG HỢP (DÙNG ĐỂ TRA CỨU NHANH)

| Đặc điểm         | **WEP**          | **WPA**           | **WPA2**               | **WPA3**   |
| :--------------- | :--------------- | :---------------- | :--------------------- | :--------- |
| **Mã hóa**       | **RC4**          | RC4 + **TKIP**    | **AES**                | **AES**    |
| **Giao thức**    | -                | TKIP              | **CCMP**               | **GCMP**   |
| **Toàn vẹn**     | **CRC-32** (Yếu) | **MIC** (Michael) | **CBC-MAC**            | BIP-GMAC   |
| **IV Size**      | **24-bit**       | **48-bit**        | 128-bit                | -          |
| **Quản lý khóa** | Static (Tĩnh)    | 4-way handshake   | 4-way handshake        | SAE / ECDH |
| **Phần cứng**    | Cũ               | Cũ (Firmware Upd) | **Mới (Cần chip AES)** | Mới        |
| **Đánh giá**     | **KHÔNG DÙNG**   | Tạm thời          | **NÊN DÙNG**           | Ưu tiên    |

---

## V. MÔ HÌNH XÁC THỰC (PERSONAL vs ENTERPRISE)

### 1. Personal (Cá nhân/Gia đình) - PSK

- **Tên gọi:** WPA-PSK (Pre-Shared Key).
- **Cách dùng:** Tất cả dùng chung 1 mật khẩu Wifi.
- **Cơ chế:** Dùng mật khẩu đó để sinh khóa qua 4-Way Handshake.
- **Rủi ro:** Mất máy/Nhân viên nghỉ việc $\rightarrow$ Phải đổi pass cho cả công ty.

### 2. Enterprise (Doanh nghiệp) - 802.1X

- **Thành phần:**
  1.  **Supplicant:** Máy trạm (Client).
  2.  **Authenticator:** Access Point (Người gác cổng).
  3.  **Authentication Server:** **RADIUS Server** (AAA).
      RADIUS đóng vai trò AAA (Authentication, Authorization, Accounting), là nơi tập trung để kiểm tra xem user/pass có đúng không và cấp phép truy cập;
- **Giao thức EAP (Extensible Authentication Protocol):**

| Loại EAP     | Yêu cầu Chứng chỉ (Certificate)    | Bảo mật      | Ghi chú                                       |
| :----------- | :--------------------------------- | :----------- | :-------------------------------------------- |
| **EAP-MD5**  | Không                              | Yếu          | Chỉ xác thực 1 chiều.                         |
| **LEAP**     | Không (User/Pass)                  | Yếu          | Của **Cisco**. Dễ bị hack từ điển.            |
| **EAP-TLS**  | **CẢ Client & Server**             | **Cao Nhất** | Khó triển khai (phải cài chứng chỉ từng máy). |
| **PEAP**     | **Chỉ Server**                     | Cao          | Phổ biến nhất. Tạo đường hầm (Tunnel).        |
| **EAP-TTLS** | **Chỉ Server**                     | Cao          | Tương tự PEAP.                                |
| **EAP-FAST** | Dùng **PAC** (Không cần chứng chỉ) | Cao          | Của **Cisco**. Thay thế LEAP.                 |

---

## VI. CÁC BIỆN PHÁP BẢO VỆ KHÁC (ĐÁNH GIÁ HIỆU QUẢ)

| Biện pháp            | Hiệu quả thực tế   | Lý do                                                                            |
| :------------------- | :----------------- | :------------------------------------------------------------------------------- |
| **Ẩn SSID**          | **Thấp (Vô dụng)** | SSID vẫn nằm trong gói tin, Hacker dùng Sniffer là thấy ngay.                    |
| **Lọc MAC**          | **Thấp (Vô dụng)** | MAC gửi bản rõ (Cleartext) $\rightarrow$ Hacker bắt được và **Spoof (Giả mạo)**. |
| **IP Tĩnh**          | Thấp               | Hacker dễ dàng dò ra dải IP mạng.                                                |
| **Giảm công suất**   | Trung bình         | Hạn chế vùng phủ sóng, nhưng Hacker dùng anten định hướng vẫn bắt được.          |
| **Xác thực 2 chiều** | **Cao**            | Chống Rogue AP/Evil Twin (Mutual Authentication).                                |

---

## VII. MẸO LÀM BÀI TRẮC NGHIỆM (KEYWORDS)

- Thấy **"RC4", "IV 24-bit", "Static Key", "CRC-32"** $\rightarrow$ Khoanh **WEP**.
- Thấy **"TKIP", "MIC", "Firmware Update", "Tập con 802.11i"** $\rightarrow$ Khoanh **WPA**.
- Thấy **"AES", "CCMP", "Phần cứng mới", "802.11i đầy đủ"** $\rightarrow$ Khoanh **WPA2**.
- Thấy **"SAE", "Dragonfly", "Chống từ điển offline"** $\rightarrow$ Khoanh **WPA3**.
- Thấy **"Chứng chỉ cả 2 đầu"** $\rightarrow$ Khoanh **EAP-TLS**.
- Thấy **"Cisco", "User/Pass"** $\rightarrow$ Khoanh **LEAP**.
- Thấy **"PAC"** $\rightarrow$ Khoanh **EAP-FAST**.
- Thấy **"Tunnel", "Chứng chỉ Server"** $\rightarrow$ Khoanh **PEAP**.
- **Lỗi của WEP?** $\rightarrow$ Key Scheduling Algorithm của RC4 + IV ngắn + IV bản rõ.
- **WPA khác WPA2?** $\rightarrow$ WPA dùng RC4/TKIP (Phần mềm); WPA2 dùng AES (Phần cứng).
