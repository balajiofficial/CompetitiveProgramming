#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	const int mxN = n;
	int a[mxN][mxN];
	for(int i = 0; i < n; ++i) {
		a[i][0] = 1;
		a[0][i] = 1;
	}
	for(int i = 1; i < n; ++i) {
		for(int j = 1;  j < n; ++j) {
			a[i][j] = a[i][j - 1] + a[i - 1][j];
		}
	}
	cout << a[n - 1][n - 1] << "\n";
}
