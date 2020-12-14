#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		if (n % 2) {
			int num;
			for(ll i = 3;i <= n; ++i) {
				if (n % i == 0) {
					num = i;
					break;
				}
			}
			cout << num + n + 2 * (k - 1) << "\n";
		} else {
			cout << n + 2 * k << "\n";
		}
	}
}
