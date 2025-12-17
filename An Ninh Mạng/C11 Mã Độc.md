Dựa trên tài liệu bạn cung cấp (Chương 21: Malicious Software), đây là tổng hợp những kiến thức cốt lõi và trọng tâm nhất mà bạn cần nắm vững. Nội dung được chia theo các chủ đề chính của chương để bạn dễ theo dõi:

### 1. Phân loại Phần mềm độc hại (Malicious Software Taxonomy)

Điều quan trọng đầu tiên là phân biệt được các loại mã độc dựa trên cách chúng tồn tại và hoạt động .

- **Phân loại theo sự phụ thuộc vào vật chủ (Host):**
- **Ký sinh (Parasitic):** Cần một chương trình chủ để hoạt động (Ví dụ: Virus, Logic bomb, Backdoor) .

- **Độc lập (Independent):** Là chương trình tự chạy được, được hệ điều hành lên lịch (Ví dụ: Worms, Bot programs) .

- **Phân loại theo khả năng sao chép:**
- **Không sao chép:** Logic bombs, Backdoors (Trapdoors), Trojan horses.
- **Tự sao chép:** Viruses, Worms .

**Các thuật ngữ quan trọng:**

- **Backdoor (Cửa hậu):** Điểm truy cập bí mật vào chương trình, bỏ qua các thủ tục bảo mật thông thường.

- **Logic Bomb:** Mã được chèn vào chương trình hợp lệ, sẽ "phát nổ" (kích hoạt hành động độc hại) khi gặp điều kiện cụ thể (ví dụ: ngày giờ, sự hiện diện của file) .

- **Trojan Horse:** Chương trình có vẻ hữu ích nhưng chứa mã ẩn thực hiện chức năng độc hại (ví dụ: đánh cắp mật khẩu, phá hủy dữ liệu).

- **Mobile Code:** Mã di động (script, macro) được chuyển từ hệ thống từ xa sang hệ thống cục bộ và thực thi (thường là Java applets, ActiveX...) .

### 2. Virus Máy tính (Computer Viruses)

- **Định nghĩa:** Phần mềm "lây nhiễm" bằng cách sửa đổi các chương trình khác để chèn mã của nó vào nhằm tự sao chép .

- **Cấu trúc 3 phần của Virus:**

1.  **Cơ chế lây nhiễm (Infection vector):** Cách thức virus lây lan.

2.  **Kích hoạt (Trigger):** Sự kiện hoặc điều kiện để kích hoạt payload.

3.  **Tải trọng (Payload):** Hành động thực tế của virus (có thể vô hại hoặc phá hoại).

- **4 Giai đoạn vòng đời:** Ngủ (Dormant) -> Lây lan (Propagation) -> Kích hoạt (Triggering) -> Thực thi (Execution) .

- **Chiến lược che giấu (Concealment):**
- **Mã hóa (Encrypted virus):** Dùng key ngẫu nhiên để mã hóa phần thân virus nhằm tránh bị phát hiện chữ ký.

- **Tàng hình (Stealth virus):** Được thiết kế đặc biệt để ẩn mình khỏi phần mềm diệt virus (ví dụ: chặn lệnh đọc đĩa).

- **Đa hình (Polymorphic virus):** Biến đổi (thay đổi chữ ký bit) sau mỗi lần lây nhiễm nhưng giữ nguyên chức năng.

- **Biến hình (Metamorphic virus):** Viết lại hoàn toàn mã nguồn của chính nó sau mỗi lần lặp.

### 3. Sâu Máy tính (Worms)

- **Sự khác biệt cốt lõi với Virus:** Worm là chương trình **độc lập**, tự sao chép và gửi bản sao qua kết nối mạng, không cần file vật chủ hay sự tác động của con người (như mở file).

- **Phương thức lây lan:** Qua thư điện tử (E-mail), thực thi từ xa (Remote execution), hoặc đăng nhập từ xa (Remote login) .

- **Mô hình lây lan:** Thường tuân theo đường cong logistic: Khởi đầu chậm (Slow start) -> Lây lan nhanh (Fast spread - giai đoạn tăng trưởng theo hàm mũ) -> Kết thúc chậm (Slow finish) .

