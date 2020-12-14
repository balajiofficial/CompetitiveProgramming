#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	char a[100][100];
	for(int i= 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	int ans =0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if (a[i][j] == 'C') {
				int ok = 0;
				for(int l = j + 1; l<n; ++l) {
					if (a[i][l] == 'C') {
						ok += 1;
					}
				}
				ans += ok;
				ok = 0;
				for(int l = i + 1; l <n; ++l) {
					if (a[l][j] == 'C') {
						ok += 1;
					}
				}
				ans += ok;
			}
		}
	}
	cout << ans << "\n";
}
