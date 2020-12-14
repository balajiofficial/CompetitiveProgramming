#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	int ans =0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] >= 'a')
			++ans;
	}
	if (ans >= a.size() - ans) {
		for(int i = 0; i < a.size(); ++i) {
			cout << (char)tolower(a[i]);
		}
		cout << "\n";
	} else {
		for(int i= 0; i < a.size(); ++i) {
			cout << (char)toupper(a[i]);
		}
		cout << "\n";
	}
}
