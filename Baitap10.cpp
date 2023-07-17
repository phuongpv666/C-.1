#include <iostream>
#include <iomanip> // Để sử dụng setprecision

using namespace std;

int main() {
    int n;
    
    do {
        cout << "Nhập số nguyên dương n (1 ≤ n ≤ 10^9): ";
        cin >> n;
    } while (n < 1 || n > 1e9);

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (i * (i + 1));
    }

    cout << "Kết quả của bài toán: " << fixed << setprecision(2) << sum << endl;

    return 0;
}

