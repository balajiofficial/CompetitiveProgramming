#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	ll ans = (n/2)/(k + 1);
	cout << ans << " " << ans*k << " " << n - ans*(k + 1) << "\n";
}
