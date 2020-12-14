#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[5000];
	bool b[5000];
	for(int i = 0; i < n; ++i) {
		b[i] = false;	
	}
	for(int i = 0;i<n;++i) {
		cin >> a[i];
	}
	int c = 1;
	vector<int> d;
	for(int i = 0; i < n; ++i) {
		if (a[i] == c && b[i] != true) {
			b[i] = true;
			d.push_back(i + 1);
			++c;
			i = -1;
		}
		if (c == 4)
			c = 1;
	}
	cout << d.size()/3 << "\n";
	for(int i = 0; i < d.size()/3 * 3; ++i) {
		cout << d[i] << " ";
		if ((i + 1) % 3 == 0) {
			cout << "\n";
		}
	}
}
