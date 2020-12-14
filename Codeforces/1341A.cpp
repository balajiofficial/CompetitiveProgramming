#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		if (n * (a + b) < c - d || n * (a - b) > c +d) {
			cout << "No\n";
		} else {
			cout << "Yes\n";
		}
	}	
}
