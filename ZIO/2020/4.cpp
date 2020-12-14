#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	set<int> a;
	for(int i = 1; i <= n; ++i) {
		a.insert(n/i);
	}
	cout << a.size() << "\n";
}
