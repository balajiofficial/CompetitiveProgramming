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
		string a;
		cin >> a;
		int l = 0, r = 0;
		string x, y, p = "2020";
		for(int i = 0; i < 4; ++i) {
			x += a[i];
			if (x == p.substr(0, i + 1)) {
				l = i + 1;
			}
		}
		for(int i = n - 1; i >= n - 4; --i) {
			y = a[i] + y;
			if (y == p.substr(4 - (n - i), (n - i))) {
				r = n - i;
			}
		}
		if (l + r >= 4) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
