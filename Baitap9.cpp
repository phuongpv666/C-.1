#include <iostream>

using namespace std;

int main() {
    int n;
    
    do {
        cout << "Nhập số nguyên không âm n (0 ≤ n ≤ 10^5): ";
        cin >> n;
    } while (n < 0 || n > 1e5);

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    cout << "Tổng bình phương các số nguyên từ 1 tới " << n << ": " << sum << endl;

    return 0;
}

