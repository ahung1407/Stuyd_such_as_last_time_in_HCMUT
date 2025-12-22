Để "master" (nắm vững hoàn toàn) chương Mã hóa đối xứng này, bạn cần khoảng **40-50 câu hỏi** chất lượng cao, bao phủ toàn bộ các ngóc ngách kiến thức từ lý thuyết cơ bản, toán học, chi tiết thuật toán đến ứng dụng thực tế.

Tuy nhiên, số lượng không quan trọng bằng **chất lượng** và **độ đa dạng** của câu hỏi. Dưới đây là bộ 25 câu hỏi "tinh hoa" nhất được thiết kế theo 4 cấp độ bạn yêu cầu. Nếu bạn trả lời đúng và hiểu rõ phần giải thích của 25 câu này, bạn đã nắm được 90% chương.

---

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (Toán học & Cơ chế)

**1. Trong tính toán trên trường hữu hạn $GF(2^8)$ được sử dụng trong AES, phép cộng hai byte (ví dụ: $01010101 + 10101010$) tương đương với phép toán logic nào sau đây?**
A. Phép OR
B. Phép AND
C. Phép XOR
D. Phép NAND
đáp án: C
Giải thích: C đúng vì trong số học đa thức modulo 2, phép cộng các hệ số ($1+1=0, 0+1=1$) chính là phép XOR; A, B, D sai vì không phản ánh tính chất cộng modulo 2.

**2. Giả sử bạn đang sử dụng mã hóa Caesar với khóa $k=3$. Nếu ký tự bản rõ là 'A' (index 0) và 'B' (index 1), bản mã thu được lần lượt là gì?**
A. 'C' và 'D'
B. 'D' và 'E'
C. 'X' và 'Y'
D. 'B' và 'C'
đáp án: B
Giải thích: B đúng vì công thức là $C = (P + k) \mod 26$, với 'A' (0) thì $0+3=3$ ('D'), với 'B' (1) thì $1+3=4$ ('E'); A sai vì 'C' tương ứng $k=2$; C, D sai do tính toán sai lệch.

**3. Trong thuật toán Euclid mở rộng để tìm nghịch đảo modulo, điều kiện tiên quyết để số nguyên $a$ có nghịch đảo theo modulo $n$ là gì?**
A. $a$ phải lớn hơn $n$
B. $n$ phải là số nguyên tố
C. $GCD(a, n) = 1$
D. $a$ phải là số lẻ
đáp án: C
Giải thích: C đúng vì phần tử nghịch đảo chỉ tồn tại khi a và n nguyên tố cùng nhau; B sai vì n không bắt buộc phải là số nguyên tố (dù trong $Z_p$ thì $p$ là nguyên tố); A, D sai vì không phải là điều kiện cần.

**4. Trong AES, bước biến đổi nào sau đây là thành phần duy nhất sử dụng phép toán XOR với Khóa vòng (Round Key)?**
A. SubBytes
B. ShiftRows
C. MixColumns
D. AddRoundKey
đáp án: D
Giải thích: D đúng vì AddRoundKey là bước duy nhất kết hợp dữ liệu trạng thái với khóa con thông qua XOR; A, B, C sai vì chúng là các bước hoán vị hoặc thay thế dựa trên bản thân dữ liệu, không tác động trực tiếp với khóa.

**5. Nếu sử dụng DES để mã hóa một file có kích thước 100 bits, ta cần thực hiện padding (thêm bit) tối thiểu bao nhiêu bit để phù hợp với mã hóa khối?**
A. 28 bits
B. 64 bits
C. 100 bits
D. 0 bits
đáp án: A
Giải thích: A đúng vì DES có kích thước khối 64 bits, 100 bits cần 2 khối (128 bits), vậy cần thêm $128 - 100 = 28$ bits; B, C, D sai vì không làm cho tổng kích thước chia hết cho 64.

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (So sánh & Cấu trúc)

**6. Sự khác biệt cốt lõi về cấu trúc thiết kế giữa DES và AES là gì?**
A. DES dùng mạng thay thế-hoán vị (SPN), AES dùng cấu trúc Feistel
B. DES dùng cấu trúc Feistel, AES dùng mạng thay thế-hoán vị (SPN)
C. Cả hai đều dùng cấu trúc Feistel nhưng AES có nhiều vòng hơn
D. Cả hai đều dùng SPN nhưng AES có khóa dài hơn
đáp án: B
Giải thích: B đúng vì DES chia đôi khối dữ liệu (Feistel) còn AES xử lý toàn bộ ma trận trạng thái cùng lúc (SPN); A sai vì ngược; C, D sai vì bản chất cấu trúc khác nhau hoàn toàn.

