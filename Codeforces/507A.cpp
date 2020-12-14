#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> a;
	for(int i = 1; i <= n; ++i) {
		int b;
		cin >> b;
		a.push_back(make_pair(b, i));
	}
	sort(a.begin(), a.end());
	vector<int> ans;
	for(auto e : a) {
		if (e.first <= k) {
			k -= e.first;
			ans.push_back(e.second);
		}
	}
	cout << ans.size()  << "\n";
	for(int i : ans) {
		cout << i << " ";
	}
	cout << "\n";
}
