#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	string d;
	int i = n - 2;
	while(i >= 0) {
		d += a[i];
		i -= 2;
	}
	i = 1 - n % 2;
	while(i < n) {
		d += a[i];
		i += 2;
	}
	cout << d << "\n";
}
