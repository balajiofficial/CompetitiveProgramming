#include<bits/stdc++.h>

using namespace std;

#define ll long long

int f(int n) {
	if (n % 2 == 0) {
		return n/2;
	} else {
		return -n + f(n -1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll l, r ;
		cin >> l >> r;
		cout << f(r) - f(l -1) << "\n";
	}
}
