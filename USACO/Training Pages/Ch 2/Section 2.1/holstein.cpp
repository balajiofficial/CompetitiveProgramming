/*
ID: balajik2
TASK: holstein
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

int v, g, req[25], feed[15][25], cur[15], ans[15], fin = 16;

void dfs(int len = 0, int u = 0) {
	bool ok = 1;
	for(int i = 0; i < v; ++i) {
		if (req[i] > 0) {
			ok = 0;
			break;
		}
	}
	if (ok) {
		fin = len;
		for(int i = 0; i < fin; ++i) {
			ans[i] = cur[i];
		}
	} else if (len + 1 < fin) {
		while(u < g) {
			for(int i = 0; i < v; ++i) {
				req[i] -= feed[u][i];
			}
			cur[len] = u;
			dfs(len + 1, u + 1);
			for(int i = 0; i < v; ++i) {
				req[i] += feed[u][i];
			}
			++u;
		}
	}
}

int main() {
	ofstream cout ("holstein.out");
	ifstream cin ("holstein.in");
	cin >> v;
	for(int i = 0; i < v; ++i) {
		cin >> req[i];
	}
	cin >> g;
	for(int i = 0; i < g; ++i) {
		for(int j = 0; j < v; ++j) {
			cin >> feed[i][j];
		}
	}
	dfs();
	cout << fin;
	for(int i = 0; i < fin; ++i) {
		cout << " " << ans[i] + 1;
	}
	cout << "\n";
}
