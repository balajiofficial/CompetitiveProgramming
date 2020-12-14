#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1000], b[1000];
	for(int i = 0; i <n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n, greater<int>());
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		ans += a[i] * i + 1;
	}
	cout << ans << "\n";
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if (a[i] == b[j]) {
				b[j] = -1;
				cout << j + 1 << " ";
			}
		}
	}
	cout << "\n";
}
