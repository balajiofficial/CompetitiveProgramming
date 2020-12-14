#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("pails.out");
	ifstream cin ("pails.in");
	ll x, y, m, ans = 0;
	cin >> x >> y >> m;
	for(ll i = 0; i <= m/x; ++i) {
		ans = max(ans, x * i + (m - x * i)/y * y);
	}
	cout << ans << "\n";
}
