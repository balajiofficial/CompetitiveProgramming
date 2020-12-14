#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	int i = 1;
	while(n >= 0) {
		if (i % 2) {
			n -= __gcd(a, n);
		} else {
			n -= __gcd(b, n);
		}
		++i;
	}
	if (i % 2 == 1)
		cout << "0\n";
	else
		cout << "1\n";
}
