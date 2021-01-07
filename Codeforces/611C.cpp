#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int h, w;
	cin >> h >> w;
	char a[501][501];
	for(int i = 1; i <= h; ++i) {
		for(int j = 1; j <= w; ++j) {
			cin >> a[i][j];
		}
	}
	int hor[501][501], ver[501][501];
	for(int i = 1; i <= h; ++i) {
		for(int j = 1; j <= w; ++j) {
			hor[i][j] = hor[i - 1][j] + hor[i][j - 1] - hor[i -1][j - 1];
			ver[i][j] = ver[i - 1][j] + ver[i][j - 1] - ver[i - 1][j - 1];
			if (a[i][j] == '.') {
				if (i != h && a[i + 1][j] == '.') {
					ver[i][j]++;
				}
				if (j != w && a[i][j + 1] == '.') {
					hor[i][j]++;
				}
			}
		}
	}
	int t;
	cin >> t;
	while(t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int ans = 0;
		ans += hor[c][d - 1] - hor[c][b - 1] - hor[a - 1][d - 1] + hor[a - 1][b - 1];
		ans += ver[c - 1][d] - ver[c - 1][b - 1] - ver[a - 1][d] + ver[a - 1][b - 1];
		cout << ans << "\n";
	}
}
