#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[6];
	for (int i = 0; i < 6; ++i) {
		cin >> a[i];
	}
	sort(a, a + 6);
	do {
		if ((a[0] + a[1] + a[2]) == (a[3] + a[4] + a[5])) {
			cout << "YES\n";
			return 0;
		}
	} while (next_permutation(a, a + 6));
	cout << "NO\n";
}
