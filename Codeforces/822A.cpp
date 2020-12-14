#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll a, b;
	cin >> a >> b;
	a = min(a, b);
	int ans = 1;
	for(int i = 1; i <= a; ++i)
		ans  *= i;
	cout << ans << "\n";
}
