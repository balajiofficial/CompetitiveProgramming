#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool a[100];
	for(int i= 0 ;i < n; ++i) {
		int b;
		cin >> b;
		a[i] = b %2;
	}
	for(int i = 0; i < n; ++i) {
		if (a[i] != a[i + 1]) {
			if (i == 0) {
				if (a[i + 1] == a[i + 2]) {
					cout << 1 << "\n";
					return 0;
				} else {
					cout << 2 << "\n";
					return 0;
				}
			} else {
				if (a[i - 1] == a[i]) {
					cout << i + 2 << "\n";
				} else {
					cout << i + 1 << "\n";
				}
				return 0;
			}
		}
	}
}
