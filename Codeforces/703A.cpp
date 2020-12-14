#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a= 0, b = 0;
	for(int i = 0; i <n;++i) {
		int c,d;
		cin >> c >> d;
		if (c > d) {
			++a;
		} else if (d > c)
			++b;
	}
	if (a > b) {
		cout << "Mishka\n";
	} else if (b > a) {
		cout << "Chris\n";
	} else
		cout << "Friendship is magic!^^\n";
}
