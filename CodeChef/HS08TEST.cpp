#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double n, a;
	cin >> n >> a;
	if (n + 0.5 > a || (int)n % 5 != 0) {
		cout << a << "\n";
		return 0;
	}
	cout << a - n - 0.5 << "\n";
}
