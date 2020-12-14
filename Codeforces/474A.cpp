#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a;
	cin >> a;
	string b;
	cin >> b;
	string c = "qwertyuiopasdfghjkl;zxcvbnm,./";
	int num = 0;
	if (a == 'R')
		num = 1;
	else
		num = -1;
	for(int i = 0; i < b.size(); ++i) {
		for(int j = 0; j < c.size(); ++j) {
			if (b[i] == c[j]) {
				cout << c[j - num];
			}
		}
	}
	cout << "\n";
}
