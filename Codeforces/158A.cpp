#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k;
	cin >> n >> k;
	int a[50];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans =0;
	for(int i = 0; i < n; ++i) {
		if (a[i] >= a[k - 1] && a[i] > 0)
			ans++;
	}
	cout << ans << "\n";
}
