#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int w, h, k, ans =0;
	cin >> w >> h >> k;
	for(int i = k; i >= 1; --i) {
		ans +=2 *  ((w - (4 * (i - 1))) + (h - (4 * (i - 1))));
		ans -= 4;
	}
	cout << ans << "\n";
}
