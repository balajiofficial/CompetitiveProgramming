#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	const int mxN = 2e5;
	int b[mxN];
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	int ans = INT_MAX;	
	bool ok = 1;
	for(int i = 0 ; i < n - 1; ++i) {
		if (a[i] == 'R' && a[i+1] == 'L') {
			ok = 0;
			ans = min((abs(b[i] - b[i + 1]))/2, ans);
		}
	}
	if (ok) {
		cout << -1 << "\n";
	} else {
		cout << ans << "\n";
	}
}
