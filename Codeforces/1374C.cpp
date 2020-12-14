#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, ans =0, b = 0, c = 0;
		cin >> n;
		string a;
		cin >> a;
		for(int i = 0; i < a.size(); ++i) {
			if (i < a.size() - 1 && a[i] == '(' && a[i + 1] == ')') {
				++i;
			} else {
				if (a[i] == '(') {
					++b;
				} else {
					--b;
				}
			}
			c = min(c, b);
		}
		cout << abs(c) << "\n";
	}
}
