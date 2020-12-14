#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << a + b + min(a + b, c) << "\n";
}
