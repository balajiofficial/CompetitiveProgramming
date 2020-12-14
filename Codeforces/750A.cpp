#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k;
	cin >> n >> k;
	int a = 240 -k, ans =0;
	for(int i = 1; i <= n; ++i) {
		if (a - 5 *i >= 0) {
			a -= 5 * i;
			++ans;
		} else {
			break;
		}
	}
	cout << ans << "\n";
}
