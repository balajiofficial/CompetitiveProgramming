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
		cin >> n;
		vector<int> a(n);
		for(int i= 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int ans = INT_MAX;
		for(int i = 0; i <n - 1; ++i) {
			ans = min(ans, a[i + 1] - a[i]);
		}
		cout << ans << "\n";
	}
}
