#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n, m;
		cin >> n >> m;
		cout << min((ll)2, n - 1) * m << "\n";
	}
}
