

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cout << "Nhập giá trị x: ";
    cin >> x;

    long long result = pow(x, 3) + 3 * pow(x, 2) + x + 1;

    cout << "x: " << x << ", ";
    cout << "Giá trị của biểu thức A(x): " << result << endl;

    return 0;
}
