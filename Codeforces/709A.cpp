#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, b, d;
	cin >> n >> b >> d;
	int a[100000];
	for(int i = 0; i < n; ++i) 
		cin >> a[i];
	int ans = 0, res = 0;
	for(int i = 0;i < n; ++i) {
		if (a[i] <= b) {
			res += a[i];
		}
		if (res > d) {
			res = 0;
			++ans;
		}
	}
	cout << ans << "\n";
}
