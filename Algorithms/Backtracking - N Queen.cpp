#include<bits/stdc++.h>

using namespace std;

#define ll long long

int ans = 0, n;

bool column[1000], diag1[1000], diag2[1000];

void search(int i = 0) {
	if (i == n) {
		++ans;
	} else {
		for(int j = 0; j < n; ++j) {
			if (column[j] || diag1[j + i] || diag2[j-i+n-1])
				continue;
			column[j] = diag1[j + i] = diag2[j - i + n - 1] = 1;
			search(i + 1);
			column[j] = diag1[j + i] = diag2[j - i + n - 1] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	search();
	cout << ans << "\n";
}
