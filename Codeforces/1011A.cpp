#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string a;
	cin >> a;
	sort(a.begin(), a.end());
	int c = 0, ans = a[0] - 'a' + 1, ok = 0, i = 1;
	for(int i = 0; i < n; ++i) {
		if (a[i] - a[c] >= 2) {
			ans += a[i] - 'a' + 1;
			c = i;
			++ok;
		}
		if (ok == k - 1) {
			break;
		}
		if (i == n) {
			ans = -1;
			break;
		}
	}
	if (ok != k - 1)
		ans = -1;
	cout << ans << "\n";
}
