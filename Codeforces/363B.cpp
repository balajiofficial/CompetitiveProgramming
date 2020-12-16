#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, sum = 0, ans = INT_MAX;
	cin >> n >> k;
	int a[150000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i < k) {
			sum += a[i];
		}
	}
	int i = k, fin = 0;
	while(i < n) {
		if (sum <= ans) {
			ans = sum;
			fin = i - k + 1;
		}
		sum += a[i];
		sum -= a[i - k];
		++i;
	}
	if (sum < ans) {
		fin = i - k + 1;
	}
	cout << fin << "\n";
}
