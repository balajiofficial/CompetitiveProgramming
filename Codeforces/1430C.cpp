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
		cout << 2 << "\n";
		int res = n;
		for(int i = n - 1; i >= 1; --i) {
			cout << res << " " << i << "\n";
			res = (res + i + 1)/2;
		}
	}
}
