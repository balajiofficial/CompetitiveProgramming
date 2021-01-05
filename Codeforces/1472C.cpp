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
		ll a[200001], dp[200001];
		for(int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; ++i) {
			if (i + a[i] <= n) {
				dp[i + a[i]] = max(dp[i] + a[i], dp[i + a[i]]);
			} else {
				dp[i] += a[i];
			}
		}
		cout << *max_element(dp + 1, dp+(n + 1)) << "\n";
	}
}
