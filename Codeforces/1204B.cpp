#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, l, r;
	cin >> n >> l >> r;
	cout << (1 << l) - 1 + n - l << " ";
	cout << (1 << r) - 1 + (n - r) * (1 << (r - 1)) << "\n";
}
