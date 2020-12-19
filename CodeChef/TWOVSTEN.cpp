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
		if (n % 10 == 0) {
			cout << 0 << "\n";
		} else if (n % 5 == 0) {
			cout << 1 << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
}
