#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, p=0;
	cin >> n;
	int ans =0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == -1) {
			if (p == 0) {
				++ans;
			} else {
				p -=1;
			}
		} else
			p += a;
	}
	cout << ans << "\n";
}
