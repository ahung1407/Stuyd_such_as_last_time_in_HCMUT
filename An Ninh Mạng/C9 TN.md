Để master (nắm vững hoàn toàn) chương IPsec với mức độ hiểu sâu sắc như một chuyên gia bảo mật, theo kinh nghiệm giảng dạy, bạn cần khoảng **30 đến 40 câu hỏi** chất lượng cao, bao phủ mọi khía cạnh từ kiến trúc, gói tin, quy trình xử lý đến các giao thức phụ trợ như IKE.

Dưới đây là bộ 20 câu hỏi được tuyển chọn kỹ lưỡng theo các dạng bạn yêu cầu để "quét" sạch các điểm mù kiến thức trong chương này.

---

### Dạng 1: Hiểu & Áp dụng (Cơ bản đến Nâng cao)

**1. Trong mô hình mạng doanh nghiệp, nếu Giám đốc muốn kết nối từ quán cà phê (Wifi công cộng) vào mạng nội bộ công ty để truy cập server kế toán một cách an toàn, chế độ (Mode) hoạt động nào của IPsec là phù hợp nhất giữa Laptop của Giám đốc và Router biên của công ty?**
A. Transport Mode (Chế độ vận chuyển)
B. Tunnel Mode (Chế độ đường hầm)
C. Bypass Mode (Chế độ bỏ qua)
D. IKE Mode (Chế độ trao đổi khóa)
đáp án: B
Giải thích: B đúng vì Tunnel Mode được sử dụng cho kịch bản Remote Access (truy cập từ xa) hoặc Site-to-Site VPN, nơi IP gốc của máy tính cần được đóng gói và bảo vệ để đi qua môi trường Internet không an toàn; A sai vì Transport Mode thường dùng cho kết nối End-to-End trong cùng mạng LAN hoặc khi đã có kênh truyền bảo mật sẵn; C sai vì Bypass không cung cấp bảo mật; D sai vì IKE là giao thức trao đổi khóa, không phải chế độ truyền dữ liệu.

**2. Khi sử dụng giao thức ESP trong chế độ Transport (Vận chuyển), thành phần nào của gói tin IP ban đầu sẽ được MÃ HÓA (Encrypted)?**
A. Toàn bộ gói tin IP (IP Header + Payload)
B. Chỉ IP Header
C. Chỉ Payload (TCP/UDP Segment + Data)
D. Payload và Authentication Trailer
đáp án: C
Giải thích: C đúng vì trong Transport Mode, ESP được chèn vào sau IP Header gốc, nó chỉ mã hóa phần dữ liệu phía sau nó (Payload) để che giấu nội dung; A sai vì đó là đặc điểm của Tunnel Mode; B sai vì IP Header gốc phải để nguyên để định tuyến; D sai vì Authentication Trailer chứa giá trị ICV, bản thân ICV không được mã hóa mà chỉ được dùng để xác thực.

**3. Tại sao IPsec lại được coi là giải pháp bảo mật có tính "trong suốt" (transparent) cao nhất so với SSL/TLS hay SSH?**
A. Vì nó mã hóa dữ liệu nhanh hơn
B. Vì người dùng có thể nhìn thấy dữ liệu đang được truyền
C. Vì nó hoạt động ở tầng Network, ứng dụng và người dùng không cần thay đổi hay cấu hình gì thêm
D. Vì nó không sử dụng các thuật toán mã hóa phức tạp
đáp án: C
Giải thích: C đúng vì IPsec xử lý gói tin ở mức hệ điều hành/hạ tầng mạng (Layer 3), mọi traffic từ tầng ứng dụng (Layer 7) đi xuống đều tự động được bảo vệ mà ứng dụng không hề hay biết; A sai vì tốc độ phụ thuộc thuật toán và phần cứng; B sai vì trong suốt ở đây nghĩa là "không nhận thấy sự hiện diện" chứ không phải "nhìn xuyên thấu"; D sai vì IPsec dùng các thuật toán rất phức tạp (AES, 3DES...).

