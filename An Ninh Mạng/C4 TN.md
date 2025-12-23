Để nắm vững (master) hoàn toàn chương 4 "Những giải thuật mã hóa toàn vẹn dữ liệu" dựa trên nội dung slide bạn cung cấp, tôi ước tính bạn cần khoảng **25-30 câu hỏi** chất lượng cao, bao phủ các khía cạnh từ lý thuyết cơ bản đến các tình huống bẫy.

Dưới đây là bộ **20 câu hỏi tinh lọc nhất** (chia theo các dạng bạn yêu cầu) để quét sạch các điểm mù kiến thức trong chương này.

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (Nắm bản chất)

**1. Trong các kịch bản sau, kịch bản nào CHỈ cần sử dụng Hàm băm (Hash Function) mà không cần MAC hay Chữ ký số?**
A. Xác thực giao dịch chuyển tiền ngân hàng giữa hai chi nhánh.
B. Kiểm tra xem file tải về từ trang chủ có bị lỗi hoặc bị virus sửa đổi hay không (khi trang chủ cung cấp mã checksum).
C. Gửi một email mật và muốn người nhận biết chính xác người gửi là ai.
D. Ký hợp đồng điện tử có giá trị pháp lý.
đáp án: B
Giải thích: B đúng vì mục đích chỉ là kiểm tra tính toàn vẹn của file so với bản gốc, không cần xác thực danh tính người tạo file hay chống thoái thác; A sai vì cần xác thực nguồn gốc (MAC/Sig); C sai vì cần xác thực và bảo mật; D sai vì cần chống thoái thác (Sig).

**2. Tại sao trong lược đồ chữ ký số, người ta thường băm (hash) thông điệp trước rồi mới ký lên giá trị băm đó, thay vì ký trực tiếp lên toàn bộ thông điệp?**
A. Để tăng tính bảo mật cho khóa riêng.
B. Để giảm thời gian tính toán và tối ưu hiệu suất, vì giải thuật ký (như RSA) chậm hơn nhiều so với hàm băm.
C. Để đảm bảo thông điệp không bị đọc trộm trên đường truyền.
D. Để chuyển đổi thông điệp thành dạng số nguyên tố.
đáp án: B
Giải thích: B đúng vì việc mã hóa/ký một chuỗi hash 256-bit nhanh hơn rất nhiều so với ký một file dung lượng lớn (GB); A sai vì ký trực tiếp hay ký hash đều an toàn cho khóa nếu thuật toán chuẩn; C sai vì chữ ký số không dùng để giấu tin (bảo mật); D sai vì hash không tạo ra số nguyên tố.

**3. Cơ chế HMAC (Hash-based Message Authentication Code) hoạt động dựa trên nguyên lý nào để tạo ra mã xác thực?**
A. Sử dụng thuật toán mã hóa khối (AES) ở chế độ CBC.
B. Sử dụng hàm băm lồng nhau (nested hash) kết hợp với khóa bí mật và các hằng số đệm (padding).
C. Ghép khóa vào sau thông điệp rồi băm một lần duy nhất: Hash(Message|Key).
D. Mã hóa toàn bộ thông điệp bằng khóa công khai của người nhận.
đáp án: B
Giải thích: B đúng theo cấu trúc HMAC = H((K' xor opad) || H((K' xor ipad) || M)); A sai vì đó là CMAC/DAA; C sai vì cách này bị lỗi bảo mật "Length Extension Attack"; D sai vì đó là mã hóa bảo mật, không phải MAC.

**4. Nếu bạn đang thiết kế một hệ thống yêu cầu tính năng "Chống thoái thác" (Non-repudiation) cho các lệnh mua bán chứng khoán, bạn bắt buộc phải sử dụng công nghệ nào?**
A. Hàm băm SHA-256.
B. Mã xác thực thông điệp HMAC-SHA256.
C. Chữ ký số (Digital Signature).
D. Mã hóa đối xứng AES-256.
đáp án: C
Giải thích: C đúng vì chỉ chữ ký số dùng cặp khóa công khai/riêng mới chứng minh được duy nhất người giữ khóa riêng đã thực hiện hành động (chống thoái thác); A sai vì hash không xác thực người gửi; B và D sai vì dùng khóa chung (symmetric key), bên nhận cũng có thể tạo ra lệnh giả mạo nên bên gửi có thể chối bỏ.

