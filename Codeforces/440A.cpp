#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll sum = 0;
	for(ll i = 0; i < n - 1; ++i) {
		ll b;
		cin >> b;
		sum += b;
	}
	cout <<(n * (n + 1))/2 - sum << "\n";
}
