#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			int c;
			cin >> c;
			if (c == 1) {
				a = i;
				b = j;
			}
		}
	}
	cout << abs(2 - a) + abs(2 - b) << "\n";
}
