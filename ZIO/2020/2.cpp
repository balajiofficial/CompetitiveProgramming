#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; ++i) {
		ans = max(ans, int(floor(log2(i)) + floor(log2(n - i))));
	}
	cout << ans << "\n";
}
