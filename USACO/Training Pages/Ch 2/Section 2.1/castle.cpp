/*
ID: balajik2
TASK: castle
LANG: C++14
*/
#include<bits/stdc++.h>

using namespace std;

struct Room {
	bool ok, s, n, e, w;
	int room;
};

int m, n;
Room a[50][50];
map<int, int> c;

void ff(int room, int i, int j) {
	a[i][j].ok = 1;
	a[i][j].room = room;
	c[room]++;
	if (i > 0 && !a[i][j].n && a[i - 1][j].ok == 0) ff(room, i - 1, j);
	if (j > 0 && !a[i][j].w && a[i][j - 1].ok == 0) ff(room, i, j - 1);
	if (i + 1 < n && !a[i][j].s && a[i + 1][j].ok == 0) ff(room, i + 1, j);
	if (j + 1 < m && !a[i][j].e && a[i][j + 1].ok == 0) ff(room, i, j + 1);
}

int main() {
	ofstream cout ("castle.out");
	ifstream cin ("castle.in");
	cin >> m >> n;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			int b;
			cin >> b;
			if (b >= 8) {
				b -= 8;
				a[i][j].s = 1;
			}
			if (b >= 4) {
				b -= 4;
				a[i][j].e = 1;
			}
			if (b >= 2) {
				b -= 2;
				a[i][j].n = 1;
			}
			if (b >= 1) {
				b--;
				a[i][j].w = 1;
			}
			a[i][j].ok = 0;
		}
	}
	int rooms = 0, lr = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (a[i][j].ok == 0) {
				ff(++rooms, i, j);
				lr = max(lr, c[rooms]);
			}
		}
	}
	cout << rooms << "\n" << lr << "\n";
	int ans = 0, x = 0, y = 0;
	char dir = '!';
	for(int j = 0; j < m; ++j) {
		for(int i = n - 1; i >= 0; --i) {
			if (i > 0 && a[i][j].n && a[i][j].room != a[i - 1][j].room) {
				int temp = c[a[i][j].room] + c[a[i - 1][j].room];
				if (temp > ans) {
					ans = temp;
					x = i + 1;
					y = j + 1;
					dir = 'N';
				}
			}
			if (j + 1 < m && a[i][j].e && a[i][j].room != a[i][j + 1].room) {
				int temp = c[a[i][j].room] + c[a[i][j + 1].room];
				if (temp > ans) {
					ans = temp;
					x = i + 1;
					y = j + 1;
					dir = 'E';
				}
			}
		}
	}
	cout << ans << "\n" << x << " " << y << " " << dir << "\n";
}