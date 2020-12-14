#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, t;
	cin >> n >> t;
	string a;
	cin>> a;
	for(int i = 0; i < t - 1; ++i) {
		for(int j = 0; j < n; ++j) {
			if (a[j] == 'B' && a[j + 1] == 'G')
				swap(a[j], a[j + 1]);
		}
	}
	cout << a << "\n";
}
