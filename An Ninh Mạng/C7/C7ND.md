Chào bạn, dựa trên các slide hình ảnh bạn cung cấp về **Bảo mật mạng không dây**, tôi xin giải thích chi tiết các khái niệm, mối đe dọa và biện pháp bảo vệ trong mạng không dây như sau:

---

### 1. Bảo mật mạng không dây là gì? (Hình `image_215cbf.png`)

Mạng không dây (Wireless Network - như Wi-Fi) mang lại sự tiện lợi lớn về tính di động nhưng cũng tiềm ẩn nhiều rủi ro hơn mạng có dây.

* **Yêu cầu bảo mật cốt lõi:**
    * **Bí mật (Confidentiality):** Đảm bảo thông tin không bị người lạ đọc trộm.
    * **Toàn vẹn (Integrity):** Đảm bảo thông tin không bị sửa đổi trên đường truyền.
    * **Sẵn sàng (Availability):** Đảm bảo mạng luôn hoạt động khi cần dùng.
    * **Xác thực (Authentication):** Xác minh đúng người, đúng thiết bị.
    * **Cấp quyền (Authorization):** Đảm bảo người dùng chỉ truy cập đúng tài nguyên được phép.
    * **Chống thoái thác (Non-repudiation):** Không thể chối bỏ hành động đã làm.

* **Tại sao mạng không dây rủi ro?**
    * **Kênh truyền:** Sóng vô tuyến lan tỏa trong không khí, ai cũng có thể "bắt" được sóng nên rất dễ bị nghe lén hoặc gây nhiễu.
    * **Di động:** Thiết bị di chuyển liên tục, khó kiểm soát vật lý.
    * **Tài nguyên hạn chế:** Thiết bị di động (điện thoại, cảm biến) thường có pin và chip xử lý yếu hơn máy tính, khó chạy các thuật toán bảo mật quá phức tạp.
    * **Khả năng tiếp cận:** Các thiết bị (như cảm biến IoT ngoài trời) dễ bị tiếp cận và tấn công vật lý.

---

### 2. Các mối đe dọa mạng không dây (Hình `image_215cdb.png`)

Có rất nhiều kiểu tấn công nhắm vào mạng không dây:

1.  **Accidental association (Kết nối vô tình):** Máy tính của nhân viên vô tình kết nối vào mạng Wi-Fi hàng xóm hoặc mạng lạ không an toàn, làm lộ dữ liệu nội bộ.
2.  **Malicious association (Kết nối ác ý - Evil Twin):** Hacker dựng lên một trạm phát Wi-Fi giả mạo (ví dụ: đặt tên "CongTy_Wifi") để lừa nhân viên kết nối vào và đánh cắp mật khẩu. [Hình ảnh minh họa tấn công Evil Twin]
3.  **Ad hoc networks (Mạng ngang hàng):** Các thiết bị tự kết nối trực tiếp với nhau không qua bộ phát trung tâm (AP), tạo ra mạng lưới thiếu kiểm soát, dễ lây lan virus.
4.  **Non-traditional networks (Mạng phi truyền thống):** Tấn công qua Bluetooth, máy quét mã vạch, PDA... thường bị bỏ quên trong chính sách bảo mật.
5.  **Identity theft (Trộm danh tính - MAC spoofing):** Hacker giả mạo địa chỉ MAC của thiết bị được phép để vượt qua bộ lọc an ninh.
6.  **Man-in-the-Middle (Người đứng giữa):** Hacker chen vào giữa kết nối của người dùng và trạm phát, âm thầm đọc trộm hoặc sửa đổi dữ liệu.
7.  **Denial of Service (DoS - Từ chối dịch vụ):** Gây nhiễu sóng vô tuyến hoặc làm ngập lụt gói tin khiến mạng Wi-Fi bị tê liệt.
8.  **Network injection (Tiêm nhiễm mạng):** Hacker chèn các gói tin giả mạo (như lệnh cấu hình lại router) để làm suy giảm hiệu suất hoặc thay đổi định tuyến mạng.

---

### 3. Các biện pháp bảo mật (Hình `image_215cfa.png`)

Để phòng chống các mối đe dọa trên, chúng ta cần áp dụng các biện pháp ở nhiều cấp độ:

