#include<bits/stdc++.h>

using namespace std;

#define ll long long

char a[3][3];

bool win(char b) {
	for(int i =  0; i < 3; ++i) {
		if (a[i][0] == b && a[i][1] == b && a[i][2] == b)
			return 1;
		if (a[0][i] == b && a[1][i] == b && a[2][i] == b)
			return 1;
	}
	if (a[0][0] == b && a[1][1] == b && a[2][2] == b)
		return 1;
	if (a[0][2] == b && a[1][1] == b && a[2][0] == b)
		return 1;
	return 0;
}

bool ind(char b, char c, char l, char r, char d) {
	if (l != b && l != c) return 0;
	if (r != b && r != c) return 0;
	if (d != b && d != c) return 0;
	if (l != b && r != b && d != b) return 0;
	if (l != c && r != c && d != c) return 0;
	return 1;
}

bool team(char b, char c) {
	if (ind(b, c, a[0][0], a[1][1], a[2][2])) return 1;
	if (ind(b, c, a[2][0], a[1][1], a[0][2])) return 1;
	for(int i = 0; i < 3; ++i) {
		if (ind(b, c, a[i][0], a[i][1], a[i][2])) return 1;
		if (ind(b, c, a[0][i], a[1][i], a[2][i])) return 1;
	}
	return 0;
}

int main() {
	ofstream cout ("tttt.out");
	ifstream cin ("tttt.in");
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i =0; i < 26; ++i) {
		ans += win(char(i + 'A'));
	}
	cout << ans << "\n";
	ans = 0;
	for(int i = 0; i < 26; ++i) {
		for(int j = i + 1; j < 26; ++j) {
			ans += team(char(i + 'A'), char(j + 'A'));
		}
	}
	cout << ans << "\n";
}
