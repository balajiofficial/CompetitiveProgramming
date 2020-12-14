#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll   n, k;
		cin >> k >> n;
		ll ans = n/2 * (k/n + min((ll)1, k % n)) + (n - n/2) * (k/n);
		cout << min(ans, k) << "\n";
	}
}
