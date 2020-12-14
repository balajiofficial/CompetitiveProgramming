#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i= 0; i < n; ++i) {
		char b;
		cin>> b;
		a[b - 'a'] += 1;
	}
	bool ok = 1;
	for(int i = 0; i < 26; ++i) {
		if (a[i] > k) {
			ok = 0;
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
