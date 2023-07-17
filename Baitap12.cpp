#include <iostream>

using namespace std;

int main() {
    unsigned long long n;

    do {
        cout << "Nhập số nguyên dương n (1 ≤ n ≤ 10^16): ";
        cin >> n;
    } while (n < 1 || n > 1e16);

    long long sum = 0;
    for (unsigned long long i = 1; i <= n; ++i) {
        long long term = ((i % 2 == 0) ? i : -i);
        sum += term;
    }

    cout << "Kết quả của bài toán: " << sum << endl;

    return 0;
}


