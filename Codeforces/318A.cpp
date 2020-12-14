#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	ll a = n/2 + n % 2;
	if (n % 2) {
		if (k <= a) {
			cout << n - (a - k)  * 2 << "\n";
		} else {
			cout << 0 + (k - a) * 2 << "\n";
		}
	} else {
		--n;
		if (k <= a) {
			cout << n - (a - k) * 2 << "\n";
		} else {
			cout << 0 + (k - a) * 2 << "\n";
		}
	}
}
