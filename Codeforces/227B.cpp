#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	const int mxN = 2e5;
	ll a[mxN];
	memset(a, 0, sizeof(a));
	for(ll i=  0; i < n; ++i) {
		ll b;
		cin >> b;
		a[b] = i;
	}
	ll m, p = 0, v= 0;
	cin >> m;
	for(ll i = 0; i < m; ++i) {
		ll b;
		cin >> b;
		p += a[b] +1 ;
		v += n - a[b];
	}
	cout << p << " " << v << "\n";
}