#### A. Bảo mật truyền dẫn (Bảo vệ sóng)
* **Ẩn SSID:** Tắt tính năng quảng bá tên mạng (SSID) để mạng không hiện ra trong danh sách dò tìm thông thường (tuy nhiên hacker vẫn có thể dò ra).
* **Đặt tên SSID khó hiểu:** Tránh đặt tên gợi ý mục tiêu (như "Phong_Ke_Toan").
* **Giảm cường độ tín hiệu:** Chỉ phát sóng đủ dùng trong văn phòng, tránh để sóng lan ra ngoài đường.
* **Dùng anten định hướng:** Tập trung sóng vào khu vực cần thiết.
* **Mã hóa truyền dẫn:** Bắt buộc dùng chuẩn mã hóa mạnh như **WPA2** hoặc **WPA3**. Tuyệt đối không dùng WEP (đã bị bẻ khóa hoàn toàn).

#### B. Bảo mật điểm truy cập (Access Point - AP)
* **Kiểm soát truy cập:** Dựa trên danh tính người dùng (tài khoản/mật khẩu).
* **Xác thực mạnh:** Sử dụng giao thức 802.1X/EAP để xác thực từng người dùng qua máy chủ trung tâm (Radius), thay vì dùng chung một mật khẩu cho cả công ty (PSK).

#### C. Bảo mật hạ tầng mạng
* **Tường lửa (Firewall) & Chống virus:** Cài đặt trên cả thiết bị người dùng và bộ định tuyến.
* **Thay đổi mặc định:** Đổi ngay mật khẩu quản trị và tên đăng nhập mặc định của Router/AP.
* **Lọc địa chỉ MAC:** Chỉ cho phép các thiết bị có địa chỉ MAC đã đăng ký được kết nối (tuy nhiên cách này dễ bị qua mặt bằng MAC spoofing).
* **Tách biệt mạng:** Dùng VLAN để tách mạng Wi-Fi cho khách (Guest) và mạng nội bộ.

Tóm lại, bảo mật mạng không dây là một quá trình toàn diện, từ việc cấu hình vật lý (sóng), thiết lập mã hóa (WPA2/3), đến quản lý người dùng và thiết bị chặt chẽ.
Chào bạn, dựa vào các slide bạn cung cấp, mình xin giải thích chi tiết về công nghệ mạng cục bộ không dây (WLAN), các chuẩn IEEE 802.11, vấn đề an ninh và các mối đe dọa như sau:

---

### 1. Công nghệ mạng cục bộ không dây (WLAN) là gì? (Hình `image_21b78d.png`)

WLAN (Wireless Local Area Network) là hệ thống mạng cho phép các thiết bị kết nối với nhau và kết nối internet mà không cần dây cáp, sử dụng sóng vô tuyến.

* **Các chuẩn phổ biến:** 802.11a, 802.11b, 802.11g, 802.11n, 802.11ac, 802.11ax (Wi-Fi 6).
* **Tốc độ:** Tăng dần theo thời gian, từ 11 Mbps (chuẩn b) lên đến hàng ngàn Mbps (chuẩn ac, ax).
* **Cấu trúc cơ bản:**
    * **Server:** Máy chủ chứa dữ liệu.
    * **Access Point (AP):** Điểm truy cập không dây, đóng vai trò cầu nối giữa mạng có dây và các thiết bị không dây.
    * **Wireless Client:** Laptop, điện thoại có card mạng không dây kết nối vào AP.

---

### 2. Các chuẩn Wi-Fi 802.11 (Hình `image_21b795.png`)

Bảng này so sánh sự phát triển của các thế hệ Wi-Fi:

* **802.11a (1999):** Dùng tần số 5GHz, tốc độ 54Mbps. Ít bị nhiễu nhưng phạm vi ngắn.
* **802.11b (1999):** Dùng tần số 2.4GHz, tốc độ thấp 11Mbps nhưng phạm vi rộng hơn, xuyên tường tốt hơn.
* **802.11g (2003):** Kết hợp ưu điểm: Tần số 2.4GHz (xuyên tốt) nhưng tốc độ cao 54Mbps.
* **802.11n (2009 - Wi-Fi 4):** Bước nhảy vọt lớn. Dùng cả 2 băng tần (2.4/5GHz), tốc độ lên tới 600Mbps nhờ công nghệ MIMO (nhiều anten).
* **802.11ac (2013 - Wi-Fi 5):** Chỉ dùng 5GHz, tốc độ siêu nhanh lên tới 1Gbps.


---

### 3. Các chuẩn mở rộng khác (Hình `image_21ba3d.png`)

Ngoài các chuẩn chính, còn có các chuẩn bổ trợ:

* **802.11e (QoS - Quality of Service):** Được gọi là WMM (Wireless MultiMedia). Nó giúp ưu tiên băng thông cho các ứng dụng cần độ trễ thấp như gọi video, xem phim, chơi game online để không bị lag.
* **802.11i (An ninh):** Đây là nền tảng cho chuẩn bảo mật **WPA2**.
    * Nó thay thế thuật toán mã hóa yếu kém WEP/TKIP bằng thuật toán **AES** (Advanced Encryption Standard) cực kỳ mạnh mẽ.
    * Yêu cầu phần cứng mạnh hơn để xử lý mã hóa AES.

