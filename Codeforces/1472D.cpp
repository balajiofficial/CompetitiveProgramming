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
		ll c[200000];
		for(int i = 0; i < n; ++i) {
			cin >> c[i];
		}
		sort(c, c+n);
		ll a = 0, b =0, res = 0;
		for(int i = n - 1; i >= 0; --i) {
			if (res % 2 == c[i] % 2) {
				if (res == 0) {
					a += c[i];
					res = 1;
				} else {
					b += c[i];
					res = 0;
				}
			} else {
				res = 1 - res;
			}
		}
		if (b == a) {
			cout << "Tie\n";
		} else if (b > a) {
			cout << "Bob\n";
		} else {
			cout << "Alice\n";
		}
	}
}
