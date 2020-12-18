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
		cin	 >> n;
		vector<ll> a(n);
		ll o = 0, e = 0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			if (i % 2) o += a[i];
			else e += a[i];
		}
		if (e < o) {
			for(int i = 0; i < n; i += 2) {
				a[i] = 1;
			}
		} else {
			for(int i = 1; i < n; i += 2) {
				a[i] = 1;
			}
		}
		for(int i = 0; i <n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
