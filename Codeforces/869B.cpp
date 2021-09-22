#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, ans = 1;
	cin >> a >> b;
	for (long long i = a + 1; i <= b; ++i) {
		ans *= i;
		ans %= 10;
		if (ans == 0LL) break;
	}
	cout << ans << "\n";
}