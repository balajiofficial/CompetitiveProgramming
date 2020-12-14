#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[1000], b[1000];
	for(int i= 0; i < m; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+m);
	sort(b, b+m, greater<int>());
	int d = 0, c = 0;
	while(n--) {
		int i1 = -1, i2 = -1;
		for(int i= 0 ;i < m; ++i) {
			if (a[i] > 0 && i1 == -1) {
				i1 = i;
			}
			if (b[i] > 0 && i2 == -1) {
				i2 = i;
			}
		}
		d += a[i1];
		--a[i1];
		c += b[i2];
		--b[i2];
		sort(a, a+m);
		sort(b, b+m, greater<int>());
	}
	cout << c << " " << d << "\n";
}
