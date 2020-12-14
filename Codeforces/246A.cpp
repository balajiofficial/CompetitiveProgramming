#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n == 1 || n == 2) {
		cout << -1 << "\n";
		return 0;
	}
	for(int i = n; i >= 1; --i) {
		cout << i << " ";
	}
	cout << "\n";
}
