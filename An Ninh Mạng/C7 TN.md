Để "master" (nắm vững toàn diện) chương này, dựa trên độ dài và độ phức tạp của 45 slide (bao gồm lịch sử, thông số kỹ thuật, các loại giao thức và mô hình), bạn cần khoảng **25 đến 30 câu hỏi** chất lượng cao. Số lượng này đủ để bao phủ mọi ngóc ngách từ kiến thức nền (CIA, rủi ro) đến chi tiết kỹ thuật sâu (bit, thuật toán, quy trình bắt tay).

Dưới đây là bộ 25 câu hỏi được thiết kế riêng theo các dạng bạn yêu cầu để giúp bạn đạt mục tiêu đó.

---

### PHẦN 1: DẠNG CÂU HỎI "HIỂU & ÁP DỤNG"

**1. Một doanh nghiệp muốn triển khai mạng Wi-Fi bảo mật cao, yêu cầu mỗi nhân viên sử dụng tài khoản domain riêng để kết nối và có khả năng thu hồi quyền truy cập tức thì khi nhân viên nghỉ việc. Giải pháp nào là phù hợp nhất?**
A. WPA2-Personal (PSK) với mật khẩu phức tạp
B. WEP với khóa 128-bit
C. WPA2-Enterprise (802.1X/EAP)
D. Ẩn SSID và lọc địa chỉ MAC
đáp án: C
Giải thích: C đúng vì WPA2-Enterprise sử dụng 802.1X/EAP cho phép xác thực dựa trên định danh người dùng (username/password) thông qua RADIUS server, giúp quản lý tập trung và thu hồi quyền dễ dàng; A sai vì WPA2-Personal dùng chung một mật khẩu (PSK), nếu nhân viên nghỉ việc phải đổi mật khẩu cho toàn bộ công ty; B sai vì WEP đã lỗi thời và không an toàn; D sai vì ẩn SSID và lọc MAC không phải là giải pháp bảo mật mạnh và không giải quyết bài toán quản lý người dùng.

**2. Tại sao cơ chế xác thực "Shared Key" của WEP lại bị coi là kém an toàn hơn cả "Open System"?**
A. Vì nó không yêu cầu mật khẩu
B. Vì nó làm lộ dòng khóa (keystream) thông qua quy trình Challenge-Response
C. Vì nó sử dụng thuật toán AES quá nặng cho phần cứng cũ
D. Vì nó không kiểm tra địa chỉ MAC
đáp án: B
Giải thích: B đúng vì trong quy trình xác thực Shared Key, AP gửi chuỗi thách đố (bản rõ) và Client gửi lại chuỗi đã mã hóa (bản mã), hacker bắt được cả hai sẽ dùng phép XOR để tính ra dòng khóa (keystream); A sai vì nó có yêu cầu key; C sai vì WEP dùng RC4 chứ không phải AES; D sai vì xác thực và lọc MAC là hai tính năng khác nhau.

**3. Trong giao thức WPA, tính năng MIC (Message Integrity Code) được đưa vào nhằm mục đích chính là gì?**
A. Thay thế cho CRC-32 để ngăn chặn các cuộc tấn công sửa đổi gói tin (bit-flipping)
B. Thay thế cho RC4 để mã hóa dữ liệu nhanh hơn
C. Tăng kích thước vector khởi tạo (IV) lên 48-bit
D. Xác thực người dùng thông qua máy chủ RADIUS
đáp án: A
Giải thích: A đúng vì WEP dùng CRC-32 (tuyến tính) nên dễ bị tấn công bit-flipping, WPA giới thiệu MIC (thuật toán Michael) là một hàm băm có khóa để đảm bảo tính toàn vẹn tốt hơn; B sai vì WPA vẫn dùng RC4 cho mã hóa (chỉ thêm TKIP); C sai vì việc tăng IV là nhiệm vụ của TKIP chứ không phải định nghĩa của MIC; D sai vì đó là vai trò của 802.1X.

