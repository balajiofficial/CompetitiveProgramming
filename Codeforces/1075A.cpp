#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >>n;
	ll x, y;
	cin >> x >> y;
	ll a = max(x - 1, y - 1);
	ll b = max(n - x, n - y);
	if (a <= b)
		cout << "White\n";
	else
		cout << "Black\n";
}
