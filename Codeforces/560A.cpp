#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == 1) {
			ok = 1;
		}
	}
	if (ok)
		cout << -1 << "\n";
	else
		cout << 1 << "\n";
}
