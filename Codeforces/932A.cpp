#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	char d = a[a.size() - 1];
	cout << a << d;
	reverse(a.begin(), a.end());
	cout << a << "\n";
}
