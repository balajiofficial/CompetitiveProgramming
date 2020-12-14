#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[500];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int b[500];
	b[0] = a[0];
	for(int i = 1; i < n; ++i) {
		b[i] = max(a[i], k - b[i -1]);
	}
	int ans = 0;
	for(int i = 0; i <n; ++i) {
		ans += b[i] - a[i];
	}
	cout << ans << "\n";
	for(int i = 0; i < n; ++i) {
		cout << b[i] << " ";
	}
	cout << "\n";
}
