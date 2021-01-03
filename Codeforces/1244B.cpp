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
		int ans = n;
		for(int i = 0; i < n; ++i) {
			if (a[i] == '1') {
				ans = max(ans, max(2 * ( i+ 1), 2 * (n - i)));
			}
		}
		cout << ans << "\n";
	}
}
