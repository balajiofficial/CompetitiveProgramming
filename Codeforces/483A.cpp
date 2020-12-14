#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll l, r;
	cin >> l >> r;
	if (r - l + 1 < 3) {
		cout << -1 << "\n";
	} else {
		if (l%2==0) {
			cout << l << " " << l + 1 << " "<< l + 2 << "\n";
		} else {
			if (r - l + 1 < 4) {
				cout << - 1 << "\n";
			} else {
				cout << l + 1 << " "<< l + 2 << " " << l + 3 << "\n";
			}
		}
	}
}
