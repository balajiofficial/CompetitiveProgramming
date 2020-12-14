#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	char a;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j<m;++j) {
			cin >> a;
			if (a != 'B' && a != 'W')
				ok = 1;
		}
	}
	if (ok)
		cout << "#Color\n";
	else
		cout << "#Black&White\n";
}
