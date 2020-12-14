#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	int a[101][101];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j)
			cin >> a[i][j];
	}
	for(int i = 0; i < n; ++i) {
		ans += a[i][i];
		ans += a[i][n - i - 1];
	}
	for(int i = 0; i < n; ++i)  {
		ans += a[i][n/2];
		ans += a[n/2][i];
	}
	ans -= 3 * a[n/2][n/2];
	cout << ans << "\n";
}
