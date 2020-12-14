#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, h, c0, c1;
		cin >> n >> c0 >> c1 >> h;
		string a;
		cin >> a;
		ll z = 0, o = 0;
		for(int i = 0; i < n; ++i) {
			if (a[i] == '1')
				++o;
			else
				++z;
		}
		if (h + c1 < c0) {
			cout << z * (c1 + h) + o * c1 << "\n";
		} else if (h + c0 < c1) {
			cout << z * c0 + o * (h + c0) << "\n";
		} else {
			cout << z * c0 + o * c1 << "\n";
		}
	}
}
