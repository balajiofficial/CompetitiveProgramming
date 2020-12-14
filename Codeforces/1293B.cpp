#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ld n;
	cin >> n;
	ld ans = 0;
	for(ld i = n; i >= 1; --i) {
		ans += 1/i;
	}
	cout << setprecision(8) << ans << "\n";
}
