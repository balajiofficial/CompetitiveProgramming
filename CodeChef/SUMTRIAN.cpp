#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;

void solve() {
	cin >> n;
	vector<vector<int>> a(n);
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j <= i; ++j) {
			int b; cin >> b;
			a[i].push_back(b);
		}
	}
	int dp[100][100];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j <=i; ++j) {
			if (i == 0) {
				dp[i][j] = a[i][j];
			} else if (j != i && j != 0) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
			} else if (j == 0) {
				dp[i][j] = dp[i - 1][j] + a[i][j];
			} else {
				dp[i][j] = dp[i - 1][j - 1] + a[i][j];
			}
		}
	}
	cout << *max_element(dp[n - 1], dp[n - 1]+n) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
