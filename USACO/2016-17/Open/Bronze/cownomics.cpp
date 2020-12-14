#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("cownomics.out");
	ifstream cin ("cownomics.in");
	int n, m;
	cin >> n >> m;
	string a[100], b[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i =0; i < n; ++i) {
		cin >> b[i];
	}
	int ans = 0;
	for(int i = 0; i < m; ++i) {
		bool ok = 1;
		for(int j = 0; j < n && ok; ++j) {
			for(int l = 0; l < n && ok; ++l) {
				if (a[l][i] == b[j][i]) {
					ok = 0;
					break;
				}
			}
		}
		ans += ok;
	}
	cout << ans << "\n";
}