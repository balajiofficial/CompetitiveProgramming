#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	int a[100], ans = 0;
	for(int i = 0;i < n; ++i) {
		cin >> a[i];
		ans += a[i];
	}
	if (ans + (n - 1) * 10 > d) {
		cout << -1 << "\n";
	} else {
		cout << (d - (ans))/5  << "\n";
	}
}
