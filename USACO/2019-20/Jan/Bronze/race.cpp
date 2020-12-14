#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("race.out");
	ifstream cin ("race.in");
	int k, n;
	cin >> k >> n;
	while(n--) {
		int a, ans = 0, l= 0, r =0;
		cin >> a;
		for(int s = 1;; ++s) {
			l += s;
			++ans;
			if (l + r >= k) {
				cout << ans << "\n";
				break;
			}
			if (s >= a) {
				r += s;
				++ans;
				if (l + r >= k) {
					cout << ans << "\n";
					break;
				}
			}
		}
	}
}
