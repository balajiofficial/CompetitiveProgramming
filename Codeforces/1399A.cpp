#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t-- ) {
		bool ok = 1;
		int n, current;
		cin>> n;
		for(int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			if (i != 0 &&  a - current > 1)
				ok = 0;
			current = a;
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
