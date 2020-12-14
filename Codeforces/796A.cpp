#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int ans =INT_MAX;
	int a[100];
	--m;
	for(int i = 0; i <n; ++i) 
		cin >> a[i];
	for(int i =0; i < n; ++i) {
		if (a[i] != 0 && a[i] <= k && abs(i - m) < ans) {
			ans = abs(i - m);
		}
	}
	cout << ans * 10 << "\n";
}
