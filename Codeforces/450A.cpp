#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int ans = 0, fin = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if ((a/m + min(1, (a - a/m *m) % m)) >= ans) {
			ans = a/m + min(1, (a - m/m * m) %m);
			fin = i + 1;
		}
	}
	cout << fin <<"\n";
}
