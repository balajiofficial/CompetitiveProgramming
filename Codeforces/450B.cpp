#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll x, y, n, ans = 0;
	cin >> x >> y >> n;
	if (n%6==0) {
		ans = x-y;
	} else { 
		n = n%6;
		if (n==1) ans =x ;
		else if (n==2) ans = y;
		else if (n==3) ans = y - x;
		else if (n==4) ans = -x;
		else if (n==5) ans = -y;
	}
	ll mod = 1e9+7;
	if (ans < 0) {
		ans = mod-abs(ans)%mod;
		ans %= mod;
	} else {
		ans %= mod;
	}
	cout << ans << "\n";
}

