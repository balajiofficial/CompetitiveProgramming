#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		k *= (n + k - 1)/k;
		cout << (k + n - 1)/n << "\n";
	}
}
