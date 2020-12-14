#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if (n == m) {
		cout << 0 << "\n";
		return 0;
	}
	if (m % n != 0) {
		cout << -1 << "\n";
		return 0;
	}
	int diff = m/n;
	int ans = 0;
	while(diff > 1) {
		if (diff % 3 == 0) {
			diff /= 3;
		} else if (diff % 2 == 0) {
			diff /= 2;
		} else {
			break;
		}
		++ans;
	}
	cout << (diff == 1 ? ans : -1) << "\n";
}
