#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		ll ans = a ^ b;
		cout << ans << "\n";
	}
}