---

### 4. Vấn đề an ninh trong WLAN (Hình `image_21ba58.png`)

Mạng không dây vốn dĩ kém an toàn hơn mạng dây vì:

1.  **Môi trường truyền:** Sử dụng sóng vô tuyến lan truyền trong không khí. Không có "tường lửa vật lý" nào cả.
2.  **Dễ bị nghe lén:** Bất kỳ ai trong phạm vi phủ sóng (kể cả đứng ngoài đường) đều có thể dùng thiết bị để thu thập tín hiệu.
3.  **Lỗ hổng:** Các chuẩn cũ (như WEP) có nhiều lỗi thiết kế, dễ bị bẻ khóa.

---

### 5. Một số mối đe dọa phổ biến (Hình `image_21ba5e.png`)

Slide liệt kê các nguy cơ thực tế:

1.  **War driver:** Những kẻ đi dò tìm các mạng Wi-Fi "chùa" (không mật khẩu hoặc mật khẩu yếu) để dùng internet miễn phí hoặc tấn công.
2.  **Tin tặc (Drive-by hackers):** Ngồi ngoài bãi đậu xe, dùng Wi-Fi của công ty để thâm nhập vào mạng nội bộ, đánh cắp dữ liệu mà không cần vượt qua tường lửa internet của công ty.
3.  **Nhân viên:** Vô tình (hoặc cố ý) cắm các thiết bị lạ, hoặc tự ý lắp thêm Access Point không bảo mật (Rogue AP) vào mạng công ty, tạo ra cửa hậu cho hacker.
4.  **Điểm truy cập giả mạo (Evil Twin/Rogue AP):** Hacker dựng lên một trạm phát sóng có tên y hệt mạng công ty (ví dụ: "Wifi_CongTy"). Nhân viên lầm tưởng kết nối vào và bị hacker đánh cắp mật khẩu, thông tin.

---

### 6. Các hình thức giảm nguy cơ (Hình `image_21ba78.png`)

Để bảo vệ mạng WLAN, cần áp dụng đồng thời 3 lớp bảo vệ:

1.  **Xác thực lẫn nhau (Mutual Authentication):** Không chỉ người dùng phải nhập mật khẩu để vào mạng, mà mạng cũng phải chứng minh mình là "hàng thật" (thường dùng chứng chỉ số) để người dùng không bị lừa vào mạng giả mạo.
2.  **Mã hóa dữ liệu:** Sử dụng WPA2 hoặc WPA3 (dùng AES) để mã hóa toàn bộ dữ liệu truyền đi. Dù hacker có thu được sóng cũng không đọc được nội dung.
3.  **Phát hiện xâm nhập (IDS):** Hệ thống giám sát để phát hiện các thiết bị lạ, các hành vi dò quét mạng hoặc sự xuất hiện của các điểm truy cập giả mạo.

Tóm lại, công nghệ mạng không dây mang lại sự tiện lợi vượt trội về tốc độ và kết nối, nhưng đòi hỏi sự quan tâm đặc biệt đến bảo mật (mã hóa mạnh, xác thực chặt chẽ) để chống lại các rủi ro nghe lén và giả mạo.
Chào bạn, mình xin giải thích chi tiết về hình ảnh `image_21c257.png` và phần văn bản bạn đã gửi, liên quan đến các phương pháp xác thực người dùng cơ bản trong mạng Wi-Fi (802.11).

---

### 1. Vấn đề: "Dễ dàng sniff khóa chung" (Hình `image_21c257.png`)

Hình ảnh minh họa quy trình **Xác thực dùng khóa chung (Shared Key Authentication)** trong chuẩn WEP cũ và lý do tại sao nó cực kỳ yếu.

**Quy trình xác thực diễn ra như sau (theo hình vẽ):**

1.  **Yêu cầu xác thực:** Client (máy trạm) gửi yêu cầu kết nối đến Access Point (AP).
2.  **Thách đố (Challenge):** AP gửi lại một chuỗi văn bản rõ ngẫu nhiên (**Plain-Text Challenge**). Ví dụ: "12345".
3.  **Mã hóa:** Client dùng khóa bí mật chung (Shared Key - WEP key) để mã hóa chuỗi "12345" đó thành chuỗi mã hóa (**Cipher-Text Response**) rồi gửi lại cho AP.
    * Phép toán ở đây là: `Response = Challenge XOR KeyStream`. (Trong đó KeyStream được tạo ra từ WEP Key và Vector khởi tạo IV).
