#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	double ans = INT_MAX;
	while(n--) {
		double c, d, v;
		cin >> c >> d >> v;
		ans = min(ans, (sqrt(pow(abs(a - c), 2) + pow(abs(b - d), 2)))/v);
	}
	cout << setprecision(100) << ans << "\n";
}
