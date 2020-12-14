#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		int d = min(s/n, a);
		if ((s - d * n) <= b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
