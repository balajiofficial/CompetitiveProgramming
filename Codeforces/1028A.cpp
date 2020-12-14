#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int r, n;
	cin >> r >> n;
	char a[r][n];
	for(int i =0; i < r; ++i) {
		for(int j =0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	int b = -1, c = -1, e, f;
	for(int i = 0; i < r; ++i) {
		for(int j= 0; j < n; ++j) {
			if (a[i][j] == 'B') {
				if (b == -1) {
					b = i;
					c = j;
				}
				e =i;
				f = j;
			}
		}
	}
	cout << (b + e)/2 + 1 << " " << (c + f)/2 + 1 << "\n";
}
