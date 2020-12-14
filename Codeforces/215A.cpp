#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[50];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int b[50], m;
	cin >> m;
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	vector<int> c;
	int ans= 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (b[j] % a[i] == 0) {
				c.push_back(b[j]/a[i]);
				ans = max(ans, b[j]/a[i]);
			}
		}
	}
	int fin = 0;
	for(int d : c) {
		if (d == ans) {
			++fin;
		}
	}
	cout << fin << "\n";
}
