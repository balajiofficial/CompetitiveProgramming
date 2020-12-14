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
		string a;
		cin >> n >> a;
		string d;
		for(int i = 0; i < n; ++i) {
			if ((a[i] - '0') % 2)
				d += a[i];
			if (d.size() == 2) {
				break;
			}
		}
		if (d.size() <= 1) {
			cout << -1 << "\n";
			continue;
		}
		cout << d << "\n";
	}
}
