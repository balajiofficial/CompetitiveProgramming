#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("lostcow.out");
	ifstream cin ("lostcow.in");
	int x, y;
	cin >> x >> y;
	if (x == y) {
		cout << 0 << "\n";
		return 0;
	}
	int ans = 0, res = x, prod = 1;
	while(1) {
		int newx = x + prod;
		if (prod < 0) {
			if (y < x && y >= newx) {
				ans += abs(res - y);
				break;
			}
		} else {
			if (y > x && y <= newx) {
				ans += abs(res - y);
				break;
			}
		}
		ans += abs(res - newx);
		res = newx;
		prod *= -2;
	}
	cout << ans << "\n";
}
