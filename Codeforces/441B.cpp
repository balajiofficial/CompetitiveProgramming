#include<bits/stdc++.h>
using namespace std;

#define ll long long

int arr[3001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, v;
	cin >> n >> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		arr[a] += b;
	}
	int ans = 0, left = 0;
	for (int i = 1; i <= 3001; i++) {
		if (left > v) {
			ans += v;
			left = arr[i];
			continue;
		} else { 
			ans += left;
		}
		if (arr[i] > v-left) {
			ans += v-left;
			arr[i] -= v - left;
			left = arr[i];
		} else {
			ans += arr[i];
			left = 0;
			arr[i] = 0;
		}
	}
	cout << ans << "\n";
}

