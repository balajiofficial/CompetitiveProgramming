#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, p, q, r;
	cin >> n >> p >> q >> r;
	const int mxN = 1e5;
	ll a[mxN], dp0[mxN], dp1[mxN], dp2[mxN];
	memset(dp0, 0, sizeof(dp0));
	memset(dp1, 0, sizeof(dp1));
	memset(dp2, 0, sizeof(dp2));
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	dp0[0] = a[0] * p;
	for(int i = 1; i < n; ++i) {
		dp0[i] = max(dp0[i - 1], a[i] * p);
	}
	dp1[0] = dp0[0] + a[0] * q;
	for(int i =1; i < n; ++i) {
		dp1[i] = max(dp1[i - 1], dp0[i] + a[i] * q);
	}
	dp2[0] = dp1[0] + a[0] * r;
	for(int i =1; i < n; ++i) {
		dp2[i] = max(dp2[i -1], dp1[i] + a[i] * r);
	}
	cout << dp2[n - 1] << "\n";
}
