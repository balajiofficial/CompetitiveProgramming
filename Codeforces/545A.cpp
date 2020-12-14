#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100][100];
	set<int> b;
	vector<int> c;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> a[i][j];
			if (a[i][j] == 1) {
				b.insert(i + 1);
			} else if (a[i][j] == 2) {
				b.insert(j + 1);
			} else if (a[i][j] == 3) {
				b.insert(j + 1);
				b.insert(i + 1);
			}
		}
		c.push_back(i + 1);
	}
	for(int d : b) {
		for(int i = 0; i < n; ++i) {
			if (c[i] == d) {
				c[i] = -1;
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if (c[i] != -1) {
			++ans;
		}
	}
	cout << ans << "\n";
	for(int i = 0; i < n; ++i) {
		if (c[i] != -1) {
			cout << c[i] << " ";
		}
	}
	cout << "\n";
}
