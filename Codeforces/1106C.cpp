#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	const int mxN = 3e5;
	ll a[mxN];
	for(int i= 0; i <n ;++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll ans =0;
	for(int i= 0; i < n/2; ++i) {
		ans += (a[i] + a[n - i -1]) * (a[i] + a[n - i - 1]);
	}
	cout << ans << "\n";
}
