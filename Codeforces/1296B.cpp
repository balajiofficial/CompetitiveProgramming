#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll s;
		cin >> s;
		ll ans = s;
		while(s >= 10) {
			ans += s/10;
			int num = s/10;
			s -= s/10 * 10;
			s += num;
		}
		cout << ans << "\n";	
	}
}