4.  **Kiểm tra:** AP giải mã chuỗi đó. Nếu khớp với "12345" ban đầu, AP cho phép kết nối.

**Tại sao hacker dễ dàng đánh cắp (sniff) khóa?**


* **Nguyên lý:** Hacker (Attacker) đứng ở giữa và bắt được cả hai gói tin:
    * Gói 1: `Plain-Text Challenge` (Văn bản rõ).
    * Gói 2: `Cipher-Text Response` (Văn bản đã mã hóa).
* **Phép toán XOR:** Do tính chất đặc biệt của phép XOR ($A \oplus B = C \Rightarrow A \oplus C = B$), hacker chỉ cần lấy hai gói tin này XOR với nhau là tìm ra được **Key Stream**.
    * `KeyStream = Challenge XOR Response`.
* **Hậu quả:** Khi đã có KeyStream, hacker có thể dùng nó để giả mạo người dùng hợp lệ hoặc giải mã các gói tin khác để tìm ra khóa WEP thật sự. Đây là lý do WEP bị coi là "chết" về mặt bảo mật.

---

### 2. Lịch sử phát triển an ninh WLAN (Văn bản bạn gửi)

Phần văn bản tóm tắt quá trình "vá lỗi" liên tục của các chuẩn bảo mật Wi-Fi:

* **1997 (Sơ khai):** Chỉ có **SSID** (tên mạng), **Lọc MAC** (địa chỉ phần cứng), và **WEP**. Tất cả đều rất yếu và dễ bị qua mặt.
* **2001 (WEP sụp đổ):** Các nhà nghiên cứu (Fluhrer, Mantin, Shamir) công bố các lỗi chết người trong thuật toán mã hóa RC4 của WEP. Bắt đầu có các công cụ hack WEP tự động (như Aircrack-ng).
* **2003 (WPA ra đời):** Là giải pháp "chữa cháy" tạm thời. Nó dùng giao thức TKIP để thay đổi khóa liên tục, khắc phục điểm yếu "khóa tĩnh" của WEP mà không cần thay phần cứng cũ.
* **2004 (WPA2 chuẩn hóa):** Đây là chuẩn an toàn và phổ biến nhất trong nhiều năm. Nó dùng thuật toán mã hóa **AES** mạnh mẽ (thay vì RC4). Yêu cầu phần cứng mới mạnh hơn.
* **2018 (WPA3):** Chuẩn mới nhất hiện nay, tăng cường bảo mật chống lại các cuộc tấn công từ điển (brute-force mật khẩu) và mã hóa tốt hơn cho các mạng Wi-Fi công cộng.

---

### 3. Các tính năng an ninh cơ bản (Và tại sao chúng không đủ)

Văn bản cũng phân tích 3 biện pháp bảo mật thô sơ nhất:

* **SSID (Ẩn tên mạng):**
    * *Lý thuyết:* Nếu không biết tên mạng, hacker không kết nối được.
    * *Thực tế:* SSID vẫn được gửi đi trong các gói tin quản lý (beacon frames) hoặc khi có máy trạm kết nối vào. Hacker dùng phần mềm quét sóng đơn giản là thấy ngay, dù bạn có ẩn hay không.

* **Lọc địa chỉ MAC:**
    * *Lý thuyết:* Chỉ cho phép các máy có địa chỉ MAC trong danh sách được vào mạng.
    * *Thực tế:* Địa chỉ MAC được gửi đi dưới dạng văn bản rõ (không mã hóa). Hacker chỉ cần nghe lén xem máy nào đang kết nối, copy địa chỉ MAC của máy đó rồi gán cho máy mình (MAC Spoofing) là vào được mạng dễ dàng.

* **Xác thực hệ thống mở (Open System Authentication):**
    * Thực chất là **không xác thực gì cả**. Ai yêu cầu kết nối cũng được chấp nhận. Đây là chế độ dùng cho các quán cafe công cộng (hoặc dùng kèm với captive portal - trang đăng nhập web).

**Tóm lại:** Các phương pháp cũ (WEP, ẩn SSID, lọc MAC) chỉ tạo cảm giác an toàn giả tạo ("security through obscurity"). Để bảo mật thực sự, bắt buộc phải dùng **WPA2/WPA3 (AES)** và mật khẩu mạnh.
Chào bạn, dựa vào các slide bạn cung cấp, mình xin giải thích chi tiết về chuẩn bảo mật **WEP (Wired Equivalent Privacy)**, các cơ chế hoạt động, và những điểm yếu chết người của nó.

---

### 1. WEP là gì? (Hình `image_21cd9f.png`)

