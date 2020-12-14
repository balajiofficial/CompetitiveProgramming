#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i =0; i < a.size() - 1; ++i) {
		if ((a[i] == 'R' && a[i + 1] == 'U') || (a[i] == 'U' && a[i + 1] == 'R')) {
			++i;
			n -= 1;
		}
	}
	cout << n << "\n";
}
