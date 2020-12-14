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
		int ans = 0, c = -1, last = 0;
		for(int i = 0; i  < a.size(); ++i) {
			if (a[i] == 'R') {
				if (c == -1) {
					ans = max(ans, i + 1);
					c = i;
				} else {
					ans = max(ans, i - c);
					c = i;
				}
				last = i;
			}
		}
		ans = max(ans, (int)a.size() - last);
		if (c == -1) {
			ans = a.size() + 1;
		}
		cout << ans << "\n";
	}
}
