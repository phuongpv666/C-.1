#include <iostream>

using namespace std;

int main() {
    unsigned long long a, b;

    do {
        cout << "Nhập số nguyên dương a (1 ≤ a ≤ 10^8): ";
        cin >> a;
        cout << "Nhập số nguyên dương b (1 ≤ b ≤ a): ";
        cin >> b;
    } while (b < 1 || b > a || a > 1e8);

    unsigned long long quotient = a / b;
    unsigned long long result = (quotient + 1) * b;

    cout << "Kết quả của bài toán: Số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a là " << result << endl;

    return 0;
}


