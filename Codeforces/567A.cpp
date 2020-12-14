#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll a[100000], high = INT_MIN, low=INT_MAX;
	for(ll i = 0; i < n; ++i) {
		cin >> a[i];
		high =max(high, a[i]);
		low = min(low, a[i]);
	}
	for(ll i = 0; i < n; ++i) {
		if (i != 0 && i != n -1)
			cout << min(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1])) << " ";
		else if (i == 0) {
			cout << abs(a[i] - a[i + 1]) << " ";
		} else {
			cout << abs(a[i] - a[i - 1]) << " ";
		}
		cout << max(abs(a[i] - high), abs(a[i] - low)) << "\n";
	}
}
