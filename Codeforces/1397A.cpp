#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char a[26];
		memset(a, 0, sizeof(a));
		for(int i = 0; i < n; ++i) {
			string s;
			cin>> s;
			for(char c : s) {
				a[c - 'a'] += 1;
			}
		}
		bool ok = 1;
		for(int i = 0; i < 26; ++i) {
			if (a[i] % n != 0)
				ok = 0;
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
