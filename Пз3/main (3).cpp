#include <iostream>
#include <cmath>
using namespace std;
//1
class Geometry {
public:
    static double hypotenuse(double a, double b) {
        return sqrt(a*a + b*b);
    }
};

//3
class NumberUtils {
public:
    static int tensDigit(int n) {
        return (n / 10) % 10;
    }
};

int main() {
    //1
    double a, b; cin >> a >> b;
    cout << Geometry::hypotenuse(a, b) << endl;
    //3
    int n; cin >> n;
    cout << NumberUtils::tensDigit(n) << endl;
}