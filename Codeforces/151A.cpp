#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int a = k * l;
	int b = c * d;
	int e = p;
	cout << min(a/nl, min(b, e/np))/n << "\n";
}
