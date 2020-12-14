#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, k;
		cin >> a >> b >> k;
		if (k % 2 == 0) {
			cout << (a - b) * k/2;
		} else {
			cout << (a - b) * (k/2 + k % 2) + b;
		}
		cout << "\n";
	}
}
