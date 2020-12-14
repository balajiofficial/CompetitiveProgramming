#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		ll a[100], low = INT_MAX, high = 0;
		for(int i = 0;i < n; ++i)  {
			cin >> a[i];
			high =max(high,a[i]);
			low =min(low, a[i]);
		}
		ll ans = low + k;
		if (abs(ans - high) > k) {
			cout << -1 << "\n";
		} else {
			cout << ans << "\n";
		}
	}
}
