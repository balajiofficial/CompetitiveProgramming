#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool ok(int x, int y, int x1, int y1, int x2, int y2) {
    return x < x1 || x > x2 || y < y1 || y > y2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 *= 2, y1 *= 2;
    x2 *= 2, y2 *= 2;
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
    x3 *= 2, y3 *= 2;
    x4 *= 2, y4 *= 2;
    int x5, x6, y5, y6;
    cin >> x5 >> y5 >> x6 >> y6;
    x5 *= 2, y5 *= 2;
    x6 *= 2, y6 *= 2;
    for(int i = x1; i <= x2; ++i) {
        if (ok(i, y1, x3, y3, x4, y4) && ok(i, y1, x5, y5, x6, y6)) {
            cout << "YES\n";
            return 0;
        }
        if (ok(i, y2, x3, y3, x4, y4) && ok(i, y2, x5, y5, x6, y6)) {
            cout << "YES\n";
            return 0;
        }
    }
    for(int i = y1; i <= y2; ++i) {
        if (ok(x1, i, x3, y3, x4, y4) && ok(x1, i, x5, y5, x6, y6)) {
            cout << "YES\n";
            return 0;
        }
        if (ok(x2, i, x3, y3, x4, y4) && ok(x2, i, x5, y5, x6, y6)) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}