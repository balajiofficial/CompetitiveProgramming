#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (i + 1 <= n - k)
			ans += a;
	}
	cout << ans + k * x << "\n";
}
