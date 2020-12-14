#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	cout << max((a + b) * c, max(a + b + c, max(a * (b +c), a * b * c))) << "\n";
}
