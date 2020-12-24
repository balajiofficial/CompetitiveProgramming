#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int p;
	cin >> p;
	int ans = 0, res = 1;
	while(ans < p) {
		if (res >= a) {
			ans += b;
		}
		if (res >= c) {
			ans += d;
		}
		++res;
	}
	cout << res - 1 << "\n";
}
