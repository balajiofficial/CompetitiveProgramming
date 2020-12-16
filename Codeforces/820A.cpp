#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int ans = 1, d = v0, e = v0;
	while(e < c) {
		d = min(v1, d + a);
		e += d - l;
		++ans;
	}
	cout << ans << "\n";
}
