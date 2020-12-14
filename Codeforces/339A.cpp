#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	vector<int> a;
	string b;
	cin >> b;
	for(int i = 0; i<b.size();++i) {
		if (b[i]!= '+') {
			a.push_back(b[i] - '0');
		}
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); ++i) {
		cout << a[i];
		if (i != a.size() - 1)
			cout << '+';
	}
	cout << "\n";
}
