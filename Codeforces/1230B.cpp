#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string a;
	cin >> a;
	if (k == 0) {
		cout << a << "\n";
		return 0;
	}
	if (a == "1") {
		cout << 0 << "\n";
		return 0;
	} else if (a.size() == 1){
		cout << '0' << "\n";
		return 0;
	}
	for(int i = 0; i < n; ++i) {
		if (k == 0) {
			break;
		}
		if (i == 0) {
			if (a[i] != '1') {
				--k;
				a[i] = '1';
			}
		} else {
			if (a[i] != '0') {
				a[i] = '0';
				--k;
			}
		}
	}
	cout << a << "\n";
}
