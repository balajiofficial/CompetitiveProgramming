#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100001];
	for(int i = 1; i <= n; ++i) cin >> a[i];
	sort(a + 1, a + (n + 1));
	int ans[100001];
	for(int i = 1; i <= n/2; ++i) {
		ans[i * 2] = a[i];
	}
	int c = 1;
	for(int i = n/2 + 1; i <= n; ++i) {
		ans[c] = a[i];
		c += 2;
	}
	int count = 0;
	for(int i =1; i <= n; ++i) {
		if (i > 1 && i < n && ans[i] < ans[i - 1] && ans[i] < ans[i + 1]) {
			++count;
		}
	}
	cout << count << "\n";
	for(int i = 1; i <= n; ++i) {
		cout << ans[i] << " ";
	}
	cout << "\n";
}
