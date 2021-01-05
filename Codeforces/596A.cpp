#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n == 1) {
		cout << -1 << "\n";
		return 0;
	}
	vector<int> x, y;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		if (find(x.begin(), x.end(), a) == x.end()) {
			x.push_back(a);
		}
		if (find(y.begin(), y.end(), b) == y.end()) {
			y.push_back(b);
		}
	}
	if (x.size() == 2 && y.size() == 2) {
		cout << abs(x[0] - x[1]) * abs(y[0] - y[1]) << "\n";
	} else {
		cout << -1 << "\n";
	}
}
