#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == 1)
			ok =1;
	}
	if (ok )
		cout << "HARD\n";
	else
		cout << "EASY\n";
}
