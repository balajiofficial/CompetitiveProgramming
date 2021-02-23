#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct Rect {
	int x1, x2, y1, y2;
};

Rect a, b;

int main() {
	ofstream cout ("square.out");
	ifstream cin ("square.in");
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cout << pow(max(max(a.x2, b.x2) - min(a.x1, b.x1), max(a.y2, b.y2) - min(a.y1, b.y1)), 2) << "\n";
}
