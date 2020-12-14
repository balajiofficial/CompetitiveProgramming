#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--) {
		ll n;
		cin>> n;
		if (n == 1) {
			cout << "1\n";
		} else if (n == 2) {
			cout << "1\n";
		} else if (n == 3)
			cout << "2\n";
		else
			cout << n/2 << "\n";
	}
}
