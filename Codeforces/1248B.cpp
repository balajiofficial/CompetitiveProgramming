#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, a[100000];
	cin >> n;
	for(ll i= 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll b = 0, i = 1, c = n - 1, ans1 = 0, ans2 = 0;
	while(b <= c) {
		if (i  % 2) {
			ans1 += a[c--];
		} else {
			ans2 += a[b++];
		}
		++i;
	}
	ll ans = ans1 * ans1 + ans2 * ans2;
	cout << ans << "\n";
}
