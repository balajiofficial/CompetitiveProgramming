#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100000];
	int high = 0, low = INT_MAX;
	for(int i = 0;i < n; ++i ) {
		cin >> a[i];
		high = max(a[i], high);
		low =min(low, a[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] != low && a[i] != high)
			++ans;
	}
	cout << ans << "\n";
}
