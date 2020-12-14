#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, c;
	cin >> n>> c;
	int ans =0, a[100];
	for(int i= 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n -1; ++i) {
		ans = max(ans, a[i] - a[i + 1] - c);
	}
	cout << ans << "\n";
}
