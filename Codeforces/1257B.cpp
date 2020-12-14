#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		if (x >= 4) cout << "YES\n";
		else if (x == 3 || x == 2) cout << (y <= 3 ? "YES\n" : "NO\n");
		else cout << (y == 1 ? "YES\n" : "NO\n");
	}
}
