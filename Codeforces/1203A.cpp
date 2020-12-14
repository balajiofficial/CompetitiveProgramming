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
		int a[200];
		for(int i = 0 ;i < n; ++i) {
			cin >> a[i];
		}
		int p1 = 0, p2 = 0;
		for(int i = 0; i < n; ++i) {
			if (i == 0) {
				if (a[i] - a[n -1] != 1) {
					++p1;
				}
				if (a[n - 1] - a[i] != 1) {
					++p2;
				}
				continue;
			}
			if (a[i] - a[i - 1] != 1) {
				++p1;
			}
			if (a[i - 1] - a[i] != 1) {
				++p2;
			}
		}
		if (p1 <= 1 || p2 <= 1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
