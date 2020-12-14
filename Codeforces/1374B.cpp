#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, ans = 0;
		cin >> n;
		while(n % 6 == 0) {
			n /= 6;
			++ans;
		}
		while(n %3 == 0) {
			n /= 3;
			ans += 2;
		}
		if (n == 1) { 
			cout << ans << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
}
