#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll a[100];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n);
		ll ans = 0;
		for(int i = 0; i < n; ++i) {
			ll temp =0;
			for(int j = 0; j < n; ++j) {
				if (a[j] >= a[i]) {
					temp += a[i];
				}
			}
			ans = max(ans, temp);
		}
		cout << ans << "\n";
	}
}
