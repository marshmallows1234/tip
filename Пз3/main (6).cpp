#include <iostream>
using namespace std;
int main() {
    int a, b, n;
    cin >> a >> b;
    cout << sqrt(a * a + b * b) << endl;
    cin >> n;
    cout << n / 10 % 10;
    return 0;
}