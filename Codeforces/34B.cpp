#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	for(int i = 0; i < m;++i) {
		if (a[i] < 0) {
			ans += a[i];
		}
	}
	cout << abs(ans) << "\n";
}
