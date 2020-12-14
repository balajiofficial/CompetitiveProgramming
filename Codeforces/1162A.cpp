#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, h, m;
	cin >> n >> h >>m;
	int a[51];
	memset(a, -1, sizeof(a));
	for(int i= 0; i < m; ++i) {
		int b, c, x;
		cin >> b >> c >> x;
		for(int j = b; j <= c; ++j) {
			if (a[j] == -1)
				a[j] = x;
			else
				a[j] = min(x, a[j]);
		}
	}
	ll sum =0;
	for(int i =1; i <= n; ++i) {
		if (a[i] != -1) {
			sum += a[i]  * a[i];
		} else {
			sum += h * h;
		}
	}
	cout << sum << "\n";
}
