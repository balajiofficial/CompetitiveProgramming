#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, int> a;
	for(int i = 0; i < n; ++i) {
		int b, c;
		cin >> b >> c;
		a[b] = c;
	}
	bool ok = 0;
	int res = 0;
	for(auto e : a) {
		int b = e.first;
		int c = e.second;
		if (c < res) {
			ok = 1;
		}
		res = c;
	}
	if (ok) {
		cout << "Happy Alex\n";
	} else {
		cout << "Poor Alex\n";
	}
}