- **Công nghệ Worm hiện đại:** Đa nền tảng, khai thác nhiều lỗi (multi-exploit), lây lan siêu tốc (zero-day exploit) .

### 4. Các biện pháp đối phó (Countermeasures)

Đây là phần quan trọng về phòng thủ.

- **Các thế hệ phần mềm diệt Virus (Antivirus):**
- **Thế hệ 1:** Quét chữ ký đơn giản (Simple scanners) - tìm chuỗi bit đã biết.

- **Thế hệ 2:** Quét theo kinh nghiệm (Heuristic scanners) - tìm đoạn mã đáng ngờ hoặc kiểm tra tính toàn vẹn (checksum).

- **Thế hệ 3:** Bẫy hoạt động (Activity traps) - thường trú trong bộ nhớ, nhận diện hành động của virus.

- **Thế hệ 4:** Bảo vệ toàn diện (Full-featured) - kết hợp nhiều kỹ thuật và kiểm soát truy cập.

- **Kỹ thuật nâng cao:**
- **Giải mã tổng quát (Generic Decryption - GD):** Dùng máy ảo (CPU emulator) để chạy thử file và phát hiện virus đa hình.

- **Hệ thống miễn dịch kỹ thuật số (Digital Immune System):** Tự động bắt mẫu, phân tích, tạo thuốc giải và phân phối bản cập nhật.

- **Chặn hành vi (Behavior-Blocking):** Giám sát hành vi chương trình trong thời gian thực (ví dụ: sandbox) để chặn các hành động nguy hiểm.

- **Đối phó với Worm:**
- **PWC (Proactive Worm Containment):** Giám sát lưu lượng ra (outgoing traffic), nếu thấy tăng đột biến (scan activity) thì chặn lại.

### 5. Tấn công Từ chối Dịch vụ Phân tán (DDoS)

- **Mục đích:** Làm cạn kiệt tài nguyên hệ thống đích (băng thông, bộ nhớ, khả năng xử lý) khiến người dùng hợp lệ không truy cập được.

- **Hai loại tài nguyên bị tấn công:**

1.  **Tài nguyên nội bộ:** Ví dụ **SYN Flood attack** (làm tràn bảng kết nối TCP bằng các gói tin SYN giả mạo).

2.  **Băng thông mạng:** Ví dụ **ICMP Flood** (làm nghẽn đường truyền bằng lượng lớn gói tin phản hồi).

- **Kiến trúc tấn công:**
- **Tấn công trực tiếp (Direct):** Attacker -> Zombie (Master/Slave) -> Nạn nhân.

- **Tấn công phản xạ (Reflector):** Attacker -> Zombie -> **Reflectors** (máy sạch) -> Nạn nhân. Cách này khó truy vết hơn vì gói tin tấn công đến từ các máy không bị nhiễm mã độc .

- **Phòng thủ DDoS:** 3 tuyến phòng thủ chính là Ngăn chặn (trước tấn công), Phát hiện/Lọc (trong tấn công), và Truy vết (trong/sau tấn công) .
  Chào bạn, dựa trên tài liệu bài tập `ChuongXI.pdf` (tiếng Việt) và tài liệu giáo trình tham khảo `Chapter-21_online.pdf` (tiếng Anh) mà bạn đã cung cấp trước đó, mình xin gửi bạn **lời giải chi tiết** cho bài tập môn Mật mã và An ninh mạng này.

Đây là nội dung thuộc **Chương 21: Malicious Software** trong giáo trình gốc (William Stallings).

---

### PHẦN I: CÂU HỎI TỰ LUẬN

**Câu 1: Vai trò của việc nén trong hoạt động của virus là gì?**

- **Trả lời:** Nén (Compression) đóng vai trò giúp virus **ngụy trang (stealth)** để tránh bị phát hiện bởi người dùng hoặc các phần mềm quét đơn giản.
- **Giải thích chi tiết:**
- Khi một virus lây nhiễm vào một chương trình (.exe), nó thường thêm mã của nó vào file gốc, làm file này lớn hơn kích thước ban đầu. Sự thay đổi kích thước này rất dễ bị phát hiện.

