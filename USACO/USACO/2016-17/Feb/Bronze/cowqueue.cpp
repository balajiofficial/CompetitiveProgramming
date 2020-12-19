#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("cowqueue.out");
	ifstream cin ("cowqueue.in");
	ll n;
	cin >> n;
	map<ll, ll> a;
	for(ll i = 0; i < n; ++i) {
		ll b, c;
		cin >> b >> c;
		a[b] += c;
	}
	ll ans =0;
	for(auto e : a) {
		ll a1 = e.first;
		ll a2 = e.second;
		if (ans < a1) {
			ans = a1;
		}
		ans += a2;
	}
	cout << ans << "\n";
}
