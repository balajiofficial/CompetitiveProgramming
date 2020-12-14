#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0; i < n; ++i) {
		a[i] = tolower(a[i]);
	}
	for(int i = 0; i < 26; ++i) {
		bool ok = 0;
		for(int j= 0; j < n; ++j) {
			if (a[j] == (char)(i + 'a')) {
				ok = 1;
				break;
			}
		}
		if (ok == 0) {
			cout << "NO" << "\n";
			return 0;
		}
	}
	cout << "YES" << "\n";
}
