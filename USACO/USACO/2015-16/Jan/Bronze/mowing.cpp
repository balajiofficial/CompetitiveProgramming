#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a[2002][2002], x = 1000, y = 1000, co = 0, b, ans = INT_MAX;
bool ok = 1;

void cord(int &val, bool s) {
    for(int i = 0; i < b; ++i) {
        ++co;
        if (s) ++val;
        else --val;
        if (a[y][x] != INT_MAX) {
            ok = 0;
            ans = min(ans, co - a[y][x]);
        }
        a[y][x] = co;
    }
}

int main() {
    ofstream cout ("mowing.out");
    ifstream cin ("mowing.in");
    int n;
    cin >> n;
    for(int i = 0; i < 2002; ++i) {
        for(int j = 0; j < 2002; ++j) {
            a[i][j] = INT_MAX;
        }
    }
    for(int i = 0; i < n; ++i) {
        char c;
        cin >> c >> b;
        if (c == 'N') {
            cord(y, 0);
        } else if (c == 'S') {
            cord(y, 1);
        } else if (c == 'E') {
            cord(x, 0);
        } else {
            cord(x, 1);
        }
    }
    if (ok) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
}