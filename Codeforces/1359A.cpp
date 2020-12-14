#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a = min(n/k, m);
		if (a == m) {
			cout << a << "\n";
		} else {
			cout << a - (m - a)/(k - 1) - min(1, (m - a) % (k - 1)) << "\n";
		}
	}
}
