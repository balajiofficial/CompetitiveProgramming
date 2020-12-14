#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, v, res = 0;
	cin >> n >> v;
	int ans =0 ;
	for(int i = 1; i <= n; ++i) {
		if (abs(n - i) > res) {
			ans += i * min(v - res, n - i - res);
			res = min(v, n - i);
		}
		--res;
	}
	cout << ans << "\n";
}
