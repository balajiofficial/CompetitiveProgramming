#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int v1, v2, v3, vm;
	cin >> v1 >> v2 >> v3 >> vm;
	for (int i = 1; i <= 200; i++) {
		for (int j = 1; j < i; ++j) {
			for (int k = 1; k < j; ++k) {
				if (v1 <= i && v1 * 2 >= i && v2 <= j && v2 * 2 >= j && v3 <= k && v3 * 2 >= k && vm <= i && vm <= j && vm <= k && vm * 2 < i && vm * 2 < j && vm * 2 >= k) {
					cout << i << "\n";
					cout << j << "\n";
					cout << k << "\n";
					return 0;
				}
			}
		}
	}
	cout << -1 << "\n";
}