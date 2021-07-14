#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll f(ll n) {
	ll ans = 0;
	for(ll i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			ans += (i * i == n ? 1 : 2);
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll i = 1;
	while(1) {
		ll n = (i * (i + 1))/2;
		if(f(n) > 500) {
			cout << n << "\n";
			break;
		}
		i++;
	}
}
