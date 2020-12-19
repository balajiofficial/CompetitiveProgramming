#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("gymnastics.out");
	ifstream cin ("gymnastics.in");
	int k, n;
	cin >> k >> n;
	int a[10][20];
	vector<int> b;
	for(int i = 0; i < k; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> a[i][j];
			if (i == 0)
				b.push_back(a[i][j]);
		}
	}
	int ans = 0;
	for(int i =0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if (i == j)
				continue;
			int c = b[i];
			int d = b[j];
			bool ok = 1, nd = 0;
			for(int l = 0; l < k&&ok; ++l) {
				nd = 0;
				for(int m = 0; m < n; ++m) {
					if (a[l][m] == c) {
						if (nd) {
							ok = 0;
							break;
						}
					} else if (a[l][m] == d) {
						nd = 1;
					}
				}
			}
			ans += ok;
		}
	}
	cout << ans << "\n";
}
