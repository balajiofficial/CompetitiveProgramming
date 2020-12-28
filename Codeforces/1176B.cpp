#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, b[3] = {0, 0, 0};
		cin >> n;
		for(int i = 0, a; i < n; ++i) {
			cin >> a;
			++b[a % 3];
		}
		int ans = b[0];
		int res = min(b[1], b[2]);
		b[1] -= res;
		b[2] -= res;
		ans += res;
		ans += (b[1] == 0 ? b[2]/3 : b[1]/3);
		cout << ans << "\n";
	}
}
