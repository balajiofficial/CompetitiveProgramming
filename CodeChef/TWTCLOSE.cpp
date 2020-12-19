#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, ans = 0;
	cin >> n >> k;
	bool a[1001];
	memset(a, 0, sizeof(a));
	while(k--) {
		string d;
		int b;
		cin >> d;
		if (d == "CLOSEALL") {
			memset(a, 0, sizeof(a));
			ans = 0;
		} else {
			cin >> b;
			a[b] = !a[b];
			ans += a[b];
			ans -= 1 - a[b];
		}
		cout << ans << "\n";
	}
}