**4. Một gói tin IPsec ESP đến Router. Router cần dựa vào thông tin nào để tìm ra khóa giải mã trong cơ sở dữ liệu SAD?**
A. Địa chỉ IP nguồn (Source IP) và Port nguồn
B. Chỉ số tham số bảo mật (SPI), Địa chỉ IP đích và Giao thức bảo mật (ESP/AH)
C. Sequence Number và địa chỉ MAC
D. Checksum của gói tin và IKE Cookie
đáp án: B
Giải thích: B đúng vì RFC quy định bộ ba <SPI, Destination IP, Security Protocol> là định danh duy nhất để xác định một SA (Security Association) cụ thể; A sai vì IPsec quản lý theo kết nối logic SA chứ không chỉ dựa trên 5-tuple truyền thống; C sai vì Sequence Number dùng chống phát lại; D sai vì Cookie dùng trong IKE phase 1 để chống DoS.

**5. Cơ chế "Cửa sổ trượt" (Sliding Window) trong IPsec có vai trò gì?**
A. Điều khiển lưu lượng (Flow Control) giống TCP
B. Chống tấn công từ chối dịch vụ (DoS)
C. Chống tấn công phát lại (Anti-replay)
D. Đồng bộ hóa khóa phiên (Session Key Sync)
đáp án: C
Giải thích: C đúng vì bên nhận duy trì một cửa sổ (ví dụ 64 gói), nếu nhận được gói tin có số thứ tự nằm ngoài cửa sổ bên trái (quá cũ) hoặc đã đánh dấu nhận rồi thì sẽ vứt bỏ, ngăn hacker gửi lại gói tin cũ; A sai vì IPsec không lo việc điều khiển tắc nghẽn; B sai vì chống DoS ở mức độ IKE Cookie khác với Sliding Window; D sai vì việc quản lý khóa do IKE đảm nhiệm.

---

### Dạng 2: Tổng hợp & Liên kết (Logic hệ thống)

**6. Quy trình xử lý một gói tin ĐI RA (Outbound) khỏi thiết bị IPsec diễn ra theo thứ tự nào là chính xác nhất?**
A. Tìm kiếm trong SAD -> Mã hóa -> Tìm kiếm trong SPD -> Gửi đi
B. Tìm kiếm trong SPD -> Nếu hành động là Protect -> Tìm kiếm SA trong SAD -> Xử lý (Mã hóa) -> Gửi đi
C. Mã hóa bằng IKE -> Tạo SA -> Gửi đi
D. Tìm kiếm trong SAD -> Nếu không thấy thì IKE -> Tìm kiếm SPD -> Gửi đi
đáp án: B
Giải thích: B đúng vì thiết bị phải kiểm tra Chính sách (SPD - Luật) trước xem gói tin này có cần bảo vệ không, nếu cần (Protect) thì mới tìm Khóa (SAD) để thực hiện; A sai vì chưa biết luật (SPD) thì không thể biết có được phép dùng khóa (SAD) hay không; C sai vì IKE dùng để tạo khóa chứ không dùng để mã hóa dữ liệu người dùng trực tiếp; D sai vì sai thứ tự logic.

**7. Mối liên hệ giữa IKE SA (Phase 1) và IPsec SA (Phase 2) là gì?**
A. Chúng là hai kết nối độc lập không liên quan nhau
B. IPsec SA được tạo trước để bảo vệ việc trao đổi IKE SA
C. IKE SA là kênh bảo mật nền tảng dùng để đàm phán và tạo ra các IPsec SA dùng cho truyền dữ liệu
D. IKE SA dùng cho giao thức AH, còn IPsec SA dùng cho giao thức ESP
đáp án: C
Giải thích: C đúng vì IKE Phase 1 thiết lập một kênh an toàn (xác thực thiết bị, tạo khóa chung), sau đó Phase 2 dùng kênh này để tạo nhanh các cặp SA (IPsec SA) dùng để mã hóa dữ liệu thực tế (Quick Mode); A sai vì chúng có quan hệ cha-con; B sai vì ngược quy trình; D sai vì cả AH và ESP đều là giao thức của IPsec SA.

