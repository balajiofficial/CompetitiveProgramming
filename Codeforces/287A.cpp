#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int o1 = a[i][j] == '.';
			int o2 = a[i+1][j] == '.';
			int o3 = a[i][j+1] == '.';
			int o4 = a[i+1][j+1] == '.';
			int h1 = a[i][j] == '#';
			int h2 = a[i+1][j] == '#';
			int h3 = a[i][j+1] == '#';
			int h4 = a[i+1][j+1] == '#';
			if (o1+o2+o3+o4>=3 || h1+h2+h3+h4>=3) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
}

