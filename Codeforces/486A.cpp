#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	if (n % 2 == 1) {
		ll a= (n - 1)/2;
		cout << -1 * ((n * (n + 1))/2 - (a * (a + 1))/2 * 4) << "\n";
	} else {
		ll a = n/2;
		cout << -1 * ((n * (n + 1))/2) + (a * (a + 1))/2 * 4 << "\n";
	}
}
