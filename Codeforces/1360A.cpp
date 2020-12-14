#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--)  {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			cout << a * b * 4 << "\n";
			continue;
		}
		int c = sqrt(a * b * 2);
		if (c * c == a * b * 2) {
			cout << c * c << "\n";
		} else {
			c += 1;
			cout << c * c << "\n";
		}
	}
}
