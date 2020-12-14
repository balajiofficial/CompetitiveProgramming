#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0, am = INT_MAX;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		ans += min(am, b) * a;
		am = min(am, b);
	}
	cout << ans << "\n";
}
