#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int z = 0;
		for(int i = 0; i < a.size(); ++i) {
			if (a[i] == '0')
				++z;
		}
		int o = a.size() - z;
		int ans = min(o, z);
		if (ans % 2 == 1)
			cout << "DA\n";
		else
			cout << "NET\n";
	}
}
