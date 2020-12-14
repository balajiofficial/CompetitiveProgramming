#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("speeding.out");
	ifstream cin ("speeding.in");
	int n, m;
	cin >> n >> m;
	int a[101];
	int l = 1;
	for(int i = 0; i < n; ++i) {
		int b, c;
		cin >> b >> c;
		for(int j = l; j < l + b; ++j) {
			a[j] = c;
		}
		l += b;
	}
	int ans = 0;
	l = 1;
	for(int i = 0; i <m ; ++i) {
		int b, c;
		cin >> b >> c;
		for(int j = l; j < l + b; ++j) {
			ans = max(ans, c - a[j]);
		}
		l += b;
	}
	cout << ans << "\n";
}
