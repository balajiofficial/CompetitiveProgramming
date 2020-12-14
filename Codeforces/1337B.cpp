#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int x, n, m;
		cin >> x >> n >> m;
		bool ok = 0;
		for(int i = 0; i <= n; ++i) {
			int num = x;
			for(int j = 0; j < i; ++j) {
				num = num/2 + 10;
			}
			for(int j = 0; j < m; ++j) {
				num -= 10;
			}
			if (num <= 0)
				ok = 1;
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
