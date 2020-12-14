#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int x, y,z, a, b, c;
	cin >> x >> y >> z >> a >> b >> c;
	int el = (abs(x - z) + abs(y -x)) * b + c * 3;
	int st = abs(x - y) * a;
	if (st < el)
		cout << "NO\n";
	else
		cout << "YES\n";
}
