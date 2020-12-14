#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, s, t;
		cin >> n >> s >> t;
		cout << max(n - s, n - t) + 1 << "\n";
	}
}
