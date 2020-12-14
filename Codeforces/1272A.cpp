#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		ll a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if (a[1] - a[0] <= 1 && a[2] - a[1] <= 1)
			cout << 0 << "\n";
		else {
				a[0] += 1;
				a[2] -= 1;
			cout << a[1] - a[0] + a[2] - a[1] + a[2] - a[0] << "\n";
		}
	}
}
