#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, low =INT_MAX, high =0, b, c;
	int a[100];
	cin >> n;
	for(int i= 0; i <n;++i) {
		cin >> a[i];
		if (a[i] <= low) {
			low = a[i];
			b = i;
		}
		if (a[i] > high) {
			high = a[i];
			c = i;
		}
	}
	if (b < c) {
		cout << n - 1 - b + c - 1 << "\n";
	} else {
		cout << n - 1 - b + c << "\n";
	}
}
