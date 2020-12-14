#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("shuffle.out");
	ifstream cin ("shuffle.in");
	int n;
	cin >> n;
	int c[101];
	string a[101], b[101];
	for(int i = 1; i <= n; ++i)
		cin >> c[i];
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	int j = 3;
	while(j--) {
		if (j % 2 == 0) {
			for(int i = 1; i <= n; ++i) {
				b[i] = a[c[i]];
			}
		} else {
			for(int i = 1; i <= n; ++i) {
				a[i] = b[c[i]];
			}
		}
	}
	for(int i = 1; i <= n; ++i) {
		cout << b[i] << "\n";
	}
}
