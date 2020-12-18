#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, ans = 0;
	cin >> n >> k;
	while(n--) {
		int a;
		cin >> a;
		ans += a %k == 0;
	}
	cout << ans << "\n";
}
