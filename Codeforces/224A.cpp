#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, z;
	cin >> x >> y >> z;
	int a = sqrt((x * y)/z), b = sqrt((y * z)/x), c = sqrt((x * z)/y);
	cout << 4 * (a + b + c) << "\n";
}
