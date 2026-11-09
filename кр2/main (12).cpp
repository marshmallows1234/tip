#include <iostream>
using namespace std;

void f(int a, int from, int to, int aux) {
    if (a == 0) return;
    f(a - 1, from, aux, to);
    cout << "Ingredient " << a << " move from " << from << " to " << to << "\n";
    f(a - 1, aux, to, from);

}


int main(){
    int a;
    cin  >> a;
    f(a, 1, 3, 2);

    return 0;
}
