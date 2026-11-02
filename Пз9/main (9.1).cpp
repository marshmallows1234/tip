#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream a("input.txt");
    ofstream b("output.txt");

    string c;
    getline(a, c);

    const string e = "useragreement";
    for (char d : c)
        if (e.find(tolower(d)) == string::npos)
            b << d;

    return 0;
}