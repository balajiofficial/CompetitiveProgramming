#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if (n % 2 || (n % 2 == 0 && n/2 <= 2)) {
		cout << 0 << "\n";
	} else {
		n /= 2;
		cout << n/2 - (n % 2 == 0) << "\n";
	}
}
