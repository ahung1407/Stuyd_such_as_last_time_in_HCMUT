Chào bạn, đây là bộ câu hỏi trắc nghiệm chuyên sâu để ôn tập Chương 4 (Các giải thuật mã hóa & Toàn vẹn dữ liệu) dựa trên tài liệu "C4.pdf" bạn đã cung cấp.

### Dạng 1: Hiểu & Áp dụng

**1. Trong lược đồ chữ ký số RSA, để tạo chữ ký $S$ cho thông điệp $M$, người gửi A sẽ thực hiện quy trình tính toán nào sau đây?**
A. Dùng khóa công khai của người nhận để mã hóa giá trị băm của $M$.
B. Dùng khóa riêng của A để mã hóa giá trị băm $h = H(M)$.
C. Dùng khóa bí mật chia sẻ chung để mã hóa thông điệp $M$.
D. Dùng khóa công khai của A để mã hóa giá trị băm của $M$.
đáp án: B
Giải thích: B đúng vì theo tài liệu và, bên gửi tính toán giá trị băm h = H(M) và sau đó h được mã hóa với khóa riêng của người gửi để tạo ra chữ ký S; A sai vì dùng khóa công khai của người nhận là để đảm bảo tính bí mật chứ không phải để ký; C sai vì đây là cơ chế của MAC (Mã xác thực thông điệp) chứ không phải chữ ký số RSA; D sai vì khóa công khai dùng để xác minh (giải mã) chữ ký chứ không phải để tạo chữ ký.

**2. Nếu kẻ tấn công muốn thực hiện "Tấn công ngày sinh nhật" (Birthday attack) lên một hàm băm có độ dài đầu ra là 64-bit, hắn cần tạo ra bao nhiêu phiên bản thông điệp để xác suất tìm thấy đụng độ lớn hơn 0.5?**
A. $2^{64}$ phiên bản.
B. $2^{32}$ phiên bản.
C. $2^{128}$ phiên bản.
D. $2^{16}$ phiên bản.
đáp án: B
Giải thích: B đúng vì theo tài liệu, tấn công ngày sinh nhật thực hiện bằng cách tạo ra $2^{m/2}$ phiên bản, với m = 64 thì số lượng cần là $2^{32}$; A sai vì $2^{64}$ là tấn công vét cạn (brute-force) tìm tiền ảnh; C sai vì lớn hơn kích thước không gian băm; D sai vì con số này quá nhỏ ($2^{64/4}$).

**3. Khi sử dụng thuật toán chữ ký số DSA, tham số $k$ được tạo ra trong quá trình ký phải tuân thủ nguyên tắc quan trọng nào?**
A. $k$ là một hằng số cố định cho mỗi người dùng để dễ quản lý.
B. $k$ có thể tái sử dụng cho nhiều thông điệp khác nhau để tiết kiệm tài nguyên.
C. $k$ phải ngẫu nhiên, được hủy sau khi dùng và không bao giờ được tái sử dụng.
D. $k$ được công khai cho tất cả mọi người để xác minh chữ ký.
đáp án: C
Giải thích: C đúng vì tài liệu ghi rõ quy tắc tạo chữ ký trong DSA là k phải ngẫu nhiên, được hủy sau khi dùng và không bao giờ được tái sử dụng; A sai vì k phải thay đổi cho mỗi thông điệp; B sai vì nếu tái sử dụng k sẽ làm lộ khóa riêng; D sai vì k là tham số bí mật trong quá trình ký (công thức $s = [k^{-1}(H(M)+ xr)] \mod q$).

### Dạng 2: Tổng hợp & Liên kết

**4. Sự khác biệt cốt lõi về mặt chức năng giữa "Mã xác thực thông điệp" (MAC) và "Chữ ký số" (Digital Signature) là gì?**
A. MAC đảm bảo tính toàn vẹn, còn Chữ ký số thì không.
B. MAC sử dụng khóa bí mật chia sẻ để xác thực nguồn gốc, còn Chữ ký số cung cấp thêm khả năng chống thoái thác.
C. MAC chậm hơn Chữ ký số do sử dụng thuật toán phức tạp hơn.
D. MAC không cần khóa, trong khi Chữ ký số cần cặp khóa công khai/riêng.
đáp án: B
Giải thích: B đúng vì tài liệu và khẳng định chữ ký số cung cấp tính năng chống thoái thác (non-repudiation) và giải quyết tranh chấp thông qua bên thứ 3, điều mà MAC (dùng khóa chung) không làm được; A sai vì cả hai đều đảm bảo tính toàn vẹn; C sai vì MAC thường dựa trên hàm băm hoặc mã hóa đối xứng nên nhanh hơn chữ ký số; D sai vì MAC bắt buộc phải dùng khóa bí mật K.

**5. Cấu trúc của HMAC được định nghĩa trong RFC 2104 liên kết khóa $K$ và thông điệp $M$ thông qua hàm băm $H$ theo công thức nào?**
A. $HMAC_K = H(K || M)$
B. $HMAC_K = H(K \oplus M)$
C. $HMAC_K = H[(K^+ \oplus opad) || H[(K^+ \oplus ipad) || M]]$
D. $HMAC_K = E_K(H(M))$
đáp án: C
Giải thích: C đúng vì tài liệu mô tả chi tiết công thức HMAC dùng hàm băm lồng nhau với các hằng số opad và ipad; A sai vì đây là đề xuất "KeyedHash" đơn giản và không an toàn; B sai vì phép XOR trực tiếp không phải là cấu trúc HMAC; D sai vì đây là mô hình ký số hoặc mã hóa hash chứ không phải thuật toán HMAC chuẩn.

