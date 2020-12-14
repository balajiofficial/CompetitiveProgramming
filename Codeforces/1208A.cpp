#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll fib(ll n, ll a, ll b) {
	if (n == 0)
		return a;
	else if (n == 1)
		return b;
	else
		return a ^ b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, a, b;
		cin >> a >> b >> n;
		cout << fib((n %3), a, b) << "\n";
	}
}
