#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int main() {
    int n;

    do {
        cout << "Nhập số nguyên n (-10^6 ≤ n ≤ 10^6): ";
        cin >> n;
    } while (n < -1e6 || n > 1e6);

    if (n <= 0) {
        cout << "INVALID" << endl;
    } else {
        cout << "n\tKết quả" << endl;
        cout << n << "\t" << (isLeapYear(n) ? "YES" : "NO") << endl;
    }

    return 0;
}


