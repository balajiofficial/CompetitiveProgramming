#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--) {
		int n;
		cin >> n;
		if (n ==2) {
			cout << 2 << "\n";
			continue;
		}
		int a =0, b= 0;
		a = pow(2, n/4) - 1;
		b = pow(2, 3 * n/4) - a;
		int c = pow(2, n) - b;
		cout << a + c - b << "\n";
	}
}
