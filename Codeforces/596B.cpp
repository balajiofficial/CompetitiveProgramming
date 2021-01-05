#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, ans = 0, res = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		ll a;
		cin >> a;
		ans += abs(a - res);
		res = a;
	}
	cout << ans << "\n";
}
