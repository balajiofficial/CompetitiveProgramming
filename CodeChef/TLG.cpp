#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, a[2];
	memset(a, 0, 8);
	cin >> t;
	int b = 0, c = 0;
	while(t--) {
		int d, e;
		cin >> d >> e;
		b += d;
		c += e;
		a[0] = max(a[0], b - c);
		a[1] = max(a[1], c - b);
	}
	if (a[0] > a[1]) {
		cout << 1 << " " << a[0] << "\n";
	} else {
		cout << 2 << " " << a[1] << "\n";
	}
}
