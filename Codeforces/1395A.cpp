#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll r, g, b, w;
		cin >> r >> g >> b >> w;
		bool ok = 0;
		ok |= (r%2+w%2+g%2+b%2<=1);
		if (r&&g&&b)--r,--g,--b, w += 3;
		ok |= (r%2+w%2+g%2+b%2<=1);
		cout << (ok ? "Yes" : "No") << "\n";
	}
}
