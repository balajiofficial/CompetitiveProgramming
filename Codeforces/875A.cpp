#include<bits/stdc++.h>

using namespace std;

bool isx(int n, int i) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum == i;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> ans;
	for (int i = 1; i <= 100; ++i) {
		if (n - i > 0) {
			if (isx(n - i, i)) {
				ans.push_back(n - i);
			}
		}
	}
	cout << ans.size() << "\n";
	sort(ans.begin(), ans.end());
		for (int e : ans) {
			cout << e << "\n";
		}
}