- Để che giấu, virus sẽ nén file chương trình gốc lại, sau đó chèn mã virus vào. Kết quả là kích thước của file bị nhiễm (đã nén + virus) sẽ tương đương với kích thước file gốc ban đầu (không nén).

- Khi chương trình chạy, virus sẽ giải nén file gốc để chương trình hoạt động bình thường, người dùng sẽ không nghi ngờ.

**Câu 2: Vai trò của mã hóa trong hoạt động của virus là gì?**

- **Trả lời:** Mã hóa được dùng để che giấu "chữ ký" (signature) của virus nhằm tránh sự phát hiện của phần mềm diệt virus (Antivirus).
- **Giải thích chi tiết:**
- Các phần mềm diệt virus thường tìm kiếm một chuỗi bit cụ thể (chữ ký) để nhận diện virus.
- Virus mã hóa (Encrypted virus) sẽ tạo ra một khóa ngẫu nhiên để mã hóa phần thân chính của nó. Khi lây nhiễm sang nạn nhân mới, nó dùng một khóa khác .

- Do đó, virus không có một mẫu bit cố định nào để quét, ngoại trừ một đoạn mã giải mã nhỏ ở đầu. Điều này buộc phần mềm diệt virus phải dùng các kỹ thuật phức tạp hơn để phát hiện.

**Câu 3: Hãy trình bày các giai đoạn hoạt động điển hình của virus hoặc sâu (Worm).**

- **Trả lời:** Một virus hoặc worm điển hình trải qua 4 giai đoạn trong vòng đời :

1. **Giai đoạn Ngủ (Dormant phase):** Virus ở trạng thái nghỉ, chưa hoạt động. Nó chờ một sự kiện kích hoạt (ví dụ: một ngày cụ thể, dung lượng file đạt giới hạn...). Không phải virus nào cũng có giai đoạn này.
2. **Giai đoạn Lây lan (Propagation phase):** Virus tự sao chép chính nó vào các chương trình khác hoặc các vùng hệ thống trên đĩa. Mỗi bản sao lại tiếp tục bước vào giai đoạn lây lan.
3. **Giai đoạn Kích hoạt (Triggering phase):** Virus được kích hoạt để thực hiện chức năng định sẵn khi gặp điều kiện cụ thể (ví dụ: người dùng click chuột lần thứ n).
4. **Giai đoạn Thực thi (Execution phase):** Virus thực hiện chức năng của nó ("tải trọng" - payload). Chức năng này có thể vô hại (hiện thông báo) hoặc phá hoại (xóa dữ liệu, phá hủy hệ thống).

**Câu 4: Worm lây lan như thế nào?**

- **Trả lời:** Worm (Sâu máy tính) lây lan qua các kết nối mạng từ máy này sang máy khác. Các phương thức phổ biến bao gồm :

1. **Thư điện tử (Electronic mail):** Worm gửi bản sao của chính nó qua email đính kèm hoặc liên kết đến các hệ thống khác.
2. **Thực thi từ xa (Remote execution):** Worm sử dụng khả năng thực thi từ xa hoặc khai thác lỗ hổng phần mềm trong các dịch vụ mạng để tự chạy trên hệ thống đích.
3. **Đăng nhập từ xa (Remote login):** Worm tự đăng nhập vào hệ thống từ xa như một người dùng (thường bằng cách đoán mật khẩu hoặc dùng mật khẩu yếu) rồi sao chép chính nó sang đó.

**Câu 5: Mô tả một số biện pháp đối phó với Worm.**

- **Trả lời:** Các biện pháp đối phó với Worm bao gồm :

1. **Lọc dựa trên chữ ký (Signature-based filtering):** Tạo chữ ký của worm và chặn các gói tin chứa chữ ký đó tại tường lửa hoặc biên mạng.
2. **Ngăn chặn dựa trên bộ lọc (Filter-based containment):** Kiểm tra nội dung tin nhắn/gói tin để xem có chứa mã worm hay không (dựa trên nội dung thay vì chỉ dựa vào chữ ký scan).
3. **Giới hạn tốc độ (Rate limiting):** Giới hạn số lượng kết nối hoặc lưu lượng mạng mà một máy chủ có thể gửi đi. Vì worm thường quét mạng rất nhanh, việc giới hạn này làm chậm tốc độ lây lan của nó.
4. **Ngắt kết nối (Rate halting):** Chặn ngay lập tức lưu lượng đi ra nếu phát hiện ngưỡng kết nối vượt quá mức cho phép (dấu hiệu của việc quét mạng tìm nạn nhân).

