#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	bool ok = 0;
	int x = 0, y = 0;
	if (a[0] == 'U') {
		ok = 1;
		++y;
	} else {
		ok = 0;
		++x;
	}
	int ans= 0;
	for(int i = 1; i < n; ++i) {
		if (a[i] == 'R') {
			++x;
		} else {
			++y;
		}
		if (ok) {
			if (x > y) {
				ok = 0;
				++ans;
			}
		} else {
			if (y > x) {
				ok = 1;
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
