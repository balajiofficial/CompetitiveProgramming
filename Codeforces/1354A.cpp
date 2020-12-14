#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a <= b) {
			cout << b << "\n";
		} else {
			if (c <= d) {
				cout << -1 << "\n";
			} else {
				cout << b +  c * ((a - b)/(c - d) + min((ll)1 , (a - b) % (c - d))) << "\n";
			}
		}
	}
}
