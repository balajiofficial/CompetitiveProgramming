#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s, n;
	cin >> s >> n;
	int a[10001];
	memset(a, -1, sizeof(a));
	for(int i = 0; i < n; ++i) {
		int b, c;
		cin>> b >> c;
		if (a[b] == -1) {
			a[b] = c;
		} else {
			a[b] += c;
		}
	}
	for(int i= 0; i < 10001; ++i) {
		if (a[i] != -1) {
			if (s <= i) {
				cout << "NO\n";
				return 0;
			} else {
				s += a[i];
			}
		}
	}
	cout << "YES\n";
}
