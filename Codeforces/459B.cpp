#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll a[200000], low = INT_MAX, high = INT_MIN;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		high = max(high, a[i]);
		low = min(low, a[i]);
	}
	cout << high - low << " ";
	ll p = 0, q = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] == low )
			++p;
		else if (a[i] == high)
			++q;
	}
	if (p == 0 || q == 0) {
		cout << (n * (n - 1))/2 << "\n";
	} else {
		cout << p * q << "\n";
	}
}
