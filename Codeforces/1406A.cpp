#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[101];
		memset(a, 0, sizeof(a));
		for(int i = 0;i < n; ++i) {
			int b;
			cin >> b;
			a[b] += 1;
		}
		int ans = 0;
		for(int i = 0; a[i] >= 2; ++i) {
			++ans;
		}
		for(int i = 0; a[i] >= 1; ++i) {
			++ans;
		}
		cout << ans << "\n";
	}
}
