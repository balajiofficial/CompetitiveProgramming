#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 1, b = 2;
	while(n--) {
		int c;
		cin >> c;
		if (c == a) {
			b = 6 - (a + b);
		} else if (c == b) {
			a = 6 - (a + b);
		} else {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