**4. Kẻ tấn công sử dụng kỹ thuật "Rogue Access Point" (AP giả mạo) chủ yếu khai thác điểm yếu nào trong hành vi của người dùng hoặc thiết bị?**
A. Thiết bị người dùng tự động kết nối lại với các mạng đã lưu có cùng SSID
B. Người dùng đặt mật khẩu quá ngắn
C. Giao thức WEP có IV ngắn
D. Mã hóa AES có lỗ hổng toán học
đáp án: A
Giải thích: A đúng vì hacker thường dựng AP giả có cùng SSID với mạng thật, thiết bị người dùng (hoặc chính người dùng) sẽ lầm tưởng và kết nối vào, từ đó hacker thực hiện Man-in-the-Middle; B, C, D là các vấn đề kỹ thuật khác không mô tả trực tiếp bản chất của tấn công Rogue AP trong ngữ cảnh lừa đảo kết nối.

**5. Giao thức WPA3-Personal sử dụng công nghệ nào để thay thế cho PSK (Pre-Shared Key), giúp ngăn chặn tấn công từ điển offline?**
A. TKIP (Temporal Key Integrity Protocol)
B. SAE (Simultaneous Authentication of Equals)
C. CCMP (Counter Mode with CBC-MAC Protocol)
D. EAP-TLS (Extensible Authentication Protocol - Transport Layer Security)
đáp án: B
Giải thích: B đúng vì SAE sử dụng giao thức Dragonfly Key Exchange, đảm bảo an toàn ngay cả khi mật khẩu yếu và ngăn chặn việc hacker bắt gói tin mang về brute-force; A là của WPA; C là mã hóa của WPA2; D là giao thức xác thực cho doanh nghiệp.

---

### PHẦN 2: DẠNG CÂU HỎI "TỔNG HỢP & LIÊN KẾT"

**6. Chuỗi tiến hóa nào sau đây mô tả chính xác sự thay đổi của thuật toán mã hóa dữ liệu (Confidentiality) qua các chuẩn WEP -> WPA -> WPA2?**
A. CRC-32 -> MIC -> CCMP
B. RC4 -> RC4 + TKIP -> AES-CCMP
C. RC4 -> AES -> TKIP
D. Shared Key -> PSK -> 802.1X
đáp án: B
Giải thích: B đúng vì WEP dùng RC4 thuần túy, WPA vẫn dùng RC4 nhưng bọc thêm TKIP (để xoay vòng khóa), và WPA2 chuyển hẳn sang dùng AES với giao thức CCMP; A sai vì đây là chuỗi tiến hóa của tính toàn vẹn (Integrity); C sai thứ tự; D sai vì đây là chuỗi tiến hóa của phương thức xác thực.

**7. Liên kết các thành phần của chuẩn IEEE 802.11i (WPA2). Bộ đôi nào sau đây đi cùng nhau để đảm bảo Bảo mật và Toàn vẹn trong WPA2?**
A. TKIP và MIC
B. RC4 và CRC-32
C. AES-CTR và CBC-MAC (trong CCMP)
D. AES-GCMP và BIP-GMAC
đáp án: C
Giải thích: C đúng vì WPA2 sử dụng giao thức CCMP, trong đó chế độ Counter Mode (CTR) của AES dùng để mã hóa và CBC-MAC dùng để kiểm tra toàn vẹn; A là cặp của WPA; B là cặp của WEP; D là cặp của WPA3.

**8. Điểm chung lớn nhất giữa WPA-Enterprise và WPA2-Enterprise là gì?**
A. Đều sử dụng mã hóa RC4
B. Đều bắt buộc sử dụng hạ tầng khóa công khai (PKI) cho mọi client
C. Đều sử dụng chuẩn 802.1X/EAP để xác thực và quản lý khóa động
D. Đều sử dụng SAE để chống tấn công từ điển
đáp án: C
Giải thích: C đúng vì chế độ "Enterprise" trong cả WPA và WPA2 đều định nghĩa việc sử dụng 802.1X với RADIUS server để xác thực từng người dùng; A sai vì WPA2 dùng AES; B sai vì không phải loại EAP nào cũng cần PKI cho client (ví dụ PEAP); D sai vì SAE dành cho WPA3-Personal.

