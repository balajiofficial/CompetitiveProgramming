#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string current = "1241241";
	int ans =0;
	for(int i = 0; i < n; ++i) {
		string a;
		cin >> a;
		if (a != current) {
			current = a;
			++ans;
		}
	}
	cout << ans << "\n";
}
