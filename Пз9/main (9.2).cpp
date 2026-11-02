#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");

    if (!in1 || !in2) return 1;

    string X, Y;
    getline(in1, X);
    getline(in2, Y);

    if (X.find(Y) != string::npos) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}