**9. Mối quan hệ giữa IV (Vector khởi tạo) và độ an toàn của WEP và WPA được thể hiện như thế nào?**
A. WEP dùng IV 48-bit nên an toàn, WPA dùng IV 24-bit nên yếu
B. WEP dùng IV 24-bit dẫn đến đụng độ (collision), WPA tăng lên 48-bit để khắc phục
C. Cả hai đều không sử dụng IV mà dùng Nonce
D. WEP mã hóa IV, còn WPA gửi IV dưới dạng bản rõ
đáp án: B
Giải thích: B đúng vì IV 24-bit của WEP quá ngắn, gây lặp lại sau một thời gian ngắn truyền tải (khoảng vài giờ hoặc ít hơn nếu mạng bận), WPA tăng lên 48-bit làm thời gian lặp lại lên đến hàng ngàn năm; A sai ngược thực tế; C sai vì cả hai đều dùng IV; D sai vì cả hai đều gửi IV (hoặc một phần cấu thành) dạng bản rõ để bên nhận biết cách giải mã.

**10. Khi so sánh EAP-TLS và PEAP, đặc điểm phân biệt cốt lõi về yêu cầu chứng chỉ số (Certificate) là gì?**
A. EAP-TLS không cần chứng chỉ, PEAP cần chứng chỉ 2 đầu
B. EAP-TLS cần chứng chỉ ở cả Client và Server, PEAP chỉ cần chứng chỉ ở Server
C. Cả hai đều không cần chứng chỉ số
D. EAP-TLS chỉ cần chứng chỉ ở Server, PEAP cần chứng chỉ ở cả Client và Server
đáp án: B
Giải thích: B đúng vì EAP-TLS cung cấp bảo mật cao nhất bằng cách xác thực cả hai chiều bằng chứng chỉ (rất an toàn nhưng khó triển khai), trong khi PEAP tạo đường hầm bảo mật bằng chứng chỉ của Server rồi gửi user/pass qua đó (dễ triển khai hơn); các đáp án khác mô tả sai cấu trúc của hai giao thức này.

---

### PHẦN 3: DẠNG CÂU HỎI "TÌM ĐIỂM SAI/NGOẠI LỆ"

**11. Chọn phát biểu SAI về SSID (Service Set Identifier):**
A. SSID là tên định danh của mạng không dây
B. SSID được gửi dưới dạng bản rõ trong các gói tin Beacon
C. Ẩn SSID (Disable SSID Broadcast) là biện pháp bảo mật tuyệt đối ngăn chặn hacker tìm thấy mạng
D. Khi thay đổi SSID, cần thông báo cho người dùng để họ cấu hình lại kết nối
đáp án: C
Giải thích: C là phát biểu sai vì việc ẩn SSID chỉ ngăn thiết bị thông thường nhìn thấy tên mạng trong danh sách, hacker vẫn có thể dùng công cụ bắt gói tin (sniffer) để tìm ra SSID khi có một thiết bị hợp lệ kết nối vào mạng; A, B, D là các phát biểu đúng về đặc điểm của SSID.

**12. Đâu KHÔNG phải là một trong các dịch vụ bảo mật mà chuẩn WEP cung cấp (dù thực hiện yếu kém)?**
A. Xác thực (Authentication)
B. Bí mật (Confidentiality)
C. Toàn vẹn (Integrity)
D. Chống chối bỏ (Non-reputation)
đáp án: D
Giải thích: D đúng là ngoại lệ vì WEP chỉ thiết kế để cung cấp 3 dịch vụ cơ bản: Xác thực (Shared/Open), Bí mật (RC4), Toàn vẹn (CRC-32), nó không có cơ chế chữ ký số hay bằng chứng để đảm bảo tính chống chối bỏ; A, B, C là các mục tiêu thiết kế của WEP.

**13. Trong các tùy chọn sau, tùy chọn nào KHÔNG giúp giảm thiểu rủi ro bị tấn công trong mạng WLAN?**
A. Sử dụng xác thực lẫn nhau (Mutual Authentication)
B. Bật tính năng WPS (Wi-Fi Protected Setup) để kết nối nhanh
C. Sử dụng mã hóa WPA2/WPA3
D. Phát hiện thâm nhập (IDS)
đáp án: B
Giải thích: B là ngoại lệ vì WPS (thường dùng mã PIN) có nhiều lỗ hổng bảo mật nghiêm trọng cho phép hacker tấn công brute-force mã PIN để lấy mật khẩu wifi rất nhanh, do đó bật WPS làm tăng rủi ro chứ không giảm; A, C, D đều là các biện pháp bảo mật được khuyến cáo.

