#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n, i = 1;
	cin >> n;
	while(1) {
		for(int j = 0; j < 5; ++j) {
			if (n > i) {
				n -= i;
			} else {
				cout << a[j] << "\n";
				return 0;
			}
		}
		i *= 2;
	}
}
