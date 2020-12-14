#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	set<int> a;
	for(int i = 0; i <4; ++i) {
		int b;
		cin >> b;
		a.insert(b);
	}
	cout << 4 - a.size() << "\n";
}
