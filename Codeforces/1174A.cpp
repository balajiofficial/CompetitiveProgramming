#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[2000];
	bool ok = 1;
	for(int i = 0; i < n* 2; ++i) {
		cin >> a[i];
		if (i > 0) {
			if (a[i] != a[i - 1]) {
				ok = 0;
			}
		}
	}
	if (ok) {
		cout << -1 << "\n";
		return 0;
	}
	sort(a, a+(n*2));
	for(int i = 0; i < n *2; ++i) {
		cout <<a[i] << " ";
	}
	cout << "\n";
}
