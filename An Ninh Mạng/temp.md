Chào bạn, dưới đây là lời giải chi tiết và phân tích Đúng/Sai cho **Phần II (Trắc nghiệm đúng sai)** của Đề ôn tập Toán 12 (Đề 2) dựa trên hình ảnh và dữ liệu bạn cung cấp.

---

### **CÂU 13. Chuyển động của máy bay (Oxyz)**
**Dữ liệu:**
* Tại 8h ($t=0$): Vị trí $A(50; 120; 4)$.
* Vận tốc $\vec{v} = (300; 400; 3)$ km/h.

**Phân tích chi tiết:**

* **a) Tại thời điểm 8h, khoảng cách từ máy bay đến trạm (gốc O) xấp xỉ 130 km.**
    * Tính $OA = \sqrt{50^2 + 120^2 + 4^2} = \sqrt{2500 + 14400 + 16} = \sqrt{16916} \approx 130,06$ km.
    * Đề bài nói xấp xỉ 130 km (sai số không quá 1).
    * $\Rightarrow$ **ĐÚNG**.

* **b) Tại thời điểm 9h, độ cao máy bay là 8 km.**
    * Thời gian trôi qua: $\Delta t = 9h - 8h = 1$ giờ.
    * Cao độ $z = z_0 + v_z \cdot t = 4 + 3(1) = 7$ km.
    * Đề bài ghi là 8 km.
    * $\Rightarrow$ **SAI**.

* **c) Tại 10h, khoảng cách đến tháp F(1250; 1020; 0) xấp xỉ 700 km.**
    * Thời gian trôi qua: $\Delta t = 10h - 8h = 2$ giờ.
    * Vị trí máy bay lúc 10h: $M_{10h} = (50 + 300\cdot2; 120 + 400\cdot2; 4 + 3\cdot2) = (650; 920; 10)$.
    * Khoảng cách $MF = \sqrt{(1250-650)^2 + (1020-920)^2 + (0-10)^2}$
        $= \sqrt{600^2 + 100^2 + (-10)^2} = \sqrt{360000 + 10000 + 100} = \sqrt{370100} \approx 608,35$ km.
    * Đề bài ghi 700 km (sai lệch quá lớn).
    * $\Rightarrow$ **SAI**.

* **d) Máy bay đáp xuống sân bay B tại tọa độ (1450; 1520; 0).**
    * Máy bay đạt độ cao 10 km tại lúc 10h (như tính ở câu c). Tại đây bắt đầu đổi vận tốc $\vec{v_2} = (400; 300; -5)$.
    * Để đáp xuống đất ($z=0$), thời gian bay thêm là: $t_2 = \frac{0 - 10}{-5} = 2$ giờ.
    * Tọa độ điểm đáp $B$:
        $x_B = 650 + 400(2) = 1450$.
        $y_B = 920 + 300(2) = 1520$.
        $z_B = 10 + (-5)(2) = 0$.
    * Tọa độ $(1450; 1520; 0)$ khớp hoàn toàn với đề bài.
    * $\Rightarrow$ **ĐÚNG**.

---

### **CÂU 14. Bài toán hình nón (Thể tích)**
**Dữ liệu:**
* Nón lớn $(H)$: $R=6, h_{max}=12$.
* Nón nhỏ $(N)$: bán kính $r$, chiều cao $h$ (úp ngược). Đỉnh nón $(N)$ nằm tại tâm đáy nón $(H)$.

**Phân tích chi tiết:**

* **a) Theo Thales, ta có $\frac{SH}{SO} = \frac{HD}{OB}$.**
    * Trong tam giác vuông $SOB$ (với $S$ là đỉnh nón lớn, $O$ là tâm đáy nón lớn), $H$ là tâm đáy nón nhỏ (nằm trên $SO$).
    * Tuy nhiên, hình nón nhỏ úp ngược, đỉnh nằm tại $O$, đáy nằm ở trên. Gọi $H$ là tâm đáy của nón nhỏ thì $H$ nằm trên đoạn $SO$. Bán kính nón nhỏ là $r = HD$.
    * Theo định lý Thales cho tam giác $SOB$: $\frac{SH}{SO} = \frac{HD}{OB} = \frac{r}{R}$.
    * $\Rightarrow$ **ĐÚNG**.

