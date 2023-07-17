#include <iostream>

using namespace std;

int main() {
    long long n;

    do {
        cout << "Nhập số nguyên n (-10^18 ≤ n ≤ 10^18): ";
        cin >> n;
    } while (n < -1e18 || n > 1e18);

    cout << "n\tKết quả" << endl;
    cout << n << "\t" << (n % 3 == 0 && n % 5 == 0) << endl;

    return 0;
}


