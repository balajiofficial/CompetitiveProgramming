#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	int a[2000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll ans =0;
	for(int i = 1; i < n; ++i) {
		if (a[i] <= a[i -1]) { 
			ans += (a[i -1] - a[i])/d;
			a[i] += (a[i -1] - a[i])/d * d;
			if (a[i] <= a[i - 1]) {
				a[i] += d;
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
