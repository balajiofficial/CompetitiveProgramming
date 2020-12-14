#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	ll ans = 0, p =0;
	p = a.find('^');
	for(int i = 1; i <= p; ++i) {
		char b = a[p - i];
		if (b != '=') {
			ans += (b - '0') * i;
		}
	}
	for(int i = 1;i <= a.size() - 1 - p; ++i) {
		char b = a[p + i];
		if (b != '=') {
			ans -= (b - '0') *i;
		}
	}
	if (ans == 0) {
		cout << "balance\n";
	} else if (ans > 0) {
		cout << "left\n";
	} else {
		cout << "right\n";
	}
}
