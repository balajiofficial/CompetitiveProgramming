#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a >> b;
		bool ok = 0;
		for(int i = 0; i < a.size(); ++i) {
			for(int j = 0; j < b.size(); ++j) {
				if (a[i] == b[j]) {
					ok = 1;
				}
			}
		}
		cout << (ok ? "YES": "NO") << "\n";
	}
}
