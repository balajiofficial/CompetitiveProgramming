#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, a[] = {100, 50, 10, 5, 2, 1};
	cin >> t;
	while(t--) {
		int n, ans = 0;
		cin>> n;
		for(int i = 0; i < 6; ++i) {
			ans += n/a[i];
			n -= n/a[i] * a[i];
		}
		cout << ans << "\n";
	}
}
