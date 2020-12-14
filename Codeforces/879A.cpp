#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1000], b[1000];
	ll ans = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
		if (i == 0) ans = a[i];
	}
	for(int i = 1; i < n; ++i) {
		if (ans < a[i]) {
			ans = a[i];
		} else {
			int temp = (ans - a[i]) % b[i];
			ans += b[i] - temp;
		}
	}
	cout << ans << "\n";
}
