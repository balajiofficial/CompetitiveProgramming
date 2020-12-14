#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int ans = INT_MAX;
	for(int i= 0; i < n; ++i) {
		int a;
		cin >> a;
		if (k % a == 0) {
			ans = min(ans, k/a);
		}
	}
	cout << ans << "\n";
}