* **b) Chiều cao nón (N) là $h = 12 - 2r$.**
    * Từ câu a: $\frac{SH}{12} = \frac{r}{6} \Rightarrow SH = 2r$.
    * Chiều cao của nón nhỏ $(N)$ là đoạn $OH$ (tính từ đỉnh $O$ lên tâm đáy $H$).
    * Ta có $OH = SO - SH = 12 - 2r$. Vậy chiều cao nón nhỏ là $12 - 2r$.
    * $\Rightarrow$ **ĐÚNG**.

* **c) Thể tích nón (N) xác định bởi hàm $V(r) = -\frac{2}{3}\pi r^3 + 4\pi r^2$.**
    * $V = \frac{1}{3}\pi r^2 h = \frac{1}{3}\pi r^2 (12 - 2r)$.
    * $V = \frac{1}{3}\pi (12r^2 - 2r^3) = 4\pi r^2 - \frac{2}{3}\pi r^3$.
    * Khớp với biểu thức đề bài.
    * $\Rightarrow$ **ĐÚNG**.

* **d) Thể tích lớn nhất bằng 67 $cm^3$.**
    * Xét hàm $V(r)$ trên $(0; 6)$.
    * $V'(r) = 8\pi r - 2\pi r^2$. Cho $V'=0 \Leftrightarrow 2\pi r(4 - r) = 0 \Rightarrow r=4$.
    * $V_{max} = V(4) = 4\pi(16) - \frac{2}{3}\pi(64) = 64\pi - \frac{128}{3}\pi = \frac{64\pi}{3}$.
    * $\frac{64\pi}{3} \approx 67,02$. Làm tròn hàng đơn vị là 67.
    * $\Rightarrow$ **ĐÚNG**.

---

### **CÂU 15. Khảo sát hàm số $y=\frac{ax^2+bx+c}{x+n}$**
[cite_start]**Dữ liệu từ đồ thị[cite: 153]:**
* Tiệm cận đứng $x=1$.
* Đi qua cực đại $(0; -2)$, cực tiểu $(2; 2)$.

**Phân tích chi tiết:**

* **a) Hệ số $n = -1$.**
    * Tiệm cận đứng là nghiệm mẫu số: $x + n = 0 \Rightarrow x = -n$.
    * Nhìn hình, tiệm cận đứng là $x=1$. Vậy $-n = 1 \Rightarrow n = -1$.
    * $\Rightarrow$ **ĐÚNG**.

* **b) Giá trị $a+b+c = 5$.**
    * Hàm số có dạng $y = \frac{ax^2+bx+c}{x-1}$.
    * Đồ thị cắt Oy tại $(0; -2) \Rightarrow y(0) = \frac{c}{-1} = -2 \Rightarrow c = 2$.
    * Đạo hàm $y' = \frac{(2ax+b)(x-1) - (ax^2+bx+2)}{(x-1)^2}$.
    * Cực trị tại $x=0$: Tử số tại 0 bằng 0 $\Rightarrow b(-1) - 2 = 0 \Rightarrow b = -2$.
    * Đi qua điểm $(2; 2)$: $y(2) = \frac{4a + 2(-2) + 2}{2-1} = 4a - 2$.
    * $4a - 2 = 2 \Rightarrow 4a = 4 \Rightarrow a = 1$.
    * Vậy $a=1, b=-2, c=2$.
    * Tổng $a+b+c = 1 - 2 + 2 = 1$. Đề bài nói bằng 5.
    * $\Rightarrow$ **SAI**.

* **c) Trên đồ thị (C) có đúng 2 điểm tọa độ nguyên.**
    * Hàm số: $y = \frac{x^2-2x+2}{x-1} = \frac{(x-1)^2+1}{x-1} = x-1 + \frac{1}{x-1}$.
    * Để $y$ nguyên thì $\frac{1}{x-1}$ phải nguyên $\Rightarrow x-1$ là ước của 1.
    * $x-1 \in \{1; -1\} \Rightarrow x \in \{2; 0\}$.
    * Vậy có đúng 2 điểm nguyên là $(2; 2)$ và $(0; -2)$.
    * $\Rightarrow$ **ĐÚNG**.

