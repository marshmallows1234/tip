#include <iostream>
#include <cmath>
using namespace std;
// 1
double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

// 3
int tensDigit(int n) {
    return (n / 10) % 10;
}

int main() {
    // 1
    double a, b;
    cin >> a >> b;
    cout << hypotenuse(a, b) << '\n';

    // 3
    int n;
    cin >> n;
    cout << tensDigit(n) << '\n';

    return 0;
}