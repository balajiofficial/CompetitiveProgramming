#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	int d[26], e[26];
	memset(d, 0, sizeof(d));
	for(int i = 0; i < a.size(); ++i) {
		d[a[i] - 'A'] += 1;
	}
	for(int i = 0; i < b.size(); ++i) {
		d[b[i] - 'A'] += 1;
	}
	memset(e, 0, sizeof(e));
	for(int i = 0; i < c.size(); ++i) {
		e[c[i] - 'A'] += 1;
	}
	for(int i = 0; i < 26; ++i) {
		if (d[i] != e[i]) {
			cout << "NO\n";
				return 0;
		}
	}
	cout << "YES\n";
}
