#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int t = a + b + c;
	map<int, int> f;
	while(t--) {
		int d;
		cin >> d;
		f[d]++;
	}
	vector<int> ans;
	for(auto e : f) {
		if (e.second >= 2) {
			ans.push_back(e.first);
		}
	}
	cout << ans.size() << "\n";
	for(int i : ans) {
		cout << i << "\n";
	}
}
