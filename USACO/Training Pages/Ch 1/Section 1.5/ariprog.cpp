/*
ID: balajik2
TASK: ariprog
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("ariprog.out");
	ifstream cin ("ariprog.in");
	int n, m;
	cin >> n >> m;
	bool a[250 * 250 * 2 + 1];
	memset(a, 0, sizeof(a));
	for(int i = 0; i <= m; ++i) {
		for(int j = 0; j <= m; ++j) {
			a[i * i + j * j] = 1;
		}
	}
	bool ok = 1;
	for(int i = 1; i <= (2 * m * m)/(n - 1); ++i) {
		for(int j = 0; j + i * (n - 1) <= (2 * m * m); ++j) {
			bool temp = 1;
			for(int k = 0; k < n; ++k) {
				if (a[j + i * k] == 0) {
					temp = 0;
					break;
				}
			}
			if (temp) {
				ok = 0;
				cout << j << " " << i << "\n";
			}
		}
	}
	if (ok) {
		cout << "NONE\n";
	}
}
