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
		int x = (n + 3)/4;
		for(int i = 0; i < n - x; ++i) {
			cout << 9;
		}
		for(int i = 0; i < x; ++i) cout <<8;
		cout << "\n";
	}
}
