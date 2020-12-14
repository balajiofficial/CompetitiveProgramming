#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b, c, d, ans =0;
	cin >> a >> b >> c >> d;
	while(a > 0) {
		if (b == 0 && (c == 0 || d == 0))
			break;
		if (c > 0 && d > 0) {
			--c, --d, --a;
			ans += 256;
		} else {
			ans += 32;
			--a, --b;
		}
	}
	cout << ans << "\n";
}
