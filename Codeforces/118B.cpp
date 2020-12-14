#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int key = 2 * n + 1;
	string a[10];
	for(int i = 0; i <= n; ++i) {
		string d;
		for(int j = 0; j < (key - 2 * i - 1); ++j) {
			cout << " ";
			d += ' ';
		}
		for(int j = 0; j <= i; ++j) {
			cout << j;
			d += to_string(j);
			if (i != 0) {
				cout << " ";
				d += ' ';
			}
		}
		for(int j = i - 1; j >= 0; --j) {
			cout << j;
			d += to_string(j);
			if (j != 0) {
				d += ' ';
				cout << " ";
			}
		}
		cout << "\n";
		a[i] = d;
	}
	reverse(a, a+n);
	for(int i= 0; i < n; ++i) {
		cout << a[i] << "\n";
	}
}
