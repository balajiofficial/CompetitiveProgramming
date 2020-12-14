#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1000], ans =0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 5) {
			++ans;
		}
	}
	if (ans == n) {
		cout << -1 << "\n";
	} else {
		int rest = n - ans;
		ans = ans/9 * 9;
		for(int i = 0; i < ans; ++i) {
			cout << 5;
		}
		for(int i = 0; i < (ans == 0 ? 1 : rest); ++i) {
			cout << 0;
		}
		cout << "\n";
	}
}
