#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	if (n % 2)
		cout << 9  << " " << n - 9 << "\n";
	else
		cout << 8 << " " << n - 8 << "\n";
}
