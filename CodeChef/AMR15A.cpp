#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, ans = 0;
	cin >> n;
	for(int i = 0, a; i < n; ++i) {
		cin >> a;
		ans += a % 2 == 0;
	}
	if (ans <= n - ans) {
		cout << "NOT READY\n";
	} else {
		cout << "READY FOR BATTLE\n";
	}
}