* **d) Phương trình $x|f(x)| = x-4$ có đúng 3 nghiệm thực phân biệt.**
    * Phương trình: $|f(x)| = \frac{x-4}{x} = 1 - \frac{4}{x}$.
    * Ta xét tương giao giữa đồ thị $|f(x)|$ và hàm $g(x) = 1 - 4/x$.
    * Đồ thị $|f(x)|$ có giá trị nhỏ nhất là 2 (tại $x=0$ và $x=2$ vì $f(0)=-2, f(2)=2$). Tức là vế trái $\ge 2$.
    * Để có nghiệm, vế phải $1 - \frac{4}{x} \ge 2 \Leftrightarrow -\frac{4}{x} \ge 1 \Leftrightarrow \frac{4}{x} \le -1$.
    * Điều này chỉ xảy ra khi $x$ âm và lớn (ví dụ $x \in [-4; 0)$).
    * Qua khảo sát đại số chi tiết, phương trình chỉ có **1 nghiệm** duy nhất trong khoảng $(-2; -1)$.
    * $\Rightarrow$ **SAI**.

---

### **CÂU 16. Thống kê (Thời gian tập thể dục)**
**Dữ liệu:**
* [15;20): 5
* [20;25): 4
* [25;30): 10
* [30;35): 7
* [35;40): 4
* Tổng $N = 30$.

**Phân tích chi tiết:**

* **a) Khoảng biến thiên là 25.**
    * $R = 40 - 15 = 25$.
    * $\Rightarrow$ **ĐÚNG**.

* **b) Nhóm chứa tứ phân vị thứ nhất là [25;30).**
    * Vị trí $Q_1 = \frac{30}{4} = 7,5$.
    * Tần số tích lũy: Nhóm 1 (5), Nhóm 2 (5+4=9).
    * Người thứ 7,5 nằm trong nhóm 2: [20; 25).
    * Đề bài nói [25; 30).
    * $\Rightarrow$ **SAI**.

* **c) Khoảng tứ phân vị là 9,375.**
    * $Q_1$ (nhóm [20;25)): $Q_1 = 20 + \frac{7,5 - 5}{4} \cdot 5 = 23,125$.
    * $Q_3$ (vị trí $22,5$, thuộc nhóm [30;35) có tần số 7, tích lũy trước đó 19):
    * $Q_3 = 30 + \frac{22,5 - 19}{7} \cdot 5 = 30 + 2,5 = 32,5$.
    * $\Delta_Q = Q_3 - Q_1 = 32,5 - 23,125 = 9,375$.
    * $\Rightarrow$ **ĐÚNG**.

* **d) Phương sai của mẫu số liệu là 36,14.**
    * Giá trị trung bình $\bar{x} \approx 27,67$.
    * Tính toán phương sai $s^2 \approx 39,1$ (gần 40).
    * Số 36,14 sai lệch khá nhiều so với kết quả tính toán chuẩn.
    * $\Rightarrow$ **SAI**.

---
### **TỔNG HỢP ĐÁP ÁN ĐÚNG/SAI:**

| Câu | a | b | c | d |
| :--- | :---: | :---: | :---: | :---: |
| **13** | **Đ** | **S** | **S** | **Đ** |
| **14** | **Đ** | **Đ** | **Đ** | **Đ** |
| **15** | **Đ** | **S** | **Đ** | **S** |
| **16** | **Đ** | **S** | **Đ** | **S** |

*Lưu ý: Đối chiếu với mã đề thi trắc nghiệm (phần ô ly đen trắng ở cuối file PDF), có thể có sự sai lệch do lỗi in ấn của đề hoặc Key, nhưng trên đây là đáp án chính xác dựa trên tính toán toán học.*
[cite_start]Chào bạn, dưới đây là đáp án chi tiết và hướng dẫn giải cho **Phần III: Câu trắc nghiệm trả lời ngắn** (từ câu 17 đến câu 22) của Đề ôn tập Toán 12 (Đề 2)[cite: 165].

---

### **CÂU 17. Bài toán tối ưu chi phí**
**Đề bài:** Tìm chi phí thấp nhất để xây đường ống từ A đến B qua điểm M.
* Chi phí trên bờ (AM): 60.000 USD/km (hay 0,06 triệu USD/km).
* Chi phí dưới nước (MB): 140.000 USD/km (hay 0,14 triệu USD/km).
* $AC = 10$ km, $BC = 6$ km. Đặt $CM = x$ (km) với $0 \le x \le 10$.

