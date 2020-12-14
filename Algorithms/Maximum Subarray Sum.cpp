#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i < n; ++i) cin >> a[i];
	int ans = 0, sum = 0;
	for(int i = 0; i < n; ++i) {
		sum = max(sum + a[i], a[i]);
		ans = max(sum, ans);
	}
	cout << ans << "\n";
}
