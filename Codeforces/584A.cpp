#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, t;
	cin >> n >> t;
	string d = "1";
	for(int i = 0; i < n - 2; ++i) {
		d += '0';
	}
	if (n == 1 && t == 10) {
		cout << -1 << "\n";
		return 0;
	}
	if (n ==1) {
		cout << t << "\n";
		return 0;
	}	
	ll ans = 1, a = n - 1;
	while(a--) {
		ans = (ans * 10) % t;
		ans %= 10;
	}
	if (t == 10)
		ans = 10;
	cout << d << t - ans << "\n";
}