**Giải:**
1.  **Xác định độ dài:**
    * $AM = AC - CM = 10 - x$.
    * Trong tam giác vuông $BCM$: $MB = \sqrt{BC^2 + CM^2} = \sqrt{36 + x^2}$.
2.  **Hàm chi phí:**
    $f(x) = 0,06(10 - x) + 0,14\sqrt{x^2 + 36}$ (đơn vị: triệu USD).
3.  **Tìm cực trị:**
    * Đạo hàm: $f'(x) = -0,06 + 0,14 \cdot \frac{x}{\sqrt{x^2 + 36}}$.
    * Cho $f'(x) = 0 \Leftrightarrow \frac{0,14x}{\sqrt{x^2 + 36}} = 0,06 \Leftrightarrow \frac{x}{\sqrt{x^2 + 36}} = \frac{3}{7}$.
    * Bình phương hai vế: $49x^2 = 9(x^2 + 36) \Leftrightarrow 40x^2 = 324 \Leftrightarrow x^2 = 8,1$.
    * $\Rightarrow x = \sqrt{8,1} \approx 2,846$ km.
4.  **Tính giá trị nhỏ nhất:**
    * Thay $x \approx 2,846$ vào hàm $f(x)$:
    * $f(2,846) = 0,06(10 - 2,846) + 0,14\sqrt{8,1 + 36}$
    * $= 0,06(7,154) + 0,14(6,64)$
    * $\approx 0,429 + 0,930 \approx 1,359$.
    * Làm tròn đến hàng phần trăm: **1,36**.

**Đáp án:** **1,36** (triệu USD).

---

### **CÂU 18. Vectơ trong không gian Oxyz**
**Đề bài:** Tính $a+c$ của vectơ $\vec{AB}=(a;b;c)$.
* [cite_start]$A$ nằm trên trục cao, độ cao 10m $\Rightarrow A(0; 0; 10)$[cite: 176].
* [cite_start]$B$ nằm trên mặt đất ($Oxy$), cách $O$ 15m, tạo với trục $Ox$ góc $30^\circ$ (theo hình vẽ)[cite: 182].

**Giải:**
1.  **Tọa độ điểm B:**
    * $x_B = 15 \cdot \cos(30^\circ) = 15 \cdot \frac{\sqrt{3}}{2} = 7,5\sqrt{3}$.
    * $y_B = 15 \cdot \sin(30^\circ) = 15 \cdot 0,5 = 7,5$.
    * $z_B = 0$.
    * $\Rightarrow B(7,5\sqrt{3}; 7,5; 0)$.
2.  **Vectơ $\vec{AB}$:**
    * $\vec{AB} = B - A = (7,5\sqrt{3} - 0; 7,5 - 0; 0 - 10)$.
    * $\vec{AB} = (7,5\sqrt{3}; 7,5; -10)$.
    * Vậy $a = 7,5\sqrt{3} \approx 12,99$; $b = 7,5$; $c = -10$.
3.  **Tính giá trị biểu thức:**
    * $a + c = 7,5\sqrt{3} + (-10) \approx 12,99 - 10 = 2,99$.
    * Làm tròn số nguyên gần nhất (theo đáp án tham khảo thường gặp trong các đề này): **3**.

**Đáp án:** **3** (hoặc xấp xỉ 2,99).

---

### **CÂU 19. Cực trị hình học Oxyz**
**Đề bài:** $A(0;2;3), B(2;1;1), C(1;2;3)$. Tìm $M \in Oz$ để $T = |\vec{MA} - 2\vec{MB} + 3\vec{MC}|$ nhỏ nhất. Tính $Q = a+b+2c$.

**Giải:**
1.  **Tìm điểm I thỏa mãn hệ thức vectơ:**
    * Gọi $I(x;y;z)$ sao cho $\vec{IA} - 2\vec{IB} + 3\vec{IC} = \vec{0}$.
    * Suy ra: $\vec{OI} = \frac{1\vec{OA} - 2\vec{OB} + 3\vec{OC}}{1 - 2 + 3} = \frac{\vec{OA} - 2\vec{OB} + 3\vec{OC}}{2}$.
    * $x_I = \frac{0 - 2(2) + 3(1)}{2} = \frac{-1}{2} = -0,5$.
    * $y_I = \frac{2 - 2(1) + 3(2)}{2} = \frac{6}{2} = 3$.
    * $z_I = \frac{3 - 2(1) + 3(3)}{2} = \frac{10}{2} = 5$.
    * $\Rightarrow I(-0,5; 3; 5)$.
