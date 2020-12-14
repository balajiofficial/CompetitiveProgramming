#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	if (b - a >= 2 || a > b && b - a != -8) {
		cout << -1 << "\n";
	} else {
		if (a == 9 && b == 1) {
			cout << 9 << " " << 10 << "\n";
			return 0;
		}
		if (a == b) {
			cout << a << 1 << " " << b << 2 << "\n";
		} else {
			cout << min(a, b) << 9 << " " << max(a, b) << 0 << "\n";
		}
	}
}
