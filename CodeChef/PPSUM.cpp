#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int d, n;
		cin>> d >> n;
		while(d--) {
			n = (n * (n + 1))/2;
		}
		cout << n << "\n";
	}
}
