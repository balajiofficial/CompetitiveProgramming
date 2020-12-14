#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		for(int i = 2; i <= n; ++i) {
			if (n % ((1 << i) - 1) == 0) {
				cout << n/((1 << i) - 1) << "\n";
				break;
			}
		}
	}
}