### Dạng 3: Tìm điểm sai/ngoại lệ

**6. Đâu KHÔNG phải là một trong các yêu cầu bắt buộc của hàm băm dựa trên mật mã?**
A. Cho giá trị băm h, không khả thi để tìm lại thông điệp x sao cho H(x) = h.
B. Cho thông điệp x, không khả thi để tìm thông điệp y sao cho H(y) = H(x).
C. Hàm băm phải có khả năng giải mã ngược lại thông điệp gốc khi có khóa bí mật.
D. Không khả thi để tìm bất kỳ cặp (x, y) nào sao cho H(x) = H(y).
đáp án: C
Giải thích: C là điểm sai (ngoại lệ) vì tài liệu định nghĩa hàm băm là hàm một chiều và tài liệu liệt kê 3 yêu cầu bảo mật chính (kháng tiền ảnh, kháng tiền ảnh thứ hai, kháng đụng độ), không bao giờ yêu cầu khả năng giải mã ngược; A đúng là tính kháng tiền ảnh (one-way); B đúng là tính kháng tiền ảnh thứ hai; D đúng là tính kháng đụng độ.

**7. Nhận định nào sau đây về các thuật toán hàm băm và MAC là SAI theo tài liệu?**
A. Giá trị băm 64-bit là quá nhỏ và dễ bị tấn công ngày sinh nhật.
B. MAC dựa trên DES-CBC (DAA) hiện nay không còn an toàn vì kích thước MAC quá nhỏ.
C. SHA-1 an toàn tuyệt đối và được khuyến nghị sử dụng vĩnh viễn thay cho MD5.
D. CMAC được dùng để khắc phục hạn chế về kích thước của DAA bằng cách dùng nhiều khóa dẫn xuất.
đáp án: C
Giải thích: C là nhận định sai vì mặc dù tài liệu có nhắc đến SHA-1 nhưng trong bối cảnh an toàn, tài liệu khuyến nghị giá trị băm nên là 160 bits trở lên và thực tế SHA-1 đã có những điểm yếu (tài liệu chỉ liệt kê nó như một hàm băm được dùng, không khẳng định an toàn tuyệt đối vĩnh viễn, trong khi nói các biến thể cũng dễ bị tấn công); A đúng theo tài liệu và; B đúng theo tài liệu; D đúng theo tài liệu.

### Dạng 4: Bẫy từ ngữ

**8. Phân biệt giữa "DSS" và "DSA" trong ngữ cảnh chuẩn chữ ký số của Mỹ:**
A. DSS và DSA là hai tên gọi khác nhau của cùng một thuật toán duy nhất.
B. DSA là chuẩn (Standard), còn DSS là thuật toán (Algorithm).
C. DSS là chuẩn (Standard), còn DSA là thuật toán (Algorithm) được dùng trong chuẩn đó.
D. DSS là chữ ký dựa trên RSA, còn DSA là chữ ký dựa trên ElGamal.
đáp án: C
Giải thích: C đúng vì tài liệu ghi rõ "DSS là chuẩn, DSA là thuật toán"; A sai vì một cái là tiêu chuẩn tổng thể, một cái là thuật toán cụ thể; B sai vì bị ngược vai trò; D sai vì DSS (FIPS 186-2) bao gồm cả RSA và ECC, nhưng DSA là thuật toán cụ thể dựa trên bài toán logarit rời rạc.

**9. Thuật ngữ "Toàn vẹn dữ liệu" (Data Integrity) trong chương này chủ yếu đề cập đến việc chống lại các loại tấn công nào?**
A. Nghe lén (Eavesdropping) và Phân tích lưu lượng.
B. Giả mạo (Masquerade), Thay đổi nội dung, Thay đổi trình tự, Thay đổi thời gian.
C. Tấn công từ chối dịch vụ (DoS).
D. Tấn công vét cạn khóa (Brute-force key search).
đáp án: B
Giải thích: B đúng vì tài liệu liệt kê cụ thể các loại tấn công mà việc bảo vệ tính toàn vẹn thông điệp và xác thực hướng tới là Giả mạo, Thay đổi nội dung, Thay đổi trình tự, và Thay đổi thời gian; A sai vì đây là tấn công vào tính bí mật; C sai vì đây là tấn công vào tính sẵn sàng; D sai vì đây là phương pháp tấn công mã hóa nói chung.

### Dạng 5: Vị trí thông tin & Con số

**10. Kích thước chữ ký được tạo ra bởi thuật toán DSA là bao nhiêu bit?**
A. 160 bits.
B. 320 bits.
C. 1024 bits.
D. 512 bits.
đáp án: B
Giải thích: B đúng vì tài liệu và nêu rõ ưu điểm của DSA là tạo chữ ký chiều dài 320 bits (bao gồm 2 thành phần r và s, mỗi thành phần 160 bits); A sai vì 160 bits là kích thước của q; C và D sai vì 512-1024 bits là kích thước của L (số nguyên tố p).
