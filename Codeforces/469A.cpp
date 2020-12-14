#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[101];
	memset(a, 0, sizeof(a));
	int b;
	cin >> b;
	for(int i = 0; i < b; ++i) {
		int c;
		cin >> c;
		a[c] =1;
	}
	int c;
	cin >> c;
	for(int i = 0; i < c; ++i) {
		int d;
		cin >> d;
		a[d] = 1;
	}
	for(int i = 1; i <= n; ++i) {
		if (a[i] == 0) {
			cout << "Oh, my keyboard!\n";
			return 0;
		}
	}
	cout << "I become the guy.\n";
}
