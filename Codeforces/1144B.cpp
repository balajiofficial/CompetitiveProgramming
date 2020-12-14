#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	for(int i = 0; i <n; ++i) {
		int c;
		cin >> c;
		if (c % 2)
			a.push_back(c);
		else
			b.push_back(c);
	}
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
	int od = min(a.size(), b.size()) + (a.size() > b.size() ? 1 : 0);
	int ev = min(b.size(), a.size()) + (b.size() > a.size() ? 1 : 0);
	int k = 0, l = 0, res = (od > ev ? 1 : 0);
	while(od > 0 || ev > 0) {
		if (od > 0 && res == 1) {
			res = 0;
			--od;
			a[k] = 0;
			++k;
		} else if (ev > 0 && res == 0) {
			res = 1;
			--ev;
			b[l] = 0;
			++l;
		}
	}
	int ans = 0;
	for(int i = 0; i < a.size(); ++i) {
		ans += a[i];
	}
	for(int j = 0; j < b.size(); ++j) {
		ans += b[j];
	}
	cout << ans << "\n";
}
