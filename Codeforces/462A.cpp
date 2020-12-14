#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[102][102];
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			char b;
			cin >> b;
			if (b == 'o') {
				a[i][j] = 1;
			}
		}
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			int ans = a[i -1][j] + a[i + 1][j] + a[i][j -1] + a[i][j +1];
			if (ans&1==1) {
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
}
