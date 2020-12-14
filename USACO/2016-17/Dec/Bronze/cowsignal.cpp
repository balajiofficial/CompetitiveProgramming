#include<bits/stdc++.h>

using namespace std;

#define ll long long

int m, n, k;
char a[10][10];

int main() {
	ofstream cout ("cowsignal.out");
	ifstream cin ("cowsignal.in");
	cin >> n >> m >> k;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int b = 0; b < k; ++b) {
			for(int j = 0; j < m; ++j) {
				for(int l = 0; l < k; ++l) cout << a[i][j];
			}
			cout << "\n";
		}
	}
}
