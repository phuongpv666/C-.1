#include <iostream>
#include <iomanip> // Để sử dụng setprecision

using namespace std;

int main() {
    int a, b;
    cout << "Nhập số nguyên a và b (khác 0): ";
    cin >> a >> b;

    // Tính tổng, hiệu, tích, thương
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    double quotient = static_cast<double>(a) / b;

    // In kết quả với độ chính xác 2 chữ số trên cùng một dòng
    cout << "Số a: " << a << ", ";
    cout << "Số b: " << b << ", ";
    cout << "Tổng: " << sum << ", ";
    cout << "Hiệu: " << diff << ", ";
    cout << "Tích: " << product << ", ";
    cout << fixed << setprecision(2); // Đặt độ chính xác 2 chữ số
    cout << "Thương: " << quotient << endl;

    return 0;
}