**7. Khái niệm "Confusion" (Nhầm lẫn) và "Diffusion" (Khuếch tán) của Claude Shannon được hiện thực hóa như thế nào trong AES?**
A. SubBytes tạo Diffusion, ShiftRows tạo Confusion
B. SubBytes tạo Confusion, ShiftRows & MixColumns tạo Diffusion
C. AddRoundKey tạo Confusion, SubBytes tạo Diffusion
D. Tất cả các bước đều tạo Confusion
đáp án: B
Giải thích: B đúng vì SubBytes là phép thế phi tuyến (Confusion), còn ShiftRows và MixColumns hoán vị/trộn dữ liệu để lan truyền bit (Diffusion); A, C, D sai do gán sai vai trò của các bước.

**8. Tại sao Triple-DES (3DES) thường sử dụng cấu trúc E-D-E (Mã hóa - Giải mã - Mã hóa) thay vì E-E-E?**
A. Để tăng tốc độ xử lý
B. Để tăng độ dài khóa lên gấp 3 lần
C. Để tương thích ngược với DES truyền thống khi dùng chung 1 khóa
D. Để chống lại tấn công Meet-in-the-middle
đáp án: C
Giải thích: C đúng vì nếu gán $K1=K2=K3$, cấu trúc E-D-E sẽ triệt tiêu nhau ($E-D$) trở thành 1 lần DES đơn; A sai vì tốc độ như nhau; B sai vì E-E-E cũng tăng khóa; D sai vì bản chất 3 lớp mới là thứ chống lại tấn công này chứ không phải thứ tự E/D.

**9. Chế độ hoạt động nào sau đây biến một mã khối (Block Cipher) hoạt động giống như một mã dòng (Stream Cipher) và cho phép truy cập ngẫu nhiên (random access) để giải mã?**
A. CBC (Cipher Block Chaining)
B. ECB (Electronic Code Book)
C. CTR (Counter Mode)
D. CFB (Cipher Feedback)
đáp án: C
Giải thích: C đúng vì CTR mã hóa bộ đếm để tạo dòng khóa (stream) và vì bộ đếm biết trước nên có thể giải mã bất kỳ vị trí nào (random access); A sai vì phải giải mã tuần tự; B sai vì là mã khối thuần túy; D sai vì phải giải mã tuần tự.

**10. Trong các thuật toán sau: Caesar, Vigenère, Playfair, Rail Fence. Thuật toán nào thuộc nhóm mã hóa Hoán vị (Transposition)?**
A. Vigenère
B. Caesar
C. Rail Fence
D. Playfair
đáp án: C
Giải thích: C đúng vì Rail Fence chỉ đảo vị trí ký tự mà không thay đổi ký tự; A, B, D sai vì chúng đều là các hệ mã Thay thế (Substitution).

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (Tư duy phản biện)

**11. Khi nói về chuẩn mã hóa AES, phát biểu nào sau đây là SAI?**
A. Kích thước khối của AES thay đổi tùy theo độ dài khóa (128, 192, 256 bits)
B. Số vòng lặp của AES thay đổi tùy theo độ dài khóa
C. AES hoạt động trên các byte dữ liệu trong trường hữu hạn $GF(2^8)$
D. Vòng cuối cùng của AES không có bước MixColumns
đáp án: A
Giải thích: A là phát biểu SAI vì kích thước khối của AES luôn cố định là 128 bits bất kể độ dài khóa là bao nhiêu; B, C, D là các phát biểu đúng về đặc tả kỹ thuật của AES.

**12. Phát biểu nào sau đây KHÔNG phải là ưu điểm của chế độ CTR (Counter Mode)?**
A. Có thể mã hóa song song nhiều khối
B. Có thể giải mã song song nhiều khối
C. Che giấu được mẫu lặp lại của bản rõ (không giống ECB)
D. Có khả năng tự phục hồi đồng bộ nếu bị mất một vài bit trên đường truyền (Self-synchronizing)
đáp án: D
Giải thích: D là phát biểu SAI (không phải ưu điểm) vì CTR yêu cầu đồng bộ chính xác bộ đếm, mất bit sẽ làm lệch bộ đếm dẫn đến giải mã sai toàn bộ phía sau; A, B, C là các ưu điểm chính xác của CTR.

