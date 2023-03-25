#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll, ll> dis;
map<ll, ll> te;

void d(ll n) {
	if (n==1) return;
	for (ll i = 2; i <= n; i++) {
		if (n%i==0) {
			dis[i] = dis[i] + 1;
			d(n/i);
			break;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = 0;
	for (ll i = 1; i <= a; i++) {
		for (ll j = 1; j <=b; j++) {
			for (ll k= 1; k <=c; k++) {
				if (te[i*j*k]!=0) {ans+= te[i*j*k];continue;}
				d(i*j*k);
				ll count = 1;
				for (auto e: dis) {
					count *= (e.second + 1);
				}
				te[i*j*k] = count;
				ans += count;
				dis.clear();
			}
		}
	}	
	cout << ans  << "\n";
}
