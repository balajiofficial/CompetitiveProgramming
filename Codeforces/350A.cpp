#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int low = INT_MAX, high = 0;
	int a[100], b[100], low1=INT_MAX;
	for(int i = 0; i <n; ++i) {
		cin>> a[i];
		high = max(high, a[i]);
		low1 = min(low1, a[i]);
	}
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
		low = min(low, b[i]);
	}
	if (high >= low || low1 * 2 >= low) {
		cout << -1 << "\n";
		return 0;
	}
	cout << max(low1 * 2, high) << "\n";
}
