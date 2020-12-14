#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int o = 0, z =0;
	for(int i = 0; i < n; ++i) {
		if (a[i] == 'n')
			++o;
		else if (a[i] == 'z')
			++z;
	}
	for(int i = 0; i < o; ++i) {
		cout << "1 ";
	}
	for(int i = 0; i < z; ++i) {
		cout << "0 ";
	}
	cout << "\n";
}
