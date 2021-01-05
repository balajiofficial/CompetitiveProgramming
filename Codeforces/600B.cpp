#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < m; ++i) {
		int p = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
		cout << p << " ";
	}
	cout << "\n";
}
