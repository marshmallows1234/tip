#include <iostream>
#include <math.h>
using namespace std;
int main() {
    char simvol;
    
    cout << "Введите символ (B, s, x):" << endl;
    cin >> simvol;
    
    
    if (simvol == 'B') {
        cout << "Struykova Evgenia";
    }
    
    
    else if (simvol == 's') {
        double a, b, c, dis;
        cout << "Введите 3 множителя:" << endl;
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0) {
            cout << "x = любое рациональное число";
        }
        else {
            dis = b * b - 4 * a * c;
            if (dis < 0) {
                cout << "нет корней" << dis;
            }
            else if (dis == 0) {
                cout << "ответ: x = " << (-1 * b) / (2 * a);
            }
            else {
                cout << "ответ: x1 = " << (-1 * b - sqrt(dis)) / (2 * a) << endl << "x2 = " << (-1 * b + sqrt(dis)) / (2 * a);
            }
        }
    }
    
    
    else if (sumvol == 'x') {
        int year;
        cout << "Введите год:" << endl;
        cin >> year;
        if (year % 4 == 0) {
            cout << year<< " весокосный" << endl;
        }
        else {
            cout << year<< " не весокосный" << endl;
        }
    }
    else {
        cout << "Нет варианта";
    }
}