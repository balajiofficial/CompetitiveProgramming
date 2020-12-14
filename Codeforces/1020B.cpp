#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[1001];
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; ++i) {
		int b[1001];
		memset(b, 0, sizeof(b));
		int j = i;
		while(b[j] != 2) {
			b[j]++;
			j = a[j];
		}
		cout << j << " ";
	}
	cout << "\n";
}
