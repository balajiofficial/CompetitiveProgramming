#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		a[i] = (c-'0');
	}
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		b[i] = (c-'0');
	}
	sort(a, a+n);
	sort(b, b+n);
	bool d = a[0]>b[0];
	for (int i = 0; i < n; i++) {
		if (a[i]>b[i]&&d==0){
			cout << "NO\n";
			return 0;
		}
		if (a[i]<b[i]&&d==1) {
			cout << "NO\n";
			return 0;
		}
		if (a[i]==b[i]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