WEP (Wired Equivalent Privacy) là chuẩn bảo mật đầu tiên dành cho mạng Wi-Fi (802.11). Tên của nó ("Bảo mật tương đương mạng dây") thể hiện tham vọng tạo ra một mạng không dây an toàn như mạng có dây, nhưng thực tế lại thất bại thảm hại.

* **Dịch vụ xác thực:**
    * Dùng hệ thống **Challenge-Response** (Thách đố - Trả lời).
    * Có hai chế độ: Xác thực mở (Open System - ai vào cũng được) và Xác thực khóa chia sẻ (Shared Key Authentication - cần mật khẩu).
    * **Vấn đề:** Trong hệ thống mở, máy trạm chỉ cần có địa chỉ MAC đúng là được vào (dễ giả mạo). Hệ thống khóa chia sẻ thì lại dễ bị lộ khóa (như đã giải thích ở câu trước).

---

### 2. Cơ chế mã hóa của WEP (Hình `image_21cdf5.png` và `image_21cddb.png`)

WEP sử dụng thuật toán mã hóa dòng **RC4**.

* **Thành phần khóa:**
    * **Khóa bí mật (WEP Key):** Người dùng gõ vào (40 bit hoặc 104 bit).
    * **Vector khởi tạo (IV - Initialization Vector):** Một số ngẫu nhiên 24 bit.
    * **Khóa phiên (Per-packet Key):** Được tạo ra bằng cách nối `IV` + `WEP Key`.

* **Quy trình mã hóa (Hình `21cddb`):**     1.  Tính toán mã kiểm tra toàn vẹn **CRC32** của dữ liệu (Integrity Check Value - ICV) và gắn vào đuôi dữ liệu: `Payload = Data + ICV`.
    2.  Bộ tạo số giả ngẫu nhiên (PRG) dùng `IV + WEP Key` để tạo ra một dòng khóa (Keystream) dài bằng Payload.
    3.  Thực hiện phép **XOR** giữa `Payload` và `Keystream` để tạo ra bản mã (Ciphertext).
    4.  Gửi đi gói tin gồm: `IV (rõ) + Ciphertext`.

---

### 3. Các điểm yếu chết người của WEP (Hình `image_21cdfa.png`, `image_21ce19.png`)

Tại sao WEP dễ bị hack đến mức một đứa trẻ cũng làm được bằng phần mềm có sẵn?

1.  **IV quá ngắn và gửi rõ (Plaintext):**
    * IV chỉ có 24 bit ($\approx$ 16 triệu giá trị). Trong một mạng bận rộn, các giá trị IV sẽ bị lặp lại rất nhanh (IV collision).
    * IV được gửi **không mã hóa** ở đầu mỗi gói tin.
    * Khi hacker bắt được 2 gói tin có cùng IV (dùng cùng Keystream), họ có thể dùng phép XOR để loại bỏ Keystream và tìm ra bản rõ.

2.  **Khóa WEP cố định:**
    * Tất cả người dùng dùng chung một mật khẩu. Khóa này không tự động thay đổi (re-keying). Hacker có vô tận thời gian để thu thập gói tin và giải mã nó.

3.  **Thuật toán kiểm tra toàn vẹn yếu (CRC32 - Hình `image_21ce13.png`):**
    * CRC32 là thuật toán tuyến tính, được thiết kế để phát hiện lỗi đường truyền ngẫu nhiên, **không phải** để chống lại sự sửa đổi ác ý.
    * Hacker có thể lật bit (bit-flipping) trong bản mã và tính lại CRC32 tương ứng để tạo ra một gói tin giả mạo hợp lệ mà không cần biết khóa WEP.

4.  **Các cuộc tấn công nổi tiếng:**
    * **FMS Attack (Fluhrer, Mantin, Shamir - 2001):** Lợi dụng điểm yếu trong cách RC4 sử dụng IV để khôi phục khóa WEP từng byte một.
    * **Chopchop Attack:** Tấn công vào cơ chế CRC32 để giải mã gói tin mà không cần khóa.

---

### 4. Sự ra đời của WPA để thay thế (Hình `image_21d0c0.png`)

Do WEP quá yếu ("Unsafe at any keysize"), liên minh Wi-Fi đã giới thiệu **WPA (Wi-Fi Protected Access)** vào năm 2003.

* **TKIP (Temporal Key Integrity Protocol):** Thay thế WEP bằng cách tự động thay đổi khóa liên tục cho mỗi gói tin, khắc phục lỗi dùng lại khóa.
* **Xác thực mạnh hơn:** Hỗ trợ 802.1x (Enterprise) xác thực qua server Radius.
* **MIC (Message Integrity Code):** Thay thế CRC32 bằng thuật toán Michael để chống sửa đổi gói tin.