**14. Phát biểu nào sau đây về bộ lọc địa chỉ MAC là SAI?**
A. Giúp ngăn chặn người dùng thông thường kết nối trái phép
B. Địa chỉ MAC được truyền đi dưới dạng mã hóa trong giao thức 802.11
C. Địa chỉ MAC có thể dễ dàng bị giả mạo (Spoofing) bởi hacker
D. Khó quản lý và duy trì trong các mạng lớn
đáp án: B
Giải thích: B là phát biểu sai vì trong header của khung truyền 802.11, địa chỉ MAC nguồn và đích luôn ở dạng bản rõ (cleartext) để các thiết bị mạng có thể định tuyến gói tin, do đó hacker dễ dàng bắt được và giả mạo; A, C, D là các đặc điểm đúng của lọc MAC.

**15. Điều nào sau đây KHÔNG đúng khi nói về chuẩn 802.11i?**
A. Nó định nghĩa khái niệm RSN (Robust Security Network)
B. Nó yêu cầu sử dụng mã hóa AES
C. Nó là nền tảng kỹ thuật cho chứng nhận WPA2
D. Nó chỉ hỗ trợ xác thực PSK, không hỗ trợ 802.1X
đáp án: D
Giải thích: D là phát biểu sai vì 802.11i hỗ trợ đầy đủ cả hai chế độ xác thực: PSK (cho gia đình) và 802.1X/EAP (cho doanh nghiệp); A, B, C là các phát biểu đúng về chuẩn 802.11i.

---

### PHẦN 4: DẠNG CÂU HỎI "BẪY TỪ NGỮ"

**16. WEP là viết tắt chính xác của cụm từ nào?**
A. Wireless Encryption Protocol
B. Wired Equivalent Privacy
C. Wireless Equivalent Privacy
D. Wired Encryption Protocol
đáp án: B
Giải thích: B đúng, tên gọi này mang ý nghĩa mỉa mai là "Sự riêng tư tương đương mạng dây"; A, C, D là các bẫy từ ngữ thường gặp, đặc biệt người học hay nhầm chữ "Wired" thành "Wireless" hoặc "Privacy" thành "Protocol".

**17. Sự khác biệt giữa "Authenticator" và "Authentication Server" trong mô hình 802.1X là gì?**
A. Authenticator là máy chủ chứa cơ sở dữ liệu user, Authentication Server là Access Point
B. Authenticator là Access Point, Authentication Server là máy chủ RADIUS
C. Hai thuật ngữ này là một, đều chỉ Access Point
D. Authenticator là phần mềm trên máy tính người dùng (Client)
đáp án: B
Giải thích: B đúng, trong mô hình 802.1X: Supplicant là Client, Authenticator là thiết bị trung gian (Switch/AP) đóng vai trò người gác cổng, và Authentication Server (RADIUS) mới là nơi thực sự xử lý việc kiểm tra tài khoản; A bị ngược; C sai hoàn toàn; D sai vì Client gọi là Supplicant.

**18. Thuật ngữ "Ad hoc network" trong ngữ cảnh các mối đe dọa mạng không dây ám chỉ điều gì?**
A. Một mạng lưới các Access Point giả mạo
B. Mạng kết nối ngang hàng (P2P) giữa các thiết bị mà không cần Access Point, thiếu kiểm soát trung tâm
C. Một phần mềm chặn quảng cáo trên trình duyệt
D. Một kỹ thuật tấn công từ chối dịch vụ
đáp án: B
Giải thích: B đúng, Ad hoc là chế độ kết nối trực tiếp máy-với-máy, nó nguy hiểm vì thiếu sự giám sát của quản trị viên và dễ lây lan mã độc; A sai vì đó là Rogue AP; C và D không liên quan đến thuật ngữ này trong bài.

**19. Trong WPA, TKIP là viết tắt của?**
A. Temporal Key Integrity Protocol
B. Temporary Key Internet Protocol
C. Trusted Key Integrity Policy
D. Transport Key Identity Protocol
đáp án: A
Giải thích: A đúng, TKIP nghĩa là Giao thức toàn vẹn khóa tạm thời; các đáp án khác dùng các từ ngữ nghe có vẻ kỹ thuật như "Internet", "Trusted", "Transport" để gây nhiễu nhưng không chính xác.

