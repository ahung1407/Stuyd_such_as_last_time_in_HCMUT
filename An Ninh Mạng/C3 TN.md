Chào bạn, đây là bộ câu hỏi trắc nghiệm chuyên sâu để ôn tập Chương 3 (Mã hóa khóa công khai) dựa trên tài liệu "C3.pdf", bao gồm các dạng câu hỏi bạn yêu cầu để nắm vững kiến thức từ lý thuyết số đến các thuật toán cụ thể.

### Dạng 1: Hiểu & Áp dụng

**1. Giả sử bạn chọn hai số nguyên tố $p = 3$ và $q = 11$ để tạo khóa RSA. Giá trị của hàm phi Euler $\phi(n)$ sẽ là bao nhiêu?**
A. 33
B. 14
C. 20
D. 30
đáp án: C
Giải thích: C đúng vì theo công thức tính hàm phi Euler với hai số nguyên tố, $\phi(n) = (p-1)(q-1) = (3-1)(11-1) = 2 \times 10 = 20$; A sai vì 33 là giá trị của $n$ ($p \times q$); B sai vì tính toán sai công thức; D sai vì không khớp với công thức $(p-1)(q-1)$.

**2. Trong thuật toán RSA, nếu Bob muốn gửi một thông điệp bí mật $M$ cho Alice sao cho chỉ Alice mới đọc được, Bob sẽ sử dụng khóa nào để mã hóa?**
A. Khóa riêng của Bob (PR_Bob)
B. Khóa công khai của Bob (PU_Bob)
C. Khóa riêng của Alice (PR_Alice)
D. Khóa công khai của Alice (PU_Alice)
đáp án: D
Giải thích: D đúng vì để đảm bảo tính bí mật, người gửi phải dùng khóa công khai của người nhận (Alice) để mã hóa, và chỉ khóa riêng của Alice mới giải mã được; A sai vì dùng khóa riêng của người gửi là để tạo chữ ký số; B sai vì dùng khóa công khai của chính mình thì không gửi cho người khác được; C sai vì khóa riêng là bí mật tuyệt đối của Alice, Bob không thể biết để sử dụng.

**3. Trong thuật toán trao đổi khóa Diffie-Hellman, nếu số nguyên tố $q = 353$, căn nguyên thủy $\alpha = 3$, Alice chọn khóa riêng $X_A = 97$. Alice sẽ gửi giá trị công khai $Y_A$ nào cho Bob?**
A. $Y_A = 97^3 \mod 353$
B. $Y_A = 3^{97} \mod 353$
C. $Y_A = 3 \times 97 \mod 353$
D. $Y_A = 353^{97} \mod 3$
đáp án: B
Giải thích: B đúng vì công thức tính khóa công khai trong Diffie-Hellman là $Y_A = \alpha^{X_A} \mod q$, tương ứng với $3^{97} \mod 353$; A sai vì bị ngược cơ số và số mũ; C sai vì đây là phép nhân thông thường không phải lũy thừa; D sai vì sai công thức hoàn toàn.

### Dạng 2: Tổng hợp & Liên kết

**4. Tại sao mã hóa khóa công khai ra đời lại được coi là cuộc cách mạng giải quyết được hạn chế của mã hóa đối xứng?**
A. Vì nó có tốc độ mã hóa nhanh hơn gấp nhiều lần so với mã hóa đối xứng.
B. Vì nó loại bỏ hoàn toàn nhu cầu sử dụng mã hóa đối xứng trong thực tế.
C. Vì nó giải quyết được hai vấn đề khó khăn là phân phối khóa bí mật và chữ ký số.
D. Vì nó sử dụng khóa có kích thước nhỏ hơn để đạt cùng độ an toàn.
đáp án: C
Giải thích: C đúng vì tài liệu nêu rõ mã hóa công khai giải quyết vấn đề làm thế nào truyền thông an toàn để truyền khóa bí mật (phân phối khóa) và xác minh thông điệp (chữ ký số); A sai vì tài liệu khẳng định mã hóa công khai tính toán chậm hơn nhiều; B sai vì mã hóa công khai thường dùng để bổ sung chứ không thay thế hoàn toàn mã hóa khóa bí mật; D sai vì mã hóa công khai cần kích thước khóa lớn hơn rất nhiều (ví dụ 1024 bits) so với đối xứng để đảm bảo an toàn.

