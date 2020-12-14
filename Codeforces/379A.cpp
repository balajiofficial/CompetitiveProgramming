#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, res = 0, ans = 0;
	cin >> a >> b;
	while(a > 0 || res >= b) {
		if (res >= b) {
			a += res/b;
			res -= res/b * b;
		}
		--a;
		++res;
		++ans;
	}
	cout << ans << "\n";
}
