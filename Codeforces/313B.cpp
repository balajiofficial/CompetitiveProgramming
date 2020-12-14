#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int dp[100000];
	for(int i = 0; i < a.size(); ++i) {
		if (i < a.size() - 1 && a[i] == a[i + 1]) {
			if (i == 0) {
				dp[i] = 1;
			} else {
				dp[i] = dp[i - 1] + 1;
			}
		} else {
			if (i == 0) {
				dp[i] = 0;
			} else {
				dp[i] = dp[i - 1];
			}
		}
	}
	int m;
	cin >> m;
	while(m--) {
		int l, r;
		cin >> l >> r;
		--l, --r;
		int ok = 0;
		if (a[l] == a[l + 1]) {
			++ok;
		}
		cout << dp[r - 1] - dp[l] + ok << "\n";
	}
}
