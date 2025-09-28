#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (ll i = 1; i <= n; ++i) {
		ll ans = (i * i * (i * i - 1)) / 2;
		ans -= 2 * (i - 1) * 2 * (i - 2);
		cout << ans << "\n";
	}
}