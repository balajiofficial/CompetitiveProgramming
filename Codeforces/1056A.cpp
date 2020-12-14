#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[101];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; ++i) {
		int r;
		cin >> r;
		for(int j = 0; j < r; ++j) {
			int b;
			cin >> b;
			a[b] += 1;
		}
	}
	for(int i = 1; i <= 100; ++i) {
		if (a[i] >= n)
			cout << i << " ";
	}
	cout << "\n";
}
