#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a>> b;
		bool ans = 0;
		for(int i = 0; i < a.size(); ++i) {
			if (a[i] != '?' && b[i] != '?' && a[i] != b[i]) {
				ans = 1;
			}
		}
		cout << (ans == 0? "YES" : "NO") << "\n";
	}
}
