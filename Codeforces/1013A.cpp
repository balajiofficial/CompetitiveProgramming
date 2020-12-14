#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int b = 0, c = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		b += a;
	}
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		c += a;
	}
	if (c <= b) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
