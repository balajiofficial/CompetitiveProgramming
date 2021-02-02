#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool ok(ll n) {
	double a = log2(n);
	return floor(a) == a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		cout << (!ok(n) ? "YES" : "NO") << "\n";
	}
}
