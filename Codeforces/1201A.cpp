#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char a[1000][1000];
	for(int i= 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	int p[1000];
	for(int i = 0; i < m; ++i) {
		cin >> p[i];
	}
	ll ans =0;
	for(int i = 0; i < m; ++i) {
		ll b[5];
		memset(b, 0, sizeof(b));
		for(int j = 0; j < n; ++j) {
			b[a[j][i] - 'A'] += 1;
		}
		ll num= 0;
		for(int i = 0; i < 5; ++i) {
			num = max(num, b[i]);
		}
		ans += num * p[i];
	}
	cout << ans << "\n";
}
