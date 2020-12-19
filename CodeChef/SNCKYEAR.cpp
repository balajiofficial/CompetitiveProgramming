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
		if (n == 2019 || n == 2015 || n == 2010 || n == 2016 || n == 2017) {
			cout << "HOSTED\n";
		} else {
			cout << "NOT HOSTED\n";
		}
	}
}
