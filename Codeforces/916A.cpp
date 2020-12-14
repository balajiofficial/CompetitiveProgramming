#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool isLucky(int h, int m) {
	string a = to_string(h) + to_string(m);
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == '7') {
			return 1;
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	int h, m, ans = 0;
	cin >> h >> m;
	while(isLucky(h, m) == 0) {
		if (m >= x) {
			m -= x;
		} else {
			if (h == 0) {
				h = 23;
				m = 60 - (x - m);
			} else {
				--h;
				m = 60 - (x - m);
			}
		}
		++ans;
	}
	cout << ans << "\n";
}
