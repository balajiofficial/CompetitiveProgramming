#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("cowfind.out");
	ifstream cin ("cowfind.in");
	string a;
	cin >> a;
	ll a1 = 0, a2 = 0;
	for(int i = 0; i < a.size() - 1; ++i) {
		if (a[i] == '(' && a[i + 1] == '(') {
			++a1;
		}
		if (a[i] == ')' && a[i +1] ==')') {
			a2 += a1;
		}
	}
	cout << a2 << "\n";
}
