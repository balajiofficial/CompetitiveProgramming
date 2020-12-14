#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll a, b, x, y;
	cin >> a >> b >>x >> y;
	ll c = min(abs(a - x), abs(b - y));
	x = abs(a - x);
	y = abs(y - b);
	x -= c;
	y -= c;
	cout << abs(x) + abs(y)  + c<< "\n";
}
