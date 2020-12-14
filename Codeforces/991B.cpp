#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double n, ans = 0;
	cin >> n;
	vector<double> a(n);
	for(int i = 0; i< n; ++i) {
		cin >> a[i];
		ans += a[i];
	}
	ans -= 4.5 * n;
	if (ans >= 0) {
		cout << 0 << "\n";
		return 0;
	}
	ans = abs(ans);
	sort(a.begin(), a.end());
	for(int i = 0; i < n; ++i) {
		ans -= 5 - a[i];
		if (ans <= 0) {
			cout << i + 1 << "\n";
			return 0;
		}
	}
}