**8. Trường "Padding" (phần đệm) trong gói tin ESP phục vụ những mục đích nào sau đây?**
A. Chỉ để đảm bảo độ dài gói tin chia hết cho 64 bit
B. Đảm bảo độ dài dữ liệu phù hợp với khối (block) của thuật toán mã hóa, căn chỉnh bộ nhớ và che giấu độ dài thực của dữ liệu
C. Chứa thông tin xác thực (Integrity Check Value)
D. Chứa địa chỉ IP gốc trong chế độ Tunnel
đáp án: B
Giải thích: B đúng vì đây là 3 mục đích chính được nêu trong RFC (Encryption block alignment, 32-bit alignment, Traffic Flow Confidentiality); A sai vì nó không chỉ dừng lại ở việc chia hết; C sai vì ICV nằm ở Authentication Data riêng biệt; D sai vì IP gốc nằm ở Payload.

**9. Một kết nối VPN Site-to-Site sử dụng IPsec yêu cầu những thành phần tối thiểu nào trong cơ sở dữ liệu SAD để hoạt động hai chiều (A gửi B, B gửi A)?**
A. 1 SA duy nhất dùng chung cho cả hai chiều
B. 1 cặp SA (1 SA chiều đi tại A, 1 SA chiều về tại A) và tương tự tại B
C. Chỉ cần SPD, không cần SAD
D. 1 SA cho AH và 1 SA cho ESP
đáp án: B
Giải thích: B đúng vì khái niệm SA (Security Association) trong IPsec là đơn hướng (simplex), do đó để giao tiếp hai chiều (duplex) cần một cặp SA (Inbound và Outbound) tại mỗi đầu thiết bị; A sai vì SA không dùng chung hai chiều; C sai vì không có SAD thì không có khóa để mã hóa; D sai vì tùy thuộc vào cấu hình dùng AH hay ESP, nhưng cốt lõi là tính hướng của SA.

---

### Dạng 3: Tìm điểm sai/ngoại lệ (Tư duy phản biện)

**10. Điều nào sau đây KHÔNG PHẢI là chức năng của giao thức AH (Authentication Header)?**
A. Xác thực nguồn gốc dữ liệu (Data Origin Authentication)
B. Toàn vẹn dữ liệu (Data Integrity)
C. Bí mật dữ liệu (Data Confidentiality - Mã hóa)
D. Chống tấn công phát lại (Anti-replay)
đáp án: C
Giải thích: C đúng là điểm sai của AH, vì AH được thiết kế chỉ để xác thực và đảm bảo toàn vẹn (dùng hàm băm), nó truyền dữ liệu dưới dạng văn bản rõ (clear text); A, B, D đều là chức năng mặc định của AH.

**11. Trong chế độ Tunnel, tại sao giao thức AH (Authentication Header) lại gặp khó khăn hoặc không tương thích tốt với NAT (Network Address Translation)?**
A. Vì NAT thay đổi địa chỉ IP trong Header mới, làm sai lệch giá trị ICV (Integrity Check Value) mà AH đã tính toán bao trùm cả IP Header
B. Vì AH mã hóa địa chỉ IP nên NAT không đọc được
C. Vì NAT chặn cổng 500 của IKE
D. Vì AH không có số thứ tự (Sequence Number)
đáp án: A
Giải thích: A đúng vì AH thực hiện băm (hash) cả IP Header (bao gồm Source/Dest IP). Khi gói tin đi qua NAT, router NAT đổi IP nguồn, dẫn đến khi đích nhận được và tính lại hash sẽ thấy khác với hash ban đầu -> Gói tin bị coi là giả mạo và bị vứt bỏ; B sai vì AH không mã hóa; C sai vì NAT chặn cổng là vấn đề cấu hình, không phải lỗi giao thức; D sai vì AH có Sequence Number.

