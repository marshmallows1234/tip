#include <iostream>
#include <cmath>
using namespace std;

double blabla(double a, double b) {
    return sqrt(a*a + b*b);
}

int tutu(int n) {
    return (n / 10) % 10;
}

int main() {
    double a, b;
    cin >> a >> b;
    cout << blabla(a, b) << endl;

    int n;
    cin >> n;
    cout << tutu(n) << endl;
    return 0;
}