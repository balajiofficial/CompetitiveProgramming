#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	vector<int> a;
	a.push_back(1);
	for(int i= 1; i < n; ++i) {
		a.push_back(1);
		while(a.back() == a[a.size() - 2]) {
			a.pop_back();
			a[a.size() - 1] += 1;
		}
	}
	for(int i =0;i < a.size(); ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
