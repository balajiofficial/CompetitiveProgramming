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
		int a[100], b[100];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for(int i = 0; i < m; ++i) {
			cin >> b[i];
		}
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if (a[i] == b[j]) {
					++ans;
				}
			}
		}
		cout << ans << "\n";
	}
}
