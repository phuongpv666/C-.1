#include <iostream>
#include <iomanip> // Để sử dụng setprecision

using namespace std;

int main() {
    int celsius;

    do {
        cout << "Nhập nhiệt độ theo độ Celsius (không quá 106): ";
        cin >> celsius;
    } while (celsius > 106);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Nhiệt độ (độ C): " << celsius << ", ";
    cout << "Nhiệt độ (độ F): " << fixed << setprecision(2) << fahrenheit << endl;

    return 0;
}
