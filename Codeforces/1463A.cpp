#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << ((a + b + c) % 9 == 0 && min(a, min(b, c)) >= (a + b + c)/9 ? "YES" : "NO") << "\n";
	}
}
