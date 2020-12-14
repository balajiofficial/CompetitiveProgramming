#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	const int mxN = 3e4;
	int a[mxN];
	for(int i = 1; i <= n -1; ++i) {
		cin >> a[i];
	}
	int i = 1;
	while(1) {
		i += a[i];
		if (i == t) {
			break;
		}
		if (i > t) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
