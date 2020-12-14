#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[100][4];
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < 4; ++j) {
				cin >> a[i][j];
			}
		}
		if (m % 2 == 1) {
			cout << "NO\n";
			continue;
		}
		bool ok = 0;
		for(int i = 0; i < n&&!ok; ++i) {
			if (a[i][1] == a[i][2]) {
				ok = 1;
			}
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
