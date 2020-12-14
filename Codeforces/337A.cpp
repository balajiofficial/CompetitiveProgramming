#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >>n >> m;
	int a[50];
	for(int i = 0; i < m; ++i)
		cin >> a[i];
	sort(a, a+m);
	int ans = INT_MAX;
	for(int i = 0; i + n <= m; ++i) {
		ans = min(ans, a[i + n - 1]- a[i]);
	}
	cout << ans << "\n";
}
