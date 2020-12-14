#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m, k;
	cin >>n >>m >> k;
	int p = (k - 1)/2;
	cout << p/m + 1 << " " << p % m + 1 << " ";
	if (k % 2)
		cout << "L\n";
	else
		cout << "R\n";
}
