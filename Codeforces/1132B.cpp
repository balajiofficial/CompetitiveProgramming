#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[300000], ans = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		ans += a[i];
	}
	int m;
	cin >> m;
	sort(a, a+n);
	while(m--) {
		int b;
		cin >> b;
		cout << ans - a[n - b] << "\n";
	}
}
