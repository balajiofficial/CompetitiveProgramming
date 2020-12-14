#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100], l = -1, r = 0;
	for(int i = 0; i < n; ++i)  {
		cin >> a[i];
		if (a[i] == 1) {
			if (l == -1)
				l = i;
			r = i;
		}
	}
	if (l == -1) {
		cout << 0 << "\n";
		return 0;
	}
	int ans = r - l + 1;
	for(int i = l; i <= r; ++i) {
		if (a[i] == 0) {
			int j = i;
			while(j < r && a[j] == 0)
				++j;
			--j;
			if (j - i + 1 >= 2) {
				ans -= j - i + 1;
			}
			i = j;
		}
	}
	cout << ans << "\n";
}
