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
		int b = 0, c =0, ans = 0;
		for(int i= 0; i < a.size(); ++i) {
			if (a[i] == '(')
				++b;
			if (a[i] == '[')
				++c;
			if (a[i] == ')') {
				if (b > 0) {
					--b;
					++ans;
				}
			}
			if (a[i] == ']') {
				if (c > 0) {
					--c;
					++ans;
				}
			}
		}
		cout << ans << "\n";
	}
}
