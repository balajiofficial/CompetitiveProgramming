#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) {
		cout << (char)('a' + i % k);
	}
	cout << "\n";
}
