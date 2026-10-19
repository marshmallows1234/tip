#include <iostream>
#include <string>
using namespace std;

int main() {
    string O;
    int steps;
    cin >> O >> steps;

    for (int step = 1; step < steps; step++) {
        string next = "";

        for (int pos = 0; pos < O.size();) {
            int count = 1;

            while (pos + count < O.size() && O[pos] == O[pos + count])
                count++;

            next += to_string(count) + O[pos];
            pos += count;
        }

        O = next;
    }

    cout << O;
    return 0;
}