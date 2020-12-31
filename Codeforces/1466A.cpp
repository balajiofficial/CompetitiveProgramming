#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, a[50];
		cin >> n;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		set<int> ans;
		for(int i= 0; i < n; ++i) {
			for(int j = i + 1; j < n; ++j) {
				ans.insert(a[j] - a[i]);
			}
		}
		cout << ans.size() << "\n";
	}
}