**13. Trong cấu trúc Feistel (như DES), điều nào sau đây là KHÔNG bắt buộc đối với hàm $F$ (hàm vòng)?**
A. Hàm $F$ phải có khả năng đảo ngược (tính nghịch đảo) để giải mã
B. Hàm $F$ có thể là bất kỳ hàm nào chuyển đổi bit
C. Hàm $F$ nhận đầu vào là một nửa khối dữ liệu và khóa con
D. Đầu ra của hàm $F$ được XOR với nửa khối dữ liệu còn lại
đáp án: A
Giải thích: A là phát biểu SAI vì cấu trúc Feistel cho phép giải mã mà không cần hàm $F$ phải có nghịch đảo (do tính chất đối xứng của phép XOR $L_{i-1} = R_i \oplus F(...)$); B, C, D là các đặc điểm đúng của Feistel.

**14. Lý do chính khiến Double DES (2DES) bị loại bỏ không phải vì khóa ngắn, mà vì:**
A. Nó chậm hơn 3DES
B. Nó bị tấn công Meet-in-the-middle làm giảm độ an toàn xuống tương đương DES đơn
C. Nó yêu cầu kích thước khối lớn hơn 64 bits
D. Nó không hỗ trợ chế độ CBC
đáp án: B
Giải thích: B đúng vì tấn công này giúp kẻ thám mã chỉ cần $2^{57}$ bước thay vì $2^{112}$, khiến việc nhân đôi DES trở nên vô nghĩa về mặt bảo mật; A, C, D sai vì không phải nguyên nhân chính yếu về mặt an ninh.

**15. Tại sao phép cộng và nhân trong $GF(p)$ (với p là số nguyên tố) tạo thành một Trường (Field), trong khi trên tập số nguyên $Z$ thì không?**
A. Vì $Z$ không có phần tử đơn vị
B. Vì $Z$ không có tính giao hoán
C. Vì trong $Z$, phép nhân không có phần tử nghịch đảo (trừ 1 và -1)
D. Vì $Z$ là tập hợp vô hạn
đáp án: C
Giải thích: C đúng vì định nghĩa Trường yêu cầu mọi phần tử khác 0 phải có nghịch đảo nhân, điều này không thỏa mãn trên tập số nguyên thường; A, B, D sai vì Z có đơn vị (1), có giao hoán và tính hữu hạn không quyết định tính chất Trường.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (Chi tiết & Cẩn trọng)

**16. Chiều dài khóa HIỆU DỤNG (Effective key length) của thuật toán DES là bao nhiêu?**
A. 64 bits
B. 56 bits
C. 48 bits
D. 128 bits
đáp án: B
Giải thích: B đúng vì mặc dù đầu vào khóa là 64 bits, nhưng 8 bits được dùng để kiểm tra chẵn lẻ (parity), chỉ còn 56 bits thực sự tham gia mã hóa; A sai vì đó là kích thước đầu vào; C sai vì đó là kích thước khóa con (subkey); D sai vì đó là AES.

**17. Trong chế độ CBC, Vector khởi tạo (IV) cần phải đảm bảo tính chất gì để hệ thống an toàn?**
A. IV phải được giữ bí mật tuyệt đối như khóa
B. IV phải là một hằng số cố định cho mọi thông điệp
C. IV phải là ngẫu nhiên và không được sử dụng lại (nonce)
D. IV phải có độ dài gấp đôi độ dài khối
đáp án: C
Giải thích: C đúng vì nếu IV lặp lại hoặc đoán được, kẻ tấn công có thể suy luận thông tin (như tấn công CPA), IV không cần bí mật nhưng phải ngẫu nhiên; A sai vì IV thường được gửi kèm bản mã; B sai vì cố định IV sẽ làm lộ mẫu bản rõ giống nhau; D sai về kích thước.

**18. Thuật ngữ "Avalanche Effect" (Hiệu ứng dồn dập/tuyết lở) trong thiết kế mã khối nghĩa là gì?**
A. Một thay đổi nhỏ ở đầu vào tạo ra thay đổi nhỏ ở đầu ra để dễ kiểm soát
B. Một thay đổi nhỏ ở đầu vào (ví dụ 1 bit) phải tạo ra sự thay đổi lớn (khoảng 50% số bit) ở đầu ra
C. Thuật toán chạy nhanh hơn khi dữ liệu đầu vào lớn như tuyết lở
D. Lỗi trong quá trình truyền tin sẽ lan truyền phá hủy toàn bộ thông điệp
đáp án: B
Giải thích: B đúng vì đây là tính chất mong muốn của sự khuếch tán (diffusion) tốt; A sai vì đó là tuyến tính (yếu); C sai về định nghĩa; D sai vì đó là tính lan truyền lỗi (error propagation), một khái niệm khác.

