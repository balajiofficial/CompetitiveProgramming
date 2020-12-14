#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	while(n--) {
		string a;
		cin>> a;
		if (a.size() <= 10) {
			cout << a << "\n";
			continue;
		}
		cout << a[0] << a.size() - 2 << a[a.size() - 1] << "\n";
	}
}