**Tóm lại:** WEP là một công nghệ lỗi thời, chứa đầy rẫy lỗ hổng từ thiết kế (IV ngắn, RC4, CRC32). Ngày nay, WEP đã bị khai tử hoàn toàn và không nên sử dụng trong bất kỳ trường hợp nào.
Chào bạn, dựa trên các slide bạn đã cung cấp, tôi sẽ giải thích chi tiết về các giao thức xác thực **EAP (Extensible Authentication Protocol)** và các chế độ bảo mật **WPA (Wi-Fi Protected Access)**.

---

### 1. EAP (Giao thức xác thực mở rộng) là gì? (Hình `image_0151ef.png`)

EAP (Extensible Authentication Protocol) không phải là một phương pháp xác thực cụ thể, mà là một "khung sườn" (framework) cho phép sử dụng nhiều phương pháp xác thực khác nhau.

Các loại EAP phổ biến được liệt kê trong hình:

* **Cisco LEAP:**
    * Dùng Username/Password đơn giản.
    * **Điểm yếu:** Dễ bị tấn công từ điển (đoán mật khẩu) vì cơ chế băm mật khẩu yếu. Hiện nay ít được khuyên dùng.
* **EAP-TLS (Transport Layer Security):**
    * **Cơ chế:** Xác thực hai chiều (Mutual Authentication) dùng chứng chỉ số X.509. Cả máy khách (Client) và máy chủ (Server) đều phải có chứng chỉ.
    * **Độ an toàn:** Rất cao. Là chuẩn mặc định của 802.11i.
    * **Nhược điểm:** Triển khai phức tạp vì phải cài chứng chỉ lên từng thiết bị của người dùng.
* **EAP-TTLS/PEAP (Tunneled TLS / Protected EAP):**
    * **Cơ chế:** Chỉ cần Server có chứng chỉ để tạo đường hầm bảo mật (Tunnel). Bên trong đường hầm đó, Client có thể xác thực bằng mật khẩu thông thường.
    * **Ưu điểm:** An toàn và dễ triển khai hơn EAP-TLS vì không cần cài chứng chỉ cho từng máy khách. Phổ biến nhất trong môi trường doanh nghiệp hiện nay (dùng tài khoản Windows/AD để đăng nhập Wi-Fi).
* **EAP-FAST:**
    * Được Cisco phát triển để thay thế LEAP.
    * Không dùng chứng chỉ mà dùng "PAC" (Protected Access Credential) để thiết lập đường hầm an toàn.

---

### 2. Quy trình xác thực EAP-FAST (Hình `image_0151ca.png`)


Hình ảnh mô tả chi tiết các bước bắt tay trong EAP-FAST:

1.  **Khởi tạo (EAPOL Start):** Máy khách (Supplicant) yêu cầu kết nối.
2.  **Thiết lập đường hầm:** Hai bên trao đổi thông tin để thiết lập một **Secure Tunnel** (Đường hầm an toàn) dựa trên TLS và PAC (Protected Access Credential) đã có từ trước.
3.  **Xác thực bên trong đường hầm:**
    * Máy chủ RADIUS yêu cầu danh tính (Identity).
    * Máy khách gửi thông tin xác thực (ví dụ: username/password) qua đường hầm đã được mã hóa an toàn.
4.  **Kết quả:** Nếu thông tin đúng, RADIUS Server gửi thông báo `Success` và gửi khóa `PMK` (Pairwise Master Key) cho Access Point (AP). Từ đó, AP và Client dùng khóa này để mã hóa dữ liệu truyền đi (WPA Key Management).

---

### 3. Đánh giá và so sánh các loại EAP (Hình `image_0151af.png`)

Biểu đồ này so sánh sự cân bằng giữa **Độ an toàn (An toàn)** và **Độ dễ sử dụng/triển khai (Dễ sử dụng)**:

* **EAP-MD5:** Dễ triển khai nhất nhưng kém an toàn nhất (dễ bị nghe lén, tấn công từ điển).
* **LEAP:** Khá dễ dùng nhưng bảo mật trung bình/yếu.
* **PEAP / EAP-TTLS:** Nằm ở giữa, cân bằng tốt nhất. Bảo mật cao (nhờ đường hầm TLS) và tương đối dễ dùng (chỉ cần chứng chỉ phía server). Đây là lựa chọn "vàng" cho đa số doanh nghiệp.
* **EAP-TLS:** An toàn nhất (đỉnh cao bảo mật) nhưng khó triển khai nhất (đòi hỏi hạ tầng PKI phức tạp).

