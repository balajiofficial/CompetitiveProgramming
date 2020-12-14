#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin>> a >> b;
		if (b < a) {
			if ((a- b) % 2 == 1)
				cout << "2\n";
			else
				cout << "1\n";
		} else {
			if (b - a == 0)
				cout << "0\n";
			else if ((b - a) % 2 == 1)
				cout << "1\n";
			else
				cout << "2\n";
		}
	}
}
