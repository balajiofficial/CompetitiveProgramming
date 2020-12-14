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
		ll a[100000];
		ll temp = 0, ans = 0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for(int i = n - 1; i >= 0; --i) {
			if (a[i] <= 0) temp += abs(a[i]);
			else {
				ll c = min(temp, a[i]);
				temp -= c;
				ans += a[i] - c;
			}
		}
		cout << ans << "\n";
	}
}
