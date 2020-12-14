#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, ok = 0;
	cin >> n;
	string a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		for(int j = 0; j < a[i].size(); ++j) {
			if (a[i][j] == 'O' && a[i][j + 1] == 'O' && ok == 0) {
				a[i][j] = '+';
				a[i][j + 1] = '+';
				ok =1 ;
			}
		}
	}
	if (ok == 0) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	for(int i = 0; i <n; ++i) {
		cout << a[i] << "\n";
	}
}
