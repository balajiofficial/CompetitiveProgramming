#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	bool ok = 1;
	int ans =0;
	for(int i= 0;i < a.size(); ++i) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			++ans;
	}
	if (ans != 5)
		ok = 0;
	ans = 0;
	for(int i= 0;i < b.size(); ++i) {
		if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
			++ans;
	}
	if (ans != 7)
		 ok = 0;
	ans =0;
	for(int i= 0;i < c.size(); ++i) {
		if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
			++ans;
	}
	if (ans != 5)
		ok = 0;		
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
