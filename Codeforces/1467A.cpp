#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int res = 9;
		for(int i = 0; i < n; ++i) {
			if (i == 0) res = 9;
			else if (i == 1) res = 8;
			else res = (res + 1) % 10;
			cout << res;
		}
		cout << "\n";
	}
}
