#include <iostream>
using namespace std;


double f(int a, int b){
    if (b == 0 or a == 0)
        return a + b;
    
    return f(b, a % b);
}


int main(){
    int a, b;
    cin  >> a >> b;
    cout << f(a, b);

    return 0;
}
