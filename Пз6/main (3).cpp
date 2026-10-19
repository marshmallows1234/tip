#include <iostream>
using namespace std;

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    char a[32][32] = {};

    for (int k = 0; k < w; k++) {
        int x, y;
        cin >> x >> y;
        a[x - 1][y - 1] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') continue;

            a[i][j] = '0';
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int ni = i + dx, nj = j + dy;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m &&
                        a[ni][nj] == '*') {
                        a[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << '\n';
    }
    return 0;
}