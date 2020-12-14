#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	char a[50][50];
	for(int i = 0; i  <n; ++i) {
		for(int j = 0; j <n; ++j) {
			cin >> a[i][j];
		}
	}
	for(int i= 1; i < n - 1; ++i) {
		for(int j = 1; j < n - 1; ++j) {
			if (a[i][j] == '.' && a[i - 1][j] == '.' && a[i +1][j] == '.' && a[i][j -1] == '.' && a[i][j  +1] == '.') {
				a[i][j] = '#';
				a[i +1][j] = '#';
				a[i -1][j] ='#';
				a[i][j - 1] = '#';
				a[i][j +1] = '#';
			}
		}
	}
	bool ok = 0;
	for(int i = 0; i < n&&ok==0; ++i) {
		for(int j =0;j < n; ++j) {
			if (a[i][j] == '.') {
				ok = 1;
				break;
			}
		}
	}
	if (ok) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
}
