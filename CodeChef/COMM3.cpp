#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int r;
		cin >> r;
		vector<pair<int, int>> a;
		for(int i= 0; i < 3; ++i) {
			int b, c;
			cin >> b >> c;
			a.push_back(make_pair(b, c));
		}
		double c, d, e;
		c = sqrt(pow(abs(a[0].first - a[1].first), 2) + pow(abs(a[0].second - a[1].second), 2));
		d = sqrt(pow(abs(a[1].first - a[2].first), 2) + pow(abs(a[1].second - a[2].second), 2));
		e = sqrt(pow(abs(a[0].first - a[2].first), 2) + pow(abs(a[0].second - a[2].second), 2));
		if ((c <= r && d <= r) || (c <= r && e <= r) || (d <= r && e <= r)) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}
}
