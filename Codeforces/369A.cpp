#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k, ans = 0;
	cin >> n >> m >> k;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == 1) {
			if (m > 0) {
				--m;
			} else {
				++ans;
			}
		} else {
			if (k == 0 && m == 0) {
				++ans;
			} else {
				if (k > 0) {
					--k;
				} else {
					--m;
				}
			}
		}
	}
	cout << ans << "\n";
}
