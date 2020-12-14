#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double l, p, q;
	cin >> l >> p >> q;
	cout << setprecision(6) << l/(p + q) *p << "\n";
}
