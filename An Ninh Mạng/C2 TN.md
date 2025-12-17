Chào bạn, đây là bộ câu hỏi trắc nghiệm chuyên sâu để ôn tập chương 2 (Mã hóa đối xứng), được biên soạn dựa trên tài liệu "C2.pdf" bạn đã cung cấp.

### Dạng 1: Hiểu & Áp dụng

**1. Trong chế độ hoạt động Counter (CTR), điều gì sẽ xảy ra nếu bạn tái sử dụng cùng một giá trị khóa (key) và giá trị bộ đếm (counter) cho hai khối bản rõ khác nhau?**
A. Hệ thống sẽ tự động chuyển sang chế độ ECB để bảo vệ dữ liệu.
B. Hệ thống vẫn an toàn vì CTR sử dụng phép XOR.
C. Bảo mật của hệ thống sẽ bị bẻ gãy, tương tự như vấn đề của chế độ OFB.
D. Tốc độ mã hóa sẽ tăng lên gấp đôi do tận dụng lại kết quả cũ.
đáp án: C
Giải thích: C đúng vì tài liệu nhấn mạnh hạn chế của CTR là phải chắc chắn không bao giờ tái sử dụng lại cùng giá trị khóa và giá trị counter, nếu không sẽ dễ bẻ gãy như OFB; A sai vì không có cơ chế tự động chuyển đổi này; B sai vì việc tái sử dụng keystream trong phép XOR cho phép kẻ tấn công giải mã dữ liệu; D sai vì mặc dù CTR nhanh nhưng đây là rủi ro bảo mật chứ không phải tính năng tăng tốc.

**2. Nếu bạn cần thiết kế một hệ thống mã hóa cho đường truyền mạng tốc độ rất cao và cần khả năng xử lý song song phần cứng, chế độ hoạt động nào của mã hóa khối là phù hợp nhất theo tài liệu?**
A. Cipher Block Chaining (CBC)
B. Cipher FeedBack (CFB)
C. Counter (CTR)
D. Output FeedBack (OFB)
đáp án: C
Giải thích: C đúng vì tài liệu nêu rõ thuận lợi của CTR là tính hiệu quả cao, có thể thực hiện mã hóa song song trên phần cứng/phần mềm và phù hợp với liên kết mạng tốc độ cao,; A sai vì CBC phụ thuộc vào khối trước đó nên khó song song hóa; B và D sai vì các chế độ phản hồi (Feedback) thường có tính tuần tự.

**3. Trong thuật toán AES, bước nào sau đây liên quan đến việc nhân ma trận trong trường hữu hạn GF(2^8)?**
A. Substitute Bytes
B. Shift Rows
C. Mix Columns
D. Add Round Key
đáp án: C
Giải thích: C đúng vì tài liệu mô tả Mix Columns yêu cầu nhân ma trận trong GF(2^8) hoạt động trên các giá trị byte; A sai vì Substitute Bytes dùng bảng tra (S-box); B sai vì Shift Rows là dịch chuyển byte đơn giản; D sai vì Add Round Key hoạt động dựa vào XOR.

### Dạng 2: Tổng hợp & Liên kết

**4. Claude Shannon đã giới thiệu hai khái niệm cơ bản nào là nền tảng cho thiết kế mã hóa khối hiện đại nhằm ngăn cản việc suy luận và phát hiện khóa?**
A. Thay thế (Substitution) và Hoán vị (Permutation)
B. Khuếch tán (Diffusion) và Nhầm lẫn (Confusion)
C. Mã hóa (Encrypt) và Giải mã (Decrypt)
D. Nhóm (Group) và Vòng (Ring)
đáp án: B
Giải thích: B đúng vì tài liệu nêu rõ Khuếch tán và Nhầm lẫn là nền tảng cho thiết kế mã hóa khối hiện đại, trong đó khuếch tán làm mất cấu trúc thống kê còn nhầm lẫn làm phức tạp mối quan hệ giữa bản mã và khóa; A sai vì Thay thế và Hoán vị là các phép toán nguyên thủy để đạt được mục tiêu trên chứ không phải tên khái niệm lý thuyết; C sai vì đây là quy trình chung; D sai vì đây là khái niệm toán học.

