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
		cin >> a >> b;
		int ans1=  0, ans2 = 0;
		for(int i = 0; i < a.size(); ++i) {
			if (a[i] == '?' || b[i] == '?') {
				++ans1;
			} else if (a[i] != b[i]) {
				++ans2;
			}
		}
		cout << ans2 << " " << ans2 + ans1 << "\n";
	}
}
