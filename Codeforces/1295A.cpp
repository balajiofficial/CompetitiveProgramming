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
		if (n % 2) {
			cout << 7;
			for(int i = 0; i < n/2 - 1; ++i) {
				cout << 1;
			}
			cout << "\n";
		} else {
			for(int i= 0; i < n/2; ++i) {
				cout << 1;
			}
			cout << "\n";
		}
	}
}
