#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	char a[100][100];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin >> a[i][j];
	int b[101], c[101];
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	for(int i = 0;i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (a[i][j] == '*') {
				++b[i];
				++c[j];
			}
		}
	}
	for(int i = 0; i < n; ++i)
		if (b[i] == 1) {
			cout << i + 1 << " ";
			break;
		}
	for(int i = 0; i < m; ++i) {
		if (c[i] == 1)  {
			cout << i + 1 << "\n";
			return 0;
		}
	}
}