**5. Mối quan hệ giữa bài toán Logarit rời rạc và các hệ mã khóa công khai được mô tả như thế nào?**
A. Logarit rời rạc là cơ sở an toàn cho RSA.
B. Tính lũy thừa modulo thì dễ, nhưng tính logarit rời rạc ngược lại là rất khó, đây là cơ sở cho Diffie-Hellman và El Gamal.
C. Logarit rời rạc giúp tìm ra số nguyên tố lớn nhanh chóng cho thuật toán Miller-Rabin.
D. Bài toán này chứng minh rằng mọi số nguyên tố đều có căn nguyên thủy.
đáp án: B
Giải thích: B đúng vì tài liệu xác nhận lũy thừa là tương đối dễ dàng nhưng tìm kiếm logarit rời rạc là vấn đề khó khăn, và Diffie-Hellman/El Gamal dựa trên độ khó này; A sai vì RSA dựa trên bài toán phân tích thừa số nguyên tố ($n=p.q$); C sai vì không liên quan đến kiểm tra nguyên tố; D sai vì đây là định lý toán học, không phải mối quan hệ về an ninh mật mã.

### Dạng 3: Tìm điểm sai/ngoại lệ

**6. Khi nói về kiểm tra tính nguyên tố bằng thuật toán Miller-Rabin, nhận định nào sau đây là SAI?**
A. Nếu thuật toán trả về "composite" (hợp số), thì số đó chắc chắn là hợp số.
B. Nếu thuật toán trả về "maybe prime" (có thể là nguyên tố), thì số đó chắc chắn là số nguyên tố.
C. Đây là thuật toán dựa trên xác suất.
D. Cơ hội để một hợp số đánh lừa thuật toán trong một vòng lặp là nhỏ hơn 1/4.
đáp án: B
Giải thích: B là nhận định sai vì tài liệu ghi rõ nếu kết quả là "maybe prime" thì số đó có thể là nguyên tố hoặc là giả nguyên tố (pseudoprime), không chắc chắn 100%; A đúng vì kết quả hợp số là chắc chắn; C đúng vì đây là kiểm tra tính nguyên tố theo xác suất; D đúng vì tài liệu nêu xác suất phát hiện giả nguyên tố sai là $< 1/4$ cho một vòng lặp.

**7. Điều nào sau đây KHÔNG phải là đặc điểm của thuật toán RSA?**
A. Độ an toàn dựa trên khó khăn của việc phân tích một số lớn ra thừa số nguyên tố.
B. Khóa công khai $e$ và khóa bí mật $d$ có mối quan hệ $e.d \equiv 1 \mod \phi(n)$.
C. Cần chọn số nguyên tố $p, q$ nhỏ để tăng tốc độ tính toán.
D. Thông điệp $M$ phải có giá trị số nhỏ hơn $n$.
đáp án: C
Giải thích: C là điểm sai (ngoại lệ) vì tài liệu yêu cầu $p$ và $q$ phải là hai số nguyên tố lớn (khoảng 1024 bits trở lên) để đảm bảo an toàn trước tấn công vét cạn hoặc phân tích thừa số; A đúng vì đây là cơ sở an toàn của RSA; B đúng theo công thức tạo khóa; D đúng vì thuật toán yêu cầu $0 \le M < n$.

### Dạng 4: Bẫy từ ngữ

**8. Trong ngữ cảnh phân phối khóa, tấn công "Man-in-the-middle" (Người đứng giữa) là mối đe dọa nghiêm trọng đối với giao thức nào nếu không có xác thực?**
A. Chỉ riêng RSA.
B. Chỉ riêng El Gamal.
C. Giao thức trao đổi khóa Diffie-Hellman và Phân phối khóa bí mật đơn giản của Merkle.
D. Không giao thức nào bị ảnh hưởng nếu khóa đủ dài.
đáp án: C
Giải thích: C đúng vì tài liệu nhấn mạnh rằng giao thức Diffie-Hellman và giao thức của Merkle đều có nguy cơ bị tấn công "man in the middle" do thiếu xác thực danh tính các bên; A và B sai vì đây là thuật toán mã hóa, còn lỗ hổng này nằm ở giao thức trao đổi/phân phối khóa không xác thực; D sai vì độ dài khóa không ngăn được kẻ đứng giữa chặn và giả mạo gói tin trao đổi khóa ban đầu.

