#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, a = 0, b = 0;
		cin >> n;
		for(int i = 0, c; i < n; ++i) {
			cin>> c;
			if (c % 2) a++;
			else b++;
		}
		int ans= a + b * 2;
		if (ans % 2 == 0 && (b % 2 ==0 || a > 0)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
