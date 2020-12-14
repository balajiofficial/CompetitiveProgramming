#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		bool ok = 1;
		for(int i = 1; i < a.size(); ++i) {
			if (a[i] != a[i -1]) {
				ok = 0;
				break;
			}
		}
		if (ok) {
			cout << -1 << "\n";
			continue;
		}
		string d = a;
		reverse(d.begin(), d.end());
		if (d == a) {
			for(int i= 1; i < a.size();++i) {
				if (a[i] != a[i -1]) {
					swap(a[i], a[i -1]);
					break;
				}
			}
		}
		cout << a << "\n";
	}
}
