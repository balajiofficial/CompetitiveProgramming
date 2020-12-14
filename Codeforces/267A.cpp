#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, ans =0;
		cin >> a >> b;
		while(a > 0 && b > 0) {
			if (a > b) {
				ans += a/b;
				a %= b;
			} else {
				ans += b /a;
				b %= a;
			}
		}
		cout << ans << "\n";
	}
}
