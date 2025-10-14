Dưới đây là giải đáp chi tiết cho các câu hỏi trắc nghiệm bạn đã cung cấp:

---

### II. Câu hỏi trắc nghiệm

**1. Hệ mã Cesar mã hóa x[0; 25] thành y = x + 3 mod 26. Hãy cho biết nếu giá trị bản rõ là 10 thì giá trị bản mã tương ứng là:**

*   Công thức mã hóa: $y = x + 3 \pmod{26}$
*   Bản rõ ($x$) = 10
*   Bản mã ($y$) = $10 + 3 \pmod{26}$ = $13 \pmod{26}$ = 13

**Đáp án: c. 13**

---

**2. Hệ mã Affine mã hóa x[0; 25] thành y = 3x + 5 mod 26. Hãy cho biết nếu giá trị bản mã là 10 thì giá trị bản rõ tương ứng là:**

*   Công thức mã hóa: $y = 3x + 5 \pmod{26}$
*   Bản mã ($y$) = 10
*   Chúng ta cần tìm $x$ sao cho $10 = 3x + 5 \pmod{26}$.
*   Trừ 5 khỏi cả hai vế: $10 - 5 = 3x \pmod{26}$
*   $5 = 3x \pmod{26}$
*   Bây giờ chúng ta cần tìm nghịch đảo của 3 theo modulo 26. Tức là tìm $3^{-1} \pmod{26}$.
    *   Ta có $3 \times 9 = 27 \equiv 1 \pmod{26}$. Vậy $3^{-1} \equiv 9 \pmod{26}$.
*   Nhân cả hai vế với 9: $5 \times 9 = 3x \times 9 \pmod{26}$
*   $45 = x \pmod{26}$
*   $x = 45 \pmod{26}$
*   $x = 19 \pmod{26}$
*   Vậy $x = 19$.

**Đáp án: c. 19**

---
### Câu hỏi 3
Đối với mã hóa DES, trong các phát biểu sau phát biểu nào là **sai**?

a. DES sử dụng khóa có chiều dài 64 bits.  
b. Dữ liệu được mã hóa trong các khối có chiều dài 64 bits.  
c. S-box là một hàm thay thế không tuyến tính làm tăng độ phức tạp của phép biến đổi.  
d. DES dùng bộ tạo khóa để tạo ra các khóa con dùng cho mỗi vòng và chúng có chiều dài là 48 bits.  

---

### Phân tích
- **b. Dữ liệu được mã hóa trong các khối có chiều dài 64 bits:** ✅ Đúng. DES mã hóa dữ liệu trong các khối 64-bit.  
- **c. S-box là một hàm thay thế không tuyến tính...:** ✅ Đúng. S-box cung cấp tính *Confusion* (Nhầm lẫn). Đây là một hàm thay thế phi tuyến tính, bảo mật của DES phụ thuộc nhiều vào S-box.  
- **d. DES dùng bộ tạo khóa để tạo ra các khóa con dùng cho mỗi vòng và chúng có chiều dài là 48 bits:** ✅ Đúng. Bộ tạo khóa (Key Generation) tạo ra 16 khóa con \(K_i\), mỗi khóa dài 48 bit dùng trong hàm \(F\) của mỗi vòng.  
- **a. DES sử dụng khóa có chiều dài 64 bits:** ❌ Sai. DES có khóa dài 64 bit, nhưng chỉ **56 bit** được dùng thực sự để mã hóa, 8 bit còn lại dùng làm bit kiểm tra chẵn lẻ. Chiều dài khóa hiệu dụng = **56 bits**.  

---

### ✅ Đáp án: a. DES sử dụng khóa có chiều dài 64 bits

**4. Hệ mã Double DES(2DES) không an toàn do tấn công gì?**

*   Double DES (2DES) không an toàn trước tấn công "meet-in-the-middle".
*   Tấn công "meet-in-the-middle" giảm độ phức tạp tìm khóa từ $2^{2k}$ xuống còn khoảng $2^k$, làm cho 2DES (với hai khóa 56 bit) có độ bảo mật chỉ tương đương với một DES có khóa 57 bit, không mạnh hơn đáng kể so với DES đơn lẻ.

**Đáp án: b. Tấn công “meet in the midle”**

---

**5. Chế độ hoạt động nào sau đây mã hóa các khối một cách riêng biệt?**

*   a. ECB (Electronic Codebook): Mỗi khối plaintext được mã hóa độc lập.
*   b. CBC (Cipher Block Chaining): Các khối liên kết với nhau thông qua XOR với khối ciphertext trước.
*   c. CFB (Cipher Feedback): Luồng khóa được tạo dựa trên ciphertext trước đó.
*   d. OFB (Output Feedback): Luồng khóa được tạo độc lập với plaintext/ciphertext, nhưng các giá trị đầu vào cho bộ mã hóa khối phụ thuộc vào đầu ra trước đó.

Chế độ duy nhất mã hóa hoàn toàn độc lập từng khối là ECB.

**Đáp án: a. ECB**