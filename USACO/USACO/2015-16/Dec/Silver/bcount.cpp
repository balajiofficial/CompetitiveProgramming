#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("bcount.out");
	ifstream cin ("bcount.in");
	int n, q;
	cin >> n >> q;
	int h[100001], g[100001], j[100001];
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		h[i + 1] = h[i];
		g[i + 1] = g[i];
		j[i + 1] = j[i];
		if (a == 1) h[i + 1]++;
		else if (a == 2) g[i + 1]++;
		else j[i + 1]++;
	}
	while(q--) {
		int a, b;
		cin >> a >> b;
		a--;
		cout << h[b] - h[a] << " " << g[b] - g[a] << " " << j[b] - j[a] << "\n";
	}
}
