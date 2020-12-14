#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int y, w;
	cin>> y >> w;
	int a = 6 - max(y, w) + 1;
	if (6 % a == 0) {
		cout << "1/" << 6/a << "\n";
	} else {
		cout << a << "/6\n";
	}
}
