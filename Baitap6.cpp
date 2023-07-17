#include <iostream>
#include <iomanip> // Để sử dụng setprecision
#include <cmath>   // Để sử dụng hàm pow

using namespace std;

int main() {
    int x1, y1, x2, y2;
    
    // Nhập tọa độ của điểm x1
    do {
        cout << "Nhập tọa độ x1, y1: ";
        cin >> x1 >> y1;
    } while (x1 < -pow(10, 6) || x1 > pow(10, 6) || y1 < -pow(10, 6) || y1 > pow(10, 6));

    // Nhập tọa độ của điểm x2
    do {
        cout << "Nhập tọa độ x2, y2: ";
        cin >> x2 >> y2;
    } while (x2 < -pow(10, 6) || x2 > pow(10, 6) || y2 < -pow(10, 6) || y2 > pow(10, 6));

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Khoảng cách Euclid

    cout << "Điểm x1: (" << x1 << ", " << y1 << "), ";
    cout << "Điểm x2: (" << x2 << ", " << y2 << "), ";
    cout << "Khoảng cách: " << fixed << setprecision(2) << distance << endl;

    return 0;
}
