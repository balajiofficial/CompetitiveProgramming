#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	cout << n/7 * 2 + (n % 7 == 6 ? 1 : 0) << " " << n/7 * 2 + min(2, n % 7) << "\n";
}
