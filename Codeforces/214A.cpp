#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, ans = 0;
	cin>> n >> m;
	for(int i = 0; i <= 1000; ++i) {
		for(int j = 0; j <= 1000; ++j) {
			if (i * i + j == n && i + j * j ==m) {
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
