#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct rect {
    int x1, x2, y1, y2;
};

int main() {
    ofstream cout ("square.out");
    ifstream cin ("square.in");
    rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    int minx = min(a.x1, b.x1);
    int miny = min(a.y1, b.y1);
    int maxx = max(a.x2, b.x2);
    int maxy = max(a.y2, b.y2);
    int c = max(maxx - minx, maxy - miny);
    cout << c * c << "\n";
}