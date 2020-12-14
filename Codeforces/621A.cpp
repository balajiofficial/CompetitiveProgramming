#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[100000], ans = 0;
	for(int i = 0;i < n; ++i) {
		cin >> a[i];
		ans += a[i];
	}
	if (ans % 2 == 0) {
		cout << ans << "\n";
		return 0;
	}
	sort(a, a+n);
	for(int i = 0;i < n; ++i) {
		if (a[i] % 2) {
			ans -= a[i];
			cout << ans << "\n";
			break;
		}
	}
}
