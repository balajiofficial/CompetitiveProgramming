#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a;
	int ans = 1;
	while(n >= ans) {
		a.push_back(ans);
		n -= ans++;
	}
	a[a.size() - 1] += n;
	cout << a.size() << "\n";
	for(int b : a) {
		cout << b << " ";
	}
	cout << "\n";
}
