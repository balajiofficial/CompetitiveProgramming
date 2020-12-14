#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	if (a == "0") {
		cout << 0 << "\n";
		return 0;
	}
	int zero = count(a.begin(), a.end(), '0');
	cout << 1;
	for(int i= 0; i < zero; ++i) {
		cout << 0;
	}
	cout << "\n";
}
