Để "master" hoàn toàn chương này, bạn không cần làm hàng trăm câu hỏi lặp lại, mà cần làm khoảng **30-40 câu hỏi chất lượng cao** bao phủ đủ các ngóc ngách (tính toán, lý thuyết, bẫy).

Dưới đây là bộ **20 câu hỏi tinh lọc nhất** được chia theo 4 cấp độ tư duy bạn yêu cầu. Nếu bạn làm đúng và hiểu hết phần giải thích của 20 câu này, bạn đã nắm chắc 90% kiến thức.

---

### Phần 1: Dạng câu hỏi "Hiểu & Áp dụng" (Tính toán & Cơ chế)

**1. Trong thuật toán RSA, giả sử chọn p=5, q=11. Giá trị nào sau đây là kết quả đúng của hàm phi Euler $\phi(n)$?**
A. 55
B. 40
C. 50
D. 16
đáp án: B
Giải thích: B đúng vì với n=p.q thì $\phi(n) = (p-1)(q-1) = (5-1)(11-1) = 4.10 = 40$; A sai vì đó là giá trị của n; C sai vì tính nhầm thành (p)(q-1); D sai vì tính sai công thức.

**2. Để tìm khóa bí mật d trong RSA, ta phải giải phương trình đồng dư nào sau đây?**
A. $e \times d \equiv 1 \pmod n$
B. $e \times d \equiv 1 \pmod{\phi(n)}$
C. $e + d \equiv 1 \pmod{\phi(n)}$
D. $e \times d \equiv 0 \pmod n$
đáp án: B
Giải thích: B đúng vì d là nghịch đảo nhân của e theo modulo $\phi(n)$; A sai vì không dùng modulo n để tìm khóa; C sai vì đây là phép nhân chứ không phải cộng; D sai vì tích phải đồng dư với 1 (nghịch đảo).

**3. Trong trao đổi khóa Diffie-Hellman, giả sử số nguyên tố q=11, căn nguyên thủy $\alpha=2$. Nếu A chọn khóa riêng $X_A=3$, khóa công khai $Y_A$ gửi cho B là bao nhiêu?**
A. 6
B. 5
C. 8
D. 9
đáp án: C
Giải thích: C đúng vì công thức tính khóa công khai là $Y_A = \alpha^{X_A} \mod q = 2^3 \mod 11 = 8$; A sai vì nhầm phép nhân $2 \times 3$; B sai vì tính toán sai; D sai vì nhầm lẫn giá trị.

**4. Một hệ thống RSA có n=35, e=5. Bản mã C nhận được là 10. Biết d=5. Bản rõ M là bao nhiêu?**
A. 15
B. 5
C. 20
D. 25
đáp án: B
Giải thích: B đúng vì công thức giải mã là $M = C^d \mod n = 10^5 \mod 35$, ta tách $10^5 = 10^2 \cdot 10^2 \cdot 10 = 100 \cdot 100 \cdot 10$, mà $100 \equiv 30 \equiv -5 \mod 35$, nên $10^5 \equiv (-5)(-5)(10) = 250 = 7 \cdot 35 + 5 \equiv 5$; các đáp án khác sai do tính toán lũy thừa modulo không chính xác.

**5. Trong hệ mã ElGamal, tại sao bản mã luôn dài gấp đôi bản rõ?**
A. Vì nó sử dụng hai khóa công khai để mã hóa.
B. Vì bản mã bao gồm cả thông điệp đã mã hóa và một giá trị ngẫu nhiên $K$ để phục hồi khóa phiên.
C. Vì bản mã là cặp $(C_1, C_2)$ với $C_1 = g^k \mod p$ và $C_2 = M \times (Y_B)^k \mod p$.
D. Vì thuật toán này chạy hai vòng lặp mã hóa để tăng bảo mật.
đáp án: C
Giải thích: C đúng vì đặc trưng của ElGamal là sinh ra cặp giá trị (tiền tố ngẫu nhiên và thông điệp che giấu); A sai vì chỉ dùng 1 khóa công khai của người nhận; B sai vì không gửi trực tiếp K; D sai vì không phải chạy lặp mà là cấu trúc toán học sinh ra 2 thành phần.

---

