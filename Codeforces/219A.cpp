#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	string a;
	cin >> k >> a;
	int b[26];
	memset(b, 0, sizeof(b));
	for(int i = 0; i < a.size(); ++i) {
		b[a[i] - 'a'] += 1;
	}
	bool ok = 0;
	for(int i= 0; i < 26; ++i) {
		if (b[i] % k != 0) {
			ok = 1;
		}
	}
	if (ok) {
		cout << -1 << "\n";
		return 0;
	}
	for(int i= 0; i < k; ++i) {
		for(int j = 0;  j < 26; ++j) {
			for(int l = 0; l < b[j]/k; ++l) {
				cout << (char)('a' + j);
			}
		}
	}
	cout << "\n";
}
