#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>> n;
	int a[2001];
	for(int i = 1;i <= n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i) {
		int ind = i, c = 1;
		while(a[ind] != -1) {
			ind = a[ind];
			++c;
		}
		ans = max(ans, c);
	}
	cout << ans << "\n";
}
