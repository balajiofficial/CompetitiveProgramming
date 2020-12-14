#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a[30000];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	bool ok = 1;
	int ans = 0;
	for(int i = 0; i < a[0].size(); ++i) {
		for(int j = 0; j < n; ++j) {
			if (a[0][i] != a[j][i]) {
				ok = 0;
				break;
			}
		}
		ans += ok;
		if (!ok)
			break;
	}
	cout << ans << "\n";
}
