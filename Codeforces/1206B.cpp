#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[100000];
	for(int i =0;i < n; ++i) {
		cin>> a[i];
	}
	ll ans = 0;
	ll b = 0, c = 0,d = 0;
	for(int i = 0;i < n; ++i) {
		if (a[i] < 0) {
			ans += (-1 - a[i]);
			++b;
		} else if (a[i] == 0) {
			ans += 1;
			++c;
		} else {
			++d;
			ans += a[i] - 1;
		}
	}
	if (c == 0 && b%2==1)
		ans += 2;
	cout << ans << "\n";
}