**5. Trong thuật toán chữ ký số DSA, vai trò của số k (nonce) được sinh ngẫu nhiên là gì?**
A. Là khóa công khai của người nhận.
B. Là một tham số dùng một lần để tạo tính ngẫu nhiên cho mỗi chữ ký, đảm bảo hai lần ký cùng một văn bản sẽ ra chữ ký khác nhau.
C. Là khóa riêng của người gửi dùng để giải mã.
D. Là giá trị băm của thông điệp cần ký.
đáp án: B
Giải thích: B đúng vì k là số ngẫu nhiên dùng 1 lần (ephemeral key) trong quá trình tạo r và s; A sai vì k phải bí mật; C sai vì k không phải khóa riêng dài hạn (x); D sai vì hash là H(M).

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (Kết nối kiến thức)

**6. Mối quan hệ giữa CMAC và DAA (Data Authentication Algorithm) là gì?**
A. CMAC là tên gọi khác của DAA.
B. DAA sử dụng hàm băm, còn CMAC sử dụng mã hóa khối.
C. Cả hai đều dùng mã hóa khối, nhưng CMAC khắc phục các hạn chế về bảo mật và xử lý độ dài thông điệp của DAA (vốn dựa trên DES-CBC cũ).
D. DAA là chuẩn mới thay thế cho CMAC.
đáp án: C
Giải thích: C đúng vì DAA là thuật toán cũ dựa trên DES-CBC có nhiều lỗ hổng, CMAC là chuẩn mới (NIST 800-38B) dùng AES/3DES và xử lý padding tốt hơn; A sai vì chúng khác nhau; B sai vì DAA cũng dùng mã hóa khối; D sai vì ngược lại.

**7. Sự khác biệt cơ bản nhất về việc quản lý khóa giữa mô hình HMAC và mô hình Chữ ký số (RSA/DSA) là gì?**
A. HMAC không cần khóa, Chữ ký số cần khóa.
B. HMAC sử dụng khóa bí mật chia sẻ (Symmetric), Chữ ký số sử dụng cặp khóa bất đối xứng (Asymmetric).
C. HMAC dùng khóa công khai, Chữ ký số dùng khóa bí mật.
D. HMAC dùng khóa dài 64 bit, Chữ ký số dùng khóa dài 128 bit.
đáp án: B
Giải thích: B đúng vì bản chất MAC là mật mã đối xứng (sender và receiver cùng giữ K), còn Chữ ký số là mật mã khóa công khai; A sai vì HMAC bắt buộc có khóa; C sai ngược lại; D sai vì độ dài khóa tùy thuộc thuật toán cụ thể.

**8. Lỗ hổng "Birthday Attack" (Tấn công ngày sinh nhật) đe dọa trực tiếp đến tính chất nào của hàm băm?**
A. Tính một chiều (Pre-image resistance).
B. Tính kháng va chạm mạnh (Strong collision resistance).
C. Tính kháng va chạm yếu (Weak collision resistance).
D. Tốc độ tính toán của hàm băm.
đáp án: B
Giải thích: B đúng vì tấn công ngày sinh nhật tìm kiếm bất kỳ cặp (x, y) nào sao cho H(x)=H(y) nhanh hơn nhiều so với vét cạn, phá vỡ tính kháng va chạm mạnh; A và C sai vì Birthday attack tập trung vào xác suất trùng lặp ngẫu nhiên chứ không phải tìm tiền ảnh cụ thể; D không liên quan đến bảo mật.

**9. Khi so sánh DSA và RSA trong bối cảnh chữ ký số, phát biểu nào sau đây thể hiện sự liên kết đúng?**
A. RSA có thể dùng cho cả mã hóa và ký số, trong khi DSA chỉ dùng chuyên biệt để ký số.
B. DSA tạo chữ ký nhanh hơn RSA nhưng xác minh chậm hơn.
C. Chữ ký RSA có kích thước cố định nhỏ (320 bit), còn DSA phụ thuộc độ dài khóa.
D. Cả hai đều dựa trên bài toán phân tích thừa số nguyên tố.
đáp án: A
Giải thích: A đúng vì RSA là thuật toán đa năng, DSA (Digital Signature Algorithm) thiết kế chỉ để ký; B sai vì thường DSA ký nhanh nhưng verify chậm hơn RSA (với e nhỏ); C sai vì DSA mới có chữ ký nhỏ (320 bit), RSA chữ ký lớn bằng modulus n (1024+ bit); D sai vì DSA dựa trên logarit rời rạc.

