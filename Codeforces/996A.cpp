#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	ll a[5] = {100, 20, 10, 5, 1};
	int ans =0;
	for(int i = 0; i < 5; ++i) {
		if (n >= a[i]) {
			ans += n/a[i];
			n -= n/a[i] * a[i];
		}
	}
	cout << ans << "\n";
}
