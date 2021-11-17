#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("blist.out");
	ifstream cin ("blist.in");
	int n, a[1001], maxt = 0, mint = 1e9;
	memset(a, 0, sizeof(a));
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int s, t, b;
		cin >> s >> t >> b;
		maxt = max(maxt, t);
		mint = min(mint, s);
		for(int j = s; j <= t; ++j) {
			a[j] += b;
		}
	}
	cout << *max_element(a+mint, a+maxt) << "\n";
}
