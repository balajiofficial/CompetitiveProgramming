#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	for(int i = 0; i < n; ++i) {
		char d;
		cin >> d;
		a += d;
	}
	a += a;
	int ans = 0;
	for(int i = 0; i <2 * n; ++i) {
		if (a[i] == '1') {
			int j = i;
			while(j + 1 < 2 * n && a[j + 1] == '1') {
				++j;
			}
			ans = max(ans, j - i + 1);
			i = j;
		}
	}
	cout << ans << "\n";
}
