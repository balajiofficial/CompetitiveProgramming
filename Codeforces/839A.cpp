#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, a[1000];
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = 0, s = 0;
	for(int i = 0; i < n; ++i) {
		s += a[i];
		int e = min(8, s);
		k -= e;
		s -= e;
		if (k <= 0) {
			cout << i+1 << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
}
