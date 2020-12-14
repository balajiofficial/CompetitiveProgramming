#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, n;
		cin >> a >> b >> n;
		ll ans =0;
		while(a <= n && b <= n) {
			if (ans % 2)
				b += a;
			else
				a += b;
			++ans;
		}
		cout << ans << "\n";
	}
}
