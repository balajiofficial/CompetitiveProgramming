#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a;
		cin >> a;
		cout << (a % 2020 <= a/2020 ? "YES" : "NO") << "\n";
	}
}
