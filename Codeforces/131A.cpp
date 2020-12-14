#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			++ans;
		}
	}
	if (ans == a.size() || (ans == a.size() - 1 && a[0] >= 'a' && a[0] <= 'z')) {
		if (ans == a.size()) {
			for(int i = 0; i < a.size(); ++i) {
				a[i] = tolower(a[i]);
			}
		} else {
			a[0] = toupper(a[0]);
			for(int i = 1; i < a.size(); ++i) {
				a[i] = tolower(a[i]);
			}
		}
		cout << a << "\n";
	} else {
		cout << a << "\n";
	}
}
