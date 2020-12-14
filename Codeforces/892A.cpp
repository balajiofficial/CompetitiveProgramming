#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	const int mxN = 1e5;
	ll a[mxN], b[mxN];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i =0; i < n; ++i)
		cin >> b[i];
	ll ans = 0, h1 = 0, h2 = 0;
	for(int i = 0; i < n; ++i) {
		ans += a[i];
		if (b[i] > h1) {
			h2 = h1;
			h1 = b[i];
		} else if (b[i] > h2) {
			h2 = b[i];
		}
	}
	if (ans <= h1 + h2) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
