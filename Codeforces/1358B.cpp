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
		const int mxN = 2e5 + 1;
		int a[mxN];
		memset(a, 0, sizeof(a));
		for(int i = 0;i < n; ++i) {
			int b;
			cin >> b;
			a[b] += 1;
		}
		int sum = 1, ans = 1;
		bool ok = 1;
		for(int i = 1; i <= 2e5 + 1; ++i) {
			if (a[i] != 0) {
				sum += a[i] - 1;
				if (sum < i) {
					++ans;
					++sum;
				} else {
					cout << ans << "\n";
					ok = 0;
					break;
				}
			}
		}
		if (ok)
		cout << ans << "\n";
	}
}
