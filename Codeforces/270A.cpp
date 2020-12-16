#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ok = 0;
		for(int i = 3; i <= 1000; ++i) {
			if ((i - 2) * 180 == n * i) {
				ok = 1;
				break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
