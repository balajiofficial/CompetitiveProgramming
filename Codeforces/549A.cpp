#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char a[50][50];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n - 1; ++i) {
		for(int j =0; j < m - 1; ++j) {
			char b[4];
			b[0] = a[i][j];
			b[1] = a[i][j + 1];
			b[2] = a[i + 1][j];
			b[3] = a[i + 1][j + 1];
			sort(b, b+4);
			if (b[0] == 'a' && b[1] == 'c' && b[2] == 'e' && b[3] == 'f') {
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
