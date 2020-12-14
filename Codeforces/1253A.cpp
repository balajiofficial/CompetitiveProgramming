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
		int b[100000], a[100000];
		for(int i= 0; i < n; ++i) {
			cin >> a[i];
		}
		for(int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		bool ok = 0;
		ll res = 0, ans= 0;
		for(int i = 0; i < n; ++i) {
			if (a[i] != b[i]) {
				if (res == 0) {
					res = b[i] - a[i];
				}
				if (res != b[i] - a[i]) {
					ok = 1;
					break;
				}
				if (res < 0) {
					ok = 1;
					break;
				}
				int j = i;
				while(j + 1 < n && a[j + 1] - b[j + 1] == -res) {
					++j;
				}
				++ans;
				i = j;
			}
		}
		if (ok || ans > 1) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
}
