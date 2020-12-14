#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	} else if (n == 2) {
		cout << 2 << " " << 1;
	} else {
		cout << n << " " << 1 << " ";
		for(int i = 2; i <= n - 1; ++i) {
			cout << i << " ";
		}
	}
	cout << "\n";
}
