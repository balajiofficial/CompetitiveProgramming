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
		if (n % 2 == 0) {
			for(int i = 1; i <= n; i += 2) {
				cout << i + 1 << " " << i << " ";
			}
			cout << "\n";
		} else {
			cout << n << " ";
			for(int i = 1;i < n; ++i) {
				cout << i << " ";
			}
			cout << "\n";
		}
	}
}
