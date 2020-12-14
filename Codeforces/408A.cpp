#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int k[100];
	for(int i = 0; i < n; ++i)
		cin >> k[i];
	int a[100];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; ++i) {
		int temp = 0;
		for(int j = 0; j < k[i]; ++j) {
			int b;
			cin >> b;
			temp += b * 5 + 15;
		}
		a[i] = temp;
	}
	int ans = INT_MAX;
	for(int i = 0; i < n; ++i) {
		ans = min(ans, a[i]);
	}
	cout << ans << "\n";
}
