#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &i : a) {
		cin >> i;
	}
	sort(a.begin(), a.end());
	for(int i : a) {
		cout << i << "\n";
	}
}
