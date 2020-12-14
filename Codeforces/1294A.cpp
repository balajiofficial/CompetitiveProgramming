#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a+3);
		n -= a[2] - a[1] + a[2] - a[0];
		if (n % 3 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
