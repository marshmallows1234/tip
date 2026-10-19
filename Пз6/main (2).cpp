#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        vector<int> row;

        for (int k = 0; k < n - 1 - i; ++k) {
            row.push_back(0);
        }

        row.push_back(1);

        for (int k = 0; k < i; ++k) {
            row.push_back(2);
        }

        for (int j = 0; j < n; ++j) {
            if (j > 0) cout << ' ';
            cout << row[j];
        }

        cout << '\n';
    }

    return 0;

    
}