#include<bits/stdc++.h>
using namespace std;

#define ll long long

int a[5001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	n *= 2;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a[b] += 1;
		
	}
	for (int i = 1; i <= 5000; i++) {
		if (a[i] %2 !=0 ) {
			cout << -1 << "\n";
		}
	}
	for (int i = 1; i <= 5000; i++) {
		for (int j = 0; j < a[i]/2; j++) {
			cout << 
		}
	}
}

