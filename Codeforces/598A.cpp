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
		ll ans = (n * (n + 1))/2;
		ll num = 1;
		while(num <= n) {
			ans -= 2 * num;
			num *= 2;
		}
		cout << ans << "\n";
	}
}
