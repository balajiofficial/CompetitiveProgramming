#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a, b;
	cin>> a >> b;
	int ans =0;
	for(int i =0; i < n; ++i) {
		ans += min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]) + 1);
	}
	cout << ans << "\n";
}
