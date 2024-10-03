#include <stdio.h>
#include <stdlib.h>

int main() {
    // Tùy chọn -A: Liệt kê tất cả file trừ ‘.’ và ‘..’
    printf("Liệt kê tất cả các file trừ ‘.’ và ‘..’ (tùy chọn -A):\n");
    system("ls -A");

    // Tùy chọn -a: Liệt kê tất cả các file, bao gồm cả file ẩn
    printf("\nLiệt kê tất cả các file, bao gồm cả file ẩn (tùy chọn -a):\n");
    system("ls -a");

    // Tùy chọn -c: Sử dụng thời gian thay đổi trạng thái file để sắp xếp
    printf("\nLiệt kê theo thời gian thay đổi trạng thái file (tùy chọn -c):\n");
    system("ls -lc");

    // Tùy chọn -d: Liệt kê thư mục như là file thông thường, không tìm kiếm đệ quy
    printf("\nLiệt kê thư mục như là file thông thường (tùy chọn -d):\n");
    system("ls -d */");

    // Tùy chọn -F: Thêm ký tự đặc biệt để phân biệt loại file
    printf("\nThêm ký tự đặc biệt để phân biệt loại file (tùy chọn -F):\n");
    system("ls -F");

    // Tùy chọn -f: Không sắp xếp
    printf("\nKhông sắp xếp các file (tùy chọn -f):\n");
    system("ls -f");

    // Tùy chọn -h: Hiển thị kích thước file dưới định dạng dễ đọc
    printf("\nHiển thị kích thước file dưới định dạng dễ đọc (tùy chọn -h):\n");
    system("ls -lh");

    // Tùy chọn -i: Hiển thị số inode của mỗi file
    printf("\nHiển thị số inode của mỗi file (tùy chọn -i):\n");
    system("ls -i");

    // Tùy chọn -R: Liệt kê đệ quy tất cả các thư mục con
    printf("\nLiệt kê đệ quy các thư mục con (tùy chọn -R):\n");
    system("ls -R");

    // Tùy chọn -S: Sắp xếp theo kích thước file, file lớn nhất trước
    printf("\nSắp xếp theo kích thước file (tùy chọn -S):\n");
    system("ls -S");

    // Tùy chọn -t: Sắp xếp theo thời gian sửa đổi gần nhất
    printf("\nSắp xếp theo thời gian sửa đổi gần nhất (tùy chọn -t):\n");
    system("ls -lt");

    return 0;
}
