#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	set<int> b;
	getline(cin, a);
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			b.insert(a[i]);
		}
	}
	cout << b.size() << "\n";
}
