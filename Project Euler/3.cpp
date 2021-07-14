#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n = 600851475143;
	ll i = 2, f = 2;
	while(n > 1) {
		if (n % i == 0) {
			f = i;
			while(n % i == 0) {
				n /= i;
			}
		}
		i++;
	}
	cout << f << "\n";
}
