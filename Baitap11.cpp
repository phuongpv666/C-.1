#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cout << "Nhập số nguyên dương n (1 ≤ n ≤ 10^9): ";
        cin >> n;
    } while (n < 1 || n > 1e9);

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }

    cout << "Kết quả của bài toán: " << sum << endl;

    return 0;
}


