#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("ctiming.out");
	ifstream cin ("ctiming.in");
	int a, b, c;
	cin >> a >> b >> c;
	ll ans = (a - 11) * 24 * 60;
	if (b < 11) {
		ans -= (11 - b) * 60;
	} else {
		ans += (b - 11) * 60;
	}
	if (c < 11) {
		ans -= (11 - c);
	} else {
		ans += (c - 11);
	}
	cout << ans << "\n";
}
