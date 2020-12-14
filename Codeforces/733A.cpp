#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool ok = 0;
	int n= a.size();
	int ans = 0, res = -1;
	for(int i = 0; i < n; ++i) {
		if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y') {
			if (res == -1) {
				ans = max(ans, i + 1);
			} else {
				ans = max(ans, i - res);
			}
			res = i;
			ok = 1;
		}
	}
	ans = max(ans, n - res);
	cout << ans << "\n";
}
