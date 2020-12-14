#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct rect {
    int x1, x2, y1, y2;
    int getArea() {
        return (x2-x1) * (y2-y1);
    }
};

int getInter(rect a, rect b) {
    int xo = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int yo = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return xo * yo;
}

int main() {
    ofstream cout ("billboard.out");
    ifstream cin ("billboard.in");
    rect a, b, c;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
    int ans = a.getArea() + b.getArea();
    cout << ans - getInter(a, c) - getInter(b, c) << "\n";
}