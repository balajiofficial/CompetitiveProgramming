#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<ll> ans;
	for(ll i = 0, a; i < n; ++i) {
		cin >> a;
		if (a) ans.push_back(i);
	}
	if (ans.size() == 0) cout << 0 << "\n";
	else if (ans.size() == 1) cout << 1 << "\n";
	else {
		ll fin = 1;
		for(ll i = 1; i < ans.size(); ++i) {
			fin *= (ans[i] - ans[i - 1]);
		}
		cout << fin << "\n";
	}
}
