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
int main(){
    string s, a;
    getline(cin, s);
    for (char &b: s){
        b = tolower((unsigned char)b)
        if (ispunct((unsigned char)b))
            b = ' ';
    }
    set<string> c; //множество
    stringstream d(s); //поток бла

    while (d >> i)
        c.insert(i);

    for (string z: с)
        cout << w << endl;
    return 0;

}

//3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
    vector<pair<int,int>> st; // {значение, минимум}

public:
    void push(int x) {
        int mn = st.empty() ? x : min(x, st.back().second);
        st.push_back({x, mn});
    }

    void pop() {
        if (!st.empty()) st.pop_back();
    }

    bool empty() const {
        return st.empty();
    }

    int getMin() const {
        return st.back().second;   // минимум всего стека — за O(1)
    }
};

int main() {
    MinStack s;
    s.push(5);
    s.push(2);
    s.push(7);
    s.push(1);

    cout << s.getMin() << '\n'; // 1

    s.pop();
    cout << s.getMin() << '\n'; // 2

    s.pop();
    cout << s.getMin() << '\n'; // 2

    s.pop();
    cout << s.getMin() << '\n'; // 5



    cout << (s.empty() ? "empty" : "not empty") << '\n'; // not empty
    s.pop();
    cout << (s.empty() ? "empty" : "not empty") << '\n'; // empty

    return 0;
}   