#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int k, r;
	cin >> k >> r;
	int ans =0;
	int a= k;
	while(k % 10 != r && k % 10 != 0) {
		k += a;
		++ans;
	}
	cout << ans + 1 << "\n";
}
