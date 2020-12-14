#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll x, y;
		cin >> x >> y;
		if (x - y == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
