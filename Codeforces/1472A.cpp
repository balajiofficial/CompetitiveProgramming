#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int w, h, n;
		cin >> w >> h >> n;
		int w1 = w;
		int h1 = h;
		int ans = 0;
		while(w % 2 == 0) {
			w /= 2;
		}
		while(h % 2 == 0) {
			h /= 2;
		}
		ans = w1/w * h1/h;
		if (ans >= n) cout << "YES\n";
		else cout << "NO\n";
	}
}
