#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("hps.out");
	ifstream cin ("hps.in");
	int n;
	cin >> n;
	int a[100000][3];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; ++i) {
		char b;
		cin >> b;
		if (i != 0) {
			a[i][0] = a[i - 1][0];
			a[i][1] = a[i - 1][1];
			a[i][2] = a[i - 1][2];
		}
		if (b == 'H') a[i][0]++;
		else if (b == 'P') a[i][1]++;
		else a[i][2]++;
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < 3; ++j) {
			for(int k = 0; k < 3; ++k) {
				ans = max(ans, a[i][j] + a[n - 1][k] - a[i][k]);
			}
		}
	}
	cout << ans << "\n";
}