**19. Đâu là sự khác biệt chính xác giữa "Mật mã học" (Cryptology) và "Mật mã" (Cryptography)?**
A. Chúng là từ đồng nghĩa
B. Mật mã học bao gồm cả Mật mã (tạo mã) và Thám mã (phá mã)
C. Mật mã học chỉ nghiên cứu về phá mã
D. Mật mã là lý thuyết, Mật mã học là thực hành
đáp án: B
Giải thích: B đúng theo định nghĩa slide 5, Cryptology là ngành bao trùm (umbrella term); A sai vì phạm vi khác nhau; C sai vì đó là Cryptanalysis; D sai vì định nghĩa không chính xác.

**20. Phát biểu "AES giải mã nhanh hơn mã hóa" là:**
A. Luôn đúng vì giải mã bỏ qua bước MixColumns
B. Sai, vì giải mã phức tạp hơn do phải thực hiện các phép nghịch đảo (Inverse MixColumns, v.v.)
C. Đúng, vì giải mã có thể thực hiện song song còn mã hóa thì không
D. Sai, tốc độ là y hệt nhau trong mọi trường hợp
đáp án: B
Giải thích: B đúng vì trong AES, các bước Inverse MixColumns và Inverse SubBytes tốn chi phí tính toán hơn một chút so với bước xuôi chiều, và cấu trúc AES không đối xứng hoàn toàn như Feistel; A sai vì vẫn phải MixColumns ngược; C sai vì AES mã hóa/giải mã đều xử lý khối độc lập (tùy mode).

---

### Phần 5: Bonus - Dạng "Thực chiến"

**21. Bạn cần mã hóa một ổ cứng chứa hệ điều hành, yêu cầu tốc độ truy xuất ngẫu nhiên (random read/write) cao. Chế độ nào phù hợp nhất?**
A. ECB
B. CBC
C. CTR
D. OFB
đáp án: C
Giải thích: C đúng vì CTR cho phép mã hóa/giải mã song song và truy cập trực tiếp vào bất kỳ khối nào mà không cần giải mã các khối trước đó; A không an toàn; B và D phải xử lý tuần tự hoặc không hỗ trợ random access tốt.

**22. Trong AES, đa thức $m(x) = x^8 + x^4 + x^3 + x + 1$ được gọi là:**
A. Đa thức sinh (Generator polynomial)
B. Đa thức bất quy tắc (Irreducible polynomial)
C. Đa thức nguyên thủy (Primitive polynomial)
D. Đa thức chia (Divisor polynomial)
đáp án: B
Giải thích: B đúng theo slide 67, đây là đa thức không thể phân tích thành nhân tử, dùng làm mô-đun cho phép nhân trong trường $GF(2^8)$; các tên gọi khác không chính xác trong ngữ cảnh này của tài liệu.

**23. Tấn công brute-force vào DES yêu cầu thử bao nhiêu khả năng trong trường hợp xấu nhất?**
A. $2^{64}$
B. $2^{56}$
C. $2^{48}$
D. $2^{128}$
đáp án: B
Giải thích: B đúng vì không gian khóa của DES là $2^{56}$; A sai do nhầm với kích thước khối; C sai do nhầm với khóa con; D sai do nhầm với AES.

**24. Tại sao S-box được coi là thành phần "phi tuyến" (non-linear) duy nhất trong DES?**
A. Vì nó dùng phép XOR
B. Vì đầu ra của nó không tỉ lệ tuyến tính với đầu vào (f(x+y) != f(x)+f(y))
C. Vì nó hoán vị các bit một cách ngẫu nhiên
D. Vì nó dùng bảng tra cứu cố định
đáp án: B
Giải thích: B đúng, đây là tính chất toán học quan trọng nhất để chống lại thám mã tuyến tính, S-box thực hiện ánh xạ phức tạp từ 6 bit xuống 4 bit; A sai vì XOR là tuyến tính; C sai vì đó là P-box; D sai vì bảng tra cứu vẫn có thể tuyến tính nếu nội dung bên trong tuyến tính.

**25. Kích thước của khóa vòng (Round Key) được cộng vào trạng thái trong mỗi vòng của AES-128 là bao nhiêu?**
A. 32 bits
B. 64 bits
C. 128 bits
D. 256 bits
đáp án: C
Giải thích: C đúng vì trong AES, khóa vòng luôn có kích thước bằng kích thước khối (State), tức là 128 bits, bất kể khóa gốc ban đầu dài bao nhiêu; A, B, D sai.
