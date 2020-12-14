#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	reverse(a.begin(), a.end());
	if (a == b)
		cout << "YES\n";
	else
		cout << "NO\n";
}
