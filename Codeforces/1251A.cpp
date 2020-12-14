#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int b[26];
		for(int &i : b) {
			i = INT_MAX;
		}
		int n = a.size();
		for(int i = 0; i < n; ++i) {
			if (i < n - 1 && a[i] == a[i + 1]) {
				b[a[i] - 'a'] = min(b[a[i] - 'a'], 2);
				++i;
			} else {
				b[a[i] - 'a'] = 1;
			}
		}
		for(int i = 0; i < 26; ++i) {
			if (b[i] == 1) {
				cout << char('a' + i);
			}
		}
		cout << "\n";
	}
}
