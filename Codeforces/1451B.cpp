#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, q;
		cin >> n >> q;
		string a;
		cin >> a;
		while(q--) {
			int l, r;
			cin >> l >> r;
			--l, --r;
			string d =a.substr(l, r - l + 1);
			bool ok = 0;
			int c = 0;
			reverse(d.begin(), d.end());
			for(int i = 0; i < n; ++i) {
				if (d.size() == 0) break;
				if (d.back() == a[i]) {
					if (d.size() >= 2 || ok)
						d.pop_back();
					else
						ok = 1;
				} else {
					if (d.size() < r - l + 1) ok = 1;
				}
			}
			if (d.size() == 0)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
