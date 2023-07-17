#include <iostream>

using namespace std;

int main() {
    unsigned long long n;
    
    do {
        cout << "Nhập số nguyên không âm n (0 < n < 10^8): ";
        cin >> n;
    } while (n <= 0 || n >= 1e8);

    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Tổng các số nguyên từ 1 tới " << n << ": " << sum << endl;

    return 0;
}

