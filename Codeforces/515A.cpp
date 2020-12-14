#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	a = abs(a);
	b = abs(b);
	if (a + b <= c && (c - (a + b)) % 2 == 0) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}