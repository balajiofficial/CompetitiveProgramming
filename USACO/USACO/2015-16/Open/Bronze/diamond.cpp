#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("diamond.out");
	ifstream cin ("diamond.in");
	int n, k;
	cin >> n >> k;
	int a[10000];
	for(int i =0; i < n; ++i) {
		cin >> a[i];
	}
	int ans= 0;
	sort(a, a+n);
	for(int i= 0; i < n; ++i) {
		for(int j = i; j < n; ++j) {
			if (a[j] - a[i] <= k) {
				ans = max(ans, j - i + 1);
			}
		}
	}
	cout << ans << "\n";
}