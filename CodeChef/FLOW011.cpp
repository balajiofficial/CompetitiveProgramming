#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		double n;
		cin >> n;
		cout << fixed << setprecision(2) << (n < 1500 ? n * 2 : n + 500 + 0.98 * n) << "\n";
	}
}
