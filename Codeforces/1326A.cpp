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
		if (n == 1) {
			cout << -1 << "\n";
			continue;
		}
		int a = 1;
		if ((n - 1) % 9 == 0) {
			++a;
		}
		for(int i = 0; i < n - a; ++i) {
			cout << 5;
		}
		for(int i = 0; i < a; ++i) {
			cout << 9;
		}
		cout << "\n";
	}
}
