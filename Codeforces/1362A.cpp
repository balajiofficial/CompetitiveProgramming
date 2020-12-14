#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a, b;
	cin >> a >> b;
	ll ans = 0;
	if (a > b) {
		swap(a, b);
	
	while(a < b) {
		if (a * 8 <= b) {
			++ans;
			a *= 8;
		} else if (a * 4 <= b) {
			++ans;
			a *= 4;
		} else if (a * 2 <= b) {
			++ans;
			a *= 2;
		} else {
			break;
		}
	}
	cout << (a == b ? ans : -1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
