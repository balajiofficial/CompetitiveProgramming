#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll x;
	cin >> x;
	ll ans = 0;
	while(x) {
		ans += x&1;
		x >>= 1;
	}
	cout << ans << "\n";
}
