#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	bool ok = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (b[i] > a[i]) {
			ok = 1;
			break;
		}
	}
	if (ok) {
		cout << -1 << "\n";
	} else {
		cout << b << "\n";
	}
}
