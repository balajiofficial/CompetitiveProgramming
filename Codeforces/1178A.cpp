#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[100], sum =0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	int b = a[0];
	if (b > sum/2) {
		cout << "1\n1\n";
		return 0;
	}
	int ans = b;
	vector<int> c;
	c.push_back(1);
	for(int i= 1; i < n; ++i) {
		if (a[i] <= b/2) {
			ans += a[i];
			c.push_back(i + 1);
		}
		if (ans > sum/2) {
			break;
		}
	}
	if (ans <= sum/2) {
		cout << 0 << "\n";
		return 0;
	}
	cout << c.size() << "\n";
	for(int i = 0; i < c.size(); ++i) {
		cout << c[i] << " ";
	}
	cout << "\n";
}
