#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> a;
	for(int i = 1; i <= n; ++i) {
		int b;
		cin >> b;
		a.push_back(make_pair(b, i));
	}
	auto comp = [=](pair<int, int> a, pair<int, int> b) {
		return a.first < b.first;
	};
	sort(a.begin(), a.end(), comp);
	ll ans = 0;
	for(int i = 1; i < n; ++i) {
		ans += abs(a[i].second - a[i - 1].second);
	}
	cout << ans << "\n";
}