**20. Phát biểu nào phân biệt đúng giữa "Active Scanning" và "Passive Scanning" (liên quan đến War Driving hoặc phát hiện mạng)?**
A. Passive là gửi Probe Request, Active là chỉ nghe Beacon
B. Active là gửi Probe Request, Passive là chỉ lắng nghe Beacon
C. Active là kết nối vào mạng và hack, Passive là đứng ngoài nhìn
D. Active dùng cho WPA, Passive dùng cho WEP
đáp án: B
Giải thích: B đúng, Active Scanning (Quét chủ động) là thiết bị chủ động gửi gói tin hỏi "có ai ở đó không" (Probe Request), còn Passive (Thụ động) là chỉ im lặng lắng nghe các gói tin quảng bá (Beacon frames) từ AP phát ra; A bị ngược; C mô tả sai bản chất kỹ thuật quét; D không liên quan.

---

### PHẦN BỔ SUNG (ĐỂ ĐỦ 25 CÂU MASTER)

**21. Tấn công FMS (Fluhrer, Mantin, and Shamir) nhằm vào điểm yếu nào?**
A. Thuật toán AES của WPA2
B. Quá trình bắt tay 4 bước của WPA
C. Thuật toán lập lịch khóa (Key Scheduling Algorithm) của RC4 trong WEP
D. Giao thức EAP-TLS
đáp án: C
Giải thích: C đúng, các nhà nghiên cứu FMS đã công bố phương pháp tấn công vào cách RC4 tạo khóa khi sử dụng các IV yếu, dẫn đến việc phá khóa WEP dễ dàng; A, B, D là các mục tiêu sai.

**22. Độ dài của khóa mã hóa trong chuẩn WPA2 (AES-CCMP) là bao nhiêu?**
A. 64-bit
B. 128-bit
C. 40-bit
D. 256-bit (cho Personal)
đáp án: B
Giải thích: B đúng, WPA2 sử dụng AES với độ dài khóa và độ dài khối đều là 128-bit; A là WEP cũ; C là WEP đời đầu; D là tùy chọn của WPA3-Enterprise (GCMP-256).

**23. "WPA là một tập con của 802.11i". Câu này nghĩa là gì?**
A. WPA bao gồm tất cả tính năng của 802.11i cộng thêm TKIP
B. WPA chỉ thực hiện một phần các tính năng của 802.11i (chủ yếu là TKIP) để tương thích phần cứng cũ
C. WPA ra đời sau 802.11i
D. WPA mạnh hơn 802.11i
đáp án: B
Giải thích: B đúng, WPA được tung ra trước khi 802.11i hoàn thiện để vá lỗ hổng WEP gấp, nó lấy một phần công nghệ của bản nháp 802.11i nhưng dùng RC4/TKIP thay vì AES để chạy được trên chip cũ; A, C, D hiểu sai lịch sử và kỹ thuật.

**24. Tại sao 802.11a và 802.11ac ít bị nhiễu hơn so với 802.11b/g/n?**
A. Vì chúng dùng mã hóa mạnh hơn
B. Vì chúng hoạt động ở tần số 5 GHz, nơi có ít thiết bị dân dụng (như lò vi sóng, bluetooth) hoạt động hơn so với 2.4 GHz
C. Vì chúng có ăng-ten to hơn
D. Vì chúng không xuyên tường được
đáp án: B
Giải thích: B đúng, băng tần 2.4 GHz rất chật chội vì chứa cả Wifi, Bluetooth, Lò vi sóng, Điện thoại mẹ bồng con... trong khi 5 GHz rộng rãi và ít thiết bị gây nhiễu hơn; A sai vì nhiễu là vấn đề vật lý không liên quan mã hóa; C sai; D là đặc tính hệ quả chứ không phải nguyên nhân gây ít nhiễu.

**25. Vai trò của RADIUS server trong bảo mật mạng không dây doanh nghiệp là gì?**
A. Mã hóa dữ liệu người dùng
B. Cấp phát địa chỉ IP (DHCP)
C. Lưu trữ cơ sở dữ liệu tài khoản và xác thực người dùng (AAA)
D. Chặn virus và tường lửa
đáp án: C
Giải thích: C đúng, RADIUS đóng vai trò AAA (Authentication, Authorization, Accounting), là nơi tập trung để kiểm tra xem user/pass có đúng không và cấp phép truy cập; A là việc của AP/Client; B là của DHCP server; D là của Firewall.
