#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		vector<int> a(n + 1);
		for(int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		vector<int> b(n + 1);
		for(int i = 1; i <= n; ++i) {
			b[a[i]] = i;
		}
		bool ok = 1;
		for(int i = 1; i <= n; ++i) {
			if (b[i] != a[i]) {
				ok = 0;
				break;
			}
		}
		if (ok) {
			cout << "ambiguous\n";
		} else {
			cout << "not ambiguous\n";
		}
	}
}
