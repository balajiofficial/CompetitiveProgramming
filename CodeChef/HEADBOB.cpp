#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string a;
		cin >> a;
		bool ok1 = 0, ok2 = 0;
		for(char c : a) {
			if (c == 'Y') {
				ok1 = 1;
			} else if (c == 'I') {
				ok2 = 1;
			}
		}
		if (ok2) {
			cout << "INDIAN\n";
		} else if (ok1) {
			cout << "NOT INDIAN\n";
		} else {
			cout << "NOT SURE\n";
		}
	}
}