**10. Quá trình "Xác thực thông điệp" (Message Authentication) bảo vệ hệ thống khỏi các loại tấn công nào sau đây?**
A. Nghe lén (Eavesdropping) và Phân tích lưu lượng.
B. Giả mạo (Masquerade), Thay đổi nội dung, Thay đổi trình tự, Thay đổi thời gian.
C. Tấn công từ chối dịch vụ (DoS).
D. SQL Injection và XSS.
đáp án: B
Giải thích: B đúng vì đây là định nghĩa trong Slide 4 về mục tiêu của xác thực thông điệp; A sai vì đó là tấn công vào tính bí mật (Confidentiality); C và D là các dạng tấn công khác không liên quan trực tiếp đến tính toàn vẹn của gói tin trên đường truyền.

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (Tinh mắt)

**11. Tìm phát biểu SAI về hàm băm mật mã:**
A. Hàm băm là hàm một chiều, từ giá trị băm rất khó suy ngược ra thông điệp gốc.
B. Hàm băm nén thông điệp có độ dài tùy ý thành chuỗi có độ dài cố định.
C. Một sự thay đổi nhỏ trong thông điệp đầu vào sẽ dẫn đến sự thay đổi nhỏ tương ứng ở giá trị băm đầu ra để dễ nhận diện.
D. SHA-1 hiện nay được coi là không còn an toàn do đã tìm thấy va chạm.
đáp án: C
Giải thích: C sai vì hàm băm phải có tính chất "Hiệu ứng tuyết lở" (Avalanche effect), một thay đổi nhỏ đầu vào phải làm thay đổi rất lớn (khoảng 50% bit) đầu ra, chứ không phải thay đổi nhỏ; A, B, D là các phát biểu đúng.

**12. Phát biểu nào sau đây KHÔNG đúng về chuẩn DSS (Digital Signature Standard)?**
A. Được công bố bởi NIST (FIPS-186).
B. DSS chỉ định sử dụng thuật toán băm SHA.
C. DSS bao gồm cả RSA và Elliptic Curve Digital Signature Algorithm (ECDSA).
D. DSS yêu cầu sử dụng thuật toán băm MD5 để đảm bảo tốc độ.
đáp án: D
Giải thích: D sai vì chuẩn DSS (FIPS-186) yêu cầu sử dụng hàm băm an toàn SHA (Secure Hash Algorithm), không dùng MD5 vì MD5 đã bị phá vỡ; A, B, C đều đúng về lịch sử và nội dung của chuẩn này.

**13. Điểm nào sau đây KHÔNG phải là yêu cầu của một hệ thống Chữ ký số an toàn?**
A. Chữ ký phải phụ thuộc vào thông điệp được ký (Message dependent).
B. Chữ ký phải dễ dàng tạo ra nếu biết khóa bí mật.
C. Chữ ký phải đảm bảo bí mật nội dung thông điệp, không ai đọc được nếu không có khóa công khai.
D. Không khả thi để giả mạo chữ ký nếu không có khóa bí mật.
đáp án: C
Giải thích: C sai (đây là điểm ngoại lệ) vì Chữ ký số sinh ra để xác thực và toàn vẹn, bản thân nó KHÔNG có chức năng mã hóa để giấu nội dung (Confidentiality). Nội dung đi kèm chữ ký thường là bản rõ (plaintext) trừ khi được mã hóa thêm một lớp khác; A, B, D là các yêu cầu bắt buộc (Slide 29).

**14. Trong thuật toán DSA, điều gì xảy ra nếu kẻ tấn công KHÔNG tìm được khóa riêng x, nhưng tìm được số ngẫu nhiên k của một thông điệp đã ký?**
A. Kẻ tấn công không thể làm gì nếu không có khóa riêng x.
B. Kẻ tấn công chỉ giả mạo được chữ ký cho thông điệp đó.
C. Kẻ tấn công có thể tính toán suy ngược ra khóa riêng x từ k, chữ ký (r,s) và thông điệp.
D. Hệ thống tự động đổi khóa mới.
đáp án: C
Giải thích: C đúng (đây là lỗ hổng chết người của DSA), từ công thức s = k^-1(H(M) + xr) mod q, nếu biết k, s, r, H(M), kẻ tấn công giải phương trình bậc nhất tìm ra x (khóa riêng); A sai hoàn toàn; B sai vì tìm được x thì giả mạo được mọi thứ.

