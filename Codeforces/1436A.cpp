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
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			ans += a;
		}
		if (ans == m) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
