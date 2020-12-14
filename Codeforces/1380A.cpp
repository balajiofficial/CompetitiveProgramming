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
		int a[1000];
		for(int i = 0;i < n; ++i) {
			cin >> a[i];
		}
		bool ok = 0;
		for(int i = 1; i < n - 1; ++i) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
				cout << "YES\n";
				cout << i << " " << i + 1 << " " << i + 2 << "\n";
				ok = 1;
			}
			if (ok)
				break;
		}
		if (!ok)
			cout << "NO\n";
	}
}
