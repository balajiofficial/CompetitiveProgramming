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
		string a;
		cin >> a;
		while(a.size() > 0 && a.back() == ')') {
			a.pop_back();
		}
		cout << (n - a.size() > a.size() ? "Yes" : "No") << "\n";
	}
}
