#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[50], ans = 0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			ans += a[i];
		}
		if (ans == 0) {
			cout << "NO\n";
			continue;
		}
		if (ans > 0) {
			sort(a, a+n, greater<int>());
		} else {
			sort(a, a+n);
		}
		cout << "YES\n";
		for(int i = 0; i<n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
