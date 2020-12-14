#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool isLucky(int n) {
	string a = to_string(n);
	for(int i= 0; i < a.size(); ++i) {
		if (a[i] != '4' && a[i] != '7')
			return 0;
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n ;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		if (n % i == 0 && isLucky(i)) {
			cout << "YES" << "\n";
			return 0;
		}
	}
	cout << "NO\n";
}
