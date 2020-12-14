#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	ll ans1 = (-3 + floor(sqrt(9 + 8 * (k + n))))/2;
	ll ans2 = (-3 - floor(sqrt(9 + 8 * (k + n))))/2;
	cout << n - max(ans1, ans2) << "\n";
}
