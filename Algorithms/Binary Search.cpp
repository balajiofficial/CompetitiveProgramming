#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	int a[1000];
	for(int i= 0; i < n; ++i) {
		cin >> a[i];
	}
	int i = 0, j = n - 1;
	while(i <= j) {
		int b = (i + j)/2;
		if (a[b] == t) {
			cout << b + 1 << "\n";
			return 0;
		} else if (a[b] < t) {
			i = b + 1;
		} else {
			j = b - 1;
		}
	}
	cout << -1 << "\n";
}
