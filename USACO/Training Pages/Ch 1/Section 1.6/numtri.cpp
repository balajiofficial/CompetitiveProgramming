/*
ID: balajik2
TASK: numtri
LANG: C++14
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("numtri.out");
	ifstream cin ("numtri.in");
	int r, ans = 0;
	cin >> r;
	int a[1000][1000], dp[1000][1000];
	for(int i = 0; i < r; ++i) {
		for(int j = 0; j <= i; ++j) {
			cin >> a[i][j];
			dp[i][j] = a[i][j];
			if (i != 0) dp[i][j] = max(dp[i][j], a[i][j] + dp[i - 1][j]);
			if (j != 0) dp[i][j] = max(dp[i][j], a[i][j] + dp[i - 1][j - 1]);
			if (i == r - 1) ans = max(ans, dp[i][j]);
		}
	}
	cout << ans << "\n";
}
