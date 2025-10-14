Chào bạn, tôi sẽ trả lời các câu hỏi bài tập của bạn dựa trên thông tin trong tài liệu.

### III. Bài tập

#### 1. Xem xét một hàm băm. Thông điệp M là một chuỗi các số thập phân $M = (a_1, a_2, ..., a_i)$. Giá trị băm $h$ được tính toán là:

#### a. Hàm băm $h = \sum_{i=1}^{t} a_i \pmod{n}$ này có thỏa mãn các yêu cầu của hàm băm được liệt kê trong mục 11.4 (). Giải thích câu trả lời.

Hàm băm này **không thỏa mãn** các yêu cầu cơ bản của một hàm băm mật mã.

Các yêu cầu cơ bản của hàm băm mật mã bao gồm:
1.  **Tính kháng tiền ảnh (Preimage Resistance)**: Cho $h$, không khả thi để tìm $x$ mà $H(x) = h$.
2.  **Tính kháng tiền ảnh thứ hai (Second Preimage Resistance)**: Cho $x$, không khả thi để tìm $y$ mà $H(y) = H(x)$.
3.  **Tính kháng va chạm (Collision Resistance)**: Không khả thi để tìm $x, y$ mà $H(y) = H(x)$.

**Giải thích:**

1.  **Vi phạm tính kháng tiền ảnh:** Nếu cho trước giá trị băm $h$, ta dễ dàng tìm ra một thông điệp $M$ có giá trị băm là $h$. Ví dụ, chọn $a_1 = h$, và tất cả các giá trị $a_i$ khác bằng 0. Khi đó $h \equiv a_1 \pmod{n}$, yêu cầu này bị vi phạm.
2.  **Vi phạm tính kháng tiền ảnh thứ hai và tính kháng va chạm:** Hàm này dựa trên phép cộng modulo. Nếu ta có một thông điệp $M_1 = (a_1, a_2, ..., a_t)$, ta có thể dễ dàng tạo ra một thông điệp $M_2$ khác có cùng giá trị băm bằng cách phân phối lại giá trị (ví dụ: thay $a_1$ bằng $a_1+c$ và $a_2$ bằng $a_2-c$) hoặc bằng cách thay một phần tử $a_i$ bằng $a_i + n$. Do đó, việc tìm kiếm va chạm là rất dễ dàng.

#### b. Tương tự như câu (a) cho hàm băm: $h = \sum_{i=1}^{t} (a_i)^2 \pmod{n}$.

Hàm băm này **không thỏa mãn** các yêu cầu cơ bản của một hàm băm mật mã.

**Giải thích:**

Mặc dù việc sử dụng phép bình phương có thể làm cho việc tìm kiếm tiền ảnh khó hơn một chút so với phép cộng đơn thuần, nhưng cơ chế cốt lõi vẫn còn nhiều lỗ hổng nghiêm trọng:

1.  **Vi phạm tính kháng va chạm (Collision Resistance)**: Hàm này thiếu tính khuếch tán (diffusion) và nhầm lẫn (confusion) cần thiết của mật mã hiện đại. Việc thay đổi thứ tự các phần tử trong chuỗi $M$ không làm thay đổi giá trị băm (ví dụ: $M_1 = (1, 2)$ và $M_2 = (2, 1)$ có cùng giá trị băm). Hơn nữa, nếu thay thế $a_i$ bằng $a_i' = n - a_i$, thì $(a_i')^2 \equiv (-a_i)^2 \equiv (a_i)^2 \pmod{n}$, tạo ra các va chạm dễ dàng.
2.  **Thiếu tính phụ thuộc phức tạp:** Giá trị băm không phụ thuộc phức tạp lên tất cả các bit của thông điệp. Các thay đổi trong thông điệp chỉ ảnh hưởng đơn lẻ đến một phần trong tổng modulo, khiến cho việc giả mạo hoặc tìm kiếm va chạm dễ dàng hơn so với các hàm băm dựa trên mật mã mạnh như SHA.

#### c. Tính toán giá trị băm của hàm băm câu (b) cho $M = (189, 632, 900, 722, 349)$ và $n = 989$.

Hàm băm cần tính là $h = \sum_{i=1}^{5} (a_i)^2 \pmod{989}$.

1.  $189^2 = 35721$
2.  $632^2 = 399424$
3.  $900^2 = 810000$
4.  $722^2 = 521284$
5.  $349^2 = 121801$

Tổng $S$: $35721 + 399424 + 810000 + 521284 + 121801 = 1888230$.

Tính $h = 1888230 \pmod{989}$:

$$1888230 = 1909 \times 989 + 229$$

$$h = 229$$

**Giá trị băm là 229.**

---

#### 2. Vấn đề gì xảy ra nếu giá trị $k$ (được tạo ngẫu nhiên) dùng để tạo chữ ký trong DSA bị thỏa hiệp. Hãy giải thích vì sao.