### Phần 2: Dạng câu hỏi "Tổng hợp & Liên kết" (So sánh & Logic hệ thống)

**6. Sự khác biệt cơ bản nhất về cơ sở toán học đảm bảo độ an toàn giữa RSA và Diffie-Hellman là gì?**
A. RSA dựa trên bài toán logarit rời rạc, Diffie-Hellman dựa trên phân tích thừa số.
B. RSA dựa trên phân tích thừa số nguyên tố, Diffie-Hellman dựa trên logarit rời rạc.
C. Cả hai đều dựa trên bài toán phân tích thừa số nguyên tố.
D. Cả hai đều dựa trên bài toán logarit rời rạc.
đáp án: B
Giải thích: B đúng vì RSA dựa vào việc khó tách n thành p và q, còn DH dựa vào việc khó tìm x khi biết $g^x \mod p$; A sai vì bị ngược; C và D sai vì hai thuật toán dựa trên hai bài toán khó khác nhau.

**7. Tại sao trong thực tế (như HTTPS), người ta thường dùng RSA kết hợp với AES (mã hóa lai) thay vì chỉ dùng RSA?**
A. Vì RSA không an toàn bằng AES.
B. Vì RSA chỉ mã hóa được các số nhỏ hơn n.
C. Vì RSA có tốc độ tính toán chậm hơn AES rất nhiều (khoảng 1000 lần).
D. Vì RSA không hỗ trợ chữ ký số.
đáp án: C
Giải thích: C đúng vì mã hóa bất đối xứng tốn nhiều tài nguyên tính toán lũy thừa lớn nên chỉ dùng để trao đổi khóa phiên, sau đó dùng AES (đối xứng) để mã hóa dữ liệu cho nhanh; A sai vì RSA an toàn nếu khóa đủ dài; B sai vì có thể chia khối dữ liệu nhưng vẫn chậm; D sai vì RSA có hỗ trợ chữ ký số.

**8. Vai trò của CA (Certificate Authority) trong hạ tầng khóa công khai liên quan mật thiết nhất đến việc ngăn chặn loại tấn công nào?**
A. Tấn công vét cạn (Brute force).
B. Tấn công kênh kề (Side-channel attack).
C. Tấn công người đứng giữa (Man-in-the-Middle).
D. Tấn công phân tích bản mã (Chosen ciphertext attack).
đáp án: C
Giải thích: C đúng vì CA xác thực mối liên kết giữa danh tính chủ sở hữu và khóa công khai, ngăn kẻ giả mạo tráo đổi khóa công khai; A sai vì CA không làm tăng độ khó toán học; B sai vì CA không can thiệp vào quá trình giải mã phần cứng; D sai vì CA không thay đổi thuật toán padding.

**9. Mối liên hệ giữa định lý Euler và thuật toán RSA nằm ở đâu?**
A. Định lý Euler được dùng để chọn số nguyên tố p và q.
B. Định lý Euler chứng minh rằng $M^{ed} \equiv M \pmod n$ giúp quá trình giải mã khôi phục được bản rõ.
C. Định lý Euler dùng để tính toán modulo $n$ nhanh hơn.
D. Định lý Euler xác định độ dài khóa cần thiết.
đáp án: B
Giải thích: B đúng vì cốt lõi của RSA dựa trên $M^{\phi(n)} \equiv 1$, từ đó suy ra $M^{ed} = M^{1+k\phi(n)} \equiv M$; A sai vì p, q được chọn ngẫu nhiên; C sai vì tính toán nhanh dùng thuật toán bình phương và nhân; D sai vì độ dài khóa do tiêu chuẩn an toàn quy định.

**10. Nếu Alice muốn gửi một thông điệp vừa được MÃ HÓA (bí mật) vừa được KÝ SỐ (xác thực) cho Bob bằng RSA, thứ tự thực hiện đúng là gì?**
A. Alice mã hóa bằng khóa công khai của Bob, sau đó ký bằng khóa riêng của Alice.
B. Alice ký bằng khóa riêng của Alice, sau đó mã hóa kết quả bằng khóa công khai của Bob.
C. Alice ký bằng khóa công khai của Bob, sau đó mã hóa bằng khóa riêng của Alice.
D. Alice mã hóa bằng khóa riêng của Alice, sau đó ký bằng khóa công khai của Bob.
đáp án: B
Giải thích: B đúng vì theo nguyên tắc "ký trước, gói sau" để bảo vệ chữ ký bên trong lớp mã hóa và người nhận giải mã xong mới thấy chữ ký để xác thực; A cũng có thể thực hiện nhưng B là chuẩn mực an toàn hơn để tránh việc chữ ký bị tách rời hoặc tấn công giả mạo chữ ký trên bản mã; C và D sai logic sử dụng khóa (không ai ký bằng khóa công khai).

