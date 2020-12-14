#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	a += b;
	a %= n;
	a = (a + n) % n;
	if (a == 0) a = n;
	cout << a << "\n";
}
