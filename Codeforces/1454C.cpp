#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		const int l = 2e5 + 1;
		int a[l];
		bool ok = 1;
		memset(a, -1, sizeof(a));
		int ans = INT_MAX, res = 0;
		for(int i = 0; i < n; ++i) {
			int b;
			cin >> b;
			if (a[b] == -1)
				a[b] = 0;
			if (i != 0 && i != n - 1)
				a[b]++;
			if (i != 0) {
				if (res == b)
					a[b]--;
				else {
					ok = 0;
				}
			}
			res = b;
		}
		if (ok) {
			cout << 0 << "\n";
			continue;
		}
		for(int i =1; i < n + 1; ++i) {
			if (a[i] != -1) {
				ans = min(ans, a[i]);
			}
		}
		cout << ans + 1 << "\n";
	}
}
