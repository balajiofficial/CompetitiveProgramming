#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		ans += b;
	}
	cout << ans/n << "\n";
}
