#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("photo.out");
	ifstream cin ("photo.in");
	int n;
	cin >> n;
	int b[1000];
	for(int i =0; i < n - 1; ++i)
		cin >> b[i];
	int a[1000];
	for(int i = 1; i <= n; ++i) {
		a[0] = i;
		for(int j = 1; j < n; ++j) {
			a[j] = b[j - 1] - a[j -1];
		}
		bool ok = 1;
		for(int j = 0; j < n; ++j) {
			bool temp = 0;
			for(int l = 0; l < n; ++l) {
				if (a[l] == j + 1) {
					temp = 1;
					break;
				}
			}
			if (temp == 0) {
				ok = 0;
				break;
			}
		}
		if (ok) {
			break;
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << a[i];
		if (i != n - 1)
			cout << " ";
		else
			cout << "\n";
	}
}
