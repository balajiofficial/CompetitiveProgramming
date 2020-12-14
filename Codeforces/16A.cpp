#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	char a[100][100];
	int ok = 1;
	for(int i=0; i <n; ++i) {
		for(int j =0; j < m; ++j) {
			cin >> a[i][j];
			if (a[i][j] != a[i][0]) {
				ok = 0;
			}
			if (i != 0 && a[i][j] == a[i - 1][j]) {
				ok = 0;
			}
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
