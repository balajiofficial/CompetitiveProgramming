#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	ll bal = n % m;
	for(int i = 0; i < m; ++i) {
		if (bal > 0) {
			cout << n/m + 1 << " ";
			--bal;
		} else {
			cout << n/m << " ";
		}
	}
	cout << "\n";
}
