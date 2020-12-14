#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin>> n;
	if (n == 0) {
		cout << "O-|-OOOO\n";
		return 0;
	}
	while(n > 0) {
		int num = n % 10;
		n /= 10;
		if (num >= 5) {
			cout << "-O";
			num -= 5;
		}
		else
			cout << "O-";
		cout << "|";
		for(int i= 0;i < num; ++i) {
			cout << "O";
		}
		cout << "-";
		for(int i= 0; i < 4 - num; ++i) {
			cout << "O";
		}
		cout << "\n";
	}
}
