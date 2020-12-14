#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[100][100];
	int c[100];
	memset(c, 0, sizeof(c));
	for(int i= 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			char b;
			cin >> b ;
			a[i][j] = b - '0';
			c[j] = max(c[j], a[i][j]);
		}
	}
	set<int> d;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (a[i][j] == c[j]) {
				d.insert(i);
			}
		}
	}
	cout << d.size() << "\n";
}