**15. Tại sao việc sử dụng trực tiếp Mã hóa khối (như DES, AES) làm hàm băm (bằng cách lấy khối cuối cùng) như trong thuật toán DAA lại KHÔNG được khuyến khích hiện nay?**
A. Vì nó chạy quá chậm.
B. Vì kích thước khối (block size) của các thuật toán cũ (như DES 64-bit) quá nhỏ, dễ bị tấn công Birthday Attack.
C. Vì mã hóa khối không có tính chất một chiều.
D. Vì mã hóa khối yêu cầu phần cứng đắt tiền.
đáp án: B
Giải thích: B đúng vì Slide 10 và 15 nhấn mạnh rằng kết quả băm/MAC 64-bit là quá nhỏ, chỉ cần 2^32 phép thử là tìm thấy va chạm; A sai vì phần cứng hỗ trợ AES rất nhanh; C sai vì khi dùng chế độ CBC lấy khối cuối thì nó hoạt động như hàm một chiều; D sai.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (Cẩn thận bị lừa)

**16. Để tạo chữ ký số trên văn bản M, người gửi A sẽ thực hiện thao tác nào?**
A. Mã hóa M bằng Khóa Công Khai của A ($PU_a$).
B. Mã hóa Hash(M) bằng Khóa Công Khai của A ($PU_a$).
C. Mã hóa Hash(M) bằng Khóa Riêng của A ($PR_a$).
D. Mã hóa Hash(M) bằng Khóa Riêng của người nhận B ($PR_b$).
đáp án: C
Giải thích: C đúng vì nguyên tắc "Ký bằng khóa riêng của mình"; A và B sai vì dùng khóa công khai để mã hóa thì ai cũng giải mã được (không chứng minh được nguồn gốc) hoặc dùng để gửi mật tin cho A (confidentiality); D sai vì A không bao giờ có khóa riêng của B. (Bẫy: Nhầm lẫn giữa khóa công khai/riêng và vai trò của chúng).

**17. "Mã xác thực thông điệp" (MAC) cung cấp tính chất nào sau đây?**
A. Tính toàn vẹn và Tính bí mật.
B. Tính toàn vẹn và Xác thực nguồn gốc.
C. Tính toàn vẹn, Xác thực nguồn gốc và Chống thoái thác.
D. Chỉ tính toàn vẹn.
đáp án: B
Giải thích: B đúng; A sai vì MAC không mã hóa nội dung nên không bí mật; C sai (Bẫy lớn nhất) vì MAC dùng khóa chung (Symmetric), người nhận cũng tạo được MAC nên người gửi có thể chối bỏ (không chống thoái thác được); D thiếu tính xác thực.

**18. Khi nói về hàm băm, thuật ngữ "Collision" (Va chạm) nghĩa là gì?**
A. Hai hàm băm khác nhau cùng băm một văn bản ra một kết quả.
B. Hai văn bản khác nhau có cùng giá trị băm.
C. Một văn bản khi băm hai lần ra hai kết quả khác nhau.
D. Kẻ tấn công tìm ra khóa bí mật của hàm băm.
đáp án: B
Giải thích: B đúng (định nghĩa H(x) = H(y) với x khác y); A sai; C sai vì hàm băm là đơn ánh (deterministic), băm 1 tỷ lần phải giống nhau; D sai vì hàm băm thường không có khóa (trừ HMAC).

**19. Trong sơ đồ HMAC, tại sao phải thực hiện băm hai lần (Nested Hash)?**
A. Để tăng độ dài khóa lên gấp đôi.
B. Để chống lại tấn công "Mở rộng độ dài" (Length Extension Attack) mà các hàm băm kiểu Merkle-Damgård mắc phải nếu chỉ ghép khóa đơn giản.
C. Để tạo ra hai mã xác thực dự phòng.
D. Để tương thích với cả MD5 và SHA.
đáp án: B
Giải thích: B đúng (Slide 19, 20 đề cập việc KeyedHash đơn giản không an toàn, dẫn đến sự ra đời của HMAC băm 2 lần với ipad và opad); A, C, D là các lý do bịa đặt nghe có vẻ hợp lý.

**20. Phát biểu nào sau đây về tính "Một chiều" (One-way) của hàm băm là chính xác nhất?**
A. Không thể tìm lại thông điệp gốc M từ giá trị băm h.
B. Có thể tìm lại M từ h nhưng mất rất nhiều thời gian (tương đương tuổi vũ trụ).
C. Không khả thi về mặt tính toán (Computationally infeasible) để tìm lại M từ h.
D. Có thể tìm lại M nếu biết thuật toán băm.
đáp án: C
Giải thích: C đúng nhất về mặt học thuật. Trong mật mã, không có gì là "không thể" tuyệt đối (A sai), chỉ là với năng lực máy tính hiện tại thì không làm được trong thời gian cho phép; B đúng ý nhưng C là thuật ngữ chuẩn xác hơn; D sai vì thuật toán băm là công khai (public).
