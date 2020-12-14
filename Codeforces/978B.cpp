#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, ans =0;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0; i < n; ++i) {
		if (a[i] == 'x' && a[i + 1] == 'x' && a[i + 2] == 'x') {
			++ans;
		}
	}
	cout << ans << "\n";
}
