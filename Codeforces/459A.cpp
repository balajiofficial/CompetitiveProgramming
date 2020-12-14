#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a != c && b != d && abs(a - c) != abs(b -d))
		cout << -1 << "\n";
	else {
		if (a == c) {
			cout << a + abs(b - d) << " " << b << " " << c + abs(b -d) << " " << d << "\n";
		} else if ( b== d) {
			cout << a << " " << b + abs(a - c) << " " << c << " " << d + abs(a - c) << "\n";
		} else {
			cout << a << " " << d << " " << c << " " << b << "\n";
		}
	}
}
