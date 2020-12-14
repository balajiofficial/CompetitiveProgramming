#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	map<string, string> a;
	for(int i = 0; i < m; ++i) {
		string b, c;
		cin >> b >> c;
		a[b] = c;
	}
	for(int i = 0; i < n; ++i) {
		string b;
		cin >> b;
		cout << (b.size() <= a[b].size() ? b : a[b]) << " ";
	}
	cout << "\n";
}
