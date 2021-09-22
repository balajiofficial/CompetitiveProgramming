#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			int k = i ^ j;
			if (k > n || k < j) continue;
			if (i + j > k && j + k > i && k + j > i) ans++;
		}
	}
	cout << ans << "\n";
}