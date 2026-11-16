// 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int bal = 0;
    for (char c : s) {
        if (c == '(') bal++;
        if (c == ')') bal--;
        if (bal < 0) break;
    }

    if (bal == 0) cout << "yes";
    else cout << "no";

    return 0;
}

//2


//3