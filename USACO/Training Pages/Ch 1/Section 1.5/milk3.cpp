/*
ID: balajik2
TASK: milk3
LANG: C++14
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool vis[21][21][21];
set<int> ans;
int a, b, c;

void dfs(int d, int e, int f) {
	if (vis[d][e][f]) return;
	vis[d][e][f] = 1;
	if (d == 0) ans.insert(f);
	dfs(min(a, d + f), e, f - min(a - d, f));
	dfs(d, min(b, e + f), f - min(b - e, f));
	dfs(d - min(c - f, d), e, f + min(c - f, d));
	dfs(d, e - min(e, c - f), f + min(e, c - f));
	dfs(d - min(b - e, d), e + min(b - e, d), f);
	dfs(d + min(a - d, e), e - min(a - d, e), f);
}

int main() {
	ofstream cout ("milk3.out");
	ifstream cin ("milk3.in");
	cin >> a >> b >> c;
	dfs(0, 0, c);
	int x = ans.size();
	for(int i : ans) {
		cout << i;
		--x;
		if (x == 0) cout << "\n";
		else cout << " ";
	}
}
