#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if (n >= 0) {
		cout << n << "\n";
	} else {
		if (abs(n) < 100) {
			cout << max(n/10, n % 10) <<"\n";
		} else
		cout << max(n/100 * 10 + n % 10, n/10) << "\n";
	}
}
