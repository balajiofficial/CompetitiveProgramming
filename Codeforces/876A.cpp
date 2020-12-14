#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int m = min(a, min(b, c));
	if (n == 1) {
		cout << 0 << "\n";
		return 0;
	}
	if (a == m) {
		cout << a * (n -1) << "\n";
	} else if (b == m) {
		cout << b * (n - 1) << "\n";
	} else {
		cout << min(a, b) + c * (n - 2) << "\n";
	}
}
