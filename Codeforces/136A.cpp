#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[101];
	for(int i = 1; i <= n; ++i) {
		int b;
		cin >> b;
		a[b] = i;
	}
	for(int i = 1; i <=n; ++i)
		cout << a[i] << " ";
	cout << "\n";
}
