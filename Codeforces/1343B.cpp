#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if ((n/2) % 2 == 1) {
			cout << "NO\n";
			continue;
		} else
			cout << "YES\n";
		int sum =0, c= 2;
		for(int i = 0; i <n/2; ++i) {
			cout << c << " ";
			sum += c;
			c += 2;
		}
		c = 1;
		for(int i = 0; i < n/2; ++i) {
			if (i != n/2 - 1) {
				cout << c << " ";
				sum -= c;
				c += 2;
			} else {
				cout << sum << "\n";
			}
		}
	}
}
