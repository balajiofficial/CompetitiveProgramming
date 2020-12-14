#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t, s, x;
	cin>> t >> s >> x;
	if (x < t + s && x != t) {
		cout << "NO\n";
		return 0;
	}
	if ((x - t) % s == 0 || (x - t) % s == 1)
		cout << "YES\n";
	else
		cout << "NO\n";
}
