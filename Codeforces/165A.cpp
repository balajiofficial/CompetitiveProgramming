#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[200][2];
	for(int i=  0; i < n; ++i) {
		int b, c;
		cin >> b >> c;
		a[i][0] = b;
		a[i][1] = c;
	}
	int ans= 0;
	for(int i = 0; i < n; ++i) {
		bool b = 0, c = 0, d = 0, e =0;
		for(int j = 0; j < n; ++j) {
			if (a[j][1] == a[i][1] && a[j][0] > a[i][0]) {
				b = 1;
			}
			if (a[j][1] == a[i][1] && a[j][0] <  a[i][0]) {
				c = 1;
			}
			if (a[j][0] == a[i][0] && a[j][1] < a[i][1]) {
				d = 1;
			}
			if (a[j][0] == a[i][0] && a[j][1] > a[i][1]) {
				e = 1;
			}
		}
		ans += b&&c&&d&&e;
	}
	cout << ans << "\n";
}
