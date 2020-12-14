#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int x, y, z;
		cin>> x >> y >> z;
		a += x;
		b += y;
		c += z;
	}
	if (a == 0 && b == 0 && c == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
