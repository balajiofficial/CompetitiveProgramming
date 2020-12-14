#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if (m == 0)
		cout << 1 << "\n";
	else if (n == m) {
		cout << 0 << "\n";
	} else {
		cout << min(n - m, m) << "\n";
	}
}
