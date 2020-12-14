#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	char d = 'a';
	for(int i = 0;i < a.size(); ++i) {
		if (a[i] > d) {
			d = a[i];
		}
	}
	int ans = count(a.begin(), a.end(), d);
	for(int i=0; i < ans; ++i) {
		cout << d;
	}
	cout << "\n";
}
