#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		if (c <= a) {
			cout << -1 << " ";
		} else {
			cout << 1 << " "; 
		}
		if (c >= a * b) {
			cout << -1 << "\n";
		} else {
			cout << b << "\n";
		}
	}
}
