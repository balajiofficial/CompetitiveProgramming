#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()  {
	int t;
	cin >> t;
	while(t--) {
		ll l, r;
		cin >> l >> r;
		if (l * 2 > r) {
			cout << "-1 -1\n";
		} else {
			cout << l << " " << l * 2 << "\n";
		}
	}
}
