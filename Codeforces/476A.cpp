#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int fin = INT_MAX;
	for(int i = 0; i <= n; ++i) {
		if (n % 2 == i % 2) {
			int ans = n- i;
			ans /= 2;
			if ((ans + i) % m == 0) {
				fin = min(fin, ans + i);
			}
		}
	}
	if (fin == INT_MAX) {
		cout << -1 << "\n";
		return 0;
	}
	cout << fin << "\n";
}
