#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	string of, a;
	cin >> x >> of >> a;
	int ans = 0;
	if (a == "month") {
		if (x == 30) {
			ans = 11;
		} else if (x == 31) {
			ans = 7;
		} else {
			ans = 12;
		}
	} else {
		ans = 52 + (x == 6 || x == 5 ? 1 : 0);
	}
	cout << ans << "\n";
}
