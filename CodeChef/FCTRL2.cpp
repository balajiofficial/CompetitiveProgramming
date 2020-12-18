/*
 * This program is correct but it will not pass the test cases of CodeChef
 * because, max value of n can be 100 and 100! is close to 9.3e157 which cannot
 * be stored even in an unsigned 64 bit integer. The only possible way to solve this problem
 * is with python which can store such large numbers.
 */
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
		ll ans = 1;
		for(ll i = 1; i <= n; ++i) {
			ans *= i;
		}
		cout << ans << "\n";
	}
}