**12. Tìm điểm SAI khi nói về IKEv2 so với IKEv1:**
A. IKEv2 hỗ trợ xác thực EAP (Extensible Authentication Protocol)
B. IKEv2 phức tạp hơn IKEv1 vì có nhiều chế độ (Main Mode, Aggressive Mode)
C. IKEv2 có khả năng chống DoS tốt hơn nhờ cơ chế Cookie
D. IKEv2 hỗ trợ tốt hơn cho di động (MOBIKE)
đáp án: B
Giải thích: B là phát biểu sai, thực tế IKEv2 ĐƠN GIẢN HÓA quy trình bằng cách loại bỏ các chế độ rườm rà của IKEv1 (Main/Aggressive/Quick) và thay bằng quy trình chuẩn 4 bước (Initial Exchange); A, C, D đều là ưu điểm đúng của IKEv2.

**13. Trong cấu trúc gói tin ESP, phần nào sau đây KHÔNG được bảo vệ bởi tính năng "Bí mật" (Mã hóa)?**
A. TCP Header
B. Dữ liệu người dùng (User Data)
C. ESP Trailer (Padding, Next Header)
D. SPI và Sequence Number trong ESP Header
đáp án: D
Giải thích: D là ngoại lệ không được mã hóa, vì Router nhận cần đọc được SPI để biết gói tin này thuộc kết nối nào (tra bảng SAD) và đọc Sequence Number để chống phát lại TRƯỚC KHI có khóa để giải mã phần còn lại; A, B, C đều nằm trong vùng Encrypted Payload.

---

### Dạng 4: Bẫy từ ngữ (Cực dễ nhầm lẫn)

**14. Phát biểu nào sau đây là CHÍNH XÁC NHẤT về "Selector" (Bộ chọn) trong cơ sở dữ liệu SPD?**
A. Nó là chìa khóa để giải mã gói tin
B. Nó là các tiêu chí (như IP nguồn, IP đích, Port, Giao thức) dùng để lọc và ánh xạ traffic vào một chính sách bảo mật cụ thể
C. Nó là thuật toán chọn đường đi ngắn nhất cho gói tin IPsec
D. Nó là người quản trị mạng chọn giao thức AH hay ESP
đáp án: B
Giải thích: B đúng vì thuật ngữ "Selector" trong IPsec ám chỉ các trường trong IP Header dùng để phân loại traffic (Traffic Selector) trong SPD; A sai đó là Key; C sai đó là Routing Protocol; D sai vì đó là Configuration.

**15. Khi nói về "Transport Adjacency" (Giao thông lân cận) trong việc kết hợp các liên kết bảo mật (Combining SAs), điều này có nghĩa là:**
A. Hai Router nằm cạnh nhau về mặt vật lý
B. Áp dụng nhiều giao thức bảo mật (ví dụ: AH rồi đến ESP) lên cùng một gói tin IP mà không cần tạo đường hầm mới (Tunneling)
C. Sử dụng chế độ Tunnel lồng bên trong chế độ Transport
D. Kết nối hai mạng LAN lân cận bằng VPN
đáp án: B
Giải thích: B đúng vì thuật ngữ này (Adjacency) trong RFC ám chỉ việc xếp chồng các Header bảo mật lên nhau trên cùng một mức IP (ví dụ: IP | AH | ESP | Payload) chứ không đóng gói thêm lớp IP mới (Iterated Tunneling); A, C, D là các cách hiểu sai về ngữ nghĩa từ ngữ trong ngữ cảnh IPsec.

**16. Sự khác biệt tinh tế giữa "Packet Discard" trong SPD và "Packet Discard" do Anti-replay thất bại là gì?**
A. Không có sự khác biệt, đều là vứt gói tin
B. SPD Discard là do chính sách cấm (cố tình chặn), còn Anti-replay Discard là do nghi ngờ tấn công kỹ thuật (gói tin trùng lặp/giả mạo)
C. SPD Discard xảy ra sau khi đã giải mã, còn Anti-replay xảy ra trước khi giải mã
D. SPD Discard chỉ áp dụng cho gói tin UDP, còn Anti-replay cho TCP
đáp án: B
Giải thích: B đúng vì bản chất nguồn gốc hành động khác nhau: SPD là "Luật pháp" (Traffic này không được phép đi qua), còn Anti-replay là "Kỹ thuật" (Traffic này có dấu hiệu bất thường về số thứ tự); A sai; C sai vì Anti-replay thường kiểm tra trước khi xác thực toàn vẹn (tùy implementation) nhưng SPD có thể check cả đầu vào và đầu ra; D sai vì IPsec không phân biệt TCP/UDP ở mức cơ chế bảo vệ.

