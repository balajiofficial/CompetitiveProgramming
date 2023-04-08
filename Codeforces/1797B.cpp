#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	int a[1001][1001];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){ 
		for (int j = 1; j <= n; j++) {
			if (a[i][j] != a[n+1-i][n+1-j]) {
				ans++;
			}
		}
	}
	ans /= 2;
	if (ans > k) {
		cout << "NO\n";
	} else {
		if (n%2==0&&(k-ans)%2==1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

