#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<string, int> a;
	while(n--) {
		string b;
		cin >> b;
		a[b] += 1;
	}
	string ans;
	int nums = 0;
	for(auto i : a) {
		auto l = i;
		if (l.second > nums) {
			nums = l.second;
			ans = l.first;
		}
	}
	cout << ans << "\n";
}
