#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, ans =0;
	cin >> n;
	for(int i = 1; i < n; ++i) {
		if (n % i == 0)
			++ans;
	}
	cout << ans << "\n";
}
