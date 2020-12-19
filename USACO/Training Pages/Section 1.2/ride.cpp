
/*
ID: balajik2
TASK: ride
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll f(string a) {
	ll ans = 1;
	for(char c : a) {
		ans *= (c - 'A' + 1);
	}
	return ans % 47;
}

int main() {
	ofstream cout ("ride.out");
	ifstream cin ("ride.in");
	string a, b;
	cin >> a >> b;
	if (f(a) == f(b)) {
		cout << "GO\n";
	} else {
		cout << "STAY\n";
	}
}

