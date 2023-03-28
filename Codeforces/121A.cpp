#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> lucky;

void create(ll n) {
	if (n > 4444444444) return;
	create(10*n+4);
	create(10*n+7);
	lucky.push_back(n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	create(0);
	ll l, r, ans = 0, j = 0;
	cin >> l >> r;
	for (int i = 0; i < (int)lucky.size()&&l+j<=r; i++) {
		if (l+j<=lucky[i]) {
			ans += lucky[i];
			j++;
			i--;
		}
	}
	cout << ans << "\n";
}