---

### Phần 3: Dạng câu hỏi "Tìm điểm sai/ngoại lệ" (Tư duy phản biện)

**11. Điều nào sau đây KHÔNG phải là yêu cầu bắt buộc khi chọn khóa công khai e trong RSA?**
A. $1 < e < \phi(n)$
B. e phải là số nguyên tố.
C. $\text{gcd}(e, \phi(n)) = 1$
D. e thường được chọn là số nhỏ (như 3, 17, 65537) để mã hóa nhanh.
đáp án: B
Giải thích: B đúng là điểm sai vì e không bắt buộc phải là số nguyên tố (ví dụ e=9 vẫn được nếu $\phi(n)$ không chia hết cho 3), điều kiện tiên quyết là e phải NGUYÊN TỐ CÙNG NHAU với $\phi(n)$; A, C, D đều là các phát biểu đúng về tính chất của e.

**12. Phát biểu nào sau đây SAI về hàm phi Euler $\phi(n)$?**
A. Nếu p là nguyên tố thì $\phi(p) = p-1$.
B. Hàm phi Euler có tính chất nhân: $\phi(mn) = \phi(m)\phi(n)$ với mọi m, n.
C. Nếu p, q là hai số nguyên tố khác nhau thì $\phi(pq) = (p-1)(q-1)$.
D. $\phi(1) = 1$.
đáp án: B
Giải thích: B đúng là điểm sai vì hàm phi Euler chỉ có tính chất nhân khi m và n là NGUYÊN TỐ CÙNG NHAU ($\text{gcd}(m,n)=1$), nếu không thì công thức sai; A, C, D đều là các tính chất đúng.

**13. Trong tấn công RSA, phương pháp nào sau đây KHÔNG nhắm trực tiếp vào việc phân tích thừa số n?**
A. Tấn công thời gian (Timing attack).
B. Tấn công sàng trường số tổng quát (General Number Field Sieve).
C. Tấn công Pollard's rho.
D. Tấn công chia thử (Trial division).
đáp án: A
Giải thích: A đúng là ngoại lệ vì tấn công thời gian là tấn công kênh kề (side-channel), dựa vào thời gian giải mã để đoán khóa riêng d chứ không cố gắng phân tích n thành p và q về mặt toán học; B, C, D đều là các thuật toán toán học để phân tích thừa số.

**14. Đâu là điểm yếu chí mạng nếu sử dụng RSA với e=3 mà KHÔNG dùng đệm (padding) khi gửi cùng một tin nhắn cho 3 người nhận khác nhau?**
A. Kẻ tấn công có thể dùng thuật toán Brute Force để tìm d.
B. Kẻ tấn công có thể dùng Định lý phần dư Trung Hoa (CRT) để khôi phục trực tiếp bản rõ M.
C. Kẻ tấn công có thể phân tích n dễ dàng hơn.
D. Tốc độ giải mã sẽ bị chậm đi 3 lần.
đáp án: B
Giải thích: B đúng vì đây là tấn công "Broadcast Attack" (quảng bá), nếu $C_1 = M^3 \mod n_1, C_2 = M^3 \mod n_2, C_3 = M^3 \mod n_3$, ta có thể tính được $M^3$ thường và căn bậc 3 để ra M; A, C, D sai vì không liên quan đến lỗ hổng cụ thể này của e=3.

