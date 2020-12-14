#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--) {
		int n;
		cin>> n;
		int a =0, b =0, c= 0;
		for(int i = 0; i < n; ++i) {
			int d;
			cin >> d;
			if (i == 0) {
				a = d;
			} else if (i == 1) {
				b = d;
			} else if (i == n - 1) {
				c = d;
			}
		}
		if (a + b > c) {
			cout << "-1\n";
		} else {
			cout << "1 2 " << n << "\n";
		}
	}
}
