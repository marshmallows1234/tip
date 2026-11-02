#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string s;
    getline(in, s);

    string buf = "";
    for (int i = 0; i <= (int)s.length(); i++) {
        if (i < (int)s.length() && isdigit(s[i])) {
            buf += s[i];
        } else {
            if (!buf.empty()) {
                long long n = stoll(buf);
                string bin = "";
                if (n == 0) bin = "0";
                while (n > 0) {
                    bin += char('0' + n % 2);
                    n /= 2;
                }
                reverse(bin.begin(), bin.end());
                out << bin;
                buf = "";
            }
            if (i < (int)s.length()) {
                out << s[i];
            }
        }
    }

    return 0;
}