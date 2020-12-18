#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, a = 2048;
		cin >> n;
		int ans= 0;
		while(n) {
			int c = n/a;
			ans += c;
			n -= n/a * a;
			a /= 2;
		}
		cout << ans << "\n";
	}
}
