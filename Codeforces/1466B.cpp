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
		for(int i = 0, b; i < n; ++i) {
			cin >> b;
			a[b]++;
		}
		set<int> ans;
		for(auto e : a) {
			if (e.second == 1) {
				if (ans.count(e.first) == 1) ans.insert(e.first + 1);
				else ans.insert(e.first);
			} else {
				ans.insert(e.first);
				ans.insert(e.first + 1);
			}
		}
		cout << ans.size() << "\n";
	}
}
