#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[50][50];
	for(int i= 0;i < n; ++i) {
		for(int j =0; j < n; ++j) {
			cin>> a[i][j];
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			bool ok = 0;
			if (a[i][j] == 1)
				continue;
			for(int l = 0; l < n && ok == 0; ++l) {
				for(int k =0; k < n && ok ==0; ++k) {
					if (a[i][k] + a[l][j] == a[i][j]) {
						ok = 1;
					}
				}
			}
			if (ok ==0) {
				cout << "No\n";
				return 0;
			}
		}
	}
	cout << "Yes\n";
}
