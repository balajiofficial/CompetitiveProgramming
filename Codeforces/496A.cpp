#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i) {
		cin >>a[i];
	}
	int ans = INT_MAX;
	for(int i = 1; i < n -1; ++i) {
		int high = 0;
		for(int j = 1; j < n; ++j) {
			if (j == i) {
				high = max(high, a[j + 1] - a[j - 1]);
				++j;
			} else {
				high = max(high, a[j] - a[j - 1]);
			}
		}
		ans = min(ans, high);
	}
	cout << ans << "\n";
}
