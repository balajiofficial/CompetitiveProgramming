#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, d;
		cin >> n >> d;
		int a[100];
		for(int i = 0; i < n; ++i) cin >> a[i];
		sort(a, a+n);
		if (a[0] + a[1] <= d || a[n - 1] <= d) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
