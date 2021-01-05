#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, p, q;
	string a;
	cin >> n >> p >> q >> a;
	if (p > q) {
		swap(p, q);
	}
	if (p > n && q > n) {
		cout << -1 << "\n";
		return 0;
	}
	if (n % p == 0) {
		cout << n/p << "\n";
		for(int i = 1; i <= n; ++i) {
			cout << a[i - 1];
			if (i % p == 0) cout << "\n";
		}
		return 0;
	} else if (n % q == 0) {
		cout << n/q << "\n";
		for(int i = 1; i <= n; ++i) {
			cout << a[i - 1];
			if (i % q == 0) cout << "\n";
		}
		return 0;
	}
	int res1 = 0;
	bool ok = 1;
	for(int i = 0; i <= n/p; ++i) {
		if (p * i + (n - p * i)/q * q == n) {
			ok = 0;
			res1 = i;
		}
	}
	if (ok) {
		cout << -1 << "\n";
		return 0;
	}
	cout << res1 + (n - p * res1)/q << "\n";
	int res = 0;
	for(int i = 1; i <= n; ++i) {
		if (res1 == 0) {
			res = i;
			break;
		}
		cout << a[i - 1];
		if (i % p == 0) {
			cout << "\n";
			--res1;
		}
	}
	for(int i = res; i <= n; ++i) {
		cout << a[i -1];
		if ((i - res + 1) % q == 0) {
			cout << "\n";
		}
	}
}