**5. Tại sao Double DES (Mã hóa DES 2 lần) không được xem là giải pháp thay thế an toàn tuyệt đối cho DES, dù kích thước khóa lý thuyết là 56x2 = 112 bit?**
A. Vì nó vẫn sử dụng cấu trúc Feistel cũ kỹ.
B. Vì nó dễ bị tấn công bằng phương pháp "Gặp nhau ở giữa" (Meet-in-the-middle attack).
C. Vì nó chạy chậm hơn Triple-DES.
D. Vì kích thước khối của nó bị giảm xuống còn 32 bit.
đáp án: B
Giải thích: B đúng vì tài liệu giải thích tấn công gặp nhau ở giữa (meet-in-the-middle) cho phép giảm độ phức tạp khi phá mã Double DES, cần lưu trữ các giá trị mã hóa P và giải mã C để so trùng; A sai vì cấu trúc Feistel không phải là lý do chính khiến Double DES yếu hơn mong đợi; C sai vì Double DES (2 lần) nhanh hơn Triple DES (3 lần); D sai vì kích thước khối vẫn là 64 bit.

### Dạng 3: Tìm điểm sai/ngoại lệ

**6. Khi nói về cấu trúc toán học "Trường" (Field), nhận định nào sau đây là SAI dựa trên các định nghĩa trong tài liệu?**
A. Số thực và số phức là các ví dụ về Trường.
B. Số nguyên (Z) là một Trường vì nó có đủ phép cộng và phép nhân.
C. Một Trường phải là nhóm Abelian cho phép toán cộng.
D. Một Trường phải là nhóm Abelian cho phép toán nhân (bỏ qua phần tử 0).
đáp án: B
Giải thích: B là nhận định SAI vì tài liệu khẳng định số nguyên không phải là trường do không có phần tử nghịch đảo của phép toán nhân; A đúng theo ví dụ trong tài liệu; C và D đúng theo định nghĩa về cấu trúc Trường trong tài liệu,.

**7. Đâu KHÔNG phải là một đặc điểm hoặc hạn chế của chế độ mã hóa ECB (Electronic Code Book)?**
A. Các khối giống nhau trong bản rõ sẽ tạo ra các khối giống nhau trong bản mã.
B. Thích hợp để mã hóa dữ liệu lớn và dài như một dòng video stream.
C. Có thể thực hiện mã hóa/giải mã trên nhiều khối đồng thời.
D. Yếu vì các khối được mã hóa độc lập.
đáp án: B
Giải thích: B là nhận định SAI (ngoại lệ) vì tài liệu nói ECB chỉ được dùng khi có một ít khối cần được gửi, và việc lặp lại mẫu mã hóa khiến nó không an toàn cho dữ liệu lớn hoặc có cấu trúc lặp lại; A, C, D là các đặc điểm đúng của ECB được liệt kê trong tài liệu.

### Dạng 4: Bẫy từ ngữ

**8. Phân biệt "Mã hóa đối xứng" và các thuộc tính bảo mật: Hệ mã đối xứng có thể đảm bảo tính bí mật, nhưng nó gặp khó khăn lớn nhất trong việc đảm bảo thuộc tính nào sau đây giữa hai bên lạ mặt?**
A. Tính Sẵn sàng (Availability)
B. Tính Toàn vẹn (Integrity)
C. Tính Chống thoái thác (Non-repudiation)
D. Tính Hiệu quả (Efficiency)
đáp án: C
Giải thích: C đúng vì tài liệu nêu rõ khuyết điểm của mã hóa đối xứng là "không thể bảo vệ bên gửi từ việc giả mạo thông điệp bên nhận và việc tuyên bố thông điệp đó đã được gửi từ bên gửi", tức là không đảm bảo chống thoái thác; A và B sai vì mã hóa đối xứng có thể hỗ trợ các tính chất này (dù toàn vẹn thường cần thêm hàm băm); D sai vì mã hóa đối xứng xử lý rất nhanh (hiệu quả).

