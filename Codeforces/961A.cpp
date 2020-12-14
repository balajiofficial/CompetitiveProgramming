#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[1000], ans = 0;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < m; ++i) {
		int b;
		cin >> b;
		a[b -1] += 1;
		int low = *min_element(a, a+n);
		ans += low;
		for(int i = 0; i < n; ++i) {
			a[i] -= low;
		}
	}
	cout << ans << "\n";
}
