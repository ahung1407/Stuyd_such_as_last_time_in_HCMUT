Dựa trên tài liệu bạn cung cấp, đây là tổng hợp những nội dung **cốt lõi và trọng tâm nhất** về an toàn thông tin (ATTT) trong ứng dụng IoT mà bạn cần nắm vững:

### 1. Tại sao IoT cần đặc biệt chú trọng bảo mật?

- **Thực trạng:** IoT kết nối hàng tỷ thiết bị nhưng phần lớn thiếu các tiêu chuẩn bảo mật chuyên biệt, được thiết kế với chi phí thấp và phát triển quá nhanh.

- **Nguy cơ:** Thiết bị IoT thu thập dữ liệu nhạy cảm nhưng thiếu bảo vệ, dễ bị chiếm quyền điều khiển (như botnet Mirai) gây thiệt hại kinh tế và xã hội.

### 2. Các rủi ro an ninh chính (Phân theo tầng)

Hệ thống IoT đối mặt với rủi ro ở mọi cấp độ:

- **Tầng thiết bị:** Phần cứng yếu, firmware không an toàn, mật khẩu mặc định, dễ bị chiếm quyền.

- **Tầng mạng:** Giao thức không mã hóa, thiếu phân vùng mạng, dễ bị nghe lén và tấn công DDoS.

- **Tầng nền tảng/Cloud:** API và Cloud dễ bị khai thác nếu quản lý truy cập yếu.

- **Tầng ứng dụng:** Giao diện thiếu bảo mật, rò rỉ dữ liệu cá nhân.

### 3. Khung pháp lý và Tiêu chuẩn cần tuân thủ (Rất quan trọng)

Bạn cần nắm các tiêu chuẩn này để thiết kế hệ thống hợp chuẩn:

- **Tại Việt Nam:**
- **Luật/Quy định:** Luật An ninh mạng 2018, Luật Bảo vệ dữ liệu cá nhân (tài liệu ghi dự kiến 2025).

- **QCVN 135:2024/BTTTT:** Quy chuẩn kỹ thuật cho **Camera IP** (yêu cầu quản lý lỗ hổng, mật khẩu duy nhất).

- **TCVN 13749:2023:** Tiêu chuẩn cho hệ thống IoT ảnh hưởng đến an toàn con người.

- **Quyết định 736/QĐ-BTTTT:** Áp dụng cho IoT tiêu dùng (dựa trên chuẩn ETSI).

- **Quốc tế:** ETSI EN 303 645 (IoT tiêu dùng), NIST SP 800-213 (IoT khu vực công/tư), ITU-T Y.4806.

### 4. Kiến trúc bảo mật hệ thống IoT đề xuất (5 Tầng)

Đây là giải pháp kỹ thuật cốt lõi được đề xuất trong tài liệu:

1.  **Tầng Thiết bị:** Phải có định danh duy nhất (Identity), Secure Boot, chip bảo mật.

2.  **Tầng Biên/Cổng (Edge/Gateway):** Tính toán biên an toàn, dùng chip TPM (Trusted Platform Module), Firewall, giao thức an toàn.

3.  **Tầng Mạng:** Phân đoạn mạng (VLANs), dùng VPN, 5G/LPWAN, mã hóa kênh truyền.

4.  **Tầng Đám mây/Nền tảng:** Dịch vụ cập nhật OTA an toàn, quản lý lỗ hổng, SBOM (Software Bill of Materials - Danh mục vật liệu phần mềm).

5.  **Tầng Ứng dụng:** API an toàn, Dashboard quản lý, đảm bảo quyền riêng tư.

### 5. Các giải pháp kỹ thuật & Vận hành then chốt

- **Mô hình Zero Trust:** Không tin tưởng bất kỳ ai, yêu cầu xác thực nghiêm ngặt và chỉ cấp quyền tối thiểu.

- **Cập nhật Firmware (OTA):** Phải được mã hóa, có chữ ký số để chống giả mạo bản cập nhật.

- **Xác thực & Mã hóa:** Sử dụng PKI (Hạ tầng khóa công khai), xác thực 2 chiều (Mutual Auth), mã hóa dữ liệu đầu cuối (AES-256).

- **Giám sát (Monitoring):** Sử dụng hệ thống SIEM/SOC, IDS/IPS tích hợp AI để phát hiện xâm nhập và hành vi bất thường liên tục.

- **Kiểm thử:** Thực hiện Penetration Testing (kiểm thử xâm nhập) định kỳ 6-12 tháng.

**Tóm lại:** Để làm IoT an toàn, bạn không chỉ cần viết code đúng mà phải tuân thủ tiêu chuẩn (như QCVN 135), thiết kế bảo mật nhiều lớp (từ chip phần cứng đến Cloud), và có quy trình vận hành (cập nhật OTA, giám sát) chặt chẽ.
