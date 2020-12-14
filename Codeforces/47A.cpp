#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	bool ok = 0;
	cin >> n;
	n *= 2;
	for(int i= 1; i <= n; ++i) {
		if ((i * (i + 1)) == n) {
			ok = 1;
			break;
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
