#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	ll a[200000];
	for(int i =0; i < n; ++i) {
		ll b;
		cin >> b;
		if (i == 0) a[i] = b;
		else a[i] = a[i - 1] + b;
	}
	while(m--) {
		ll b;
		cin >> b;
		int ans = lower_bound(a, a+n, b) - a;
		cout << ans + 1 << " ";
		if (ans == 0) cout << b << "\n";
		else cout << b - a[ans - 1] << "\n";
	}
}