**Câu 6: DDoS là gì?**

- **Trả lời:** DDoS (Distributed Denial of Service) là Tấn công từ chối dịch vụ phân tán .

- **Giải thích:**
- Đây là cuộc tấn công nhằm ngăn chặn người dùng hợp lệ truy cập vào tài nguyên hệ thống hoặc mạng.
- Từ **"Phân tán" (Distributed)** nghĩa là cuộc tấn công được thực hiện từ nhiều nguồn phối hợp cùng lúc (thường là mạng lưới các máy tính bị nhiễm mã độc - botnet/zombies) để làm "ngập lụt" hệ thống mục tiêu bằng lượng truy cập giả mạo khổng lồ.

---

### PHẦN II: CÂU HỎI TRẮC NGHIỆM

Dưới đây là đáp án và giải thích:

**Câu 1:** Phần mềm ngụy trang dưới dạng phần mềm hợp pháp... có mục đích ẩn giấu.

- **Đáp án:** **c. Trojan** (Trojan Horse)
- **Giải thích:** Theo định nghĩa tài liệu, Trojan là chương trình có vẻ hữu ích nhưng chứa mã ẩn thực hiện chức năng độc hại.

**Câu 2:** Bộ công cụ được sử dụng sau khi kẻ tấn công xâm nhập vào hệ thống... giành quyền truy cập cấp quản trị (root).

- **Đáp án:** **b. Rootkit**
- **Giải thích:** Rootkit là bộ công cụ của hacker dùng sau khi đã đột nhập để duy trì quyền truy cập cấp cao nhất (root) và che giấu sự hiện diện của mình.

**Câu 3:** Sự khác biệt giữa Worm và Virus là gì?

- **Đáp án:** **b. Worm có thể nhân rộng mà không cần người dùng can thiệp; virus thì không thể nhân rộng nếu người dùng không can thiệp.**
- **Giải thích:**
- **Virus:** Là đoạn mã "ký sinh", cần gắn vào một chương trình chủ (host program) và cần người dùng chạy chương trình đó để kích hoạt/lây lan .

- **Worm:** Là chương trình độc lập (independent), tự sao chép và lây lan qua mạng mà không cần file vật chủ hay hành động của người dùng .

**Câu 4:** Phần mềm khiến người dùng sợ hãi khi nghĩ rằng họ có nhiều virus... sau đó cung cấp liên kết độc hại để khắc phục.

- **Đáp án:** **c. Scareware**
- **Giải thích:** Đây là thuật ngữ chỉ phần mềm dọa nạt (Scare = sợ hãi). Nó thường hiện các thông báo giả mạo "Máy bạn đã bị nhiễm virus!" để lừa người dùng tải phần mềm độc hại hoặc trả tiền.

**Câu 5:** Phần mềm mã hóa tất cả các tập tin trên thiết bị sau đó yêu cầu số tiền lớn để giải mã.

- **Đáp án:** **b. Ransomware**
- **Giải thích:** Ransomware (Mã độc tống tiền) là loại mã độc mã hóa dữ liệu người dùng và đòi tiền chuộc (Ransom) để nhận key giải mã.

---

**Lời khuyên cho bạn:**
Bạn đang học tại Bách Khoa TP.HCM nên các câu hỏi này yêu cầu tính chính xác cao về mặt thuật ngữ. Khi làm bài thi tự luận, bạn nên nhớ các từ khóa tiếng Anh đi kèm (như _Stealth, Signature, Propagation, Payload_) vì chúng thường được đánh giá cao trong bài làm.

Chúc bạn hoàn thành bài tập tốt! Nếu cần giải thích thêm về cơ chế hoạt động kỹ thuật (như cách nén hay cơ chế buffer overflow của worm), hãy cứ hỏi mình nhé.
