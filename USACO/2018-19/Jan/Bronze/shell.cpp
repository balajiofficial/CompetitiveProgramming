#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("shell.out");
	ifstream cin ("shell.in");
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int> (3));
	for(int i = 0; i < n; ++i) {
		int b, c, d;
		cin >> b >> c >> d;
		a[i][0] = b;
		a[i][1] = c;
		a[i][2] = d;
	}
	int ans = 0;
	for(int i = 1; i <= 3; ++i) {
		int temp = 0, l = i;
		for(int j = 0; j < n; ++j) {
			if (l == a[j][0]) {
				l = a[j][1];
			} else if (l == a[j][1]) {
				l = a[j][0];
			}
			if (l == a[j][2]) {
				++temp;
			}
		}
		ans = max(ans, temp);
	}
	cout << ans << "\n";
}
