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
		map<int, int> a;
		for(int i = 0; i < n; ++i) {
			int b;
			cin >> b;
			++a[b];
		}
		int ans = 0, high = 0;
		for(auto e : a) {
			high = max(high, e.second);
			++ans;
		}
		cout << max(min(ans - 1, high), min(ans, high - 1)) << "\n";
	}
}
