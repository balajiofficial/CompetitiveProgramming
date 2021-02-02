#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	bool ok = 0;
	cin >> n;
	int a[50];
	for(int i = 0; i < n; ++i) {
		int temp = 0;
		for(int j = 0; j < n; ++j) {
			int c;
			cin >> c;
			temp = max(temp, c);
		}
		a[i] = temp;
	}
	for(int i = 0; i < n; ++i) {
		if (a[i] == n - 1) {
			if (ok) {
				cout << a[i] << " ";
			} else {
				cout << a[i] + 1 << " ";
				ok = 1;
			}
		} else {
			cout << a[i] << " ";
		}
	}
	cout << "\n";
}
