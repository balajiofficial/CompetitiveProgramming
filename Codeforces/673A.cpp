#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans = 0;
	int a[90];
	for(int i = 0;i < n; ++i) {
		cin >> a[i];
		if (i == 0) {
			if (a[i] - 0 > 15) {
				cout << "15\n";
				return 0;
			} else {
				ans = a[i];
			}
		} else {
			if (a[i] - a[i - 1] > 15) {
				cout << ans + 15 << "\n";
				return 0;
			} else {
				ans = a[i];
			}
		}
	}
	if (90 - ans > 15)
		cout << ans + 15 << "\n";
	else
		cout << 90 << "\n";
}
