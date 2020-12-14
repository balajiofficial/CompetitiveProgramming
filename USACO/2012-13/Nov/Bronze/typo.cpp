#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("typo.out");
	ifstream cin ("typo.in");
	string a;
	cin >> a;
	int ans = 0, b = 0, op = 0, cl = 0;
	for(int i =0; i < a.size(); ++i) {
		if (a[i] == '(') {
			++op;
			++b;
		} else {
			--b;
			++cl;
		}
		if (b <= 1) {
			op = 0;
		}  
		if (b == -1) {
			ans = cl;
			break;
		}
	}
	if (b > 0) {
		ans = op;
	}
	cout << ans << "\n";
}
