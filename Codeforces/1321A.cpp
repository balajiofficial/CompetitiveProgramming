#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100], b[100];
	for(int i= 0 ;i < n; ++i) {
		cin >> a[i];
	}
	for(int i= 0; i < n; ++i) {
		cin >> b[i];
	}
	int c = 0, d =0;
	for(int i= 0; i < n; ++i) {
		if (a[i] == 1 && b[i] != 1) {
			++c;
		}
		if (a[i] != 1 && b[i] == 1) {
			++d;
		}
	}
	if (c == 0) {
		cout << -1 << "\n";
	} else {
		if (d == 0 || c > d) {
			cout << 1 << "\n";
		} else {
			cout << d/c + 1 << "\n";
		}
	}
}
