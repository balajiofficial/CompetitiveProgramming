#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	getline(cin, a);
	char d;
	for(int i= a.size() -1; i >= 0; --i) {
		if (a[i] != '?' && a[i] != ' ') {
			d = a[i];
			break;
		}
	}
	d = tolower(d);
	if (d == 'e' || d== 'a' || d == 'i' || d == 'o' || d == 'u' || d == 'y')
		cout << "YES\n";
	else
		cout << "NO\n";
}
