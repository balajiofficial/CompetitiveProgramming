#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string a;
	cin >> n >> a;
	for(int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			reverse(a.begin(), a.begin()+i);
		}
	}
	cout << a << "\n";
}
