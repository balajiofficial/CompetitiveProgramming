#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool ok = 1;
	int n = a.size();
	a += 'd';
	for(int i= 0; i < n; ++i) {
		if (a[i] != 'n' && a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
			if (a[i + 1] != 'a' && a[i + 1] != 'i' && a[i + 1] != 'e' && a[i + 1] != 'u' && a[i + 1] != 'o') {
				ok = 0;
			}
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
