#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, e = -1, b = -1, c = INT_MAX, d = INT_MAX;
	cin >> n >> m;
	char a[50][50];
	for(int i = 0; i <n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
			if (a[i][j] == '*') {
				e = max(e, i);
				b = max(b, j);
				c = min(c, i);
				d = min(d, j);
			}
		}
	}
	for(int i = c; i <=e; ++i) {
		for(int j = d; j <= b; ++j) {
			cout << a[i][j];
		}
		cout << "\n";
	}
}
