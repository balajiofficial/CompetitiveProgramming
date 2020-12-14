#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = INT_MAX;
	for(int i = 1; i <= n; ++i) {
		if (n % i == 0 && (n/i +i) * 2 < ans) {
			ans = (n/i + i) * 2;
		}
	}
	cout << ans << "\n";
}
