#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a, b;
	cin >> a >> b;
	int c[119];
	c[118] = 0;
	c[60] = 1;
	c[94] = 2;
	c[62] = 3;
	int n;
	cin >> n;
	if (n % 2 == 0) cout << "undefined\n";
	else if ((c[b] - c[a]+4)%4==n%4) cout << "cw\n";
	else cout << "ccw\n";
}
