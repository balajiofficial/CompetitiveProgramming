#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	int n ;
	cin >> n;
	cout << a << " " << b << "\n";
	while(n--) {
		string c, d;
		cin >> c >> d;
		if (a == c)
			a = d;
		else
			b = d;
		cout << a << " " << b << "\n";
	}
}
