#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;

void solve() {
	int n;
	cin >> n;
	vector<int> a;
	if (n > 45) {
		cout << -1 << "\n";
		return;
	}
	for(int i = 9; i >= 1; --i) {
		a.push_back(min(n, i));
		n -= min(n, i);
		if (n == 0) {
			break;
		}
	}
	sort(a.begin(), a.end());
	for(int i : a) {
		cout << i;
	}
	cout << "\n";
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
