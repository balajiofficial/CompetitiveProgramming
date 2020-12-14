#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a[101], sum =0;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < 5; ++i) {
		int b;
		cin >> b;
		sum += b;
		a[b] += 1;
	}
	int ans =0;
	for(int i = 1; i <= 100; ++i) {
		if (a[i] > 1) {
			if (a[i] == 2 && 2 * i > ans) {
				ans = 2 * i;
			} else if (3 * i > ans && a[i] >= 3) {
				ans = 3 * i;
			}
		}
	}
	cout << sum - ans << "\n";
}
