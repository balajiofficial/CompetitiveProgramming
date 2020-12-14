#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a[1000], b[1000], n, m;

bool good(int c, int d, int k) {
	int ans1 = 0, ans2 = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] >= c) {
			++ans1;
		}
	}
	for(int j = 0; j < m; ++j) {
		if (b[j] >= d) {
			++ans2;
		}
	}
	if (ans1 + ans2 == k) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i =0; i < n; ++i) {
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	int k;
	cin >> k;
	int ans = INT_MAX, fin = 0;
	for(int i = 1; i <= 100; ++i) {
		for(int j = 1; j <=100; ++j) {
			if (good(i, j, k) == 0) continue;
			if (abs(i - j) < ans) {
				ans = abs(i - j);
				fin = i + j;
			} else if (abs(i - j) == ans) {
				fin = max(fin, i + j);
			}
		}
	}
	cout << fin << "\n";
}
