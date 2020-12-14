#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, d;
	cin >> n >> m >> d;
	int a[10000];
	bool ok = 0;
	for(int i= 0; i < n * m; ++i) {
		cin >> a[i];
		if (i > 0 && (a[i] - a[i - 1]) % d != 0)
			ok = 1;
	}
	if (ok) {
		cout << -1 << "\n";
		return 0;
	}
	sort(a, a+(n * m));
	int med = a[(n * m)/2];
	int ans = 0;
	for(int i = 0; i < (n * m);++i) {
		ans += abs(a[i] - med)/d;
	}
	cout << ans << "\n";
}
