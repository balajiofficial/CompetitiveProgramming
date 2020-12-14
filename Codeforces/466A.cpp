#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (m * a >= b) {
		cout << (n/m) * b + min(b, (n%m) * a) << "\n";
	} else {
		cout << n * a << "\n";
	}
}
