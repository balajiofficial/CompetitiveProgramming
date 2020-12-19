#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, d;
		cin >> n >> d;
		int ans1 = 0, ans2 = 0;
		for(int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			if (a <= 9 || a  >= 80) {
				++ans1;
			} else {
				++ans2;
			}
		}
		cout << ans1/d + min(1, ans1 % d) + ans2/d + min(1, ans2 % d) << "\n";
	}
}
