#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin>> a;
		cout << a[0];
		for(int i = 1; i < a.size() - 1; i += 2)
			cout << a[i];
		cout << a[a.size() - 1] << "\n";
	}
}
