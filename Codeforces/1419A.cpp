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
		bool o = 0, e = 0;
		for(int i = 1; i <= n; ++i) {
			if (i % 2) {
				o |= ((a[i - 1] - '0') % 2 == 1);
			} else {
				e |= ((a[i - 1] - '0') % 2 == 0);
			}
		}
		if (n % 2)
			cout << (o ? 1 : 2) << "\n";
		else
			cout << (e ? 2 : 1) << "\n";
	}
}