**15. Trường hợp nào sau đây khiến phép tạo khóa RSA bị THẤT BẠI (không tính được d)?**
A. Chọn p và q quá lớn.
B. Chọn e sao cho e và $\phi(n)$ có ước chung lớn nhất khác 1.
C. Chọn n là số chẵn.
D. Chọn e lớn hơn $\phi(n)$.
đáp án: B
Giải thích: B đúng vì điều kiện tồn tại nghịch đảo modulo $d = e^{-1} \mod \phi(n)$ là $\text{gcd}(e, \phi(n))$ phải bằng 1, nếu khác 1 thì không tồn tại d; A sai vì p, q càng lớn càng tốt; C sai vì n=p.q luôn là số lẻ (trừ khi chọn số 2, nhưng thực tế p, q lớn đều lẻ); D sai vì e có thể lớn hơn $\phi(n)$ miễn là nguyên tố cùng nhau, nhưng thường chọn nhỏ để tối ưu.

---

### Phần 4: Dạng câu hỏi "Bẫy từ ngữ" (Chi tiết nhỏ dễ nhầm)

**16. Trong thuật toán RSA, để MÃ HÓA một thông điệp gửi cho Bob, Alice sử dụng:**
A. Khóa riêng của Alice.
B. Khóa công khai của Alice.
C. Khóa riêng của Bob.
D. Khóa công khai của Bob.
đáp án: D
Giải thích: D đúng vì muốn gửi bí mật cho ai thì phải dùng "ổ khóa" (khóa công khai) của người đó để khóa lại; A sai (dùng để ký); B sai (vô nghĩa); C sai (Alice không thể có khóa riêng của Bob).

**17. Biểu thức nào sau đây là SAI khi nói về quan hệ giữa các thành phần trong RSA?**
A. $M < n$
B. $1 < e < \phi(n)$
C. $d = e^{-1} \mod n$
D. $n = p \times q$
đáp án: C
Giải thích: C là bẫy từ ngữ sai vì d là nghịch đảo của e theo modulo $\phi(n)$, KHÔNG PHẢI modulo n. Đây là lỗi sinh viên hay gặp nhất; A, B, D đều là các điều kiện đúng.

**18. Thuật toán kiểm tra tính nguyên tố Miller-Rabin trả về kết quả là "Composite" (Hợp số). Điều này có nghĩa là:**
A. Số đó chắc chắn là hợp số.
B. Số đó có xác suất 75% là hợp số.
C. Số đó có thể là số nguyên tố.
D. Thuật toán bị lỗi.
đáp án: A
Giải thích: A đúng vì Miller-Rabin là thuật toán xác suất nhưng kết luận "Hợp số" là chắc chắn đúng (deterministic for composite), chỉ có kết luận "Nguyên tố" mới là xác suất (có thể là giả nguyên tố); B, C sai vì đã vi phạm tính chất thuật toán; D sai.

**19. Khái niệm "Chữ ký số" (Digital Signature) trong mật mã khóa công khai đảm bảo tính chất nào?**
A. Tính bí mật (Confidentiality).
B. Tính xác thực (Authenticity) và Tính toàn vẹn (Integrity).
C. Tính sẵn sàng (Availability).
D. Chỉ đảm bảo tính xác thực, không đảm bảo toàn vẹn.
đáp án: B
Giải thích: B đúng vì chữ ký số chứng minh ai là người gửi (xác thực) và chứng minh nội dung không bị sửa đổi (toàn vẹn); A là bẫy vì chữ ký số không mã hóa nội dung nên ai cũng đọc được (không bí mật); C không liên quan; D sai vì chữ ký sẽ sai lệch nếu dữ liệu thay đổi dù chỉ 1 bit.

**20. Khi nói về "Căn nguyên thủy" (Primitive Root) $\alpha$ của một số nguyên tố q, điều này có nghĩa là:**
A. $\alpha$ là số nguyên tố nhỏ nhất là ước của q.
B. $\alpha^q \equiv 1 \pmod q$.
C. Các lũy thừa của $\alpha$ từ 1 đến q-1 sinh ra tất cả các số nguyên từ 1 đến q-1 (theo một hoán vị nào đó).
D. $\alpha$ là căn bậc hai của q.
đáp án: C
Giải thích: C đúng định nghĩa toán học của căn nguyên thủy trong lý thuyết số, tạo thành một nhóm cyclic đầy đủ; A, D sai định nghĩa; B sai vì theo Fermat nhỏ thì số nào không chia hết cho q cũng thỏa mãn điều này, không riêng gì căn nguyên thủy.
