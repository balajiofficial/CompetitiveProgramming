#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin>> n;
	set<int> a;
	for(int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		if (b != 0)
			a.insert(b);
	}
	cout << a.size() << "\n";
}
