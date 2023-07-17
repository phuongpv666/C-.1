
#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cout << "Nhập số nguyên a: ";
    cin >> a;
    cout << "Nhập số nguyên b: ";
    cin >> b;

    long long quotient = a / b;  // Phần nguyên của phép chia
    long long remainder = a % b; // Phần dư của phép chia

    cout << "Số a: " << a << ", ";
    cout << "Số b: " << b << ", ";
    cout << "Phần dư của phép chia a/b: " << remainder << endl;

    return 0;
}

