#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[100000], ans[100000];
	bool vis[100001];
	memset(vis, 0, sizeof(vis));
	for(int i= 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i= n - 1; i >= 0; --i) {
		if (i == n - 1) {
			ans[i] = 1;
		} else {
			if (vis[a[i]]) {
				ans[i] = ans[i + 1];
			} else {
				ans[i] = ans[i + 1]  + 1;
			}
		}
		vis[a[i]] = 1;
	}
	while(m--) {
		int l;
		cin >> l;
		--l;
		cout << ans[l] << "\n";
	}
}
