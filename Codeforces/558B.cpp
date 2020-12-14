#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	const int mxN = 1e6 + 1;
	int a[mxN], b[mxN], c[mxN], ans = 0;
	memset(a, 0, sizeof(a));
	memset(b, -1, sizeof(b));
	for(int i = 0; i < n; ++i) {
		int d;
		cin >> d;
		a[d] += 1;
		ans = max(a[d], ans);
		if (b[d] == -1) {
			b[d] = i;
		}
		c[d] = i;
	}
	int l =0, r = INT_MAX;
	for(int i = 1; i < mxN; ++i) {
		if (a[i] == ans) {
			if (c[i] - b[i] < r - l) {
				r = c[i];
				l = b[i];
			}
		}
	}
	cout << l + 1 << " " << r + 1 << "\n";
}
