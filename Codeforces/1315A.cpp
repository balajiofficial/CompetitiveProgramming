#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		int c = a - x - 1;
		c = max(c, x);
		int d = b - y - 1;
		d = max(d, y);
		cout << max(c * b, d *a) << "\n";
	}
}
