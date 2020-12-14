#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	bool ok = 1;
	for(int i = 0; i < n; ++i) {
		if (i %2 == 0) {
			for(int j = 0; j < m; ++j) {
				cout << '#';
			}
		} else {
			if (ok) {
				ok = 0;
				for(int j = 0; j < m - 1; ++j) {
					cout << '.';
				}
				cout << '#';
			} else {
				cout << '#';
				for(int j = 0; j < m - 1; ++j)
					cout << '.';
				ok = 1;
			}
		}
		cout << "\n";
	}
}
