#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--) {
		ll a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if (a[1] != a[2]) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		cout << a[0] << " " << a[0] << " " << a[1] << "\n";
	}
}
