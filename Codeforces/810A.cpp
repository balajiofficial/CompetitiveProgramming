#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld double

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ld n, k;
	cin >> n >> k;
	ld ans = 0;
	for(int i= 0; i < n; ++i) {
		ld a;
		cin >> a ;
		ans += a;
	}
	if (round(ans/n) == k) {
		cout << 0 << "\n";
	} else {
		ld i = 0;
		while(round(ans/(n + i)) < k) {
			++i;
			ans += k;
		}
		cout << i << "\n";
	}
}
