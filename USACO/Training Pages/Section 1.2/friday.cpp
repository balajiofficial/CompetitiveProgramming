
/*
ID: balajik2
TASK: friday
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("friday.out");
	ifstream cin ("friday.in");
	int n;
	cin >> n;
	int a[7];
	memset(a, 0, sizeof(a));
	int b[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int res = 0;
	a[res]++;
	for(int i = 1900; i < 1900 + n; ++i) {
		for(int j = 0; j < 12; ++j) {
			int ok = 0;
			if (j == 1) {
				if (i % 4 == 0) {
					ok = 1;
					if (i % 100 == 0 && i % 400 != 0) {
						ok = 0;
					}
				}
			}
			if (i == 1900 + n - 1 && j == 11) {
				// do nothing :)
			} else {
				res = (res + b[j] + ok) % 7;
				a[res]++;
			}
		}
	}
	for(int i = 0; i < 7; ++i) {
		cout << a[i] << " \n"[i == 6];
	}
}
