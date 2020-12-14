#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("mixmilk.out");
	ifstream cin ("mixmilk.in");
	ll a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int n = 1;
	while(n <= 100) {
		if (n % 3 == 1) {
			ll amt = min(c - d, b);
			b -= amt;
			d += amt;
		} else if (n % 3 == 2) {
			ll amt = min(e - f, d);
			d -= amt;
			f += amt;
		} else {
			ll amt =min(a - b, f);
			f -= amt;
			b += amt;
		}
		++n;
	}
	cout << b << "\n" << d << "\n" << f << "\n";
}