---

### 4. Các chế độ hoạt động của WPA (Hình `image_015497.png`)

WPA (Wi-Fi Protected Access) có 2 chế độ chính để phục vụ 2 đối tượng khác nhau:

1.  **WPA Cá nhân (WPA-Personal / WPA-PSK):**
    * **Đối tượng:** Nhà riêng, văn phòng nhỏ (SOHO).
    * **Cách dùng:** Dùng chung một mật khẩu (Pre-Shared Key - PSK) cho tất cả mọi người. Ai biết mật khẩu thì vào được.
    * **Cơ chế:** Mật khẩu này (Master Key) được dùng để sinh ra các khóa phiên (TKIP) thay đổi liên tục.

2.  **WPA Doanh nghiệp (WPA-Enterprise / WPA-802.1X):**
    * **Đối tượng:** Công ty, tổ chức lớn.
    * **Cách dùng:** Mỗi người dùng có một tài khoản riêng (User/Pass) để đăng nhập Wi-Fi.
    * **Cơ chế:** Sử dụng chuẩn **802.1X/EAP** để xác thực qua một máy chủ trung tâm (RADIUS/AAA Server).

---

### 5. Chi tiết kỹ thuật của WPA Doanh nghiệp (Hình `image_015193.png` và `015493.png`)

Trong chế độ Doanh nghiệp, quy trình bảo mật chặt chẽ hơn nhiều:

* **Xác thực (Authentication):**
    * Dùng **802.1X/EAP**: Đảm bảo xác thực 2 chiều (Mutual Authentication). Bạn không chỉ chứng minh mình là nhân viên, mà mạng cũng phải chứng minh nó là mạng công ty thật (tránh giả mạo).
    * Quản lý tập trung: Khi nhân viên nghỉ việc, chỉ cần khóa tài khoản trên server là họ không vào được Wi-Fi nữa (không cần đổi mật khẩu Wi-Fi cho cả công ty như chế độ Cá nhân).

* **Mã hóa (Encryption - TKIP/MIC):**
    * **TKIP (Temporal Key Integrity Protocol):** Sửa lỗi "chết người" của WEP bằng cách thay đổi khóa mã hóa cho *mỗi gói tin* (Per-packet key mixing).
    * **MIC (Message Integrity Code):** "Chữ ký" điện tử gắn vào mỗi gói tin để đảm bảo không ai sửa đổi dữ liệu trên đường truyền (chống tấn công bit-flip).

---

### 6. Sơ đồ tạo khóa trong WPA (Hình `image_01518f.png`)

Hình này minh họa thuật toán trộn khóa (Key Mixing) phức tạp của TKIP để tạo ra khóa mã hóa cho từng gói tin:

1.  **Phase 1:** Trộn Khóa phiên (Temporal Key) với Địa chỉ MAC (Transmitter Address) $\rightarrow$ Tạo ra khóa trung gian (TTAK).
2.  **Phase 2:** Trộn TTAK với Số thứ tự gói tin (Sequence Counter - TSC) $\rightarrow$ Tạo ra khóa mã hóa cuối cùng (WEP seed) cho gói tin đó.
3.  **Kết quả:** Mỗi gói tin có một khóa mã hóa khác nhau hoàn toàn. Dù hacker bắt được hàng triệu gói tin cũng không thể suy ngược ra khóa gốc.

**Tóm lại:** Các slide này trình bày một bức tranh toàn cảnh về bảo mật Wi-Fi hiện đại, chuyển dịch từ mô hình "một chìa khóa cho tất cả" (WEP/WPA-PSK) sang mô hình "xác thực định danh từng người" (WPA-Enterprise/802.1X) với sự hỗ trợ của các giao thức EAP mạnh mẽ.
Chào bạn, dựa trên loạt slide cuối cùng bạn cung cấp, chúng ta sẽ đi vào chi tiết về các chuẩn bảo mật Wi-Fi hiện đại hơn: **WPA, WPA2 và WPA3**. Đây là những chuẩn được tạo ra để thay thế WEP yếu kém.

Dưới đây là giải thích chi tiết theo từng công nghệ:

---

### 1. WPA (Wi-Fi Protected Access) - Giải pháp tình thế

WPA ra đời như một "bản vá" tạm thời cho WEP trong khi chờ phần cứng mới cho WPA2.

* **Chế độ WPA Cá nhân (WPA-Personal/PSK) (Hình `00f373.png`):**
    * Dành cho gia đình/văn phòng nhỏ.
    * Dùng **PSK (Pre-Shared Key):** Một mật khẩu chung (Passphrase) cho tất cả thiết bị.
    * **Bắt tay 4 bước (4-way handshake):**         * Hai bước đầu: Để hai bên xác thực lẫn nhau và tạo ra khóa phiên (mà không cần gửi mật khẩu gốc qua mạng).
        * Hai bước sau: Để cài đặt và kích hoạt khóa mã hóa.

