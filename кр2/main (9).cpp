#include <iostream>
using namespace std;


double f(int s, int d){
    double result = 1;
    while (d > 0) {
        if (d % 2 == 1) result *= s;  
        s *= s;                       
        d /= 2;                      
    }
    return result;
}


int main(){
    int a, b;
    cin  >> a >> b;
    cout << f(a, b);

    return 0;
}
