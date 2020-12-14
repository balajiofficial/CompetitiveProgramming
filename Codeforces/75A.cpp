#include<bits/stdc++.h>

using namespace std;

#define ll long long

int chop(int n) {
	if (n == 0) return 0;
	if (n % 10 == 0) {
		return chop(n/10);
	} else {
		return chop(n/10) * 10 + n % 10;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int c = a + b;
	a = chop(a);
	b = chop(b);
	c = chop(c);
	if (c == a + b) cout << "YES\n";
	else
		cout << "NO\n";
}