**17. Trong sơ đồ IKEv2, thông báo "IKE_SA_INIT" đóng vai trò gì?**
A. Xác thực danh tính hai bên (Authentication)
B. Trao đổi thông số Diffie-Hellman và Nonce để tạo khóa bí mật chung ban đầu
C. Xóa bỏ một SA đã hết hạn
D. Kiểm tra tình trạng sống của đối tác (Keep-alive)
đáp án: B
Giải thích: B đúng, bước INIT (Khởi tạo) chỉ thuần túy là đàm phán thuật toán và trao đổi nguyên liệu tạo khóa (DH Key Exchange), chưa hề có xác thực danh tính (việc này làm ở bước IKE_AUTH sau đó); A sai (đó là bước 2); C sai (đó là INFORMATIONAL); D sai (đó là Dead Peer Detection).

**18. Khi một gói tin đi vào (Inbound), việc "Search SPD" (Tra cứu chính sách) được thực hiện vào lúc nào?**
A. Ngay khi gói tin vừa tới cổng mạng, trước khi làm bất cứ điều gì khác
B. Sau khi đã tra cứu SAD, giải mã và xác thực gói tin thành công (nếu là gói IPsec)
C. Song song với việc tra cứu SAD
D. Chỉ thực hiện đối với gói tin gửi đi (Outbound), gói tin nhận về không cần SPD
đáp án: B
Giải thích: B đúng vì đối với gói tin Inbound đã được bảo vệ (IPsec packet), Router phải giải mã ra gói tin gốc (Clear text) thì mới biết nội dung bên trong (IP đích thực, Port thực...) để đối chiếu lại với SPD xem gói tin này có được phép đi qua hay không; A sai vì lúc mới tới gói tin đang bị mã hóa, không đọc được nội dung để check SPD; D sai vì SPD kiểm soát cả hai chiều (ví dụ: cấm nhận traffic từ IP đen).

**19. Địa chỉ IP trong "New IP Header" của chế độ Tunnel thường là địa chỉ của thiết bị nào?**
A. Máy tính nguồn và máy tính đích
B. Cổng bảo mật (Security Gateway/Router/Firewall) ở hai đầu đường hầm
C. Máy chủ DNS
D. Địa chỉ Broadcast của mạng
đáp án: B
Giải thích: B đúng, vì mục đích của Tunnel là tạo đường hầm giữa hai trạm trung chuyển (Gateways), nên IP Header bên ngoài phải mang địa chỉ của hai trạm này để định tuyến trên Internet, còn IP của máy tính thực sự nằm ẩn bên trong; A là đặc điểm của Transport mode.

**20. Thuật ngữ "Perfect Forward Secrecy" (PFS) trong IPsec/IKE ám chỉ điều gì?**
A. Nếu khóa dài hạn (khóa chính) bị lộ, các khóa phiên đã tạo ra trong quá khứ vẫn an toàn (không bị giải mã ngược)
B. Tốc độ truyền tin nhanh hoàn hảo
C. Khóa được chuyển đi trước khi dữ liệu được gửi
D. Bảo mật tuyệt đối không thể bị phá vỡ
đáp án: A
Giải thích: A đúng, đây là khái niệm quan trọng. PFS đảm bảo rằng mỗi phiên làm việc sinh ra một khóa tạm thời độc lập (dùng Diffie-Hellman mỗi lần), nên dù hacker lấy được khóa bí mật của Router sau này, hắn cũng không thể dùng nó để giải mã các gói tin đã bắt được từ năm ngoái; B, C, D là các định nghĩa sai hoặc "bẫy" từ ngữ.