Trong thuật toán DSA (Digital Signature Algorithm), giá trị $k$ là một **khóa ngẫu nhiên** được sử dụng để tạo chữ ký $(r, s)$. Giá trị $k$ phải được **tạo ngẫu nhiên, được hủy sau khi dùng và không bao giờ được tái sử dụng**.

Nếu giá trị $k$ này bị thỏa hiệp (tức là kẻ tấn công biết được giá trị $k$ đã được sử dụng), **toàn bộ khóa riêng của người ký ($x$) sẽ bị lộ**.

**Giải thích:**

DSA sử dụng hai phương trình để tạo chữ ký $(r, s)$ cho thông điệp $M$:

1.  $r = (g^k \pmod{p}) \pmod{q}$
2.  $s = [k^{-1}(H(M) + x r)] \pmod{q}$

Trong đó:
*   $x$ là **khóa riêng** của người ký (giá trị bí mật).
*   $H(M)$ là giá trị băm của thông điệp $M$ (giá trị đã biết).
*   $r$ và $s$ là các thành phần của chữ ký (giá trị đã biết).
*   $p, q, g$ là các tham số công khai toàn cục (giá trị đã biết).

Nếu kẻ tấn công biết $k$ (khóa ngẫu nhiên bị thỏa hiệp), họ có thể giải phương trình (2) để tìm khóa riêng $x$:

$$s \equiv k^{-1}(H(M) + x r) \pmod{q}$$

Nhân cả hai vế với $k$ (vì $k^{-1}$ là nghịch đảo modulo $q$ của $k$):

$$s k \equiv H(M) + x r \pmod{q}$$

Sắp xếp lại để tìm $x r$:

$$x r \equiv s k - H(M) \pmod{q}$$

Do $q$ là số nguyên tố lớn (với $2^{159} < q < 2^{160}$), $r$ sẽ có nghịch đảo modulo $q$ (trừ trường hợp $r=0$, nhưng $r$ được thiết kế để khác 0).

Kẻ tấn công có thể tính toán nghịch đảo $r^{-1} \pmod{q}$ và từ đó tìm ra khóa riêng $x$:

$$x \equiv (s k - H(M)) r^{-1} \pmod{q}$$

Việc này cho phép kẻ tấn công **tính toán khóa riêng $x$** của người ký. Với khóa riêng này, kẻ tấn công có thể giả mạo chữ ký cho bất kỳ thông điệp nào trong tương lai, phá vỡ hoàn toàn tính bảo mật của DSA.


Chắc chắn rồi, đây là lời giải chi tiết cho các bài tập của bạn.

---
### ## 1. Phân tích hàm băm

#### a. Hàm băm $h = (\sum_{i=1}^{t} a_i) \pmod n$

Hàm băm này **không thỏa mãn** các yêu cầu của một hàm băm mật mã an toàn.

**Giải thích:**

Một hàm băm mật mã an toàn phải thỏa mãn ba tính chất chính: chống tìm tiền ảnh, chống tìm tiền ảnh thứ hai, và chống va chạm. Hàm băm này thất bại ở cả ba tính chất một cách dễ dàng.

1.  **Không chống va chạm (Collision resistance):** Tính chất này yêu cầu phải rất khó để tìm ra hai thông điệp `M1` và `M2` khác nhau nhưng lại có cùng một giá trị băm.
    * **Điểm yếu:** Phép cộng có tính giao hoán. Điều này có nghĩa là thứ tự của các khối tin không quan trọng.
    * **Ví dụ tạo va chạm:**
        * Cho thông điệp M1 = (10, 50). Giá trị băm là $(10 + 50) \pmod n = 60 \pmod n$.
        * Cho thông điệp M2 = (50, 10). Giá trị băm là $(50 + 10) \pmod n = 60 \pmod n$.
        * Rõ ràng `M1 ≠ M2` nhưng `H(M1) = H(M2)`. Việc tạo ra va chạm là cực kỳ dễ dàng.

2.  **Không chống tìm tiền ảnh thứ hai (Second pre-image resistance):** Cho một thông điệp `M1`, phải rất khó để tìm ra một thông điệp `M2` khác có cùng giá trị băm.
    * **Điểm yếu:** Tương tự như trên, chỉ cần hoán vị các khối của `M1` là ta có ngay `M2`. Hoặc ta có thể thay đổi các khối nhưng giữ nguyên tổng, ví dụ: `M1 = (10, 50)`, ta có thể tạo `M2 = (15, 45)`. Cả hai đều có tổng là 60.

3.  **Không chống tìm tiền ảnh (Pre-image resistance):** Cho một giá trị băm `h`, phải rất khó để tìm ra thông điệp `M` ban đầu.
    * **Điểm yếu:** Cho trước giá trị băm `h`, ta chỉ cần tìm một bộ số bất kỳ có tổng là `h` (hoặc `h + k*n`). Ví dụ, với `h=100`, ta có thể chọn `M = (100)`, hoặc `M = (30, 70)`, hoặc `M = (10, 20, 70)`,... Việc này rất đơn giản.

