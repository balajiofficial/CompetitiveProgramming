#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll a, int n) {
	int temp = int(sqrt(a));
	if (temp*temp==a && temp <= n){
		return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, ans = 0;
	cin >> n;
	for (ll i = 1; i < n; i++) {
		for (ll j=i+1; j< n;j++) {
			if (check(i*i+j*j, n)) {
				ans += 1;
			}
		}
	}
	cout << ans << "\n";
}

