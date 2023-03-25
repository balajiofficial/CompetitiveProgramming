#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ofstream cout ("output.txt");
	ifstream cin ("input.txt");
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if (n==m) {
		for (int i = 0; i < n*2; i++) {
			if (i%2==0) {
				cout << "B";
			} else 
				cout << "G";
		}
	} else if (n>m) {
		for (int i= 0; i< m*2; i++) {
			if (i%2==0) {
				cout << "B";
			} else
				cout << "G";
		}
		for (int i = 0; i < n-m; i++) {
			cout << "B";
		}
	} else {
		for (int i = 0; i < n*2;i++) {
			if (i%2 == 0) {
				cout << "G";
			} else
				cout << "B";
		}
		for (int i = 0; i < m-n; i++) {
			cout << "G";
		}
	}
	cout << "\n";
}

