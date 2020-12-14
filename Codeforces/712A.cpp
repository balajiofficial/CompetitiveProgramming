#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int i =0; i < n; ++i) {
		cin >> a[i];
	}
	vector<int> b(n);
	for(int i = n - 1; i >= 0; --i) {
		if (i == n - 1)
			b[i] = a[i];
		else
			b[i] = a[i] + a[i + 1];
	}
	for(int i = 0; i < n; ++i) {
		cout << b[i] << " ";
	}
	cout << "\n";
}
