#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, x, b, y;
	cin >> n >> a >>x >> b >> y;
	a--, b--, x--, y--;
	while(1) {
		if (a == x || b == y) {
			cout << "NO\n";
			return 0;
		}
		a = (a + 1) % n;
		b = (b - 1 + n) % n;
		if (a == b) {
			cout << "YES\n";
			return 0;
		}
	}
}
