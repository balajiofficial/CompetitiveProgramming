#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll x, y, n;
		cin >> x >> y >> n;
		while(n % x != y) {
			n -= 1;
		}
		cout << n << "\n";
	}
}
