#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int b = 0, c = n - 1;
	int i = 1;
	int x = 0, y =0;
	while(i <= n) {
		if (i %2) {
			x += max(a[b], a[c]);
			if (a[b] > a[c]) {
				++b;
			} else
				--c;
		} else {
			y += max(a[b], a[c]);
			if (a[b] > a[c])
				++b;
			else
				--c;
		}
		++i;
	}
	cout << x << " " << y << "\n";
}
