#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m, a[101], b[101];
		cin >> n;
		for(int i = 1; i <= n; ++i) {
			int c;
			cin >> c;
			if (i == 1) a[i] = c;
			else a[i] = c + a[i - 1];
		}
		cin >> m;
		for(int i = 1; i <= m; ++i) {
			int c;
			cin >> c;
			if (i == 1) b[i] = c;
			else b[i] = b[i - 1] +c;
		}
		int dp[101][101];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= m; ++j) {
				dp[i][j] = max(dp[i][j - 1], a[i] + b[j]);
			}
		}
		int ans3 = max(*max_element(b + 1, b+(m +1)), *max_element(a + 1, a+(n + 1)));
		int ans1 = 0;
		for(int i = 1; i <= n; ++i) {
			ans1 = max(ans1, dp[i][m]);
		}
		cout << max(ans1, ans3) << "\n";
	}
}
