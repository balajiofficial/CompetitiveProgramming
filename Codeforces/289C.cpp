#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	if (n < k || (n != 1 && k == 1)) {
		cout << -1 <<"\n";
		return 0;
	}
	int ans = n - k, a[26];
	string d;
	for(int i = 0; i < ans; ++i) {
		cout << (char)(i % 2 + 'a');
		d += (char)(i % 2 + 'a');
	}
	bool ok = 1;
	if (d[d.size() - 1] == 'a') {
		cout << 'b';
		ok = 0;
	}
	for(int i= 1; i <= k; ++i) {
		if (i == 2) {
			if (ok)
				cout << 'b';
		} else {
			cout << (char)('a' + (i -1) % k);
		}
	}
	cout << "\n";
}
