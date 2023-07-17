#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Nhập ba số nguyên a, b, c: ";
    cin >> a >> b >> c;

    int S = a * (b + c) + b * (a + c);

    cout << "a: " << a << ", ";
    cout << "b: " << b << ", ";
    cout << "c: " << c << ", ";
    cout << "S = " << S << endl;

    return 0;
}

