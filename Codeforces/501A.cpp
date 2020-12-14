#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double m = max(3 * a/10, a - (a * c)/250);
	double v = max(3 * b/10, b - (b * d)/250);
	if (m > v)
		cout << "Misha\n";
	else if (m < v)
		cout << "Vasya\n";
	else
		cout << "Tie\n";
}
