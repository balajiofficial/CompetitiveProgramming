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
		ans += n - i + (n - i - 1) * i;
	}
	cout << ans  << "\n";
}
