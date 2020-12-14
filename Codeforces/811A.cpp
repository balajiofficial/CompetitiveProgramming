#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b;
	cin >> a >> b;
	int i = 1;
	while(1) {
		if (i % 2) {
			if (i > a) {
				cout << "Vladik\n";
				return 0;
			} else {
				a-= i;
			}
		} else {
			if (i > b) {
				cout << "Valera\n";
				return 0;
			} else {
				b -= i;
			}
		}
		++i;
	}
}
