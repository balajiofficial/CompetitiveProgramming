#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		char a[100][1000];
		for(int i = 0; i < n; ++i)
			for(int j =0; j < m; ++j)
				cin >> a[i][j];
		int ans =0;
		for(int i = 0; i <n; ++i) {
			for(int j =0; j < m; ++j) {
				if (j < m - 1 && a[i][j] == a[i][j + 1] && a[i][j] == '.') {
					ans += min(y, x * 2);
					++j;
				} else if (a[i][j] == '.') {
					ans += x;
				}
			}
		}
		cout << ans << "\n";
	}
}
