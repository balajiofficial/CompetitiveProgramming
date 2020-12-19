#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("angry.out");
	ifstream cin ("angry.in");
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 1;
	for(int i = 0; i < n; ++i) {
		int temp = 1, prev = a[i], t = 1, down = i - 1, up = i + 1;
		bool b = 1, c = 1;
		while(1) {
			bool ok1 = 0, ok2 = 0;
			int temp1 = a[up - 1] + t;
			int temp2 = a[down + 1] - t;
			while(down >= 0 && a[down] >= temp2 && c) {
				ok1 = 1;
				--down;
				++temp;
			}
			while(up < n && a[up] <= temp1 && b) {
				ok2 = 1;
				++up;
				++temp;
			}
			if (!ok1) c = 0;
			if (!ok2) b = 0;
			if (!c && !b) break;
			++t;
		}
		ans = max(ans, temp);
	}
	cout << ans << "\n";
}
