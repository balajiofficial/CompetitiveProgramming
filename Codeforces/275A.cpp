#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[5][5];
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= 3; ++i) {
		for(int j =1; j <= 3; ++j) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= 3; ++i) {
		for(int j = 1; j <= 3; ++j) {
			int ans = a[i][j] + a[i -1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
			if (ans % 2)
				cout << 0;
			else
				cout << 1;
		}
		cout << "\n";
	}	
}
