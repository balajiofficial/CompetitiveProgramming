#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll ans = 0;
	ans += a + 2 + b * 2;
	ans += c + 2 + d * 2;
	ans += abs(c - a);
	cout << ans << "\n";
}
