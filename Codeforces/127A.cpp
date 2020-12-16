#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ld n, k;
	cin >> n >> k;
	ld ans = 0;
	ld a[100], b[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
		if (i != 0) {
			ans += sqrt(pow(a[i] - a[i - 1], 2) + pow(b[i] - b[i - 1], 2));
		}
	}
	cout << setprecision(18) << ans/50 * k << "\n";
}