**Kết luận:** Do các điểm yếu nghiêm trọng trên, hàm băm này không an toàn cho các ứng dụng mật mã.

***

#### b. Hàm băm $h = (\sum_{i=1}^{t} (a_i)^2) \pmod n$

Tương tự như câu (a), hàm băm này cũng **không thỏa mãn** các yêu cầu của một hàm băm mật mã an toàn.

**Giải thích:**

Mặc dù việc sử dụng bình phương làm cho việc tìm tiền ảnh khó hơn một chút, hàm này vẫn giữ nguyên điểm yếu chí mạng là **tính giao hoán**.

1.  **Không chống va chạm:** Việc hoán vị các khối tin vẫn tạo ra va chạm một cách dễ dàng.
    * **Ví dụ:**
        * M1 = (10, 20) $\implies h = (10^2 + 20^2) \pmod n = (100 + 400) \pmod n = 500 \pmod n$.
        * M2 = (20, 10) $\implies h = (20^2 + 10^2) \pmod n = (400 + 100) \pmod n = 500 \pmod n$.

2.  **Không chống tìm tiền ảnh thứ hai:** Với một thông điệp `M1` cho trước, ta chỉ cần đảo thứ tự các khối tin là có ngay một thông điệp `M2` có cùng giá trị băm.

3.  **Không chống tìm tiền ảnh:** Mặc dù khó hơn hàm tổng đơn giản, việc tìm một bộ số sao cho tổng bình phương của chúng bằng `h` (bài toán tổng của các bình phương) không phải là một bài toán đủ khó cho các tiêu chuẩn mật mã.

**Kết luận:** Hàm băm này vẫn không an toàn vì việc tạo va chạm quá dễ dàng.

***

#### c. Tính toán giá trị băm

Áp dụng hàm băm ở câu (b) cho `M = (189, 632, 900, 722, 349)` và `n = 989`.

Công thức: $h = (189^2 + 632^2 + 900^2 + 722^2 + 349^2) \pmod{989}$

1.  **Tính bình phương của từng thành phần:**
    * $189^2 = 35,721$
    * $632^2 = 399,424$
    * $900^2 = 810,000$
    * $722^2 = 521,284$
    * $349^2 = 121,801$

2.  **Tính tổng các bình phương:**
    * Tổng = $35721 + 399424 + 810000 + 521284 + 121801 = 1,888,230$

3.  **Tính modulo cho tổng:**
    * $h = 1,888,230 \pmod{989}$
    * Ta có: $1,888,230 = 1909 \times 989 + 229$
    * Vậy, số dư là 229.

**Kết quả:** Giá trị băm là **h = 229**.

---
### ## 2. Vấn đề khi giá trị k trong DSA bị lộ

Nếu giá trị ngẫu nhiên **k** dùng để tạo chữ ký trong thuật toán DSA bị lộ (thỏa hiệp), **kẻ tấn công có thể tính toán ra khóa riêng (private key) của người ký**, từ đó phá vỡ hoàn toàn an ninh của hệ thống.

**Giải thích chi tiết:**

Công thức tạo chữ ký `s` trong DSA là:
$$s = [k^{-1}(H(M) + x \cdot r)] \pmod q$$
Trong đó:
* `k`: Số ngẫu nhiên bí mật.
* `H(M)`: Giá trị băm của thông điệp.
* `x`: **Khóa riêng** (cần được bảo vệ).
* `r, s`: Là hai thành phần của chữ ký (công khai).
* `q`: Một tham số công khai của hệ thống.

**Kịch bản tấn công:**
Kẻ tấn công có được một bộ gồm: thông điệp `M`, chữ ký `(r, s)` và giá trị `k` đã bị lộ.

1.  Kẻ tấn công biết: `k`, `s`, `r`.
2.  Họ có thể tự tính được `H(M)` từ thông điệp `M`.
3.  Như vậy, trong phương trình tạo `s` ở trên, ẩn số duy nhất còn lại chính là **khóa riêng `x`**.

Kẻ tấn công chỉ cần biến đổi phương trình để giải tìm `x`:
$$s \cdot k \equiv H(M) + x \cdot r \pmod q$$
$$s \cdot k - H(M) \equiv x \cdot r \pmod q$$
$$x \equiv r^{-1}(s \cdot k - H(M)) \pmod q$$

Tất cả các giá trị ở vế phải (`r`, `s`, `k`, `H(M)`) đều đã biết. Kẻ tấn công chỉ cần tính nghịch đảo của `r` theo modulo `q` là có thể tìm ra khóa riêng `x`.

**Hậu quả:** Khi khóa riêng bị lộ, kẻ tấn công có thể giả mạo chữ ký của nạn nhân trên bất kỳ tài liệu nào, gây ra những thiệt hại không thể lường trước. Đây là lý do tại sao `k` phải được tạo ra từ một nguồn ngẫu nhiên thật sự an toàn, phải được giữ bí mật tuyệt đối và **không bao giờ được sử dụng lại** cho hai chữ ký khác nhau.