* **Chế độ WPA Doanh nghiệp (WPA-Enterprise) (Hình `00f378.png` và `00f37c.png`):**
    * Dùng hạ tầng 802.1X/Radius để xác thực từng người dùng.
    * **Cơ chế mã hóa TKIP/MIC:**
        * **IV dài hơn:** Tăng từ 24 bit (WEP) lên **48 bit**, giúp giải quyết triệt để vấn đề lặp lại vector khởi tạo.
        * **MIC (Message Integrity Code):** Thay thế CRC32 yếu kém. Nó tính toán một mã xác thực dựa trên địa chỉ nguồn, đích và dữ liệu để đảm bảo gói tin không bị giả mạo (Hình `00f37c.png`).

---

### 2. WPA2 (IEEE 802.11i) - Chuẩn mực an ninh (Hình `00f35a.png`, `00f356.png`)

WPA2 là chuẩn chính thức (full standard) thay thế hoàn toàn WEP và WPA.

* **RSN (Robust Security Network):** Mạng an ninh mạnh mẽ.
* **Mã hóa AES-CCMP:**
    * Sự khác biệt lớn nhất là dùng thuật toán **AES (Advanced Encryption Standard)** thay vì RC4. AES cực kỳ mạnh và an toàn.
    * **CCMP:** Giao thức sử dụng AES ở chế độ Counter (để mã hóa) và CBC-MAC (để kiểm tra toàn vẹn).
    * Yêu cầu chip xử lý mạnh hơn (phần cứng chuyên dụng) để chạy AES.

---

### 3. WPA3 - Thế hệ mới nhất (Hình `00f33a.png`)

Được giới thiệu năm 2018 để khắc phục điểm yếu của WPA2 (như tấn công KRACK hay đoán mật khẩu).

* **Thay thế PSK bằng SAE:**
    * **SAE (Simultaneous Authentication of Equals):** Giao thức này giúp ngăn chặn việc hacker bắt gói tin bắt tay về rồi dùng máy mạnh để đoán mật khẩu (Offline Dictionary Attack). Dù mật khẩu bạn đặt đơn giản, SAE vẫn giúp nó an toàn hơn.
* **Mã hóa mạnh hơn:** Sử dụng **GCMP-256** (mã hóa 256-bit) cho môi trường doanh nghiệp yêu cầu bảo mật cực cao (như chính phủ, tài chính).

---

### 4. So sánh tổng quan các chuẩn (Hình `00f335.png`)

Bảng so sánh này rất quan trọng để tổng hợp kiến thức:

| Đặc điểm | WEP (Đã chết) | WPA (Tạm thời) | WPA2 (Phổ biến) | WPA3 (Mới nhất) |
| :--- | :--- | :--- | :--- | :--- |
| **Mã hóa** | RC4 (Yếu) | TKIP/RC4 | **AES-CCMP** (Mạnh) | **AES-GCMP** (Rất mạnh) |
| **Toàn vẹn** | CRC-32 (Yếu) | MIC (Michael) | CBC-MAC | BIP-GMAC |
| **Quản lý khóa** | Không có | 4-way handshake | 4-way handshake | ECDH (Elliptic Curve) |
| **Điểm yếu** | Dễ bị giải mã trong vài phút | Tấn công từ điển | Tấn công KRACK | Chưa phát hiện lớn |

---

### 5. Kết luận và Khuyến cáo (Hình `00f31a.png`)

An ninh mạng là một quá trình liên tục, không phải cài xong là xong.

* **Khuyến cáo:**
    * Luôn dùng thiết bị có chứng nhận Wi-Fi Alliance.
    * Nên thay đổi tên mạng (SSID) mặc định, không quảng bá SSID (dù biện pháp này chỉ chặn được người dùng phổ thông).
    * Dùng lọc MAC (dù có thể bị spoofing, nhưng vẫn là một lớp rào cản).
    * **Quan trọng nhất:** Luôn cập nhật Firmware cho Router và chuyển sang dùng **WPA2 hoặc WPA3** ngay lập tức. Tuyệt đối không dùng WEP.

Tóm lại, lộ trình phát triển từ WEP -> WPA -> WPA2 -> WPA3 là quá trình vá các lỗ hổng về thuật toán mã hóa (RC4 -> AES) và quy trình xác thực (PSK -> SAE) để đối phó với các kỹ thuật tấn công ngày càng tinh vi.
