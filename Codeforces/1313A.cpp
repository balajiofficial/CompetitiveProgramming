#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		int d[3];
		cin >> d[0] >> d[1] >> d[2];
		sort(d, d+3, greater<int>());
		a = d[0];
		b = d[1];
		c = d[2];
		int ans = 0;
		if (a > 0)
			++ans, --a;
		if (b > 0)
			++ans, --b;
		if (c > 0)
			++ans, --c;
		if (a > 0 && b > 0)
			++ans, --a, --b;
		if (b > 0 && c > 0)
			++ans, --b, --c;
		if (a > 0 && c > 0)
			++ans, --a, --c;
		if (a > 0 && b > 0 && c > 0)
			++ans, --a, --b, --c;
		cout << ans << "\n";
	}
}
