#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int ans = 1, d = v0;
	while(c > 0) {
		d = min(v1, a * ans - l);
		c -= d;
		++ans;
	}
	cout << ans << "\n";
}
