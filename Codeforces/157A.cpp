#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[30][30];
	for(int i = 0; i < n; ++i) 
		for(int j =0; j < n; ++j)
			cin >> a[i][j];
	int ans =0;
	for(int i = 0; i < n; ++i) {
		for(int j =0; j < n; ++j) {
			int b= 0, c= 0;
			for(int l = 0; l < n; ++l) {
				b += a[i][l];
			}
			for(int l = 0; l < n; ++l)
				c += a[l][j];
			if (c > b)
				++ans;
		}
	}
	cout << ans << "\n";
}
