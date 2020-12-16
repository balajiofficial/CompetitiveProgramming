#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		ans += a;
	}
	ll ans1 = 0;
	for(int i = 0; i < n - 1; ++i) {
		int a;
		cin >> a;
		ans1 += a;
	}
	cout << ans - ans1 << "\n";
	ans = 0;
	for(int i = 0; i < n - 2; ++i) {
		int a;
		cin >> a;
		ans += a;
	}
	cout << ans1 - ans << "\n";
}