**9. Trong ngữ cảnh của AES, khái niệm "Trạng thái" (State) được xử lý qua các vòng lặp. Kích thước khối dữ liệu (block size) của AES là bao nhiêu?**
A. 64 bits
B. 56 bits
C. 128 bits
D. Tùy chọn 128, 192 hoặc 256 bits
đáp án: C
Giải thích: C đúng vì AES cố định kích thước khối dữ liệu là 128 bits; A sai vì 64 bits là kích thước khối của DES; B sai vì 56 bits là kích thước khóa của DES; D là bẫy từ ngữ vì 128/192/256 bits là kích thước của KHÓA (key), không phải kích thước khối dữ liệu.

**10. "Mã hóa dòng" (Stream cipher) và "Mã hóa khối" (Block cipher) khác nhau về cách xử lý. Chế độ CFB (Cipher FeedBack) biến một mã hóa khối thành loại nào?**
A. Biến mã hóa khối thành mã hóa khối an toàn hơn.
B. Biến mã hóa khối hoạt động như một mã hóa dòng.
C. Biến mã hóa dòng thành mã hóa khối.
D. Giữ nguyên tính chất mã hóa khối nhưng thêm vector khởi tạo.
đáp án: B
Giải thích: B đúng vì tài liệu mô tả CFB xem thông điệp như một dòng các bit và "là chế độ hoạt động phổ biến nhất của mã hóa dòng" được xây dựng từ thuật toán mã khối,; A và D sai vì bản chất xử lý của CFB là theo dòng bit/byte (stream) chứ không phải theo khối độc lập; C sai vì hướng chuyển đổi là ngược lại.

### Dạng 5: Vị trí thông tin & Định nghĩa

**11. Theo tài liệu, DES (Data Encryption Standard) được NBS (nay là NIST) đề nghị vào năm nào và có kích thước khóa thực tế là bao nhiêu?**
A. Năm 1977, khóa 64 bits.
B. Năm 1977, khóa 56 bits.
C. Năm 1997, khóa 128 bits.
D. Năm 2001, khóa 56 bits.
đáp án: B
Giải thích: B đúng vì tài liệu ghi rõ DES được NBS đề nghị năm 1977 và có chiều dài khóa bí mật là 56 bits (dù khối dữ liệu là 64 bits); A sai về kích thước khóa; C sai về năm và kích thước (đây là thời điểm kêu gọi AES); D sai về năm.

**12. Đa thức không thể rút gọn (irreducible polynomial) được sử dụng trong trường hữu hạn GF(2^8) của AES là gì?**
A. m(x) = x^8 + x^4 + x^3 + x + 1
B. m(x) = x^8 + x^4 + x^3 + 1
C. m(x) = x^7 + x^4 + x^3 + x + 1
D. m(x) = x^8 + x^6 + x^4 + x + 1
đáp án: A
Giải thích: A đúng vì tài liệu ghi chính xác đa thức dùng trong AES là m(x) = x^8 + x^4 + x^3 + x + 1, tương ứng với {11b} hay (100011011); Các đáp án còn lại sai lệch về số mũ hoặc thành phần đa thức.

**13. Triple-DES với 2 khóa (sử dụng 2 khóa K1 và K2) thực hiện theo trình tự nào?**
A. Mã hóa (K1) -> Mã hóa (K2) -> Mã hóa (K1)
B. Mã hóa (K1) -> Giải mã (K2) -> Mã hóa (K1)
C. Giải mã (K1) -> Mã hóa (K2) -> Giải mã (K1)
D. Mã hóa (K1) -> Mã hóa (K2) -> Giải mã (K1)
đáp án: B
Giải thích: B đúng vì công thức trong tài liệu là C = E_K1(D_K2(E_K1(P))), tức là Mã hóa - Giải mã - Mã hóa (thứ tự E-D-E); A sai vì bước giữa là giải mã; C sai vì bước đầu là mã hóa; D sai vì trình tự E-D-E nhằm đảm bảo tương thích ngược nếu K1=K2.

**14. Thuật toán AES (Rijndael) được thiết kế bởi hai nhà mật mã học người nước nào?**
A. Mỹ
B. Đức
C. Bỉ
D. Nhật Bản
đáp án: C
Giải thích: C đúng vì tài liệu giới thiệu AES được thiết kế bởi Rijmen-Daemen ở Bỉ; A sai vì Mỹ (NIST) là nơi tổ chức cuộc thi; B và D là các quốc gia có các máy rotor trong thế chiến 2 được nhắc đến ở phần lịch sử.
