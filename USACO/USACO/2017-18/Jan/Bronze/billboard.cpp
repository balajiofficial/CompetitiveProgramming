#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct rect {
    int x1, x2, y1, y2;
};

bool ok(int a, int b, int c, int d, int e, int f) {
    return a >= c && a <= d && b >= e && b <= f;
}

int main() {
    ofstream cout ("billboard.out");
    ifstream cin ("billboard.in");
    rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    int ans = 0;
    if (ok(a.x1, a.y1, b.x1, b.x2, b.y1, b.y2)) ++ans;
    if (ok(a.x1, a.y2, b.x1, b.x2, b.y1, b.y2)) ++ans;
    if (ok(a.x2, a.y1, b.x1, b.x2, b.y1, b.y2)) ++ans;
    if (ok(a.x2, a.y2, b.x1, b.x2, b.y1, b.y2)) ++ans;
    if (ans == 4) {
        cout << 0 << "\n";
    } else if (ans <= 1) {
        cout << (a.x2 - a.x1) * (a.y2 - a.y1) << "\n";
    } else {
        int maxx = max(a.x1, b.x1);
        int minx = min(a.x2, b.x2);
        int maxy = max(a.y1, b.y1);
        int miny = min(a.y2, b.y2);
        cout << (a.x2 - a.x1) * (a.y2 - a.y1) - (maxx - minx) * (maxy - miny) << "\n";
    }
}