**9. Phân biệt "Khóa công khai" (Public Key) và "Chứng chỉ khóa công khai" (Public-key Certificate). Chứng chỉ khác khóa công khai ở điểm mấu chốt nào?**
A. Chứng chỉ chính là khóa công khai được mã hóa.
B. Chứng chỉ liên kết nhận dạng của người dùng với khóa công khai và có chữ ký của CA.
C. Chứng chỉ là khóa bí mật được công bố.
D. Chứng chỉ giúp tính toán nhanh hơn khóa công khai.
đáp án: B
Giải thích: B đúng vì tài liệu định nghĩa chứng chỉ liên kết ID với khóa công khai và được ký bởi tổ chức tin cậy (CA) để chống giả mạo; A sai vì chứng chỉ chứa khóa công khai (dạng rõ) cùng chữ ký chứ không phải là khóa đã bị mã hóa; C sai vì khóa bí mật không bao giờ được công bố; D sai vì chứng chỉ dùng cho xác thực và quản lý, không làm tăng tốc độ tính toán mã hóa.

### Dạng 5: Vị trí thông tin & Định nghĩa

**10. Định lý Fermat nhỏ (Fermat's Little Theorem) được phát biểu như thế nào trong tài liệu?**
A. $a^{p-1} \equiv 1 \pmod p$ nếu $p$ là số nguyên tố và gcd(a,p)=1.
B. $a^{\phi(n)} \equiv 1 \pmod n$ với mọi hợp số $n$.
C. $a^p \equiv a \pmod {p-1}$.
D. $n = p \times q$.
đáp án: A
Giải thích: A đúng vì tài liệu mục "Định lý Fermat" ghi công thức $a^{p-1} \equiv 1 \pmod p$ khi $p$ là số nguyên tố và $a$ không chia hết cho $p$; B sai vì đây là định lý Euler (tổng quát hơn); C sai công thức gốc ($a^p \equiv a \pmod p$ mới đúng); D sai vì đây là công thức tính module RSA.

**11. Hai số $a$ và $b$ được gọi là "nguyên tố cùng nhau" (relatively prime) khi nào?**
A. Khi cả a và b đều là số nguyên tố.
B. Khi ước số chung lớn nhất (GCD) của chúng bằng 1.
C. Khi tổng của chúng là một số nguyên tố.
D. Khi $a$ chia hết cho $b$ hoặc ngược lại.
đáp án: B
Giải thích: B đúng vì tài liệu định nghĩa hai số là nguyên tố cùng nhau nếu không có ước số chung nào lớn hơn 1, tức là GCD(a,b)=1; A sai vì ví dụ 8 và 15 là nguyên tố cùng nhau dù cả hai đều là hợp số; C sai vì không liên quan đến tổng; D sai vì nếu chia hết thì GCD sẽ khác 1.

**12. Theo tài liệu, để chống lại tấn công "Được chọn bản mã" (Chosen Ciphertext Attack - CCA) trong RSA, biện pháp đối phó nào được đề xuất?**
A. Tăng kích thước khóa lên gấp đôi.
B. Thay đổi bản rõ trước khi mã hóa dùng OAEP (Optimal Asymmetric Encryption Padding).
C. Sử dụng thuật toán Diffie-Hellman thay thế.
D. Giữ bí mật khóa công khai $e$.
đáp án: B
Giải thích: B đúng vì tài liệu trong phần an toàn của RSA đề xuất biện pháp đối phó với CCA là thêm ngẫu nhiên vào bản rõ hoặc dùng OAEP; A sai vì tăng kích thước khóa chống tấn công vét cạn hoặc phân tích toán học là chủ yếu; C sai vì đây là thay đổi giải pháp chứ không phải biện pháp bảo vệ RSA; D sai vì khóa công khai theo định nghĩa là phải công khai.
