#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i <n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	sort(a, a+n);
	for(int i = 0; i < n - 1; ++i) {
		if (i != n - 2 && a[i] != 0 && a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
			cout << -1 << "\n";
			return 0;
		} else if (a[i] == a[i + 1] && a[i] != 0) {
			++ans;
			++i;
		}
	}
	cout << ans << "\n";
}
