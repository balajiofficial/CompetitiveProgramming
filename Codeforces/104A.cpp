#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	n -= 10;
	if (n == 10) {
		cout << "15\n";
	} else if (n == 0) {
		cout << "0\n";
	} else if (n > 11) {
		cout << "0\n";
	} else if (n < 0) {
		cout << "0\n";
	}else {
		cout << "4\n";
	}
}
