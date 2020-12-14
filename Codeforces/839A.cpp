#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, a[100];
	cin >> n >> k;
	for(int i= 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans =0, res = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] > 8) {
			ans += 8;
			res += a[i] - 8;
		} else {
			if (a[i] == 8) {
				ans += 8;
			} else {
				ans += min(8, a[i] + res);
				if (8 < a[i] + res) {
					res -= 8- a[i];
				} else {
					res = 0;
				}
			}
		}
		if (ans >=  k) {
			cout << i + 1<< "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
}
