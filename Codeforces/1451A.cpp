#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll ans= 0;
		if (n == 1) {
			cout << 0 << "\n";
			continue;
		}
		if (n == 2) {
			cout << 1 << "\n";
			continue;
		}
		if (n == 3) {
			cout << 2 << "\n";
			continue;
		}
		if (n % 2 == 1) {
			cout << 3 << "\n";
		} else {
			cout << 2 << "\n";
		}
	}
}
