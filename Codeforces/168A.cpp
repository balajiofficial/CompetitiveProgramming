#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, y;
	cin >> n >>x >> y;
	y = (y * n)/100 + min((y * n) % 100, 1);
	if (x >= y) 
		cout << 0 << "\n";
	else
		cout << y - x << "\n";
}
