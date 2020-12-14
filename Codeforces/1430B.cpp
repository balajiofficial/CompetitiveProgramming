#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		const int mxN = 2e5;
		ll a[mxN];
		if (n == 1) {
			cout << a[0] << "\n";
			continue;
		}
		for(int i= 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = n - 2; i >= 0; --i) {
			if (k > 0) {
				--k;
				a[n - 1] += a[i];
			}
		}
		cout << a[n - 1] << "\n";
	}
}
