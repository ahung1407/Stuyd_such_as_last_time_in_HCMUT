Dựa trên các tài liệu và slide bạn đã cung cấp, dưới đây là lời giải chi tiết cho các câu hỏi trong đề bài:

---

### I. CÂU HỎI TỰ LUẬN

**1. Biện pháp nào được sử dụng nhằm giảm nguy cơ từ mối đe dọa AP giả mạo?**
* **Đáp án:** Sử dụng cơ chế **Xác thực lẫn nhau (Mutual Authentication)**.
* **Giải thích:** Trong các giao thức bảo mật doanh nghiệp như WPA2-Enterprise hoặc EAP-TLS (đề cập trong slide về EAP), không chỉ máy khách (Client) phải chứng minh danh tính với mạng, mà mạng (Access Point/Radius Server) cũng phải gửi chứng chỉ số để chứng minh danh tính với máy khách. Điều này giúp người dùng không kết nối nhầm vào các trạm phát sóng giả mạo (Rogue AP/Evil Twin). Ngoài ra, các hệ thống phát hiện xâm nhập không dây (WIDS) cũng được dùng để quét và phát hiện AP lạ.

**2. Mã hóa trong WEP dùng thuật toán gì?**
* **Đáp án:** Thuật toán **RC4**.
* **Giải thích:** Theo slide `image_21cdf5.png` mục "RC4 trong WEP", WEP sử dụng thuật toán mã hóa dòng RC4 kết hợp với Vector khởi tạo (IV).

**3. Phân biệt chế độ WPA doanh nghiệp và WPA cá nhân.**
* Dựa trên slide `image_015497.png`, `image_00f373.png`, `image_00f378.png`:
    * **WPA Cá nhân (WPA-Personal / PSK):**
        * Sử dụng **Pre-Shared Key (PSK)**: Một mật khẩu chung cho tất cả mọi người.
        * Không yêu cầu máy chủ xác thực riêng (AAA server).
        * Phù hợp cho gia đình hoặc văn phòng nhỏ.
    * **WPA Doanh nghiệp (WPA-Enterprise):**
        * Sử dụng chuẩn **IEEE 802.1X/EAP** để xác thực.
        * Yêu cầu một máy chủ xác thực trung tâm (như RADIUS).
        * Mỗi người dùng có tài khoản/chứng chỉ riêng để đăng nhập.
        * Quản lý tập trung và an toàn hơn, phù hợp cho tổ chức lớn.

**4. Mã hóa trong WPA2 dùng thuật toán gì?**
* **Đáp án:** Thuật toán **AES** (với chế độ **CCMP**).
* **Giải thích:** Theo slide `image_00f35a.png` và `image_00f356.png`, WPA2 sử dụng AES (Advanced Encryption Standard) cho mã hóa dữ liệu, đây là khác biệt lớn nhất so với RC4 của WEP hay TKIP của WPA.

**5. So sánh các chuẩn an ninh WLAN**
* Dựa trên bảng tổng hợp ở slide `image_00f335.png`:

| Đặc điểm | WEP | WPA | WPA2 | WPA3 |
| :--- | :--- | :--- | :--- | :--- |
| **Mã hóa** | RC4 | TKIP (trên nền RC4) | AES-CCMP | AES-GCMP (256-bit) |
| **Toàn vẹn dữ liệu** | CRC-32 (Yếu) | MIC (Michael) | CBC-MAC | BIP-GMAC |
| **Xác thực** | Mở / Khóa chia sẻ | PSK / 802.1x (Enterprise) | PSK / 802.1x (Enterprise) | SAE / 802.1x (Enterprise) |
| **Độ an toàn** | Rất kém (Dễ bị bẻ khóa) | Tạm thời (Đã bị tấn công) | Mạnh (Chuẩn hiện tại) | Rất mạnh (Mới nhất) |

---

### II. CÂU HỎI TRẮC NGHIỆM

**1. WEP được viết tắt là:**
* **Đáp án: c. Wired Equivalent Privacy**
* *Giải thích:* Slide `image_21c257.png` ghi rõ "WEP (Wired Equivalent Privacy)". Tên gọi này thể hiện mong muốn ban đầu là tạo ra sự bảo mật cho mạng không dây tương đương với mạng có dây.

**2. Điểm yếu thật sự của WEP trong vấn đề mã hóa là:**
* **Đáp án: c. Thuật toán lập lịch khóa của RC4**
* *Giải thích:* Slide `image_21ce19.png` trích dẫn công bố của Fluhrer, Mantin và Shamir: "Weaknesses in the Key Scheduling Algorithm of RC4". Đây là lỗi kỹ thuật sâu xa khiến khóa WEP dễ bị suy ngược từ các gói tin bắt được (tấn công FMS). Các đáp án khác như "Dùng thuật toán RC4" chưa đủ cụ thể (vì RC4 bản thân nó không hỏng, mà cách WEP dùng nó bị hỏng), hay "Khóa ngắn" chỉ là một phần vấn đề.

**3. Tiêu chuẩn an ninh mạnh mẽ hơn được phát triển bởi IEEE để giải quyết các lỗ hổng chuẩn WLAN IEEE 802.11 là:**
* **Đáp án: c. IEEE 802.11i**
* *Giải thích:* Slide `image_00f35a.png` khẳng định "WPA2 là chuẩn IEEE 802.11i". Chuẩn này ra đời để khắc phục hoàn toàn các lỗ hổng của WEP và thay thế giải pháp tình thế WPA.

**4. Khác biệt giữa WPA và WPA2 là:**
* **Đáp án: b. WPA mã hóa dùng RC4 với TKIP/MIC, WPA2 mã hóa dùng AES.**
* *Giải thích:* Dựa trên bảng so sánh `image_00f335.png`. WPA vẫn dựa trên phần cứng cũ nên dùng RC4 (qua giao thức TKIP), trong khi WPA2 yêu cầu phần cứng mới để chạy thuật toán AES mạnh mẽ hơn. Cả hai đều hỗ trợ các phương thức xác thực giống nhau (PSK và 802.1x).

**5. Chọn phát biểu sai trong các phát biểu sau:**
* **Đáp án: c. WPA2 cho phép các client AES và TKIP được hoạt động trên cùng WLAN.**
* *Giải thích:*
    * a. Đúng: WPA là tập con của 802.11i (Slide `image_21d0c0.png`).
    * b. Đúng: AES là mã hóa đối xứng.
    * d. Đúng: 802.11i sử dụng 802.1x (Port-based Network Access Control) để thực thi an ninh.
    * **c. Sai:** Theo chuẩn, **WPA2 bắt buộc sử dụng AES-CCMP**. Việc cho phép cả TKIP và AES cùng hoạt động được gọi là "Mixed Mode" (Chế độ hỗn hợp WPA/WPA2), chứ không phải là đặc tính chuẩn của riêng WPA2. WPA2 "thuần túy" sẽ không hỗ trợ client chỉ dùng TKIP.
Chào bạn, dựa trên bộ slide về "Giới thiệu thư điện tử" mà bạn cung cấp, mình sẽ giải thích chi tiết về kiến trúc, các giao thức và định dạng của hệ thống Email. Đây là kiến thức nền tảng rất quan trọng trong môn mạng máy tính.

Dưới đây là phần giải thích được chia theo từng nhóm chủ đề:

---
