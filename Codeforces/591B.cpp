#include<bits/stdc++.h>

using namespace std;

#define ll long long

char ans[] = "abcdefghijklmnopqrstuvwxyz";

int ind(char c) {
	for(int i = 0; i < 26; ++i) {
		if (ans[i] == c) return i;
	}
	return 0;
}

int main() {
	int n, m;
	string a;
	cin >> n >> m >> a;
	while(m--) {
		char c, d;
		cin >> c >> d;
		int e = ind(c);
		int f = ind(d);
		ans[e] = d;
		ans[f] = c;
		
	}
	for(char e : a) {
		cout << ans[e - 'a'];
	}
	cout << "\n";
}
