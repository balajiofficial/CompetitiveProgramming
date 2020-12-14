#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "NO\n";
		return 0;
	}
	if (abs(b - a) <= 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
