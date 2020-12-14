#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int k, n, s, p;
	cin >> k >> n >> s >> p;
	int a = n/s + min(1, n % s);
	a *= k;
	cout << a/p + min(1, a % p) << "\n";

}
