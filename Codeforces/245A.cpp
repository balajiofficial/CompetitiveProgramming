#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0;
	for(int i = 0; i < n;++i) {
		int e, x, y;
		cin >> e >> x >> y;
		if (e == 1) {
			a += x;
			b += y;
		} else {
			c += x;
			d += y;
		}
	}
	if (a >= (a+b)/2 + (a+b) % 2)
		cout << "LIVE\n";
	else
		cout << "DEAD\n";
	if (c >= (c + d)/2 + (c +d) % 2)
		cout << "LIVE\n";
	else
		cout << "DEAD\n";
}
