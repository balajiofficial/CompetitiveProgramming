#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans =0;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		if (ok) {
			if (a[i] == '+')
				++ans;
			else
				--ans;
		} else {
			if (a[i] == '+') {
				++ans;
				ok = 1;
			}
		}
		ans = max(0, ans);
	}
	cout << ans << "\n";
}
