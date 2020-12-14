#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("word.out");
	ifstream cin ("word.in");
	int n, k;
	cin >> n >> k;
	string a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int res = 0;
	for(int i =0; i < n; ++i) {
		if (res + a[i].size() > k) {
			res = a[i].size();
			cout << "\n" << a[i];
		} else {
			res += a[i].size();
			if (i != 0) {
				cout << " ";
			}
			cout << a[i];
		}
	}
	cout << "\n";
}
