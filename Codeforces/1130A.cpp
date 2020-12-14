#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[100], po = 0, ne = 0;
	for(int i= 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] > 0) {
			++po;
		} else if (a[i] < 0) {
			++ne;
		}
	}
	int b = n/2 + n % 2;
	if (po < b && ne < b) {
		cout << "0\n";
	} else if (po >= b) {
		cout << "1\n";
	} else if (ne >= b) {
		cout << "-1\n";
	} else {
		cout << "0\n";
	}
}
