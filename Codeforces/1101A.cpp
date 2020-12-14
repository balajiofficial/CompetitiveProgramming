#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll l, r, d;
		cin >> l >> r >> d;
		if (l/d > 1 || (l/d == 1 && l > d)) {
			cout << d << "\n";
		} else {
			cout << (r/d + 1) * d << "\n";
		}
	}
}