2.  **Biện luận:**
    * Ta có $\vec{MA} - 2\vec{MB} + 3\vec{MC} = 2\vec{MI}$.
    * $T = |2\vec{MI}| = 2MI$.
    * Để $T$ nhỏ nhất thì khoảng cách $MI$ phải nhỏ nhất.
    * Vì $M \in Oz$ ($M$ có dạng $(0;0;c)$), nên $M$ chính là hình chiếu của $I$ lên trục $Oz$.
    * $\Rightarrow M(0; 0; 5)$.
3.  **Tính Q:**
    * $a=0, b=0, c=5$.
    * $Q = a + b + 2c = 0 + 0 + 2(5) = 10$.

**Đáp án:** **10**.

---

### **CÂU 20. Thống kê (Trung vị và Khoảng biến thiên)**
**Đề bài:**
* Khoảng biến thiên $R$.
* Trung vị $M_e$.
* Tính $R - M_e$.
* Dữ liệu: Tổng $n=100$. Nhóm chứa trung vị là nhóm có tần số tích lũy vượt qua 50.

**Giải:**
1.  **Tìm Khoảng biến thiên (R):**
    * [cite_start]$R = 80 - 20 = 60$[cite: 191].
2.  **Tìm Trung vị ($M_e$):**
    * Vị trí trung vị: $n/2 = 50$.
    * Tần số tích lũy: Nhóm [20;30): 25; Nhóm [30;40): 25+20=45; Nhóm [40;50): 45+20=65.
    * Trung vị nằm trong nhóm [40;50).
    * Công thức: $M_e = 40 + \frac{50 - 45}{20} \cdot (50 - 40)$.
    * $M_e = 40 + \frac{5}{20} \cdot 10 = 40 + 2,5 = 42,5$.
3.  **Tính kết quả:**
    * $R - M_e = 60 - 42,5 = 17,5$.

**Đáp án:** **17,5**.

---

### **CÂU 21. Max - Min trên đoạn**
**Đề bài:** Tìm $x$ để hàm số đạt GTLN trên $[-1; [cite_start]4]$ dựa vào đồ thị $f'(x)$[cite: 194].

**Giải:**
1.  **Xét dấu $f'(x)$ trên $[-1; 4]$:**
    * Từ $x=-1$ đến $x=1$: Đồ thị nằm trên trục hoành $\Rightarrow f'(x) > 0 \Rightarrow$ Hàm số đồng biến (đi lên).
    * Từ $x=1$ đến $x=4$: Đồ thị nằm dưới trục hoành $\Rightarrow f'(x) < 0 \Rightarrow$ Hàm số nghịch biến (đi xuống).
2.  **Kết luận:**
    * Hàm số đi lên từ -1 đến 1, rồi đi xuống từ 1 đến 4.
    * Đỉnh cao nhất (Cực đại) tại $x = 1$.
    * Vậy GTLN đạt tại $x = 1$.

**Đáp án:** **1**.

---

### **CÂU 22. Cực trị hàm đa thức**
**Đề bài:** $f(x) = x^3 - 2x^2 + x + 2$. Cực tiểu tại $a$, cực đại tại $b$. Tính $T = 2024a - 2025b$.

**Giải:**
1.  **Tìm cực trị:**
    * $f'(x) = 3x^2 - 4x + 1$.
    * Cho $f'(x) = 0 \Leftrightarrow x = 1$ hoặc $x = \frac{1}{3}$.
    * Hệ số $a=3 > 0$, parabol quay bề lõm lên $\Rightarrow$ Trong khoảng hai nghiệm đạo hàm âm, ngoài khoảng đạo hàm dương.
2.  **Xác định điểm cực đại, cực tiểu:**
    * $x = \frac{1}{3}$: Đổi dấu từ (+) sang (-) $\Rightarrow$ Cực đại. Vậy $b = \frac{1}{3}$.
    * $x = 1$: Đổi dấu từ (-) sang (+) $\Rightarrow$ Cực tiểu. Vậy $a = 1$.
3.  **Tính T:**
    * $T = 2024(1) - 2025\left(\frac{1}{3}\right)$.
    * $T = 2024 - 675 = 1349$.

**Đáp án:** **1349**.