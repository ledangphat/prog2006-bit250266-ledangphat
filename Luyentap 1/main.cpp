Bài 1
  #include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Nhap mot so: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Day la so chan";
    } else {
        cout << "Day la so le";
    }

    return 0;
}
Bài 2
#include <iostream>
using namespace std;

int main() {
    float W, H, area;

    // Nhập chiều rộng và chiều cao
    cout << "Nhap W: ";
    cin >> W;

    cout << "Nhap H: ";
    cin >> H;

    // Tính diện tích
    area = W * H;

    // In kết quả
    cout << "Dien tich = " << area;

    return 0;
}
 Bài 3
   #include <iostream>
using namespace std;

int main() {
    int n;

    // Nhập số từ bàn phím
    cout << "Nhap n: ";
    cin >> n;

    // In các số từ n xuống 1
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    return 0;
}
Bài 4
  #include <iostream>
using namespace std;

int main() {
    float a, b, x;

    // Nhập a và b
    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    // Giải phương trình ax + b = 0
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem";
        } else {
            cout << "Phuong trinh vo nghiem";
        }
    } else {
        x = -b / a;
        cout << "Nghiem x = " << x;
    }

    return 0;
}
Bài 5
  #include <iostream>
using namespace std;

// Hàm tìm giá trị lớn nhất của mảng
int findMax(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;

    // Nhập số phần tử của mảng
    cout << "Nhap so phan tu: ";
    cin >> n;

    int arr[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Gọi hàm tìm giá trị lớn nhất
    int maxValue = findMax(arr, n);

    // In kết quả
    cout << "Gia tri lon nhat la: " << maxValue;

    return 0;
}
Bài 6
  #include <iostream>
using namespace std;

int main() {
    int day;

    // Nhập số từ 1 đến 7
    cout << "Nhap mot so tu 1-7: ";
    cin >> day;

    // Kiểm tra thứ bằng switch-case
    switch (day) {
        case 1:
            cout << "Chu Nhat";
            break;

        case 2:
            cout << "Thu Hai";
            break;

        case 3:
            cout << "Thu Ba";
            break;

        case 4:
            cout << "Thu Tu";
            break;

        case 5:
            cout << "Thu Nam";
            break;

        case 6:
            cout << "Thu Sau";
            break;

        case 7:
            cout << "Thu Bay";
            break;

        default:
            cout << "So khong hop le";
    }

    return 0;
}
Bài 7
  #include <iostream>
using namespace std;

int main() {
    int n;
    int S = 0;

    // Nhập n
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    // Tính tổng từ 1 đến n
    for (int i = 1; i <= n; i++) {
        S = S + i;
    }

    // In kết quả
    cout << "Tong S = " << S;

    return 0;
}
   
