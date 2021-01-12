#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<char> e;

char fin(string b, int ind, int start, int end) {
	if (ind == 4) {
		return e[start];
	} else if (b[ind] == '1') {
		return fin(b, ind + 1, (start + end + 1)/2, end);
	} else {
		return fin(b, ind + 1, start, (start + end)/2);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0; i < 16; ++i) {
		e.push_back(char(i + 'a'));
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string a, ans;
		cin >> a;
		for(int i = 0; i < n; i += 4) {
			string b = a.substr(i, 4);
			ans += fin(b, 0, 0, 15);
		}
		cout << ans << "\n";
	}
}
