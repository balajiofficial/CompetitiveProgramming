#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[50], b[50];
		for(int i = 0;i < n; ++i) {
			cin >> a[i];
		}
		for(int i = 0; i < n; ++i)
			cin >> b[i];
		sort(a, a+n);
		sort(b, b+n, greater<int>());
		bool ok = 1;
		for(int i = 0; i < n; ++i ) {
			if (a[i] + b[i] > x) {
				ok = 0;
				break;
			}
		}
		if (ok) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
}
