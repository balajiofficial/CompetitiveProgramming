#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, c;
	cin >> n >> c;
	int a[50], b[50];
	for(int i= 0; i <n; ++i)
		cin >> a[i];
	for(int i =0; i < n; ++i)
		cin >> b[i];
	int d = 0, e = 0;
	for(int i = n - 1; i >= 0;--i) {
		e += max(0, a[i] - c * b[i]);
		if (i != 0)
			b[i - 1] += b[i];
	}
	for(int i = 0; i < n; ++i) {
		if (i != n - 1)
			b[i] -= b[i + 1];
	}
	for(int i = 0; i < n; ++i) {
		d += max(0, a[i] - c * b[i]);
		if (i != n - 1)
			b[i + 1] += b[i];
	}
	if (d > e)
		cout << "Limak\n";
	else if (d < e)
		cout << "Radewoosh\n";
	else
		cout << "Tie\n";
}
