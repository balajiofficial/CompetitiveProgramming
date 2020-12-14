#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, ans = 0;
	cin >> n >> a;
	int b[100];
	for(int i=0; i < n; ++i) cin >> b[i];
	--a;
	int l = a - 1, r = a + 1;
	while(l >= 0 || r < n) {
		if (l < 0) {
			if (b[r]) ++ans;
		} else if (r >= n ) {
			if (b[l]) ++ans;
		} else {
			if (b[l]&&b[r]) ans += 2;
		}
		--l, ++r;
	}
	cout << ans + b[a] << "\n";
}
