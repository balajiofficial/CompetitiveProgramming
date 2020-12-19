#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		double a, b;
		cin >> a >> b;
		cout << fixed << setprecision(6) << (a > 1000 ? a * b * 0.9 : a * b) << "\n";
	}
}
