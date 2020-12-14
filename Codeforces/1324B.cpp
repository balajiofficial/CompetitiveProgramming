#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[5000];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		bool ans = 1;
		for(int i = 0; i < n; ++i) {
			bool ok = 0, res =0 ;
			if (count(a+i, a+n, a[i]) > 2) {
				cout << "YES\n";
				ans = 0;
				break;
			}
			for(int j = i + 1; j < n; ++j) {
				if (a[j] != a[i]) {
					ok = 1;
				}
				if (a[j] == a[i]) {
					if (ok)
						res = 1;
				}
			}
			if (ok&&res) {
				cout << "YES\n";
				ans = 0;
				break;
			}
		}
		if (ans) {
			cout << "NO\n";
		}
	}
}
