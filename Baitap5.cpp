#include <iostream>
#include <iomanip> // Để sử dụng setprecision
#include <cmath>   // Để sử dụng hàm pow và M_PI

using namespace std;

int main() {
    int r;
    do {
        cout << "Nhập bán kính r của hình tròn (1 ≤ r ≤ 10^6): ";
        cin >> r;
    } while (r < 1 || r > pow(10, 6));

    double circumference = 2 * M_PI * r;  // Chu vi
    double area = M_PI * pow(r, 2);       // Diện tích

    cout << "Hình tròn bán kính " << r << ", ";
    cout << "Chu vi: " << fixed << setprecision(2) << circumference << ", ";
    cout << "Diện tích: " << fixed << setprecision(2) << area << endl;

    return 0;
}



