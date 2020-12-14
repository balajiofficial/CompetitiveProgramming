#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	if (a.find("0000000") != -1 || a.find("1111111") != -1)
		cout << "YES\n";
	else
		cout << "NO\n";
}
