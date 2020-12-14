#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int b = 0, c = 0;
	bool ok = 1;
	for(int i= 0; i < n; ++i) {
		if (a[i] != '4' && a[i] != '7')
			ok = 0;
	}
	if (!ok) {
		cout << "NO\n";
		return 0;
	}
	for(int i = 0; i < n; ++i) {
		if (i < n/2) {
			int num = a[i] - '0';
			b += num;
		} else {
			int num = a[i] - '0';
			c += num;
		}
	}
	if (c == b) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
