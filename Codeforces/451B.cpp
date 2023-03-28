#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	const int len = 1e5;
	int a[len];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int o = -1, start = 0, end = 0;
	for (int i= 0; i < n-1; i++) {
		if (a[i]>a[i+1]) {
			if (o==-1) {
				o = 1;
				start = i;
				end = i + 1;
			} else if (o==0) {
				cout << "no" << "\n";
				return 0;
			} else  {
				end = i + 1;
			}
		} else if (o==1) {
			o = 0;
		}
	}
	if (end!=n-1&&a[start]>a[end+1]) {
		cout << "no\n";
		return 0;
	}
	if (start!=0&&a[end]<a[start-1]) {
		cout << "no\n";
		return 0;
	}
	cout << "yes\n";
	cout << start + 1 << " " << end + 1 << "\n";
}

